/*
 * XREFs of NtConfigureInputSpace @ 0x1401B7710
 * Callers:
 *     <none>
 * Callees:
 *     ?Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z @ 0x1400183CC (-Win32AllocPoolWithQuotaZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400A42D0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     ??0CInputSpace@@QEAA@_N@Z @ 0x14013101C (--0CInputSpace@@QEAA@_N@Z.c)
 *     ?AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z @ 0x140131698 (-AddRegion@CInputSpace@@QEAAJAEBUCInputSpaceRegion@@PEAPEAU2@@Z.c)
 *     ?FreeRegions@CInputSpace@@QEAAXXZ @ 0x14014A638 (-FreeRegions@CInputSpace@@QEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x14016ABF4 (DestroySharedUserCritDeferredUnlockList.c)
 *     RtlCopyFromUser @ 0x1401A22E8 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401A8FE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z @ 0x1401F4108 (-Validate@CInputConfig@@SA_NAEBUINPUT_SPACE@@PEBUINPUT_SPACE_REGION@@K@Z.c)
 *     ?zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z @ 0x1401F5048 (-zzzConfigureInputSpace@CInputConfig@@QEAAJPEAUCInputSpace@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14023F410 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall NtConfigureInputSpace(void *Src, void *a2, unsigned int a3)
{
  __int64 v3; // rsi
  _QWORD *UserSessionState; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  char *v10; // rdi
  ULONG v11; // ecx
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // r14d
  char *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rax
  __int64 v19; // [rsp+28h] [rbp-8F0h] BYREF
  int v20; // [rsp+30h] [rbp-8E8h]
  char *v21; // [rsp+38h] [rbp-8E0h]
  _OWORD v22[12]; // [rsp+50h] [rbp-8C8h] BYREF
  __int64 v23; // [rsp+110h] [rbp-808h]
  _BYTE v24[520]; // [rsp+118h] [rbp-800h] BYREF
  __int64 v25; // [rsp+320h] [rbp-5F8h] BYREF
  int v26; // [rsp+328h] [rbp-5F0h]

  v3 = a3;
  UserSessionState = (_QWORD *)W32GetUserSessionState(Src);
  v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v7;
  if ( v7 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2468));
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2475);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2473);
  }
  CInputSpace::CInputSpace((CInputSpace *)&v25, 0);
  v9 = 0;
  v10 = 0LL;
  v21 = 0LL;
  if ( (_DWORD)v3 )
  {
    v9 = 200 * v3;
    if ( (unsigned __int64)(200 * v3) > 0xFFFFFFFF )
    {
LABEL_7:
      v11 = 87;
      goto LABEL_8;
    }
    v10 = (char *)Win32AllocPoolWithQuotaZInitImpl(v8, v9, 0x63736955u);
    v21 = v10;
    if ( !v10 )
    {
      v11 = 8;
LABEL_8:
      v12 = 0;
LABEL_9:
      UserSetLastError(v11);
      goto LABEL_22;
    }
  }
  v19 = 0LL;
  v20 = 0;
  RtlCopyFromUser(&v19, Src, 0xCuLL);
  v25 = v19;
  v26 = v20;
  if ( (_DWORD)v3 )
  {
    if ( 200 * v3 && ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlCopyVolatileMemory(v10, a2, v9);
  }
  if ( !CInputConfig::Validate((const struct INPUT_SPACE *)&v25, (const struct INPUT_SPACE_REGION *)v10, v3) )
    goto LABEL_7;
  v12 = 1;
  if ( (_DWORD)v3 )
  {
    v14 = 0;
    do
    {
      v15 = &v10[200 * v14];
      v22[0] = *(_OWORD *)v15;
      v22[1] = *((_OWORD *)v15 + 1);
      v22[2] = *((_OWORD *)v15 + 2);
      v22[3] = *((_OWORD *)v15 + 3);
      v22[4] = *((_OWORD *)v15 + 4);
      v22[5] = *((_OWORD *)v15 + 5);
      v22[6] = *((_OWORD *)v15 + 6);
      v22[7] = *((_OWORD *)v15 + 7);
      v15 += 128;
      v22[8] = *(_OWORD *)v15;
      v22[9] = *((_OWORD *)v15 + 1);
      v22[10] = *((_OWORD *)v15 + 2);
      v22[11] = *((_OWORD *)v15 + 3);
      v23 = *((_QWORD *)v15 + 8);
      memset(v24, 0, 289);
      memset(&v24[296], 0, 0xD8uLL);
      v16 = CInputSpace::AddRegion((CInputSpace *)&v25, (const struct CInputSpaceRegion *)v22, 0LL);
      if ( v16 < 0 )
        goto LABEL_21;
    }
    while ( ++v14 != (_DWORD)v3 );
  }
  v17 = W32GetUserSessionState(v13);
  v16 = CInputConfig::zzzConfigureInputSpace(*(CInputConfig **)(v17 + 18688), (struct CInputSpace *)&v25);
  if ( v16 < 0 )
  {
LABEL_21:
    v12 = 0;
    v11 = RtlNtStatusToDosError(v16);
    goto LABEL_9;
  }
LABEL_22:
  CInputSpace::FreeRegions((CInputSpace *)&v25);
  if ( v10 )
    GreDeleteFastMutex(v10);
  UserSessionSwitchLeaveCritWithNonPaged();
  return v12;
}
