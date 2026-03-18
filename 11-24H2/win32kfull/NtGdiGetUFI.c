/*
 * XREFs of NtGdiGetUFI @ 0x140261040
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ?GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoint@RFONTOBJ@@@Z @ 0x1401DA444 (-GrepGetUFI@@YAHAEAVUDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@PEAUtagDESIGNVECTOR@@PEAK33PEAPEAXW4EntryPoi.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiGetUFI(HDC a1, void *a2, void *a3, _DWORD *a4, ULONG64 a5, ULONG64 a6)
{
  int v10; // r15d
  unsigned int v11; // r14d
  int v12; // r13d
  __int64 v13; // rdx
  int v14; // ecx
  __int64 SessionState; // rax
  unsigned int UFI; // ebx
  _DWORD *v17; // rcx
  ULONG64 v18; // rax
  _DWORD *v19; // rcx
  int v21; // [rsp+40h] [rbp-148h] BYREF
  size_t Size; // [rsp+44h] [rbp-144h] BYREF
  _QWORD Src[2]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v24[10]; // [rsp+60h] [rbp-128h] BYREF
  _BYTE v25[64]; // [rsp+B0h] [rbp-D8h] BYREF
  _BYTE v26[80]; // [rsp+F0h] [rbp-98h] BYREF

  Src[0] = 0LL;
  v10 = 0;
  v21 = 0;
  memset_0(v26, 0, 0x48uLL);
  v11 = 0;
  Size = 0LL;
  v12 = 0;
  SessionState = W32GetSessionState(v14, v13);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v25,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v25) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v24, a1);
    if ( v24[0] )
    {
      UFI = GrepGetUFI((struct UDCOBJ *)v24, Src, v26, &Size, (_DWORD *)&Size + 1, (__int64)&v21, 0LL, 11);
      v10 = v21;
      v11 = Size;
      v12 = HIDWORD(Size);
    }
    else
    {
      UFI = 0;
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v24);
  }
  else
  {
    UFI = 0;
  }
  if ( UFI )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, Src, 8uLL);
    v17 = (_DWORD *)a6;
    if ( a6 >= MmUserProbeAddress )
      v17 = (_DWORD *)MmUserProbeAddress;
    *v17 = v10;
    if ( (v10 & 2) != 0 && a3 )
    {
      v18 = (ULONG64)a3 + v11;
      if ( v18 > MmUserProbeAddress || v18 <= (unsigned __int64)a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, v26, v11);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v11;
      v19 = (_DWORD *)a5;
      if ( a5 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = v12;
    }
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v25);
  return UFI;
}
