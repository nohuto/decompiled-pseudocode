/*
 * XREFs of ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140039BAC
 * Callers:
 *     VidSchiControlVSyncThread @ 0x140039A40 (VidSchiControlVSyncThread.c)
 * Callees:
 *     VidSchiSetVSyncSuspended @ 0x140039DBC (VidSchiSetVSyncSuspended.c)
 *     __security_check_cookie @ 0x140056260 (__security_check_cookie.c)
 *     VidSchiControlVSync @ 0x1400D9A20 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlIndependentVidPnVSyncThread(KSPIN_LOCK *a1)
{
  struct _ERESOURCE *v1; // r14
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 MostSignificantBit; // rdx
  KSPIN_LOCK v6; // r9
  unsigned int i; // ecx
  __int64 v8; // r8
  unsigned __int64 v9; // rax
  unsigned int *v10; // rsi
  __int64 v11; // rbp
  char v12; // cl
  signed __int32 v13; // eax
  KSPIN_LOCK v14; // r9
  __int64 v15; // rcx
  __int64 v16; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v18[16]; // [rsp+40h] [rbp-68h] BYREF

  v1 = (struct _ERESOURCE *)(a1 + 168);
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 168), 1u);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(a1 + 248, &LockHandle);
  v3 = *((_DWORD *)a1 + 631);
  v4 = 0LL;
  if ( v3 )
  {
    while ( 1 )
    {
      MostSignificantBit = (unsigned int)RtlFindMostSignificantBit(v3);
      if ( *((_BYTE *)a1 + 59) )
        break;
      if ( *((_DWORD *)a1 + MostSignificantBit + 648) >= *((_DWORD *)a1 + 665) )
      {
        *((_DWORD *)a1 + MostSignificantBit + 648) = -1;
LABEL_11:
        v18[v4] = MostSignificantBit;
        v4 = (unsigned int)(v4 + 1);
      }
LABEL_12:
      v3 &= ~(1 << MostSignificantBit);
      if ( !v3 )
        goto LABEL_13;
    }
    v6 = a1[MostSignificantBit + 429];
    for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
    {
      v8 = 304LL * i;
      v9 = *(_QWORD *)(v8 + v6 + 392);
      if ( v9 && *(_QWORD *)(v8 + v6 + 424) <= v9 )
        goto LABEL_12;
    }
    goto LABEL_11;
  }
LABEL_13:
  a1[315] = 0LL;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (_DWORD)v4 )
  {
    v10 = v18;
    do
    {
      v11 = *v10;
      v12 = *((_BYTE *)a1 + v11 + 2064);
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + v11 + 632, 0, 0);
      if ( v12 )
      {
        if ( !v13 && !*((_DWORD *)a1 + 5 * v11 + 538) )
        {
          v14 = a1[2];
          v15 = (*(_DWORD *)(v14 + 2976) & 0x10) != 0 ? (unsigned int)v11 : 0;
          if ( ((unsigned int)v15 >= 0x10 || !*(_DWORD *)(v14 + 4 * v15 + 3152))
            && !*((_DWORD *)a1 + v11 + 199)
            && !*((_DWORD *)a1 + 217)
            && !*((_DWORD *)a1 + 5 * v11 + 539) )
          {
            VidSchiControlVSync(a1, 0LL, 3LL, (unsigned int)v11);
            LOBYTE(v16) = 1;
            VidSchiSetVSyncSuspended(a1, (unsigned int)v11, v16);
          }
        }
      }
      ++v10;
      --v4;
    }
    while ( v4 );
  }
  ExReleaseResourceLite(v1);
}
