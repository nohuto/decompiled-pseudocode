/*
 * XREFs of DeleteStringPropertyAtoms @ 0x140168CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x140046170 (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ??1?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x14004632C (--1-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     UserDeleteAtomFromAtomTable @ 0x1400BBC40 (UserDeleteAtomFromAtomTable.c)
 *     UserGlobalAtomTableCallout @ 0x140166C60 (UserGlobalAtomTableCallout.c)
 *     Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline @ 0x1401AA508 (Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     GetCurrentProcessAtomTable @ 0x1401B2D78 (GetCurrentProcessAtomTable.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall DeleteStringPropertyAtoms(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  _BYTE *v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 result; // rax
  bool v10; // zf
  struct _RTL_ATOM_TABLE *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // ebp
  unsigned __int16 *v15; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  unsigned __int16 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v21[48]; // [rsp+28h] [rbp-80h] BYREF
  _BYTE v22[48]; // [rsp+58h] [rbp-50h] BYREF

  if ( (unsigned int)((__int64 (*)(void))Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline)() )
  {
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
      (__int64)v21,
      *(_QWORD *)(a1 + 144));
    v4 = v21;
    if ( !*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) + 4LL) )
      return SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(
               (__int64)v4,
               v3);
    SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(
      (__int64)v21,
      v3);
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
  v7 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v6 = -*(_QWORD *)CurrentProcessWin32Process;
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( !(unsigned int)Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline(v6)
    || (result = *(unsigned int *)(v7 + 816), (result & 0x4000000) == 0) )
  {
    v20 = 0;
    if ( (unsigned int)Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline(v8) )
    {
      result = GetCurrentProcessAtomTable(&v20);
      v10 = (v20 & 0xFFFFFFFD) == 0;
    }
    else
    {
      result = (__int64)UserGlobalAtomTableCallout();
      v10 = result == 0;
    }
    v11 = (struct _RTL_ATOM_TABLE *)result;
    if ( !v10 )
    {
      SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
        (__int64)v22,
        *(_QWORD *)(a1 + 144));
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
      v14 = *(_DWORD *)(v13 + 4);
      if ( v14 )
      {
        v15 = (unsigned __int16 *)(v13 + 16);
        do
        {
          IsEnabledDeviceUsageNoInline = Feature_JobAtomTableSwitchBitUpdate__private_IsEnabledDeviceUsageNoInline(v12);
          v17 = v15[1];
          v12 = v17;
          LOWORD(v12) = v17 & 2;
          if ( IsEnabledDeviceUsageNoInline )
          {
            if ( (v17 & 2) == 0 )
              goto LABEL_31;
            v3 = *v15;
            if ( !(_WORD)v3 || (v17 & 0x10) != 0 || *((_DWORD *)v15 + 1) != *(_DWORD *)(v7 + 876) )
              goto LABEL_31;
          }
          else
          {
            if ( (v17 & 2) == 0 || !*v15 || (v17 & 0x10) != 0 )
              goto LABEL_31;
            v18 = PsGetCurrentProcessWin32Process(v12);
            if ( v18 )
            {
              v12 = -*(_QWORD *)v18;
              v3 = -(__int64)(*(_QWORD *)v18 != 0LL);
              v18 &= v3;
            }
            if ( (*(_DWORD *)(v18 + 816) & 0x4000000) != 0 )
              goto LABEL_31;
            v19 = PsGetCurrentProcessWin32Process(v12);
            if ( v19 )
            {
              v12 = -*(_QWORD *)v19;
              v3 = -(__int64)(*(_QWORD *)v19 != 0LL);
              v19 &= v3;
            }
            if ( *((_DWORD *)v15 + 1) != *(_DWORD *)(v19 + 876) )
              goto LABEL_31;
            LOWORD(v3) = *v15;
          }
          UserDeleteAtomFromAtomTable(v11, v3);
          *v15 = 0;
LABEL_31:
          v15 += 8;
          --v14;
        }
        while ( v14 );
      }
      v4 = v22;
      return SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::~ObjectLock<tagObjLock>(
               (__int64)v4,
               v3);
    }
  }
  return result;
}
