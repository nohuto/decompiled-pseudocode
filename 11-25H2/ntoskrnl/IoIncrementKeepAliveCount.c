/*
 * XREFs of IoIncrementKeepAliveCount @ 0x14042EEB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x14042EFC8 (IopAdjustFileObjectKeepAliveCount.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140A64E18 (PspAdjustKeepAliveCountProcess.c)
 */

__int64 __fastcall IoIncrementKeepAliveCount(__int64 a1, void *a2)
{
  int v4; // edi
  KIRQL v5; // al
  _BYTE *v6; // rcx
  KIRQL v7; // bl
  _QWORD *v8; // rdx
  __int64 v10; // r9
  int v11; // [rsp+50h] [rbp+18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0;
  v12 = 0LL;
  v4 = IopAdjustFileObjectKeepAliveCount(a1, (_DWORD)a2, 1, (unsigned int)&v11, (__int64)&v12);
  if ( v4 >= 0 && v11 == 1 )
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      v5 = KeAcquireSpinLockRaiseToDpc(&qword_140F8C190);
      v6 = (_BYTE *)v12;
      v7 = v5;
      ++*(_DWORD *)(v12 + 32);
      if ( !v6[16] )
      {
        v8 = qword_140F8C180;
        if ( *((PVOID **)qword_140F8C180 + 1) != &qword_140F8C180 )
          __fastfail(3u);
        *(_QWORD *)v6 = qword_140F8C180;
        *((_QWORD *)v6 + 1) = &qword_140F8C180;
        v8[1] = v6;
        qword_140F8C180 = v6;
        v6[16] = 1;
        if ( !byte_140F8C1B8 )
        {
          byte_140F8C1B8 = 1;
          ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
        }
      }
      KeReleaseSpinLock(&qword_140F8C190, v7);
    }
    else
    {
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v10 = v12;
      LOBYTE(v10) = *(_BYTE *)(v12 + 18);
      PspAdjustKeepAliveCountProcess(a2, 1LL, a1, v10);
    }
  }
  return (unsigned int)v4;
}
