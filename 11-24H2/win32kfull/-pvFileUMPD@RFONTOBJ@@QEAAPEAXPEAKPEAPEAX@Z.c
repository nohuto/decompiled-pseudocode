/*
 * XREFs of ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1400DC67C
 * Callers:
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1400DB634 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 * Callees:
 *     ??0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z @ 0x1400B25CC (--0ATTACHOBJ@@QEAA@PEAVPFFOBJ@@@Z.c)
 *     EngUnmapFontFileFD @ 0x1400B3DE0 (EngUnmapFontFileFD.c)
 *     ?pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEBDPEAPEAX@Z @ 0x1400DC768 (-pchTranslateUMPD@RFONTOBJ@@QEAAPEADPEBDPEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

const char *__fastcall RFONTOBJ::pvFileUMPD(RFONTOBJ *this, unsigned int *a2, void **a3)
{
  const char *v3; // rdi
  __int64 v7; // rax
  unsigned int v8; // eax
  __int64 v9; // rsi
  __int64 (__fastcall *v10)(__int64, unsigned int *); // rbx
  ULONG_PTR *v11; // rbx
  __int64 v12; // rsi
  ULONG_PTR *v14; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v15; // [rsp+28h] [rbp-30h]
  _QWORD v16[5]; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0LL;
  v7 = *(_QWORD *)(*(_QWORD *)this + 128LL);
  if ( !v7 )
    goto LABEL_2;
  v9 = *(_QWORD *)(v7 + 88);
  if ( !v9 )
    goto LABEL_2;
  v16[0] = *(_QWORD *)(*(_QWORD *)this + 128LL);
  v10 = *(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)(v7 + 96) + 3080LL);
  ATTACHOBJ::ATTACHOBJ((ATTACHOBJ *)&v14, (struct PFFOBJ *)v16);
  v17 = 0;
  if ( v10 )
    v3 = (const char *)v10(v9, &v17);
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
  if ( v3 && (v3 = RFONTOBJ::pchTranslateUMPD(this, v3, a3)) != 0LL )
    v8 = v17;
  else
LABEL_2:
    v8 = 0;
  if ( a2 )
    *a2 = v8;
  return v3;
}
