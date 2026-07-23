/*
 * XREFs of _MapCmDevicePropertyToRegValue @ 0x140436300
 * Callers:
 *     _CmSetDeviceRegPropWorker @ 0x14097BFD0 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall MapCmDevicePropertyToRegValue(__int64 a1, int a2)
{
  const wchar_t *result; // rax

  switch ( a2 )
  {
    case 2:
      return L"HardwareID";
    case 10:
      return L"Driver";
    case 11:
      return L"ConfigFlags";
  }
  switch ( a2 )
  {
    case 1:
      result = L"DeviceDesc";
      break;
    case 3:
      result = L"CompatibleIDs";
      break;
    case 5:
      result = L"Service";
      break;
    case 8:
      result = L"Class";
      break;
    case 9:
      result = L"ClassGUID";
      break;
    case 12:
      result = L"Mfg";
      break;
    case 13:
      result = L"FriendlyName";
      break;
    case 14:
      result = L"LocationInformation";
      break;
    case 16:
      result = L"Capabilities";
      break;
    case 17:
      result = L"UINumber";
      break;
    case 18:
      result = L"UpperFilters";
      break;
    case 19:
      result = L"LowerFilters";
      break;
    case 24:
      result = L"Security";
      break;
    case 26:
      result = L"DeviceType";
      break;
    case 27:
      result = L"Exclusive";
      break;
    case 28:
      result = L"DeviceCharacteristics";
      break;
    case 29:
      result = L"Address";
      break;
    case 30:
      result = L"UINumberDescFormat";
      break;
    case 34:
      result = L"RemovalPolicy";
      break;
    case 37:
      result = L"ContainerID";
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
