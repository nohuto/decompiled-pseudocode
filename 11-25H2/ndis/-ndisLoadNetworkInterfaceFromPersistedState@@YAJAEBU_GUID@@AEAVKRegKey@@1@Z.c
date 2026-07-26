/*
 * XREFs of ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x140167650
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x14008CAF0 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x14014EDFC (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 * Callees:
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140049A90 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x140099100 (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1400D4850 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x140168750 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 */

__int64 __fastcall ndisLoadNetworkInterfaceFromPersistedState(
        struct _GUID *a1,
        struct KRegKey *this,
        struct KRegKey *a3)
{
  int NetworkInterfaceV2; // edi
  unsigned int v5; // r8d
  __int64 v7; // rax
  struct _GUID v8; // [rsp+20h] [rbp-79h] BYREF
  struct KRegKey v9[2]; // [rsp+30h] [rbp-69h] BYREF
  __int16 v10; // [rsp+40h] [rbp-59h]
  __int64 v11; // [rsp+48h] [rbp-51h]
  int v12; // [rsp+50h] [rbp-49h]
  __int128 v13; // [rsp+54h] [rbp-45h]
  __int64 v14; // [rsp+64h] [rbp-35h]
  int v15; // [rsp+6Ch] [rbp-2Dh]
  __int128 v16; // [rsp+70h] [rbp-29h]
  __int128 v17; // [rsp+80h] [rbp-19h]
  __int16 v18; // [rsp+90h] [rbp-9h]
  __int128 v19; // [rsp+92h] [rbp-7h]
  __int128 v20; // [rsp+A2h] [rbp+9h]
  int v21; // [rsp+B2h] [rbp+19h]
  __int16 v22; // [rsp+B6h] [rbp+1Dh]
  __int64 v23; // [rsp+B8h] [rbp+1Fh]
  int v24; // [rsp+C0h] [rbp+27h]

  *(_OWORD *)&v9[0].m_ptr = 0LL;
  v10 = 0;
  v12 = 0;
  v11 = 0LL;
  v14 = 0LL;
  v15 = 0;
  v18 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0LL;
  v24 = 0;
  v13 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  NetworkInterfaceV2 = Ndis::BindRegistry::ReadNetworkInterfaceV2(
                         this,
                         a3,
                         v9,
                         (struct NdisNetworkInterfacePersistedState *)a3);
  if ( NetworkInterfaceV2 >= 0 )
  {
    v7 = v13 - *(_QWORD *)&ndisDefaultNetworkGuid.Data1;
    if ( (_QWORD)v13 == *(_QWORD *)&ndisDefaultNetworkGuid.Data1 )
      v7 = *((_QWORD *)&v13 + 1) - *(_QWORD *)ndisDefaultNetworkGuid.Data4;
    if ( !v7 )
      v13 = (__int128)*ndisIfGetDefaultNetworkGuid(&v8);
    if ( (unsigned int)ndisIfCreateInterfaceFromPersistentStore(a1, (struct NdisNetworkInterfacePersistedState *)v9, v5) )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v9[1].m_ptr, 0LL);
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v9[0].m_ptr, 0LL);
      return 3221225473LL;
    }
    else
    {
      NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState(&v9[0].m_ptr);
      return 0LL;
    }
  }
  else
  {
    NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState(&v9[0].m_ptr);
    return (unsigned int)NetworkInterfaceV2;
  }
}
