/*
 * XREFs of ??0SURFFAKEOBJ@@QEAA@PEAUHDEV__@@PEAUDHPDEV__@@@Z @ 0x1400C26FC
 * Callers:
 *     ?GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z @ 0x1400C2818 (-GrepExtEscape@@YAHAEAVXDCOBJ@@HHPEADH1AEBUTag@RFONTOBJ@@@Z.c)
 *     NtGdiGetETM @ 0x140310070 (NtGdiGetETM.c)
 *     ?DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z @ 0x140325F00 (-DoFontManagement@@YAKAEAVUDCOBJ@@KKPEAXK1AEBUTag@RFONTOBJ@@@Z.c)
 *     ?iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x140326C00 (-iCheckPassthroughImage@@YAHAEAVXDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x14001F1E8 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

SURFFAKEOBJ *__fastcall SURFFAKEOBJ::SURFFAKEOBJ(SURFFAKEOBJ *this, HDEV a2, struct DHPDEV__ *a3)
{
  HSURF DefaultBitmap; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  DefaultBitmap = (HSURF)GrepCreateDefaultBitmap();
  SURFREF::SURFREF(this, DefaultBitmap);
  *((_DWORD *)this + 18) = 0;
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 10) = *(_QWORD *)(v7 + 40);
    *((_QWORD *)this + 11) = *(_QWORD *)(v7 + 48);
    *((_WORD *)this + 48) = *(_WORD *)(v7 + 100);
    *(_QWORD *)(v7 + 40) = a3;
    v8 = *((_QWORD *)this + 4);
    v9 = v8 + 48;
    if ( !v8 )
      v9 = 24LL;
    *(_QWORD *)v9 = a2;
    v10 = *((_QWORD *)this + 4);
    v11 = v10 + 100;
    if ( !v10 )
      v11 = 76LL;
    *(_WORD *)v11 = 1;
    if ( !*((_DWORD *)this + 18) )
    {
      PushThreadGuardedObject(
        (char *)this + 40,
        *((_QWORD *)this + 4),
        `SURFFAKEOBJ::SURFFAKEOBJ'::`2'::_lambda_1_::_lambda_invoker_cdecl_);
      *((_DWORD *)this + 18) = 1;
    }
  }
  return this;
}
