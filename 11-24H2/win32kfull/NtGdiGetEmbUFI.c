/*
 * XREFs of NtGdiGetEmbUFI @ 0x140337750
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

__int64 __fastcall NtGdiGetEmbUFI(HDC a1, ULONG64 a2, void *a3, _DWORD *a4, ULONG64 a5, ULONG64 a6, _QWORD *a7)
{
  int v10; // r12d
  unsigned int v11; // r15d
  __int64 v12; // rdx
  int v13; // ecx
  __int64 SessionState; // rax
  __int64 v15; // rdx
  unsigned int UFI; // ebx
  void *v17; // rax
  _DWORD *v18; // rcx
  ULONG64 v19; // rax
  _DWORD *v20; // rcx
  int v22; // [rsp+40h] [rbp-158h] BYREF
  size_t Size; // [rsp+44h] [rbp-154h] BYREF
  int v24; // [rsp+4Ch] [rbp-14Ch]
  __int64 v25; // [rsp+50h] [rbp-148h] BYREF
  __int64 Src; // [rsp+58h] [rbp-140h] BYREF
  __int64 v27; // [rsp+60h] [rbp-138h]
  ULONG64 v28; // [rsp+68h] [rbp-130h]
  _QWORD v29[10]; // [rsp+70h] [rbp-128h] BYREF
  _BYTE v30[64]; // [rsp+C0h] [rbp-D8h] BYREF
  _BYTE v31[80]; // [rsp+100h] [rbp-98h] BYREF

  v28 = a2;
  Src = 0LL;
  v10 = 0;
  v22 = 0;
  memset_0(v31, 0, 0x48uLL);
  v11 = 0;
  Size = 0LL;
  v24 = 0;
  v27 = 0LL;
  v25 = 0LL;
  SessionState = W32GetSessionState(v13, v12);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v30,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v30, v15) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v29, a1);
    if ( v29[0] )
    {
      UFI = GrepGetUFI((struct UDCOBJ *)v29, &Src, v31, &Size, (_DWORD *)&Size + 1, (__int64)&v22, &v25, 28);
      v10 = v22;
      v11 = Size;
      v24 = HIDWORD(Size);
      v27 = v25;
    }
    else
    {
      UFI = 0;
    }
    UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v29);
  }
  else
  {
    UFI = 0;
  }
  if ( UFI )
  {
    v17 = (void *)v28;
    if ( v28 >= MmUserProbeAddress )
      v17 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v17, &Src, 8uLL);
    v18 = (_DWORD *)a6;
    if ( a6 >= MmUserProbeAddress )
      v18 = (_DWORD *)MmUserProbeAddress;
    *v18 = v10;
    if ( (unsigned __int64)(a7 + 1) > MmUserProbeAddress || a7 + 1 <= a7 )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a7 = v27;
    if ( (v10 & 2) != 0 && a3 )
    {
      v19 = (ULONG64)a3 + v11;
      if ( v19 > MmUserProbeAddress || v19 <= (unsigned __int64)a3 )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(a3, v31, v11);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v11;
      v20 = (_DWORD *)a5;
      if ( a5 >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = v24;
    }
  }
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v30);
  return UFI;
}
