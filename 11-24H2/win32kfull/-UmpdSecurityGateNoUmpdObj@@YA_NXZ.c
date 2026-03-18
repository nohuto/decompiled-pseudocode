/*
 * XREFs of ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1400D8650
 * Callers:
 *     ?GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1400C23E0 (-GrepDoBanding@@YAHAEAVXDCOBJ@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1400D8380 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     NtGdiStartPage @ 0x14020E1B0 (NtGdiStartPage.c)
 *     NtGdiEngCreateBitmap @ 0x1402616D0 (NtGdiEngCreateBitmap.c)
 *     ?bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z @ 0x140268328 (-bEndDocInternal@@YAHAEAVXDCOBJ@@K@Z.c)
 *     ?GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1403268F4 (-GrepStartDoc@@YAHAEAVXDCOBJ@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiEndPage @ 0x140327D80 (NtGdiEndPage.c)
 *     NtGdiEngCreateDeviceSurface @ 0x140339380 (NtGdiEngCreateDeviceSurface.c)
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHXZ @ 0x14026BB50 (-bIsProcessLocalSystem@@YAHXZ.c)
 */

char __fastcall UmpdSecurityGateNoUmpdObj(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  int v4; // eax

  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 4752LL);
  if ( v4 != 2 && (!v4 || !(unsigned int)bIsProcessLocalSystem()) )
    return 1;
  return v3;
}
