/*
 * XREFs of ?UmpdSecurityGateNoUmpdObj@@YA_NXZ @ 0x1C0275DA8
 * Callers:
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0274AA8 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0275974 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0275DF4 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C0277AA0 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C0278660 (NtGdiStartPage.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B7140 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     NtGdiEngCreateBitmap @ 0x1C02C8B30 (NtGdiEngCreateBitmap.c)
 *     NtGdiEngCreateDeviceSurface @ 0x1C02C8DF0 (NtGdiEngCreateDeviceSurface.c)
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0288910 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

char __fastcall UmpdSecurityGateNoUmpdObj(Gre::Base *a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  struct _EPROCESS *CurrentProcess; // rax

  v1 = 0;
  v3 = *((unsigned int *)Gre::Base::Globals(a1) + 1628);
  if ( (_DWORD)v3 != 2 )
  {
    if ( !(_DWORD)v3 )
      return 1;
    CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v3, v2, v4);
    if ( !(unsigned int)bIsProcessLocalSystem(CurrentProcess) )
      return 1;
  }
  return v1;
}
