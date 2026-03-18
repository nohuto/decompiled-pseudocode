/*
 * XREFs of UsbhParseConfigurationDescriptorEx @ 0x140040E9C
 * Callers:
 *     UsbhGetDeviceInformation @ 0x140027C88 (UsbhGetDeviceInformation.c)
 *     UsbhConfigureUsbHub @ 0x14003A328 (UsbhConfigureUsbHub.c)
 *     FindMidiInterfaceDescriptor @ 0x140045014 (FindMidiInterfaceDescriptor.c)
 * Callees:
 *     UsbhParseDescriptors @ 0x140040FE0 (UsbhParseDescriptors.c)
 */

unsigned __int64 __fastcall UsbhParseConfigurationDescriptorEx(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v14; // rax
  unsigned __int8 *v15; // rcx
  unsigned __int64 v16; // rax

  v8 = 0LL;
  v9 = a2 + *(unsigned __int16 *)(a2 + 2);
  do
  {
    v14 = UsbhParseDescriptors(a1, a2, *(unsigned __int16 *)(a2 + 2), a3, 4);
    v15 = (unsigned __int8 *)v14;
    if ( !v14 )
      break;
    v8 = v14;
    if ( a4 != -1 )
    {
      if ( v9 < v14 || (v16 = v9 - v14, (__int64)(v9 - v8) > 0xFFFF) || v16 < 3 || *(unsigned __int8 *)(v8 + 2) != a4 )
        v8 = 0LL;
    }
    if ( a6 != -1
      && (v9 < (unsigned __int64)v15
       || (__int64)(v9 - (_QWORD)v15) > 0xFFFF
       || v9 - (unsigned __int64)v15 < 6
       || v15[5] != a6) )
    {
      v8 = 0LL;
    }
    if ( a7 != -1
      && (v9 < (unsigned __int64)v15
       || (__int64)(v9 - (_QWORD)v15) > 0xFFFF
       || v9 - (unsigned __int64)v15 < 7
       || v15[6] != a7) )
    {
      v8 = 0LL;
    }
    if ( a8 != -1
      && (v9 < (unsigned __int64)v15
       || (__int64)(v9 - (_QWORD)v15) > 0xFFFF
       || v9 - (unsigned __int64)v15 < 8
       || v15[7] != a8) )
    {
      v8 = 0LL;
    }
    a3 = (_DWORD)v15 + *v15;
    if ( v8 )
      break;
  }
  while ( *v15 );
  return v8;
}
