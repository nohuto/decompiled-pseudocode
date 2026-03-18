/*
 * XREFs of DpiPdoHandleQueryDeviceText @ 0x1402BECA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z @ 0x140030B40 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAXI_N@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140034AC8 (--1-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PEAG$0.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAG$$A6AXPEAG@_E$1?FreePoolWithTag@?$pool_helpers@PEAG$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x14004C954 (-reset@-$unique_storage@U-$resource_policy@PEAG$$A6AXPEAG@_E$1-FreePoolWithTag@-$pool_helpers@PE.c)
 *     ??$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z @ 0x14005739C (--$invoke@P6AXPEAX@_EAEAPEAX@wistd@@YAX$$QEAP6AXPEAX@_EAEAPEAX@Z.c)
 *     ??$?8V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAX$$A6AXPEAX@_E$1?FreePoolWithTag@?$pool_helpers@PEAX$0ELGHHIEE@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@0@$$T@Z @ 0x140064C98 (--$-8V-$unique_storage@U-$resource_policy@PEAX$$A6AXPEAX@_E$1-FreePoolWithTag@-$pool_helpers@PEA.c)
 *     ?RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ @ 0x14008C250 (-RtlUnicodeStringPrintfEx@@YAJPEAU_UNICODE_STRING@@0KPEBGZZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1402BA104 (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1402BD2E0 (DxgkAcquireAdapterCoreSync.c)
 */

__int64 __fastcall DpiPdoHandleQueryDeviceText(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v6; // r13
  unsigned int v7; // edi
  int v8; // edi
  char v9; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int16 v18; // bx
  __int64 v19; // rcx
  int v20; // ebx
  unsigned int i; // ecx
  void *v22; // rsi
  int v23; // eax
  __int64 v24; // rbx
  __int64 v25; // r9
  __int64 Pool2; // rax
  void *v28; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  char *v31; // [rsp+70h] [rbp-90h]
  void *v32; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall *v33)(void *); // [rsp+80h] [rbp-80h] BYREF
  _QWORD v34[3]; // [rsp+88h] [rbp-78h] BYREF
  char v35; // [rsp+A0h] [rbp-60h] BYREF

  v4 = *(_QWORD *)(a1 + 64);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) )
    return *(unsigned int *)(a2 + 48);
  if ( *(_QWORD *)(a2 + 56) )
    return 0;
  v28 = 0LL;
  DestinationString = 0LL;
  if ( *(_WORD *)(v4 + 818) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)(v4 + 818));
    Pool2 = ExAllocatePool2(256LL, DestinationString.MaximumLength, 1953656900LL, v25);
    _reset___unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAAXPEAG_Z(
      (__int64 *)&v28,
      Pool2);
    if ( ____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&v28) )
    {
      v7 = -1073741801;
      goto LABEL_34;
    }
    v22 = v28;
    memset(v28, 0, DestinationString.MaximumLength);
    memmove(v22, DestinationString.Buffer, DestinationString.MaximumLength);
    goto LABEL_38;
  }
  v8 = 302;
  v30 = 0x800000LL;
  v9 = 0;
  v31 = &v35;
  if ( ((*(_DWORD *)(v4 + 496) - 1) & 0xFFFFFFFD) != 0 )
  {
LABEL_13:
    v18 = g_RegistryPath.Length + 24;
    if ( !v9 )
      goto LABEL_26;
    goto LABEL_14;
  }
  DxgkAcquireAdapterCoreSync(*(_QWORD *)(v6 + 4032), 1, a3);
  v10 = *(unsigned int *)(v4 + 504);
  v11 = *(_QWORD *)(v6 + 4032);
  v16 = WdLogNewEntry5_WdTrace(v13, v12, v14, v15);
  *(_QWORD *)(v16 + 24) = v10;
  *(_QWORD *)(v16 + 32) = v11;
  WdLogGlobalForLineNumber = 2200;
  if ( v11 && (_DWORD)v10 != -1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v34, v11, v10, 1u);
    if ( !v34[0] )
    {
      WdLogSingleEntry1(2LL, -1073741275LL);
      WdLogGlobalForLineNumber = 2212;
LABEL_10:
      CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v34);
      goto LABEL_11;
    }
    v19 = *(_QWORD *)(*(_QWORD *)(v34[0] + 216LL) + 160LL);
    if ( !v19 )
      goto LABEL_10;
    v20 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 104LL))(v19, &v30);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v34);
    if ( v20 >= 0 )
    {
      v17 = (__int64)v31;
      if ( *(_WORD *)v31 )
      {
        v9 = 1;
        for ( i = 0; i < (unsigned __int16)v30 >> 1; ++i )
        {
          if ( *(_WORD *)&v31[2 * i] == 44 )
          {
            v9 = 0;
            break;
          }
        }
      }
    }
  }
LABEL_11:
  DxgkReleaseAdapterCoreSync(*(_QWORD *)(v6 + 4032), 1u, v17);
  if ( *(_DWORD *)(*(_QWORD *)(v4 + 936) + 4LL) == 0x80000000 )
  {
    v8 = v9 != 0 ? 304 : 301;
    goto LABEL_13;
  }
  v18 = g_RegistryPath.Length + 24;
  if ( v9 )
  {
    v8 = 303;
LABEL_14:
    v18 += v30 + 2;
    goto LABEL_26;
  }
  v8 = 300;
LABEL_26:
  v28 = (void *)ExAllocatePool2(256LL, v18, 1953656900LL, a4);
  v22 = v28;
  if ( !____8V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___wil__YA_NAEBV__unique_any_t_V__unique_storage_U__resource_policy_PEAX__A6AXPEAX__E_1_FreePoolWithTag___pool_helpers_PEAX_0ELGHHIEE__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil___0___T_Z(&v28) )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.MaximumLength = v18;
    DestinationString.Buffer = (wchar_t *)v22;
    if ( v9 )
      v23 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 2304, L"%wZ,%u,%wZ", &g_RegistryPath, v8, &v30);
    else
      v23 = RtlUnicodeStringPrintfEx(&DestinationString, 0LL, 2304, L"%wZ,%u", &g_RegistryPath, v8);
    v7 = v23;
    if ( v23 < 0 )
    {
      v24 = v23;
      WdLogSingleEntry1(2LL, v23);
      WdLogGlobalForLineNumber = 5318;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create the default name for a monitor device (Status = 0x%I64x)",
        v24,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_34:
      __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ(&v28);
      return v7;
    }
LABEL_38:
    v28 = 0LL;
    *(_QWORD *)(a2 + 56) = v22;
    __1__unique_storage_U__resource_policy_PEAG__A6AXPEAG__E_1_FreePoolWithTag___pool_helpers_PEAG_0A__details_wil__SAX0_ZU__integral_constant__K_0A__wistd__PEAGPEAG_0A___T_details_wil___details_wil__QEAA_XZ(&v28);
    return 0;
  }
  v7 = -1073741801;
  if ( v22 )
  {
    v32 = v22;
    v33 = DXGQUOTAALLOCATOR<256,1835156294>::operator delete;
    ___invoke_P6AXPEAX__EAEAPEAX_wistd__YAX__QEAP6AXPEAX__EAEAPEAX_Z((__int64 (__fastcall **)(_QWORD))&v33, &v32);
  }
  return v7;
}
