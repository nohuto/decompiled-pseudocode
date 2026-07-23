/*
 * XREFs of KeWakeWaitChain @ 0x1402F15F0
 * Callers:
 *     ExpConvertFastResourceExclusiveToShared @ 0x1402F10A8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1402F14D8 (ExpConvertExclusiveToSharedLite.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14092CB90 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
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

__int64 __fastcall KeWakeWaitChain(_QWORD *a1, signed int a2, char a3)
{
  _QWORD *v3; // rdi
  unsigned int v4; // ebx
  unsigned int v8; // r15d
  unsigned __int8 CurrentIrql; // al
  _QWORD *v11; // r12
  int i; // eax
  _QWORD *v13; // r13
  __int64 v14; // rdx
  _DWORD *v15; // r9
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  char v21; // cl
  char v22; // al
  bool v23; // zf
  signed int v24; // eax
  struct _KPRCB *CurrentPrcb; // [rsp+38h] [rbp-50h]
  unsigned __int8 v26; // [rsp+40h] [rbp-48h]
  _QWORD *v27; // [rsp+A8h] [rbp+20h]

  v3 = (_QWORD *)*a1;
  v4 = 0;
  v8 = 1;
  if ( *a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v26 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    v11 = v3;
    CurrentPrcb = KeGetCurrentPrcb();
    for ( i = a3 & 4; ; i = a3 & 4 )
    {
      v13 = v11;
      v11 = (_QWORD *)*v11;
      if ( i )
      {
        v14 = v13[6];
        if ( v14 )
          KiAbConvertWaiterToOwnerEntry(*(_QWORD *)(v14 - 88LL * (*(_BYTE *)(v14 + 8) & 0x3F) - 16), v14, 1LL, 1LL);
      }
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v13 + 6);
      v15 = v13 + 3;
      *((_DWORD *)v13 + 7) = 1;
      v16 = (_QWORD *)v13[4];
      v17 = v13 + 4;
      while ( v16 != v17 )
      {
        v18 = *v16;
        v19 = v16;
        v20 = (_QWORD *)v16[1];
        v27 = (_QWORD *)v18;
        if ( *(_QWORD **)(v18 + 8) != v19 || (_QWORD *)*v20 != v19 )
          __fastfail(3u);
        *v20 = v18;
        *(_QWORD *)(v18 + 8) = v20;
        v21 = *((_BYTE *)v19 + 16);
        if ( v21 == 1 )
        {
          v22 = KiTryUnwaitThread(CurrentPrcb, v19, *((unsigned __int16 *)v19 + 9), 0LL);
          v16 = v27;
          v15 = v13 + 3;
          v23 = v22 == 0;
          v17 = v13 + 4;
          if ( !v23 )
          {
            v23 = (*((_DWORD *)v13 + 7))-- == 1;
            v15 = v13 + 3;
            if ( v23 )
              break;
          }
        }
        else if ( v21 == 2 )
        {
          *((_BYTE *)v19 + 17) = 5;
          KiInsertQueueInternal(v19[3], v19);
          v23 = (*((_DWORD *)v13 + 7))-- == 1;
          v15 = v13 + 3;
          if ( v23 )
            break;
          v16 = v27;
          v17 = v13 + 4;
        }
        else
        {
          if ( v21 == 4 )
          {
            *((_BYTE *)v19 + 17) = 5;
            v15[1] = 0;
            KeInsertQueueDpc((PRKDPC)v19[3], v15, v19);
          }
          else
          {
            KiTryUnwaitThread(CurrentPrcb, v19, 256LL, 0LL);
          }
          v16 = v27;
          v15 = v13 + 3;
          v17 = v13 + 4;
        }
      }
      _InterlockedAnd((volatile signed __int32 *)v13 + 6, 0xFFFFFF7F);
      ++v4;
      if ( v11 == v3 )
        break;
    }
    if ( (a3 & 1) != 0 )
    {
      v24 = KiRemoveBoostThread(CurrentPrcb, (__int64)CurrentPrcb->CurrentThread);
      if ( a2 )
      {
        v8 = 2;
        if ( v24 > a2 )
          a2 = v24;
      }
    }
    if ( (a3 & 2) != 0 && v8 == 1 )
      a2 = 1;
    KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, v8, a2, v26);
    *a1 = 0LL;
  }
  return v4;
}
