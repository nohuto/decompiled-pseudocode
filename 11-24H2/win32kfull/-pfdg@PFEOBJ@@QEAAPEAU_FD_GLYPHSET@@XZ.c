/*
 * XREFs of ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1400FFA30
 * Callers:
 *     ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z @ 0x1400B1B20 (-vXlatGlyphArray@RFONTOBJ@@QEAAXPEBGIPEAKKH@Z.c)
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1400FF5D0 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z @ 0x140152C44 (-bComputeQuickLookup@@YAHPEAU_QUICKLOOKUP@@PEAVPFE@@H@Z.c)
 *     ?GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401BD138 (-GrepGetFontUnicodeRanges@@YAKAEAVUDCOBJ@@PEAUtagGLYPHSET@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14025A468 (-bRealizeFont@RFONTOBJ@@QEAAHAEAVUDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140060D30 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B25CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     ?bCheckFntFileInfo@PFFOBJ@@QEAAHXZ @ 0x1400B2C5C (-bCheckFntFileInfo@PFFOBJ@@QEAAHXZ.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     ??0?$SEMOBJ@$0BM@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400FFC68 (--0-$SEMOBJ@$0BM@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1401797B8 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 *     ?Free@PDEVOBJ@@QEAAXPEAX_K@Z @ 0x1401CF04C (-Free@PDEVOBJ@@QEAAXPEAX_K@Z.c)
 *     ??$GreAcquireSemaphore@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1402116C4 (--$GreAcquireSemaphore@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z @ 0x1402190E8 (--$GreReleaseSemaphoreExclusive@$0BM@$$V@@YAXAEAUGLOBALS@Font@Gre@@@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

struct _FD_GLYPHSET *__fastcall PFEOBJ::pfdg(__int64 **this, __int64 a2, __int64 a3)
{
  int v3; // r14d
  struct _FD_GLYPHSET *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r12
  HSEMAPHORE v9; // rbx
  __int64 v10; // rdi
  struct _GRETHREAD *v11; // rax
  bool v12; // zf
  int v14; // r14d
  unsigned int v15; // r13d
  __int64 (__fastcall *v16)(struct _FD_GLYPHSET *, struct _FD_GLYPHSET *, _QWORD, __int64, unsigned __int64 *); // rbx
  ULONG_PTR *v17; // r15
  __int64 v18; // r13
  bool v19; // al
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  HSEMAPHORE v21; // [rsp+38h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR *v23; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v24; // [rsp+58h] [rbp-10h]
  struct _FD_GLYPHSET *v25; // [rsp+B8h] [rbp+50h] BYREF
  unsigned __int64 v26; // [rsp+C0h] [rbp+58h] BYREF
  struct _FD_GLYPHSET *v27; // [rsp+C8h] [rbp+60h] BYREF

  v3 = 0;
  v4 = 0LL;
  v6 = **this;
  v22[0] = v6;
  v7 = *(_QWORD *)(v6 + 96);
  v26 = 0LL;
  v20 = v7;
  v8 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96) + 4872LL;
  SEMOBJ<28>::SEMOBJ<28>(&v21, v8);
  if ( !(*this)[2] )
  {
    v14 = *(_DWORD *)(v7 + 40) & 0x8000;
    if ( v14 )
      GreReleaseSemaphoreExclusive<28,>(v8);
    v15 = *((_DWORD *)*this + 2);
    v25 = *(struct _FD_GLYPHSET **)(v6 + 88);
    v27 = *(struct _FD_GLYPHSET **)(v6 + 104);
    if ( (unsigned int)PFFOBJ::bCheckFntFileInfo((PFFOBJ *)v22) )
    {
      v16 = *(__int64 (__fastcall **)(struct _FD_GLYPHSET *, struct _FD_GLYPHSET *, _QWORD, __int64, unsigned __int64 *))(*(_QWORD *)(v6 + 96) + 2896LL);
      ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v23, (struct PFFOBJ *)v22);
      v4 = (struct _FD_GLYPHSET *)v16(v27, v25, v15, 3LL, &v26);
      if ( v24 )
      {
        v17 = v23;
        v18 = v24;
        do
        {
          EngUnmapFontFileFD(*v17++);
          --v18;
        }
        while ( v18 );
      }
    }
    v25 = v4;
    if ( v14 )
      GreAcquireSemaphore<28,>(v8);
    if ( !v4 )
      goto LABEL_22;
    if ( (*this)[2] )
    {
      v3 = 1;
      goto LABEL_2;
    }
    (*this)[2] = (__int64)v4;
    (*this)[3] = v26;
    if ( !v14 || *(_BYTE *)((*this)[4] + 44) != 2 || (v27 = 0LL, v19 = bExtendGlyphSet(&v25, &v27), v4 = v25, !v19) )
    {
LABEL_22:
      v3 = 0;
      goto LABEL_2;
    }
    v3 = 1;
    (*this)[2] = (__int64)v27;
  }
LABEL_2:
  if ( (*this)[2] )
    ++*((_DWORD *)*this + 34);
  if ( v3 && *(_QWORD *)(v7 + 3016) )
    PDEVOBJ::Free((PDEVOBJ *)&v20, v4, v26);
  v9 = v21;
  v10 = (*this)[2];
  if ( v21 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GlyphSet", v21);
    v11 = GreGetCurrentThreadCrossSessionCheck();
    if ( v11 )
    {
      v12 = (*(_QWORD *)v11 & 0xFFFFFFFFEFFFFFFFuLL) == 0;
      *(_QWORD *)v11 &= ~0x10000000uLL;
      if ( v12 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v9);
  }
  return (struct _FD_GLYPHSET *)v10;
}
