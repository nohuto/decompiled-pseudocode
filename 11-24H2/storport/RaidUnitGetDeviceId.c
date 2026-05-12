/*
 * XREFs of RaidUnitGetDeviceId @ 0x14009E9BC
 * Callers:
 *     RaUnitQueryIdIrp @ 0x140186B14 (RaUnitQueryIdIrp.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RtlStringCchPrintfW @ 0x140039774 (RtlStringCchPrintfW.c)
 *     StorGetIdentityProductId @ 0x1400A1D18 (StorGetIdentityProductId.c)
 *     StorGetIdentityVendorId @ 0x1400A1D68 (StorGetIdentityVendorId.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     PortGetDeviceType @ 0x1401B85BC (PortGetDeviceType.c)
 *     RaFixupIds @ 0x1401BCFD0 (RaFixupIds.c)
 */

__int64 __fastcall RaidUnitGetDeviceId(__int64 a1, wchar_t **a2)
{
  unsigned int v4; // esi
  wchar_t *Pool; // rbx
  char v6; // cl
  char v7; // al
  __int128 v8; // xmm0
  _QWORD *DeviceType; // rax
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  char v12; // [rsp+38h] [rbp-40h]
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  char v14; // [rsp+50h] [rbp-28h]

  v4 = 0;
  Pool = (wchar_t *)RaidAllocatePool(256LL, 128LL, 1229218130LL, *(_QWORD *)(a1 + 8));
  if ( Pool )
  {
    if ( (*(_DWORD *)(a1 + 1952) & 0x20) != 0 )
    {
      v6 = *(_BYTE *)(a1 + 176);
      v7 = *(_BYTE *)(a1 + 193);
      v11 = *(_QWORD *)(a1 + 168);
      v8 = *(_OWORD *)(a1 + 177);
      v12 = v6;
      v14 = v7;
      v13 = v8;
      RtlStringCchPrintfW(Pool, 0x40uLL, L"NVME\\%hs&Prod_%hs", "ZNSDisk", &v13);
    }
    else
    {
      StorGetIdentityVendorId(a1 + 112, &v11);
      StorGetIdentityProductId(a1 + 112, &v13);
      if ( (*(_DWORD *)(a1 + 1952) & 1) != 0 )
      {
        RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\VMLUN&Ven_%hs&Prod_%hs", &v11, &v13);
      }
      else
      {
        DeviceType = (_QWORD *)PortGetDeviceType(**(_BYTE **)(a1 + 112) & 0x1F);
        RtlStringCchPrintfW(Pool, 0x40uLL, L"SCSI\\%hs&Ven_%hs&Prod_%hs", *DeviceType, &v11, &v13);
      }
    }
    RaFixupIds(Pool, 0LL, 64LL);
  }
  else
  {
    v4 = -1073741801;
  }
  *a2 = Pool;
  return v4;
}
