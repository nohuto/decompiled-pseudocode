/*
 * XREFs of ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x140146924
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___ @ 0x140144898 (netsetupEnumerateObjectIds__lambda_5d80e7093cc36aceb5a46cb23d7a8b09___.c)
 *     netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___ @ 0x1401449F0 (netsetupEnumerateObjectIds__lambda_7c777a259d431027593b89f579a3c058___.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x140052980 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ??0ProtocolBindProperties@@QEAA@$$QEAU0@@Z @ 0x1400C65C4 (--0ProtocolBindProperties@@QEAA@$$QEAU0@@Z.c)
 *     ??1ProtocolBindProperties@@QEAA@XZ @ 0x1400C6734 (--1ProtocolBindProperties@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?grow@?$KArray@UProtocolBindProperties@@$00@Rtl@@AEAA_N_K@Z @ 0x1401455B4 (-grow@-$KArray@UProtocolBindProperties@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ndisBlowStringListIntoAtoms @ 0x140145B08 (ndisBlowStringListIntoAtoms.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x14015BF20 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015C650 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x14015C750 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x14015C9F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisReadProtocolById(unsigned int a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  _QWORD *v4; // rbx
  KRegKey v6; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey *v7; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v8; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v9; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v10[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v11; // [rsp+60h] [rbp-A0h]
  _DWORD v12[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v13; // [rsp+70h] [rbp-90h]
  bool v14; // [rsp+78h] [rbp-88h] BYREF
  int v15; // [rsp+7Ch] [rbp-84h]
  wchar_t pszSrc[256]; // [rsp+80h] [rbp-80h] BYREF

  v2 = *a2;
  v9 = 0LL;
  v10[0] = 0;
  v10[1] = 0;
  v11 = 0LL;
  v12[0] = 0;
  v12[1] = 0;
  v13 = 0LL;
  v15 = 0;
  v6.m_ptr = 0LL;
  v14 = 0;
  v8 = v2;
  netsetupBuildObjectPath(4LL, a2, a1);
  v3 = KRegKey::Open(&v6, 1u, pszSrc, 0LL);
  if ( !v3 )
  {
    v7 = &v6;
    v3 = ndisBlowStringListIntoAtoms(
           (NetSetupPropertyBag *)&v7,
           (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_LowerRange,
           (__int64)v10);
    if ( !v3 )
    {
      v3 = ndisBlowStringListIntoAtoms(
             (NetSetupPropertyBag *)&v7,
             (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_LowerExclude,
             (__int64)v12);
      if ( !v3 )
      {
        v3 = NetSetupPropertyBag::ReadString(&v7, &NETSETUPPKEY_Driver_BindName, &v9);
        if ( !v3 )
        {
          v3 = NetSetupPropertyBag::ReadBoolean(
                 (NetSetupPropertyBag *)&v7,
                 (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_DefaultDisabled,
                 &v14);
          if ( !v3 )
          {
            v4 = qword_14011D088;
            if ( Rtl::KArray<ProtocolBindProperties,1>::grow(
                   (unsigned int *)qword_14011D088 + 6,
                   (unsigned int)(*((_DWORD *)qword_14011D088 + 7) + 1)) )
            {
              ProtocolBindProperties::ProtocolBindProperties(
                v4[4] + ((unsigned __int64)*((unsigned int *)v4 + 7) << 6),
                (__int64)&v8);
              ++*((_DWORD *)v4 + 7);
              v3 = 0;
            }
            else
            {
              v3 = -1073741670;
            }
          }
        }
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v6.m_ptr);
  ProtocolBindProperties::~ProtocolBindProperties((ProtocolBindProperties *)&v8);
  return v3;
}
