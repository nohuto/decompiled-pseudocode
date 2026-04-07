/*
 * XREFs of ??$GetFirstNonNull@VCLegacyNonClientBackground@@VCSpriteVisual@@VCAccent@@VCSystemBackdropVisual@@@CTopLevelWindow@@AEAAPEAVCVisual@@PEAVCLegacyNonClientBackground@@PEAVCSpriteVisual@@PEAVCAccent@@PEAVCSystemBackdropVisual@@@Z @ 0x180083808
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180063124 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CTopLevelWindow::GetFirstNonNull<CLegacyNonClientBackground,CSpriteVisual,CAccent,CSystemBackdropVisual>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 *v5; // rax
  _QWORD v7[4]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF

  v7[3] = a5;
  v5 = v7;
  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  while ( v5 != &v8 )
  {
    if ( *v5 )
      return *v5;
    ++v5;
  }
  return 0LL;
}
