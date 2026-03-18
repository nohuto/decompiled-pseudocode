/*
 * XREFs of ?DdcciGetCapabilitiesStringFromRegistry@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140265160
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ @ 0x140205138 (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AEAAJXZ.c)
 * Callees:
 *     ?DDCCIFreeMemory@@YAXPEAX@Z @ 0x140205248 (-DDCCIFreeMemory@@YAXPEAX@Z.c)
 *     ?ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AEAAJPEADKPEBGK@Z @ 0x1403220F0 (-ConvertUnicodeDDCCICapabilitiesStringToASCIIString@CPhysicalMonitorHandle@@AEAAJPEADKPEBGK@Z.c)
 */

__int64 __fastcall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromRegistry(PDEVICE_OBJECT *this)
{
  char *v1; // rsi
  __int64 Pool2; // r14
  NTSTATUS v4; // ebx
  NTSTATUS v5; // eax
  ULONG Length; // ebx
  unsigned int v7; // edi
  char *v8; // rax
  CPhysicalMonitorHandle *v9; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+70h] [rbp+30h] BYREF
  ULONG v13; // [rsp+78h] [rbp+38h] BYREF
  void *DeviceRegKey; // [rsp+80h] [rbp+40h] BYREF

  DeviceRegKey = 0LL;
  v1 = 0LL;
  Pool2 = 0LL;
  v4 = IoOpenDeviceRegistryKey(this[2], 2u, 1u, &DeviceRegKey);
  if ( v4 >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"CapabilitiesString");
    ResultLength = 0;
    v5 = ZwQueryValueKey(DeviceRegKey, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength);
    v4 = v5;
    if ( v5 == -1073741789 )
    {
      if ( ResultLength + 16 < ResultLength )
      {
        v4 = -1073741675;
        goto LABEL_20;
      }
      Length = ResultLength + 16;
      Pool2 = ExAllocatePool2(258LL, ResultLength + 16, 1664248135LL);
      if ( !Pool2 )
        goto LABEL_5;
      v13 = 0;
      v4 = ZwQueryValueKey(DeviceRegKey, &DestinationString, KeyValuePartialInformation, (PVOID)Pool2, Length, &v13);
      if ( v4 < 0 )
        goto LABEL_20;
      if ( *(_DWORD *)(Pool2 + 4) == 1 )
      {
        v7 = *(_DWORD *)(Pool2 + 8) >> 1;
        v8 = (char *)ExAllocatePool2(258LL, v7, 1664248135LL);
        v1 = v8;
        if ( v8 )
        {
          v4 = CPhysicalMonitorHandle::ConvertUnicodeDDCCICapabilitiesStringToASCIIString(
                 v9,
                 v8,
                 v7,
                 (const unsigned __int16 *)(Pool2 + 12),
                 v7);
          if ( v4 >= 0 )
          {
            this[10] = (PDEVICE_OBJECT)v1;
            v1 = 0LL;
            *((_DWORD *)this + 22) = v7;
          }
          goto LABEL_20;
        }
LABEL_5:
        v4 = -1073741801;
LABEL_20:
        ZwClose(DeviceRegKey);
        goto LABEL_21;
      }
    }
    else if ( v5 < 0 )
    {
      if ( v5 != -1073741822 && v5 != -1073741816 && v5 != -1073741811 && v5 != -1073741801 && v5 != -1073741790 )
        v4 = 1612644351;
      goto LABEL_20;
    }
    v4 = -1073741823;
    goto LABEL_20;
  }
LABEL_21:
  DDCCIFreeMemory((void *)Pool2);
  DDCCIFreeMemory(v1);
  return (unsigned int)v4;
}
