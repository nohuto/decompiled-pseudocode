/*
 * XREFs of UsbhGetProductIdString @ 0x1C00507E0
 * Callers:
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0055540 (UsbhPdoPnp_QueryDeviceText.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhFreeID @ 0x1C00503BC (UsbhFreeID.c)
 *     UsbhLanguageSupported @ 0x1C0050C20 (UsbhLanguageSupported.c)
 *     UsbhValidateStringDescriptor @ 0x1C00530B4 (UsbhValidateStringDescriptor.c)
 *     UsbhGetStringFromDevice @ 0x1C0054830 (UsbhGetStringFromDevice.c)
 */

__int64 __fastcall UsbhGetProductIdString(__int64 a1, __int64 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // r13
  unsigned __int8 *Pool2; // rbx
  int StringFromDevice; // edi
  __int64 v13; // rcx
  int v14; // r15d
  void *v15; // rcx
  unsigned int v16; // eax
  _WORD *v17; // rsi
  _WORD *v18; // rdi
  __int64 i; // rcx
  char v20; // [rsp+30h] [rbp-58h]
  int v21[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int16 v22; // [rsp+A8h] [rbp+20h] BYREF

  v21[0] = 0;
  v9 = PdoExt(a2);
  if ( *(_QWORD *)(a4 + 8) && *(_WORD *)a4 == a3 )
    return 0LL;
  if ( !(unsigned __int8)UsbhLanguageSupported(v8, a2, a3) )
    return 3221225659LL;
  UsbhFreeID(a4);
  Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, 255LL, 1112885333LL);
  if ( Pool2 )
  {
    v20 = *((_BYTE *)v9 + 1415);
    v22 = 255;
    StringFromDevice = UsbhGetStringFromDevice(a1, a2, (unsigned int)v21, (_DWORD)Pool2, (__int64)&v22, a3, v20);
    v13 = StringFromDevice & 0xC0000000;
    if ( (_DWORD)v13 == -1073741824 || (v14 = v22, !(unsigned __int8)UsbhValidateStringDescriptor(v13, Pool2, v22, v21)) )
    {
      UsbhException(a1, *((_WORD *)v9 + 714), 0x26u, Pool2, v22, StringFromDevice, v21[0], usbfile_idstring_c, 1814, 0);
      v15 = Pool2;
    }
    else
    {
      v15 = Pool2;
      v16 = (*Pool2 >> 1) - 1;
      if ( *Pool2 >> 1 != 1 )
      {
        v17 = Pool2 + 2;
        v18 = Pool2;
        for ( i = v16; i; --i )
          *v18++ = *v17++;
        *(_WORD *)&Pool2[2 * v16] = 0;
        *(_DWORD *)(a4 + 4) = v14;
        *(_QWORD *)(a4 + 8) = Pool2;
        *(_WORD *)a4 = a3;
        return 0LL;
      }
    }
    ExFreePoolWithTag(v15, 0);
    return 3221225659LL;
  }
  return 3221225626LL;
}
