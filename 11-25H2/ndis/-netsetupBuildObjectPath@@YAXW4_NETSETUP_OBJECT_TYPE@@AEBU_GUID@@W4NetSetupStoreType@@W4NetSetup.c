/*
 * XREFs of ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x140169940
 * Callers:
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x14014E3A0 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x14014E4E0 (ndisBindReadFilterDriverFromV3Registry.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x14014EDFC (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1401512E4 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x140151474 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1401515E4 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ?Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140154CF0 (-Open@NetSetupKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140167770 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1401692B0 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z @ 0x140169DF0 (-OpenV2InterfaceKey@BindStack@Ndis@@SAJAEBU_GUID@@KW4NetSetupSubkeyType@@AEAVKRegKey@@@Z.c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x140174F20 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 * Callees:
 *     netsetupGetPathForObjectType @ 0x140169AB0 (netsetupGetPathForObjectType.c)
 *     ?netsetupGetSubkeyPath@@YAPEB_WW4NetSetupStoreType@@W4NetSetupSubkeyType@@@Z @ 0x140169B80 (-netsetupGetSubkeyPath@@YAPEB_WW4NetSetupStoreType@@W4NetSetupSubkeyType@@@Z.c)
 */

int __fastcall netsetupBuildObjectPath(__int64 a1, int *a2, unsigned int a3, unsigned int a4, wchar_t *Dst)
{
  unsigned int v6; // r10d
  __int64 SubkeyPath; // rbp
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // r8d
  __int64 PathForObjectType; // r15
  const wchar_t *v12; // r8
  unsigned int v13; // r10d
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-78h]
  int v17; // [rsp+28h] [rbp-70h]
  int v18; // [rsp+30h] [rbp-68h]
  int v19; // [rsp+38h] [rbp-60h]
  int v20; // [rsp+40h] [rbp-58h]
  int v21; // [rsp+48h] [rbp-50h]
  int v22; // [rsp+50h] [rbp-48h]
  int v23; // [rsp+58h] [rbp-40h]
  int v24; // [rsp+60h] [rbp-38h]
  int v25; // [rsp+68h] [rbp-30h]
  int v26; // [rsp+70h] [rbp-28h]
  __int64 v27; // [rsp+78h] [rbp-20h]

  if ( *((_BYTE *)qword_140127138 + 96) && a4 == 3 )
  {
    SubkeyPath = netsetupGetSubkeyPath(1LL, 3LL);
    PathForObjectType = netsetupGetPathForObjectType(v14, v13);
LABEL_9:
    v27 = SubkeyPath;
    v26 = *((unsigned __int8 *)a2 + 15);
    v25 = *((unsigned __int8 *)a2 + 14);
    v24 = *((unsigned __int8 *)a2 + 13);
    v23 = *((unsigned __int8 *)a2 + 12);
    v12 = L"\\Registry\\Machine\\DEVICES\\Networking\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}%ws";
    goto LABEL_6;
  }
  SubkeyPath = netsetupGetSubkeyPath(a3, a4);
  v9 = netsetupGetPathForObjectType(v8, v6);
  PathForObjectType = v9;
  if ( v10 )
  {
    if ( v10 != 1 )
      return v9;
    goto LABEL_9;
  }
  v27 = SubkeyPath;
  v26 = *((unsigned __int8 *)a2 + 15);
  v25 = *((unsigned __int8 *)a2 + 14);
  v24 = *((unsigned __int8 *)a2 + 13);
  v23 = *((unsigned __int8 *)a2 + 12);
  v12 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x%0"
         "2x%02x%02x%02x}%ws";
LABEL_6:
  v22 = *((unsigned __int8 *)a2 + 11);
  v21 = *((unsigned __int8 *)a2 + 10);
  v20 = *((unsigned __int8 *)a2 + 9);
  v19 = *((unsigned __int8 *)a2 + 8);
  v18 = *((unsigned __int16 *)a2 + 3);
  v17 = *((unsigned __int16 *)a2 + 2);
  v16 = *a2;
  LODWORD(v9) = swprintf_s(
                  Dst,
                  0x100uLL,
                  v12,
                  PathForObjectType,
                  v16,
                  v17,
                  v18,
                  v19,
                  v20,
                  v21,
                  v22,
                  v23,
                  v24,
                  v25,
                  v26,
                  v27);
  return v9;
}
