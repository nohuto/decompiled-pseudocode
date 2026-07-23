/*
 * XREFs of IopKeepAliveWorker @ 0x140483EB0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140A60D10 (PspAdjustKeepAliveCountProcess.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void IopKeepAliveWorker()
{
  KIRQL v0; // al
  KIRQL v1; // si
  PVOID v2; // rbx
  int v3; // edi
  PVOID v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // r9
  __int64 v7; // rcx
  int v8; // eax
  KIRQL v9; // dl
  bool v10; // zf
  __int64 v11; // r9
  __int64 v12; // rdi

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8CB50);
  qword_140F8CB80 = (__int64)KeGetCurrentThread();
LABEL_2:
  v1 = v0;
  while ( 1 )
  {
    v2 = qword_140F8CB40;
    if ( qword_140F8CB40 == &qword_140F8CB40 )
      break;
    v3 = *((_DWORD *)qword_140F8CB40 + 8);
    *((_DWORD *)qword_140F8CB40 + 8) = 0;
    if ( v3 )
    {
      KeReleaseSpinLock(&qword_140F8CB50, v1);
      if ( v3 > 0 )
      {
        do
        {
          ObfReferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          LOBYTE(v11) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 1LL, *((_QWORD *)v2 + 5), v11);
          --v3;
        }
        while ( v3 );
        goto LABEL_15;
      }
      if ( v3 != -1 )
      {
        v12 = (unsigned int)(-1 - v3);
        do
        {
          LOBYTE(v6) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v6);
          ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          --v12;
        }
        while ( v12 );
      }
      LOBYTE(v6) = *((_BYTE *)v2 + 18);
      v7 = *((_QWORD *)v2 + 3);
      if ( (_BYTE)v6 )
        v8 = *(_DWORD *)(v7 + 1836);
      else
        v8 = *(_DWORD *)(v7 + 1868);
      if ( (v8 & 0x7FFFFFFF) == 1 )
      {
        v9 = KeAcquireSpinLockRaiseToDpc(&qword_140F8CB50);
        if ( MEMORY[0xFFFFF78000000014] < *((_QWORD *)v2 + 6) )
        {
          --*((_DWORD *)v2 + 8);
          KeReleaseSpinLock(&qword_140F8CB50, v9);
          KeDelayExecutionThread(0, 1u, (PLARGE_INTEGER)v2 + 6);
LABEL_15:
          v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F8CB50);
          goto LABEL_2;
        }
        KeReleaseSpinLock(&qword_140F8CB50, v9);
        LOBYTE(v6) = *((_BYTE *)v2 + 18);
        v7 = *((_QWORD *)v2 + 3);
      }
      PspAdjustKeepAliveCountProcess(v7, 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v6);
      ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
      goto LABEL_15;
    }
    v4 = *(PVOID *)v2;
    if ( *(PVOID *)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = (PVOID *)*((_QWORD *)v2 + 1), *v5 != v2) )
      __fastfail(3u);
    *v5 = v4;
    *((_QWORD *)v4 + 1) = v5;
    v10 = *((_BYTE *)v2 + 17) == 1;
    *((_BYTE *)v2 + 16) = 0;
    if ( v10 )
      ExFreePoolWithTag(v2, 0);
  }
  qword_140F8CB80 = 0LL;
  byte_140F8CB78 = 0;
  KeReleaseSpinLock(&qword_140F8CB50, v1);
}
