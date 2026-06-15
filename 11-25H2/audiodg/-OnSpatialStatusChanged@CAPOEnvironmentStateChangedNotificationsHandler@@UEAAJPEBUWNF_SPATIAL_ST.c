/*
 * XREFs of ?OnSpatialStatusChanged@CAPOEnvironmentStateChangedNotificationsHandler@@UEAAJPEBUWNF_SPATIAL_STATUS_HEADER@@@Z @ 0x14005FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008444 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400324EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003F2BC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAPOEnvironmentStateChangedNotificationsHandler::OnSpatialStatusChanged(
        CAPOEnvironmentStateChangedNotificationsHandler *this,
        const struct WNF_SPATIAL_STATUS_HEADER *a2)
{
  unsigned int i; // ebx
  __int64 v5; // r14
  __int16 v6; // r14
  _DWORD *v7; // rbx
  _DWORD *v8; // rdi
  unsigned int v9; // ebx
  _QWORD *v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 **j; // rbx
  __int64 v15[2]; // [rsp+30h] [rbp-40h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h]
  _QWORD v18[2]; // [rsp+58h] [rbp-18h] BYREF
  char v19; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+A8h] [rbp+38h] BYREF

  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)a2 + 1) )
      return 0LL;
    v5 = 114LL * i;
    if ( CompareStringOrdinal(*((LPCWCH *)this + 11), -1, (LPCWCH)((char *)a2 + v5 + 8), -1, 1) == 2 )
      break;
  }
  v6 = *(_WORD *)((char *)a2 + v5 + 120);
  v7 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v18[0] = v7;
  LOBYTE(v21) = 0;
  v18[1] = &v21;
  v8 = operator new(0x18uLL);
  v15[0] = (__int64)v7;
  v15[1] = (__int64)v8;
  v19 = 0;
  v8[2] = 1;
  v8[3] = 1;
  *(_QWORD *)v8 = off_14009EDD8;
  *((_QWORD *)v8 + 2) = v7;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___((__int64)v18);
  if ( !v7 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5A,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
      (const char *)0x8007000ELL);
LABEL_14:
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
    return v9;
  }
  v17 = 0LL;
  *(_OWORD *)pvar = 0LL;
  LOWORD(pvar[0]) = 11;
  LOWORD(pvar[1]) = -1;
  if ( !v6 )
    LOWORD(pvar[1]) = 0;
  memset_0(v7, 0, 0x48uLL);
  *v7 = 7;
  v10 = v7 + 2;
  *((_OWORD *)v7 + 1) = PKEY_AudioEnvironment_SpatialAudioActive;
  v7[8] = 2;
  v11 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(
          (__int64 *)this + 4,
          (_QWORD *)v7 + 1);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 104LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
      (const char *)(unsigned int)v11);
    PropVariantClear(pvar);
    goto LABEL_14;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(*(_QWORD *)*v10 + 48LL))(
          *v10,
          &PKEY_AudioEnvironment_SpatialAudioActive,
          pvar);
  v9 = v11;
  if ( v11 < 0 )
  {
    v12 = 105LL;
    goto LABEL_13;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this + 1);
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
  for ( j = (__int64 **)*((_QWORD *)this + 12); j; j = (__int64 **)*j )
    CAPOProcessingHostObject::QueueNotification((struct _RTL_CRITICAL_SECTION *)j[1], v15);
  CSAutoLock<1>::~CSAutoLock<1>(&v21);
  PropVariantClear(pvar);
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v8);
  return 0LL;
}
