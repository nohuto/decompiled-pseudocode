/*
 * XREFs of ?Update@GroupedProcessForegroundBoost@@YA_NPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14010C7D0
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1401709B0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x140046170 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14004632C (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x14010C900 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x14010CDDC (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     qsort @ 0x14019FD50 (qsort.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

char __fastcall GroupedProcessForegroundBoost::Update(
        GroupedProcessForegroundBoost *this,
        struct tagWND *a2,
        PVOID *a3,
        struct _EPROCESS **a4)
{
  unsigned int v4; // ebx
  size_t v7; // r12
  PVOID *v8; // rsi
  PVOID *v9; // rdi
  __int64 v10; // r14
  NTSTATUS v11; // eax
  ULONG v13; // eax
  __int64 v14; // rdx
  _BYTE v15[16]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+30h] [rbp-68h]
  char v17; // [rsp+40h] [rbp-58h]
  char v18; // [rsp+48h] [rbp-50h]

  v4 = (unsigned int)a2;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    (__int64)v15,
    *((_QWORD *)this + 18));
  if ( v4 )
  {
    v7 = v4;
    qsort(a3, v4, 8uLL, pEProcessCompareAscending);
    if ( v4 > 1 )
    {
      v8 = a3 + 1;
      v9 = a3;
      v10 = v4 - 1;
      do
      {
        if ( *v8 == *v9 )
        {
          ObfDereferenceObject(*v9);
          *v9 = 0LL;
          --v4;
        }
        ++v9;
        ++v8;
        --v10;
      }
      while ( v10 );
    }
    qsort(a3, v7, 8uLL, pEProcessCompareDescending);
    v11 = GroupedFGBoostProp::SetGroupedFGBoost(this, v4, (struct _EPROCESS **)a3);
  }
  else
  {
    v11 = GroupedFGBoostProp::ClearGroupedFGBoost(this);
  }
  if ( v11 < 0 )
  {
    v13 = RtlNtStatusToDosError(v11);
    UserSetLastError(v13);
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(
      (__int64)v15,
      v14);
    return 0;
  }
  else
  {
    if ( v17 && v18 )
    {
      if ( v16 )
        RIMUnlockExclusive(v16);
    }
    return 1;
  }
}
