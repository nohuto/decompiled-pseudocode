/*
 * XREFs of ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1401512E4
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___ @ 0x14014F400 (netsetupEnumerateObjectIds__lambda_4b6b787b7067933e1bc6a008e906fab6___.c)
 *     netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___ @ 0x14014F808 (netsetupEnumerateObjectIds__lambda_db34444a9d2aed31789eacdbaf52f617___.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AJPEAX@Z$1?ZwClose@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14006D500 (--1-$unique_storage@U-$resource_policy@PEAXP6AJPEAX@Z$1-ZwClose@@YAJ0@ZU-$integral_constant@_K$0.c)
 *     ??1LwfBindProperties@@QEAA@XZ @ 0x1400CD6E0 (--1LwfBindProperties@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?insertSorted@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@Z@Z @ 0x14015038C (-insertSorted@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@.c)
 *     ndisBlowStringListIntoAtoms @ 0x1401507C8 (ndisBlowStringListIntoAtoms.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x140150CD8 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEB_WPEAX@Z @ 0x140168E70 (-Open@KRegKey@@QEAAJKPEB_WPEAX@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1401696A0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x140169940 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 */

__int64 __fastcall ndisReadLwfById(unsigned int a1, __int128 *a2)
{
  __int128 v2; // xmm0
  unsigned int FilterAltitude; // ebx
  char *v4; // rcx
  bool v6; // [rsp+30h] [rbp-D0h] BYREF
  KRegKey v7; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v9; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v10[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v11[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v12; // [rsp+80h] [rbp-80h] BYREF
  bool v13; // [rsp+84h] [rbp-7Ch] BYREF
  int v14; // [rsp+88h] [rbp-78h]
  wchar_t pszSrc[128]; // [rsp+90h] [rbp-70h] BYREF

  v2 = *a2;
  v10[0] = 0LL;
  v10[1] = 0LL;
  v11[0] = 0LL;
  v11[1] = 0LL;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v9 = v2;
  v7.m_ptr = 0LL;
  netsetupBuildObjectPath(3LL, a2, a1);
  FilterAltitude = KRegKey::Open(&v7, 1u, pszSrc, 0LL);
  if ( !FilterAltitude )
  {
    v8[0] = &v7;
    FilterAltitude = ndisBlowStringListIntoAtoms(
                       (NetSetupPropertyBag *)v8,
                       (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_BottomRange,
                       (__int64)v10);
    if ( !FilterAltitude )
    {
      FilterAltitude = ndisBlowStringListIntoAtoms(
                         (NetSetupPropertyBag *)v8,
                         (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_BottomExclude,
                         (__int64)v11);
      if ( !FilterAltitude )
      {
        FilterAltitude = ndisGetFilterAltitude((struct NetSetupPropertyBag *)v8, &v12);
        if ( !FilterAltitude )
        {
          FilterAltitude = NetSetupPropertyBag::ReadBoolean(
                             (NetSetupPropertyBag *)v8,
                             (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Bind_DefaultDisabled,
                             &v13);
          if ( !FilterAltitude )
          {
            v6 = 0;
            NetSetupPropertyBag::ReadBoolean(
              (NetSetupPropertyBag *)v8,
              (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_FilterDriver_IsMonitoring,
              &v6);
            if ( v6 )
              v4 = (char *)qword_140127138 + 56;
            else
              v4 = (char *)qword_140127138 + 40;
            FilterAltitude = -1073741670;
            if ( Rtl::KArray<LwfBindProperties,1>::insertSorted((__int64)v4, (__int64)&v9) )
              FilterAltitude = 0;
          }
        }
      }
    }
  }
  wil::details::unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,long (*)(void *),&long ZwClose(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&v7.m_ptr);
  LwfBindProperties::~LwfBindProperties((LwfBindProperties *)&v9);
  return FilterAltitude;
}
