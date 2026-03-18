/*
 * XREFs of UsbhBuildCompatibleID @ 0x14001BCD8
 * Callers:
 *     UsbhCreatePdo @ 0x14001A420 (UsbhCreatePdo.c)
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhMakeId @ 0x14001BA60 (UsbhMakeId.c)
 *     UsbhBuildDeviceCompatibleID @ 0x140035D4C (UsbhBuildDeviceCompatibleID.c)
 *     UsbhBuildClassCompatibleID @ 0x140058F70 (UsbhBuildClassCompatibleID.c)
 */

__int64 __fastcall UsbhBuildCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  char *Id; // rax
  int v10; // edx
  __int64 Pool2; // rax
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = 0;
  if ( (UsbhLogMask & 0x1000) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 1145660259;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = 0LL;
      }
    }
  }
  if ( !a2 )
  {
    Id = UsbhMakeId(0, L"USB\\UNKNOWN", 0LL, &v12, 2u, 0, 0, 0LL);
    if ( Id )
    {
      *(_QWORD *)(a3 + 8) = Id;
      *(_DWORD *)(a3 + 4) = v12;
      return 0LL;
    }
    return 3221225626LL;
  }
  v10 = PdoExt(a2)[355];
  if ( (v10 & 0x40) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 68LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_OWORD *)Pool2 = xmmword_140069DC0;
      *(_OWORD *)(Pool2 + 16) = xmmword_140069DD0;
      *(_OWORD *)(Pool2 + 32) = xmmword_140069DE0;
      *(_OWORD *)(Pool2 + 48) = xmmword_140069DF0;
      *(_DWORD *)(Pool2 + 64) = 0;
      *(_QWORD *)(a3 + 8) = Pool2;
      *(_DWORD *)(a3 + 4) = 68;
      return 0LL;
    }
    return 3221225626LL;
  }
  if ( (v10 & 0x20) != 0 )
    return UsbhBuildDeviceCompatibleID(a1, a2, a3);
  else
    return UsbhBuildClassCompatibleID(a1, a2, a3);
}
