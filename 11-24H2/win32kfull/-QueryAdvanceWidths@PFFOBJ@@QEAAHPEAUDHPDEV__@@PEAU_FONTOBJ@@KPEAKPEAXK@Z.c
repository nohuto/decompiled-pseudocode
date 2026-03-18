/*
 * XREFs of ?QueryAdvanceWidths@PFFOBJ@@QEAAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1400B252C
 * Callers:
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z @ 0x14025998C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVUDCOBJ@@KPEAGK1@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B25CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PFFOBJ::QueryAdvanceWidths(
        PFFOBJ *this,
        struct DHPDEV__ *a2,
        struct _FONTOBJ *a3,
        __int64 a4,
        unsigned int *a5,
        void *a6,
        unsigned int a7)
{
  __int64 (__fastcall *v9)(struct DHPDEV__ *, struct _FONTOBJ *, __int64, unsigned int *, void *, unsigned int); // rbx
  unsigned int v10; // esi
  ULONG_PTR *v11; // rbx
  __int64 v12; // rdi
  ULONG_PTR *v14; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+48h] [rbp-10h]

  v9 = *(__int64 (__fastcall **)(struct DHPDEV__ *, struct _FONTOBJ *, __int64, unsigned int *, void *, unsigned int))(*(_QWORD *)(*(_QWORD *)this + 96LL) + 3104LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v14, this);
  v10 = v9(a2, a3, 1LL, a5, a6, a7);
  if ( v15 )
  {
    v11 = v14;
    v12 = v15;
    do
    {
      EngUnmapFontFileFD(*v11++);
      --v12;
    }
    while ( v12 );
  }
  return v10;
}
