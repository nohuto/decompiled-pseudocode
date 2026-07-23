/*
 * XREFs of IoDecrementKeepAliveCount @ 0x140474F30
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeAlertThread @ 0x140475190 (KeAlertThread.c)
 */

__int64 __fastcall IoDecrementKeepAliveCount(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v7; // rbp
  KSPIN_LOCK *v8; // r14
  KIRQL v9; // al
  __int64 *v10; // rcx
  KIRQL v11; // si
  __int64 v12; // r8
  __int64 v13; // rdx
  bool v14; // zf
  __int64 *v16; // rax

  v2 = *(_QWORD *)(a1 + 208);
  v3 = 0;
  v4 = 0LL;
  v5 = 0;
  if ( v2 && (v7 = *(_QWORD *)(v2 + 16)) != 0 )
  {
    v8 = (KSPIN_LOCK *)(a1 + 184);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
    v10 = *(__int64 **)(v7 + 24);
    if ( v10 )
    {
      while ( v10 )
      {
        if ( v10[1] == a2 )
        {
          v4 = v10[3];
          v3 = *((_DWORD *)v10 + 4) - 1;
          *((_DWORD *)v10 + 4) = v3;
          goto LABEL_7;
        }
        v10 = (__int64 *)*v10;
      }
    }
    v5 = -1073741811;
LABEL_7:
    KeReleaseSpinLock(v8, v9);
    if ( v5 >= 0 && !v3 )
    {
      v11 = KeAcquireSpinLockRaiseToDpc(&qword_140F8CB50);
      v12 = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(v4 + 48) = MEMORY[0xFFFFF78000000014];
      v13 = (unsigned int)(10000 * IopKeepAliveTimeMs);
      --*(_DWORD *)(v4 + 32);
      v14 = *(_BYTE *)(v4 + 16) == 0;
      *(_QWORD *)(v4 + 48) = v12 + v13;
      if ( v14 )
      {
        v16 = (__int64 *)qword_140F8CB48;
        if ( *(PVOID **)qword_140F8CB48 != &qword_140F8CB40 )
          __fastfail(3u);
        *(_QWORD *)v4 = &qword_140F8CB40;
        *(_QWORD *)(v4 + 8) = v16;
        *v16 = v4;
        qword_140F8CB48 = v4;
        *(_BYTE *)(v4 + 16) = 1;
        if ( !byte_140F8CB78 )
        {
          byte_140F8CB78 = 1;
          ExQueueWorkItem(&IopKeepAliveTracker, DelayedWorkQueue);
        }
      }
      else if ( qword_140F8CB80 )
      {
        KeAlertThread(qword_140F8CB80, 0LL);
      }
      KeReleaseSpinLock(&qword_140F8CB50, v11);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
