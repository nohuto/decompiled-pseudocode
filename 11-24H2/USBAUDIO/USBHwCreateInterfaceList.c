/*
 * XREFs of USBHwCreateInterfaceList @ 0x14003526C
 * Callers:
 *     USBHwSelectAudioConfiguration @ 0x140035968 (USBHwSelectAudioConfiguration.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x14002D688 (USBHwAllocateAndBag.c)
 *     USBParseCreateInterfaceList @ 0x140037058 (USBParseCreateInterfaceList.c)
 *     USBParseCreateMIDLegacyInterfaceList @ 0x1400371DC (USBParseCreateMIDLegacyInterfaceList.c)
 */

__int64 __fastcall USBHwCreateInterfaceList(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  int v5; // r8d
  int v6; // ecx
  struct _USB_CONFIGURATION_DESCRIPTOR *v7; // rcx
  int MIDLegacyInterfaceList; // eax
  PVOID v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v10 = 0LL;
  v4 = *(_QWORD *)(v2 + 72);
  v5 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 40) + 4LL);
  if ( (_BYTE)v5 )
  {
    v6 = USBHwAllocateAndBag(&v10, 16 * (v5 + 1), 64LL, *(void **)(a1 + 8));
    if ( v6 >= 0 )
    {
      v7 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v4 + 40);
      if ( *(_BYTE *)(v4 + 5) )
        MIDLegacyInterfaceList = USBParseCreateMIDLegacyInterfaceList(v7);
      else
        MIDLegacyInterfaceList = USBParseCreateInterfaceList(v7);
      v6 = MIDLegacyInterfaceList;
      if ( MIDLegacyInterfaceList >= 0 )
        *a2 = v10;
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v6;
}
