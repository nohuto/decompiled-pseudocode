/*
 * XREFs of netsetupGetPathForObjectType @ 0x14015CB60
 * Callers:
 *     ?netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z @ 0x14014F894 (-netsetupBuildStorePath@@YAXW4_NETSETUP_OBJECT_TYPE@@W4NetSetupStoreType@@PEA_W@Z.c)
 *     ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x14015C9F0 (-netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetup.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall netsetupGetPathForObjectType(int a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  const wchar_t *result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = a2 - 2;
      if ( !v2 )
        return L"NetAdapters";
      v3 = v2 - 1;
      if ( !v3 )
        return L"NdisFilterDrivers";
      v4 = v3 - 1;
      if ( !v4 )
        return L"NdisProtocolDrivers";
      v5 = v4 - 4;
      if ( !v5 )
        return L"NdisMuxDrivers";
      if ( v5 == 4 )
        return L"NetAdapterDrivers";
    }
    return 0LL;
  }
  else
  {
    switch ( a2 )
    {
      case 2:
        result = L"Interfaces";
        break;
      case 3:
        result = L"Filters";
        break;
      case 4:
        result = L"Protocols";
        break;
      case 5:
        result = L"Services";
        break;
      case 6:
        result = L"Clients";
        break;
      case 8:
        result = L"Muxes";
        break;
      case 11:
        result = L"BindRules";
        break;
      case 12:
        result = L"InterfaceDrivers";
        break;
      default:
        return 0LL;
    }
  }
  return result;
}
