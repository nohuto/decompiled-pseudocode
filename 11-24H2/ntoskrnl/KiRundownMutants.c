/*
 * XREFs of KiRundownMutants @ 0x1404793A8
 * Callers:
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KiRundownMutants(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *v4; // r13
  __int64 v5; // r14
  int v6; // ebp
  __int64 CurrentIrql; // rax
  struct _KPRCB *CurrentPrcb; // r12
  _QWORD *v9; // r15
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdi
  _QWORD *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  char v18; // cl
  ULONG_PTR *v20; // rbx
  __int64 v21; // rdi
  unsigned __int8 v22; // al
  ULONG_PTR *v23; // rbx
  __int64 v24; // rdi
  int v25; // [rsp+30h] [rbp-158h]
  unsigned int v26; // [rsp+34h] [rbp-154h] BYREF
  unsigned int v27; // [rsp+38h] [rbp-150h] BYREF
  __int64 v28; // [rsp+40h] [rbp-148h]
  __int64 v29; // [rsp+48h] [rbp-140h] BYREF
  _QWORD v30[32]; // [rsp+50h] [rbp-138h] BYREF

  memset_0(v30, 0, sizeof(v30));
  v29 = 0LL;
  v4 = (_QWORD *)(BugCheckParameter1 + 776);
  if ( (_QWORD *)*v4 == v4 )
    return;
  v5 = 0LL;
  v6 = 0;
  v25 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v28 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags != (unsigned __int8)v25 )
  {
    LOBYTE(v3) = CurrentIrql;
    goto LABEL_5;
  }
LABEL_6:
  CurrentPrcb = KeGetCurrentPrcb();
LABEL_7:
  while ( 2 )
  {
    v26 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
        KeYieldProcessorEx(&v26);
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    v9 = (_QWORD *)*v4;
    v10 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 != v4 )
    {
      v11 = (unsigned __int64)(v9 - 3);
      if ( *((_BYTE *)v9 + 25) )
        KeBugCheckEx(0x4000008Au, BugCheckParameter1, (ULONG_PTR)(v9 - 3), 0LL, 0LL);
      if ( !_interlockedbittestandset((volatile signed __int32 *)v11, 7u) )
      {
LABEL_19:
        v12 = *v9;
        v13 = (_QWORD *)v9[1];
        if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v13 != v9 )
LABEL_46:
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
        *(_BYTE *)(v11 + 48) |= 1u;
        *(_QWORD *)(v11 + 40) = 0LL;
        v14 = *(_QWORD **)(v11 + 8);
        *(_DWORD *)(v11 + 4) = 1;
        while ( 1 )
        {
          if ( v14 == (_QWORD *)(v11 + 8) )
          {
LABEL_34:
            if ( (*(_BYTE *)(v11 + 48) & 2) != 0 )
            {
              v30[v5] = v11;
              v5 = (unsigned int)(v5 + 1);
            }
            _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
            v25 = ++v6;
            if ( v6 == 32 )
            {
              KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 1u, v28);
              if ( (_DWORD)v5 )
              {
                v20 = v30;
                v21 = (unsigned int)v5;
                do
                {
                  KeAbPostRelease(*v20++);
                  --v21;
                }
                while ( v21 );
              }
              v6 = 0;
              v25 = 0;
              v5 = 0LL;
              v3 = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags != (unsigned __int8)v25 )
              {
LABEL_5:
                LOBYTE(v2) = 2;
                KiRaiseIrqlProcessIrqlFlags(v3, v2);
              }
              goto LABEL_6;
            }
            goto LABEL_7;
          }
          v15 = (_QWORD *)*v14;
          v16 = (__int64)v14;
          v14 = v15;
          v17 = *(_QWORD **)(v16 + 8);
          if ( v15[1] != v16 || *v17 != v16 )
            goto LABEL_46;
          *v17 = v15;
          v15[1] = v17;
          v18 = *(_BYTE *)(v16 + 16);
          switch ( v18 )
          {
            case 1:
              if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v16, *(unsigned __int16 *)(v16 + 18), &v29) )
                goto LABEL_33;
              break;
            case 2:
              *(_BYTE *)(v16 + 17) = 5;
              KiInsertQueueInternal(*(_QWORD *)(v16 + 24), (__int64 *)v16);
LABEL_33:
              if ( (*(_DWORD *)(v11 + 4))-- == 1 )
                goto LABEL_34;
              break;
            case 4:
              *(_BYTE *)(v16 + 17) = 5;
              *(_DWORD *)(v11 + 4) = 0;
              KeInsertQueueDpc(*(PRKDPC *)(v16 + 24), (PVOID)v11, (PVOID)v16);
              break;
            default:
              KiTryUnwaitThread((__int64)CurrentPrcb, v16, 256LL, 0LL);
              break;
          }
        }
      }
      *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
      ExAcquireSpinLockSharedAtDpcLevel(&KiObjectRundownLocks[16 * ((v11 >> 4) & 0x3F)]);
      if ( v9 == (_QWORD *)*v4 )
      {
        KiAcquireKobjectLockSafe((volatile signed __int32 *)v9 - 6);
        if ( *(_QWORD *)(v11 + 40) == BugCheckParameter1 )
        {
LABEL_16:
          ExReleaseSpinLockSharedFromDpcLevel(&KiObjectRundownLocks[16 * ((v11 >> 4) & 0x3F)]);
          v6 = v25;
          if ( !v10 )
            continue;
          v27 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
          {
            do
              KeYieldProcessorEx(&v27);
            while ( *(_QWORD *)(BugCheckParameter1 + 64) );
          }
          goto LABEL_19;
        }
        _InterlockedAnd((volatile signed __int32 *)v11, 0xFFFFFF7F);
      }
      v10 = 0LL;
      goto LABEL_16;
    }
    break;
  }
  v22 = v28;
  *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 1u, v22);
  if ( (_DWORD)v5 )
  {
    v23 = v30;
    v24 = (unsigned int)v5;
    do
    {
      KeAbPostRelease(*v23++);
      --v24;
    }
    while ( v24 );
  }
}
