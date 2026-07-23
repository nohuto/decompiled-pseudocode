/*
 * XREFs of ExpCommitWakeFastResource @ 0x1402F1EF0
 * Callers:
 *     ExpReleaseDisownedFastResourceShared @ 0x1402F1AC8 (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1402F1C00 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140284900 (KeInsertQueueDpc.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiRemoveBoostThread @ 0x1402CBC34 (KiRemoveBoostThread.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiInsertQueueInternal @ 0x1402CC724 (KiInsertQueueInternal.c)
 *     KiTryUnwaitThread @ 0x1402F28C0 (KiTryUnwaitThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall ExpCommitWakeFastResource(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 result; // rax
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r13
  _QWORD *v10; // r14
  _QWORD *v11; // rbp
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // r12
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  char v18; // cl
  bool v19; // zf
  unsigned __int8 v20; // [rsp+30h] [rbp-38h]

  v4 = (_QWORD *)*a1;
  result = 2 * (unsigned int)(a4 & 1) + 1;
  v7 = (2 * (a4 & 1) + 1) | 4;
  if ( (a4 & 2) == 0 )
    v7 = 2 * (a4 & 1) + 1;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v20 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    v10 = v4;
    do
    {
      v11 = v10;
      v10 = (_QWORD *)*v10;
      if ( (v7 & 4) != 0 )
      {
        v12 = v11[6];
        if ( v12 )
          KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v12 - 88LL * (*(_BYTE *)(v12 + 8) & 0x3F) - 16), v12, 1LL, a4);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v11 + 6);
      v13 = v11 + 4;
      *((_DWORD *)v11 + 7) = 1;
      v14 = (_QWORD *)v11[4];
      while ( v14 != v13 )
      {
        v15 = (_QWORD *)*v14;
        v16 = v14;
        v14 = v15;
        v17 = (_QWORD *)v16[1];
        if ( (_QWORD *)v15[1] != v16 || (_QWORD *)*v17 != v16 )
          __fastfail(3u);
        *v17 = v15;
        v15[1] = v17;
        v18 = *((_BYTE *)v16 + 16);
        if ( v18 == 1 )
        {
          v19 = (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v16, *((unsigned __int16 *)v16 + 9), 0LL) == 0;
          v13 = v11 + 4;
          if ( !v19 )
          {
            v19 = (*((_DWORD *)v11 + 7))-- == 1;
            if ( v19 )
              break;
          }
        }
        else if ( v18 == 2 )
        {
          *((_BYTE *)v16 + 17) = 5;
          KiInsertQueueInternal(v16[3], v16);
          v19 = (*((_DWORD *)v11 + 7))-- == 1;
          if ( v19 )
            break;
          v13 = v11 + 4;
        }
        else
        {
          if ( v18 == 4 )
          {
            *((_BYTE *)v16 + 17) = 5;
            *((_DWORD *)v11 + 7) = 0;
            KeInsertQueueDpc((PRKDPC)v16[3], v11 + 3, v16);
          }
          else
          {
            KiTryUnwaitThread(CurrentPrcb, v16, 256LL, 0LL);
          }
          v13 = v11 + 4;
        }
      }
      _InterlockedAnd((volatile signed __int32 *)v11 + 6, 0xFFFFFF7F);
    }
    while ( v10 != v4 );
    KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
    KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, (v7 >> 1) & 1, v20);
    result = 0LL;
    *a1 = 0LL;
  }
  return result;
}
