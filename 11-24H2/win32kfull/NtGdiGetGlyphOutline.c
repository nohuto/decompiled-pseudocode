/*
 * XREFs of NtGdiGetGlyphOutline @ 0x140260020
 * Callers:
 *     <none>
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ?GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B0B2C (-GrepGetGlyphOutline@@YAKAEAVUDCOBJ@@GIPEAU_GLYPHMETRICS@@KPEAXPEAU_MAT2@@HW4EntryPoint@RFONTOBJ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1UAPIDCOBJ@@QEAA@XZ @ 0x1400BB3D8 (--1UAPIDCOBJ@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140340480 (memmove.c)
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall NtGdiGetGlyphOutline(
        HDC a1,
        unsigned __int16 a2,
        int a3,
        void *a4,
        size_t Size,
        char *a6,
        const void *a7,
        int a8)
{
  const void *v9; // rdx
  unsigned int GlyphOutline; // edi
  void *v11; // rbx
  __int64 v12; // rdx
  int v13; // ecx
  __int64 SessionState; // rax
  char *v15; // rax
  void **v16; // rsi
  _QWORD v21[10]; // [rsp+B0h] [rbp-F8h] BYREF
  _BYTE v22[56]; // [rsp+100h] [rbp-A8h] BYREF
  __int128 Src; // [rsp+138h] [rbp-70h] BYREF
  int v24; // [rsp+148h] [rbp-60h]
  struct _MAT2 v25; // [rsp+150h] [rbp-58h] BYREF

  v9 = a7;
  GlyphOutline = -1;
  v25 = 0LL;
  Src = 0LL;
  v24 = 0;
  if ( (unsigned int)(Size - 1) > 0x270FFFF )
  {
    v11 = 0LL;
  }
  else
  {
    v11 = (void *)AllocFreeTmpBuffer((unsigned int)Size);
    v9 = a7;
  }
  if ( v11 || !(_DWORD)Size )
  {
    if ( (unsigned __int64)v9 >= MmUserProbeAddress )
      v9 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v25, v9, 0x10uLL);
    if ( v11 )
      memset_0(v11, 0, (unsigned int)Size);
    SessionState = W32GetSessionState(v13, v12);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v22,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v22) )
    {
      UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v21, a1);
      if ( v21[0] )
        GlyphOutline = GrepGetGlyphOutline((struct UDCOBJ *)v21, a2, a3, (__int64)&Src, Size, v11, &v25, a8);
      else
        GlyphOutline = -1;
      UAPIDCOBJ::~UAPIDCOBJ((UAPIDCOBJ *)v21);
    }
    else
    {
      GlyphOutline = -1;
    }
    if ( GlyphOutline != -1 )
    {
      if ( v11 )
      {
        v15 = &a6[(unsigned int)Size];
        v16 = (void **)MmUserProbeAddress;
        if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 <= a6 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a6, v11, (unsigned int)Size);
      }
      else
      {
        v16 = (void **)MmUserProbeAddress;
      }
      if ( a4 >= *v16 )
        a4 = *v16;
      RtlCopyVolatileMemory(a4, &Src, 0x14uLL);
    }
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v22);
    if ( v11 )
      FreeTmpBuffer(v11);
  }
  return GlyphOutline;
}
