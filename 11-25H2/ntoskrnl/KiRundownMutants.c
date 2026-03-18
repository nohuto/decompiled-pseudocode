/*
 * XREFs of KiRundownMutants @ 0x14047E8DC
 * Callers:
 *     PspExitThread @ 0x1408F49D0 (PspExitThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiInsertQueueInternal @ 0x14027F170 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x140280490 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1403F49C0 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rcx
  _QWORD *v3; // r13
  __int64 v4; // r14
  int v5; // ebp
  __int64 CurrentIrql; // rax
  struct _KPRCB *CurrentPrcb; // r12
  _QWORD *v8; // r15
  _QWORD *v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  _QWORD *v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  char v17; // cl
  ULONG_PTR *v19; // rbx
  __int64 v20; // rdi
  unsigned __int8 v21; // al
  ULONG_PTR *v22; // rbx
  __int64 v23; // rdi
  int v24; // [rsp+30h] [rbp-158h]
  int v25; // [rsp+34h] [rbp-154h] BYREF
  int v26; // [rsp+38h] [rbp-150h] BYREF
  __int64 v27; // [rsp+40h] [rbp-148h]
  __int64 v28; // [rsp+48h] [rbp-140h] BYREF
  _QWORD v29[32]; // [rsp+50h] [rbp-138h] BYREF

  memset_0(v29, 0, sizeof(v29));
  v28 = 0LL;
  v3 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v3 == v3 )
    return;
  v4 = 0LL;
  v5 = 0;
  v24 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v27 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v24 )
  {
    LOBYTE(v2) = CurrentIrql;
    goto LABEL_5;
  }
LABEL_6:
  CurrentPrcb = KeGetCurrentPrcb();
LABEL_7:
  while ( 2 )
  {
    v25 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v25);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v8 = (_QWORD *)*v3;
    v9 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 != v3 )
    {
      v10 = (unsigned __int64)(v8 - 3);
      if ( *((_BYTE *)v8 + 25) )
        KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v8 - 3), 0LL, 0LL);
      if ( !_interlockedbittestandset((volatile signed __int32 *)v10, 7u) )
      {
LABEL_19:
        v11 = *v8;
        v12 = (_QWORD *)v8[1];
        if ( *(_QWORD **)(*v8 + 8LL) != v8 || (_QWORD *)*v12 != v8 )
LABEL_46:
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        *(_BYTE *)(v10 + 48) |= 1u;
        *(_QWORD *)(v10 + 40) = 0LL;
        v13 = *(_QWORD **)(v10 + 8);
        *(_DWORD *)(v10 + 4) = 1;
        while ( 1 )
        {
          if ( v13 == (_QWORD *)(v10 + 8) )
          {
LABEL_34:
            if ( (*(_BYTE *)(v10 + 48) & 2) != 0 )
            {
              v29[v4] = v10;
              v4 = (unsigned int)(v4 + 1);
            }
            _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
            v24 = ++v5;
            if ( v5 == 32 )
            {
              KiExitDispatcher(CurrentPrcb, 0LL, 1u, 1u, v27);
              if ( (_DWORD)v4 )
              {
                v19 = v29;
                v20 = (unsigned int)v4;
                do
                {
                  KeAbPostRelease(*v19++);
                  --v20;
                }
                while ( v20 );
              }
              v5 = 0;
              v24 = 0;
              v4 = 0LL;
              v2 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags != (unsigned __int8)v24 )
LABEL_5:
                KiRaiseIrqlProcessIrqlFlags(v2);
              goto LABEL_6;
            }
            goto LABEL_7;
          }
          v14 = (_QWORD *)*v13;
          v15 = (__int64)v13;
          v13 = v14;
          v16 = *(_QWORD **)(v15 + 8);
          if ( v14[1] != v15 || *v16 != v15 )
            goto LABEL_46;
          *v16 = v14;
          v14[1] = v16;
          v17 = *(_BYTE *)(v15 + 16);
          switch ( v17 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v15, *(unsigned __int16 *)(v15 + 18), &v28) )
                goto LABEL_33;
              break;
            case 2:
              *(_BYTE *)(v15 + 17) = 5;
              KiInsertQueueInternal(*(_QWORD *)(v15 + 24), (__int64 *)v15);
LABEL_33:
              if ( (*(_DWORD *)(v10 + 4))-- == 1 )
                goto LABEL_34;
              break;
            case 4:
              *(_BYTE *)(v15 + 17) = 5;
              *(_DWORD *)(v10 + 4) = 0;
              KeInsertQueueDpc(*(PRKDPC *)(v15 + 24), (PVOID)v10, (PVOID)v15);
              break;
            default:
              KiTryUnwaitThread((__int64)CurrentPrcb, v15, 256LL, 0LL);
              break;
          }
        }
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * ((v10 >> 4) & 0x3F)]);
      if ( v8 == (_QWORD *)*v3 )
      {
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v8 - 6);
        if ( *(_QWORD *)(v10 + 40) == BugCheckParameter1 )
        {
LABEL_16:
          ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * ((v10 >> 4) & 0x3F)]);
          v5 = v24;
          if ( !v9 )
            continue;
          v26 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v26);
            while ( *(_QWORD *)(BugCheckParameter1 + 64) );
          }
          goto LABEL_19;
        }
        _InterlockedAnd((volatile signed __int32 *)v10, 0xFFFFFF7F);
      }
      v9 = 0LL;
      goto LABEL_16;
    }
    break;
  }
  v21 = v27;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 1u, v21);
  if ( (_DWORD)v4 )
  {
    v22 = v29;
    v23 = (unsigned int)v4;
    do
    {
      KeAbPostRelease(*v22++);
      --v23;
    }
    while ( v23 );
  }
}
