/*
 * XREFs of UsbhParseConfigurationDescriptorEx @ 0x1C0031F38
 * Callers:
 *     UsbhConfigureUsbHub @ 0x1C0029DB0 (UsbhConfigureUsbHub.c)
 *     UsbhGetDeviceInformation @ 0x1C00382CC (UsbhGetDeviceInformation.c)
 * Callees:
 *     UsbhParseDescriptors @ 0x1C0032074 (UsbhParseDescriptors.c)
 */

unsigned __int64 __fastcall UsbhParseConfigurationDescriptorEx(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 v13; // rax
  _BYTE *v14; // rcx
  unsigned __int64 v15; // rax

  v8 = 0LL;
  v9 = a2 + *(unsigned __int16 *)(a2 + 2);
  do
  {
    v13 = UsbhParseDescriptors(a1, a2, *(unsigned __int16 *)(a2 + 2));
    v14 = (_BYTE *)v13;
    if ( !v13 )
      break;
    v8 = v13;
    if ( a4 != -1 )
    {
      if ( v9 < v13
        || (v15 = v9 - v13, (__int64)(v9 - (_QWORD)v14) > 0xFFFF)
        || v15 < 3
        || (unsigned __int8)v14[2] != a4 )
      {
        v8 = 0LL;
      }
    }
    if ( a6 != -1
      && (v9 < (unsigned __int64)v14
       || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
       || v9 - (unsigned __int64)v14 < 6
       || (unsigned __int8)v14[5] != a6) )
    {
      v8 = 0LL;
    }
    if ( a7 != -1
      && (v9 < (unsigned __int64)v14
       || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
       || v9 - (unsigned __int64)v14 < 7
       || (unsigned __int8)v14[6] != a7) )
    {
      v8 = 0LL;
    }
    if ( a8 != -1
      && (v9 < (unsigned __int64)v14
       || (__int64)(v9 - (_QWORD)v14) > 0xFFFF
       || v9 - (unsigned __int64)v14 < 8
       || (unsigned __int8)v14[7] != a8) )
    {
      v8 = 0LL;
    }
  }
  while ( !v8 && *v14 );
  return v8;
}
