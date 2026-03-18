/*
 * XREFs of UsbhGetSerialNumber @ 0x140027A08
 * Callers:
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhGetStringFromDevice @ 0x140026698 (UsbhGetStringFromDevice.c)
 *     UsbhFreeID @ 0x14002796C (UsbhFreeID.c)
 *     UsbhValidateStringDescriptor @ 0x140037B38 (UsbhValidateStringDescriptor.c)
 *     UsbhValidateSerialNumberString @ 0x14005BA78 (UsbhValidateSerialNumberString.c)
 */

__int64 __fastcall UsbhGetSerialNumber(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rax
  _DWORD *v7; // r15
  __int64 Pool2; // rax
  unsigned __int8 *v9; // r14
  int StringFromDevice; // eax
  int v11; // edi
  unsigned int v12; // r12d
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  _WORD *v15; // rsi
  _WORD *v16; // rdi
  unsigned __int64 i; // rcx
  int v18; // edi
  unsigned __int8 v20; // [rsp+30h] [rbp-30h]
  int v21; // [rsp+30h] [rbp-30h]
  int v22; // [rsp+40h] [rbp-20h]
  unsigned __int16 v23[2]; // [rsp+50h] [rbp-10h] BYREF
  int v24; // [rsp+54h] [rbp-Ch] BYREF
  int v25; // [rsp+58h] [rbp-8h]
  int v26; // [rsp+A8h] [rbp+48h]
  char v28; // [rsp+B8h] [rbp+58h] BYREF

  v26 = a2;
  v4 = 0;
  v24 = 0;
  v6 = PdoExt(a2);
  v7 = v6;
  if ( (v6[358] & 0x800) == 0 && *((_BYTE *)v6 + 1416) )
  {
    Pool2 = ExAllocatePool2(64LL, 255LL, 1112885333LL);
    v28 = 0;
    v9 = (unsigned __int8 *)Pool2;
    if ( Pool2 )
    {
      v20 = *((_BYTE *)v7 + 1416);
      v23[0] = 255;
      StringFromDevice = UsbhGetStringFromDevice(a1, a2, (__int64)&v24, Pool2, v23, 0x409u, v20);
      v25 = StringFromDevice;
      v11 = StringFromDevice;
      if ( (StringFromDevice & 0xC0000000) == 0xC0000000 )
      {
        UsbhException(
          a1,
          *((unsigned __int16 *)v7 + 714),
          89LL,
          v9,
          v23[0],
          StringFromDevice,
          v24,
          usbfile_idstring_c,
          1592,
          0);
      }
      else
      {
        v12 = v23[0];
        if ( (unsigned __int8)UsbhValidateStringDescriptor(3221225472LL, v9, v23[0], &v24) )
        {
          if ( *v9 >> 1 != 1 )
          {
            v14 = 2LL * ((*v9 >> 1) - 1);
            v15 = v9 + 2;
            v16 = v9;
            for ( i = v14 >> 1; i; --i )
              *v16++ = *v15++;
            v18 = v25;
            *(_WORD *)&v9[v14] = 0;
            *(_DWORD *)(a3 + 4) = v12;
            *(_QWORD *)(a3 + 8) = v9;
            if ( !(unsigned __int8)UsbhValidateSerialNumberString(a1, v26, a3, (unsigned int)&v24, (__int64)&v28) )
            {
              UsbhException(a1, *((unsigned __int16 *)v7 + 714), 37LL, v9, v12, v18, v24, usbfile_idstring_c, 1657, 0);
              UsbhFreeID(a3);
              if ( v28 )
              {
                v7[705] = 1073807369;
                return (unsigned int)-1073741811;
              }
            }
            return v4;
          }
          v13 = 59LL;
          v22 = 1678;
          v21 = v24;
        }
        else
        {
          v13 = 38LL;
          v22 = 1605;
          v21 = v24;
        }
        UsbhException(a1, *((unsigned __int16 *)v7 + 714), v13, v9, v12, v11, v21, usbfile_idstring_c, v22, 0);
      }
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
    return v4;
  }
  return 0LL;
}
