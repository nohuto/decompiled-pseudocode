/*
 * XREFs of NtGdiGetRealizationInfo @ 0x140260620
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetRealizationInfo@@YA?AV?$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@W4EntryPoint@RFONTOBJ@@@Z @ 0x140165A6C (-GrepGetRealizationInfo@@YA-AV-$ReturnValueTracer@H@@AEAVUDCOBJ@@PEAUtagFONT_REALIZATION_INFO2@@.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiGetRealizationInfo(HDC a1, unsigned int *a2)
{
  __int64 v4; // rdx
  unsigned int *v5; // rax
  SIZE_T v6; // rbx
  __int64 SessionState; // rax
  int v9; // r9d
  unsigned int v10; // edi
  int v11; // [rsp+20h] [rbp-3D8h] BYREF
  _BYTE v12[56]; // [rsp+28h] [rbp-3D0h] BYREF
  _QWORD v13[10]; // [rsp+60h] [rbp-398h] BYREF
  unsigned int Length[204]; // [rsp+B0h] [rbp-348h] BYREF

  memset_0(Length, 0, 0x32CuLL);
  v5 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  Length[0] = *v5;
  v6 = Length[0];
  if ( Length[0] != 16 && Length[0] != 24 && Length[0] != 812 )
    return 0LL;
  SessionState = W32GetSessionState(MmUserProbeAddress, v4);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v12,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( !EUDCCountRegion::IsReady((EUDCCountRegion *)v12) )
  {
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v12);
    return 0LL;
  }
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    v10 = *GrepGetRealizationInfo(&v11, (struct UDCOBJ *)v13, (__int64)Length, v9);
    v6 = Length[0];
  }
  else
  {
    v10 = 0;
  }
  if ( v10 )
  {
    ProbeForWrite(a2, v6, 4u);
    memmove(a2, Length, v6);
  }
  UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v13);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v12);
  return v10;
}
