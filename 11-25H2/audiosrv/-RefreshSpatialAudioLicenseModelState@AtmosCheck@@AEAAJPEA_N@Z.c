/*
 * XREFs of ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180054A70
 * Callers:
 *     _lambda_7ee6381ccef9550c878152fb933ee002_::operator() @ 0x1801474BC (_lambda_7ee6381ccef9550c878152fb933ee002_--operator().c)
 *     _lambda_c0f79c7db2a352ac037a8b0fb781f475_::operator() @ 0x180147668 (_lambda_c0f79c7db2a352ac037a8b0fb781f475_--operator().c)
 *     _lambda_ddf72429dfe7e6f051e146c766b7831c_::operator() @ 0x1801477A0 (_lambda_ddf72429dfe7e6f051e146c766b7831c_--operator().c)
 *     _lambda_ed93c361bb151993c0858b3e67bfc06f_::operator() @ 0x1801478EC (_lambda_ed93c361bb151993c0858b3e67bfc06f_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3@Z @ 0x18000170C (--$Write@U-$_tlgWrapperByVal@$00@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x180054E48 (-InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800A7AD4 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800A7FEC (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?InitializeAppServiceMode@AtmosCheck@@AEAAJXZ @ 0x18014827C (-InitializeAppServiceMode@AtmosCheck@@AEAAJXZ.c)
 *     ?InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ @ 0x180148340 (-InitializeLicenseMapLegacy@AtmosCheck@@AEAAXXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180149860 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 *     ?UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ @ 0x180156414 (-UninitializeAppServiceMode@AtmosCheck@@AEAAXXZ.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x180156600 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@Ucase_insensitive_hash@@Ucase_insensitive_equality@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@U?$default_delete@$$BY0A@UEndpointSpecificSpatialTechInfo@AtmosCheck@@@wistd@@@wistd@@@std@@@2@$0A@@std@@@std@@QEAAXXZ @ 0x180156B38 (-clear@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::RefreshSpatialAudioLicenseModelState(AtmosCheck *this, bool *a2)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  char *v4; // r12
  int v5; // eax
  int updated; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r13d
  LPCWCH *v10; // r14
  LPCWCH *v11; // r15
  const WCHAR *v12; // rcx
  const WCHAR *v13; // rax
  const WCHAR *v14; // r8
  const WCHAR *v15; // rax
  LPCWCH v16; // rdx
  __int64 v17; // rbx
  LPCWCH v18; // rdx
  char v19; // cl
  __int64 v21; // rdx
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[7]; // [rsp+31h] [rbp-CFh] BYREF
  LPCWCH lpString2; // [rsp+38h] [rbp-C8h]
  LPCWCH lpString1; // [rsp+40h] [rbp-C0h]
  bool *v26; // [rsp+48h] [rbp-B8h]
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+50h] [rbp-B0h]
  _BYTE v28[16]; // [rsp+60h] [rbp-A0h] BYREF
  char v29; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v26 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v27 = v3;
  v4 = (char *)this + 217;
  v23[0] = *((_BYTE *)this + 217);
  v22 = 0;
  `eh vector constructor iterator'(
    v28,
    0x20uLL,
    7uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::SpatialAudioFormatSubtypeInfo,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  v5 = InitializeSpatialAudioFormatSubtypeInfoArray((struct SpatialAudioFormatSubtypeInfo *)v28, 7, 1);
  updated = v5;
  if ( v5 != 19 )
  {
    if ( v5 < 0 )
    {
      v21 = 2568LL;
    }
    else
    {
      updated = ScanForInstalledSpatialAudioSubtypeAppServices(
                  (struct SpatialAudioFormatSubtypeInfo *)v28,
                  7,
                  (bool *)this + 217,
                  (const struct _tlgProvider_t *)&CallbackContext);
      if ( updated >= 0 )
      {
        v9 = 0;
        v10 = (LPCWCH *)&v29;
        v11 = (LPCWCH *)((char *)this + 304);
        while ( (unsigned __int64)v9 < 7 )
        {
          if ( CompareStringOrdinal(*(v10 - 1), -1, *(v11 - 1), -1, 1) != 2 )
          {
            updated = -2147418113;
            v21 = 2586LL;
            goto LABEL_32;
          }
          v12 = &LocaleName;
          if ( *v11 )
            v12 = *v11;
          v13 = &LocaleName;
          if ( v11[1] )
            v13 = v11[1];
          lpString1 = v13;
          v14 = &LocaleName;
          if ( *v10 )
            v14 = *v10;
          v15 = &LocaleName;
          if ( v10[1] )
            v15 = v10[1];
          lpString2 = v15;
          if ( *((_BYTE *)v11 - 32) != *((_BYTE *)v10 - 16)
            || CompareStringOrdinal(v12, -1, v14, -1, 1) != 2
            || CompareStringOrdinal(lpString1, -1, lpString2, -1, 1) != 2 )
          {
            v22 = 1;
            *((_BYTE *)v11 - 32) = *((_BYTE *)v10 - 16);
            v16 = *v10;
            *v10 = 0LL;
            v17 = 48LL * v9;
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              (char *)this + v17 + 304,
              v16);
            v18 = v10[1];
            v10[1] = 0LL;
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              (char *)this + v17 + 312,
              v18);
          }
          ++v9;
          v11 += 6;
          v10 += 4;
        }
        if ( v23[0] == *v4 )
          goto LABEL_21;
        if ( *v4 )
        {
          std::_Hash<std::_Umap_traits<std::wstring,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>,std::_Uhash_compare<std::wstring,case_insensitive_hash,case_insensitive_equality>,std::allocator<std::pair<std::wstring const,wistd::unique_ptr<AtmosCheck::EndpointSpecificSpatialTechInfo [0],wistd::default_delete<AtmosCheck::EndpointSpecificSpatialTechInfo [0]>>>>,0>>::clear((char *)this + 608);
          updated = AtmosCheck::InitializeAppServiceMode(this);
          if ( updated < 0 )
          {
            v21 = 2636LL;
            goto LABEL_32;
          }
          updated = AtmosCheck::UpdateLicenseMapForAllEndpoints(this);
          if ( updated < 0 )
          {
            v21 = 2637LL;
            goto LABEL_32;
          }
        }
        else
        {
          AtmosCheck::InitializeLicenseMapLegacy(this);
          AtmosCheck::UninitializeAppServiceMode(this);
        }
LABEL_21:
        v19 = v22;
        if ( v26 )
          *v26 = v22;
        if ( (unsigned int)CallbackContext > 5 )
        {
          v23[0] = *v4;
          v22 = v19;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
            (__int64)&CallbackContext,
            (__int64)&unk_1801A7D8F,
            v7,
            v8,
            (__int64)&v22,
            (__int64)v23);
        }
        `eh vector destructor iterator'(
          v28,
          0x20uLL,
          7uLL,
          (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
        if ( v3 )
          LeaveCriticalSection(v3);
        return 0LL;
      }
      v21 = 2570LL;
    }
LABEL_32:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
      (const char *)(unsigned int)updated);
    `eh vector destructor iterator'(
      v28,
      0x20uLL,
      7uLL,
      (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
    if ( v3 )
      LeaveCriticalSection(v3);
    return (unsigned int)updated;
  }
  `eh vector destructor iterator'(
    v28,
    0x20uLL,
    7uLL,
    (void (*)(void *))SpatialAudioFormatSubtypeInfo::~SpatialAudioFormatSubtypeInfo);
  if ( v3 )
    LeaveCriticalSection(v3);
  return 19LL;
}
