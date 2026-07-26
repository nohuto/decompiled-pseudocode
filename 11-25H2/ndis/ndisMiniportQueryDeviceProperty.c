/*
 * XREFs of ndisMiniportQueryDeviceProperty @ 0x140170C40
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401706C0 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqD @ 0x140026FA0 (WPP_RECORDER_SF_qqD.c)
 *     ??$?0$00X@?$unique_ptr@VInterfaceProfileKnobCollection@@U?$KFreePool@VInterfaceProfileKnobCollection@@@@@wistd@@QEAA@PEAVInterfaceProfileKnobCollection@@@Z @ 0x140028B00 (--$-0$00X@-$unique_ptr@VInterfaceProfileKnobCollection@@U-$KFreePool@VInterfaceProfileKnobCollec.c)
 *     WdmlibRtlInitUnicodeStringEx @ 0x14008C460 (WdmlibRtlInitUnicodeStringEx.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ??$?0$00X@?$unique_ptr@VRegistryKnobCollection@@U?$KFreePool@VRegistryKnobCollection@@@@@wistd@@QEAA@$$T@Z @ 0x140097B70 (--$-0$00X@-$unique_ptr@VRegistryKnobCollection@@U-$KFreePool@VRegistryKnobCollection@@@@@wistd@@.c)
 */

__int64 __fastcall ndisMiniportQueryDeviceProperty(__int64 a1, DEVICE_REGISTRY_PROPERTY a2, PUNICODE_STRING *a3)
{
  DEVICE_REGISTRY_PROPERTY v4; // edi
  char v5; // bp
  _DEVICE_OBJECT *v6; // r14
  unsigned int DeviceProperty; // ebx
  unsigned __int64 v8; // rdx
  _OWORD *Pool2; // rax
  PUNICODE_STRING v10; // rbx
  NTSTATUS inited; // edi
  unsigned __int16 v13; // r9
  ULONG BufferLength; // [rsp+78h] [rbp+10h] BYREF
  PUNICODE_STRING DestinationString; // [rsp+80h] [rbp+18h] BYREF

  v4 = a2;
  v5 = a1;
  *a3 = 0LL;
  switch ( a2 )
  {
    case DevicePropertyDeviceDescription:
    case DevicePropertyClassName:
    case DevicePropertyClassGuid:
    case DevicePropertyDriverKeyName:
    case DevicePropertyManufacturer:
    case DevicePropertyFriendlyName:
    case DevicePropertyLocationInformation:
    case DevicePropertyPhysicalDeviceObjectName:
    case DevicePropertyEnumeratorName:
      v6 = *(_DEVICE_OBJECT **)(a1 + 3832);
      BufferLength = 0;
      DeviceProperty = IoGetDeviceProperty(v6, a2, 0, 0LL, &BufferLength);
      if ( (int)(DeviceProperty + 0x80000000) >= 0 && DeviceProperty != -1073741789 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqD(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x10u,
            (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
            v5,
            (char)v6,
            DeviceProperty);
        return DeviceProperty;
      }
      v8 = BufferLength + 16LL;
      if ( v8 >= BufferLength )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(64LL, v8, 1851868238);
        if ( Pool2 )
        {
          *Pool2 = 0LL;
          wistd::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>::unique_ptr<InterfaceProfileKnobCollection,KFreePool<InterfaceProfileKnobCollection>>(
            (__int64)&DestinationString,
            (__int64)Pool2);
        }
        else
        {
          wistd::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>::unique_ptr<RegistryKnobCollection,KFreePool<RegistryKnobCollection>>(&DestinationString);
        }
        v10 = DestinationString;
        if ( !DestinationString )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x12u,
              (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
              v5,
              v6);
          wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&DestinationString, 0LL);
          return 3221225626LL;
        }
        inited = IoGetDeviceProperty(v6, v4, BufferLength, &DestinationString[1], &BufferLength);
        if ( inited < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          {
LABEL_29:
            wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&DestinationString, 0LL);
            return (unsigned int)inited;
          }
          v13 = 19;
        }
        else
        {
          inited = WdmlibRtlInitUnicodeStringEx(v10, (PCWSTR)&v10[1]);
          if ( inited >= 0 )
          {
            *a3 = v10;
            return 0LL;
          }
          if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
            goto LABEL_29;
          v13 = 20;
        }
        WPP_RECORDER_SF_qqD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          v13,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          v5,
          (char)v6,
          inited);
        goto LABEL_29;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x11u,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          v5,
          v6);
      return 3221225621LL;
    default:
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          13,
          15,
          (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
          a1);
      }
      return 3221225485LL;
  }
}
