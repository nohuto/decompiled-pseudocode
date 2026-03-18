/*
 * XREFs of DpiPdoHandleQueryDeviceText @ 0x1402CC280
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140031240 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400349F8 (--1-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PEAG$0.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034BE4 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x14004C404 (-reset@-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PE.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x140056BA4 (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x1400648B8 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@_E$1-FreePoolWithTag@-$pool_helpers@PEA.c)
 *     ?RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ @ 0x14008D210 (-RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402C7954 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402CA614 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceText(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // r13
  unsigned int v6; // edi
  int v7; // edi
  char v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int16 v17; // bx
  __int64 v18; // rcx
  int v19; // ebx
  unsigned int i; // ecx
  void *v21; // rsi
  int v22; // eax
  __int64 v23; // rbx
  __int64 Pool2; // rax
  void *v26; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  char *v29; // [rsp+70h] [rbp-90h]
  void *v30; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall *v31)(void *); // [rsp+80h] [rbp-80h] BYREF
  _QWORD v32[3]; // [rsp+88h] [rbp-78h] BYREF
  char v33; // [rsp+A0h] [rbp-60h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
    return *(unsigned int *)(a2 + 48);
  if ( *(_QWORD *)(a2 + 56) )
    return 0;
  v26 = 0LL;
  DestinationString = 0LL;
  if ( *(_WORD *)(v3 + 818) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(v3 + 818));
    Pool2 = ExAllocatePool2(256LL, DestinationString.MaximumLength, 1953656900LL);
    _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
      (__int64 *)&v26,
      Pool2);
    if ( ____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&v26) )
    {
      v6 = -1073741801;
      goto LABEL_34;
    }
    v21 = v26;
    memset(v26, 0, DestinationString.MaximumLength);
    memmove(v21, DestinationString.Buffer, DestinationString.MaximumLength);
    goto LABEL_38;
  }
  v7 = 302;
  v28 = 0x800000LL;
  v8 = 0;
  v29 = &v33;
  if ( ((*(_DWORD *)(v3 + 496) - 1) & 0xFFFFFFFD) != 0 )
  {
LABEL_13:
    v17 = g_RegistryPath.Length + 24;
    if ( !v8 )
      goto LABEL_26;
    goto LABEL_14;
  }
  DxgkAcquireAdapterCoreSync(*(_QWORD *)(v5 + 4032), 1, a3);
  v9 = *(unsigned int *)(v3 + 504);
  v10 = *(_QWORD *)(v5 + 4032);
  v15 = WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  *(_QWORD *)(v15 + 24) = v9;
  *(_QWORD *)(v15 + 32) = v10;
  WdLogGlobalForLineNumber = 2200;
  if ( v10 && (_DWORD)v9 != -1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v32, v10, v9, 1u);
    if ( !v32[0] )
    {
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 2212;
LABEL_10:
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v32);
      goto LABEL_11;
    }
    v18 = *(_QWORD *)(*(_QWORD *)(v32[0] + 216LL) + 160LL);
    if ( !v18 )
      goto LABEL_10;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v18 + 104LL))(v18, &v28);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v32);
    if ( v19 >= 0 )
    {
      v16 = (__int64)v29;
      if ( *(_WORD *)v29 )
      {
        v8 = 1;
        for ( i = 0; i < (unsigned __int16)v28 >> 1; ++i )
        {
          if ( *(_WORD *)&v29[2 * i] == 44 )
          {
            v8 = 0;
            break;
          }
        }
      }
    }
  }
LABEL_11:
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v5 + 4032), 1u, v16);
  if ( *(_DWORD *)(*(_QWORD *)(v3 + 936) + 4LL) == 0x80000000 )
  {
    v7 = v8 != 0 ? 304 : 301;
    goto LABEL_13;
  }
  v17 = g_RegistryPath.Length + 24;
  if ( v8 )
  {
    v7 = 303;
LABEL_14:
    v17 += v28 + 2;
    goto LABEL_26;
  }
  v7 = 300;
LABEL_26:
  v26 = (void *)ExAllocatePool2(256LL, v17, 1953656900LL);
  v21 = v26;
  if ( !____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&v26) )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.MaximumLength = v17;
    DestinationString.Buffer = (wchar_t *)v21;
    if ( v8 )
      v22 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 2304, L"%wZ,%u,%wZ", &g_RegistryPath, v7, &v28);
    else
      v22 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 2304, L"%wZ,%u", &g_RegistryPath, v7);
    v6 = v22;
    if ( v22 < 0 )
    {
      v23 = v22;
      WdLogSingleEntry1(2LL, v22);
      WdLogGlobalForLineNumber = 5483;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create the default name for a monitor device (Status = 0x%I64x)",
        v23,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_34:
      __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ(&v26);
      return v6;
    }
LABEL_38:
    v26 = 0LL;
    *(_QWORD *)(a2 + 56) = v21;
    __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ(&v26);
    return 0;
  }
  v6 = -1073741801;
  if ( v21 )
  {
    v30 = v21;
    v31 = DXGQUOTAALLOCATOR<256,1835156294>::operator delete;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v31, &v30);
  }
  return v6;
}
