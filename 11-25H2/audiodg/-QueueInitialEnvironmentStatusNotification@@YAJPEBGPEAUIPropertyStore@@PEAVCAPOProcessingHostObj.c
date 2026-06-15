/*
 * XREFs of ?QueueInitialEnvironmentStatusNotification@@YAJPEBGPEAUIPropertyStore@@PEAVCAPOProcessingHostObject@@@Z @ 0x140062814
 * Callers:
 *     ?RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG@Z @ 0x140015220 (-RegisterAPONotifications@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObjectNotifications@@PEBG.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV?$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z @ 0x140008444 (-QueueNotification@CAPOProcessingHostObject@@QEAAXAEAV-$shared_ptr@UAPO_NOTIFICATION@@@std@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x14000897C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___ @ 0x1400324EC (std--_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___--__Temp.c)
 *     ??$query_to@UIPropertyStore@@@?$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIPropertyStore@@@Z @ 0x14003F2BC (--$query_to@UIPropertyStore@@@-$com_ptr_t@UIPropertyStore@@Uerr_returncode_policy@wil@@@wil@@QEB.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x14005A1D4 (memset_0.c)
 *     wil::wnf_query_nothrow__QueueInitialEnvironmentStatusNotification_::_2_::WnfPayload4k_ @ 0x140061678 (wil--wnf_query_nothrow__QueueInitialEnvironmentStatusNotification_--_2_--WnfPayload4k_.c)
 *     _alloca_probe @ 0x140091990 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall QueueInitialEnvironmentStatusNotification(
        const unsigned __int16 *a1,
        struct IPropertyStore *a2,
        struct _RTL_CRITICAL_SECTION *a3)
{
  BOOL v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned int i; // ebx
  _DWORD *v10; // rbx
  _DWORD *v11; // rsi
  unsigned int v12; // ebx
  _QWORD *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  char v16[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct IPropertyStore *v17; // [rsp+38h] [rbp-C8h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h]
  __int64 v20[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[2]; // [rsp+68h] [rbp-98h] BYREF
  char v22; // [rsp+78h] [rbp-88h]
  _BYTE v23[4]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v24; // [rsp+84h] [rbp-7Ch]
  _WORD v25[2044]; // [rsp+88h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10B8h] [rbp+FB8h]

  if ( !a2 )
    return 2147942487LL;
  v17 = a2;
  ((void (__fastcall *)(struct IPropertyStore *))a2->lpVtbl->AddRef)(a2);
  memset_0(v23, 0, 0x1000uLL);
  v6 = 0;
  v16[0] = 0;
  if ( (int)wil::wnf_query_nothrow__QueueInitialEnvironmentStatusNotification_::_2_::WnfPayload4k_(v7, v16, v23, v8) >= 0
    && v16[0] )
  {
    for ( i = 0; i < v24; ++i )
    {
      if ( CompareStringOrdinal(a1, -1, &v25[57 * i], -1, 1) == 2 )
      {
        v6 = v25[57 * i + 56] != 0;
        break;
      }
    }
  }
  v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16[0] = 0;
  v21[0] = v10;
  v21[1] = v16;
  v22 = 1;
  v11 = operator new(0x18uLL);
  *(_OWORD *)v11 = 0LL;
  v11[2] = 1;
  v11[3] = 1;
  *(_QWORD *)v11 = off_14009EFD8;
  *((_QWORD *)v11 + 2) = v10;
  v20[0] = (__int64)v10;
  v20[1] = (__int64)v11;
  v22 = 0;
  std::_Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___::__Temporary_owner_del_APO_NOTIFICATION____lambda_85047e2bad8138a68b398125f6a33026___((__int64)v21);
  if ( v10 )
  {
    memset_0(v10, 0, 0x48uLL);
    *v10 = 7;
    *(_OWORD *)pvar = 0LL;
    v19 = 0LL;
    LOWORD(pvar[0]) = 11;
    if ( v6 )
      LOWORD(pvar[1]) = -1;
    else
      LOWORD(pvar[1]) = 0;
    *((_OWORD *)v10 + 1) = PKEY_AudioEnvironment_SpatialAudioActive;
    v10[8] = 2;
    v13 = v10 + 2;
    v14 = wil::com_ptr_t<IPropertyStore,wil::err_returncode_policy>::query_to<IPropertyStore>(
            (__int64 *)&v17,
            (_QWORD *)v10 + 1);
    v12 = v14;
    if ( v14 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(*(_QWORD *)*v13 + 48LL))(
              *v13,
              &PKEY_AudioEnvironment_SpatialAudioActive,
              pvar);
      v12 = v14;
      if ( v14 >= 0 )
      {
        CAPOProcessingHostObject::QueueNotification(a3, v20);
        PropVariantClear(pvar);
        v12 = 0;
        goto LABEL_21;
      }
      v15 = 498LL;
    }
    else
    {
      v15 = 497LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)(unsigned int)v14);
    PropVariantClear(pvar);
  }
  else
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1E3,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp",
      (const char *)0x8007000ELL);
  }
LABEL_21:
  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v11);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v17);
  return v12;
}
