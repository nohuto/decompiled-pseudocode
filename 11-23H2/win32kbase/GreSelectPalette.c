/*
 * XREFs of GreSelectPalette @ 0x1C003A9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C003A440 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0159C24 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

HPALETTE __fastcall GreSelectPalette(HDC a1, HPALETTE a2, int a3)
{
  HPALETTE v5; // rbx
  __int64 v7; // rax
  unsigned int v8; // ecx
  _QWORD v9[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = 0LL;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    if ( *(_WORD *)(v9[0] + 12LL) == 1 )
    {
      v5 = SelectPaletteWorker((struct XDCOBJ *)v9, a2, a3);
    }
    else
    {
      v7 = *(_QWORD *)(v9[0] + 48LL);
      if ( v7 )
        v8 = *(_DWORD *)(v7 + 40);
      else
        v8 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(17LL, v8, *(unsigned __int16 *)(v9[0] + 12LL), 0LL, 0LL);
    }
  }
  DCOBJ::~DCOBJ((DCOBJ *)v9);
  return v5;
}
