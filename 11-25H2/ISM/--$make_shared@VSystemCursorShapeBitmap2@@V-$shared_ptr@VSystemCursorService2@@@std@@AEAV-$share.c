/*
 * XREFs of ??$make_shared@VSystemCursorShapeBitmap2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@3@@std@@YA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEAV?$shared_ptr@VCursorBitmapData@SystemCursors@@@0@@Z @ 0x1800F6F28
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F7E10 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058AF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??0?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z @ 0x1800CC834 (--0-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?0VSystemCursorService2@@$0A@@?$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV?$shared_ptr@VSystemCursorService2@@@1@@Z @ 0x1800F4210 (--$-0VSystemCursorService2@@$0A@@-$weak_ptr@VSystemCursorService2@@@std@@QEAA@AEBV-$shared_ptr@V.c)
 */

_QWORD *__fastcall std::make_shared<SystemCursorShapeBitmap2,std::shared_ptr<SystemCursorService2>,std::shared_ptr<SystemCursors::CursorBitmapData> &>(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  _DWORD *v6; // r14
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD *v10; // rbx
  std::_Ref_count_base *v11; // r8
  std::_Ref_count_base *v12; // rcx
  _QWORD *result; // rax
  _QWORD v14[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v15[3]; // [rsp+38h] [rbp-30h] BYREF

  v6 = operator new(0x30uLL);
  *(_OWORD *)v6 = 0LL;
  v6[2] = 1;
  v6[3] = 1;
  *(_QWORD *)v6 = &std::_Ref_count_obj2<SystemCursorShapeBitmap2>::`vftable';
  v7 = std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>(v15, a3);
  v8 = *a2;
  v9 = a2[1];
  v10 = v7;
  *a2 = 0LL;
  a2[1] = 0LL;
  v14[0] = v8;
  v14[1] = v9;
  std::weak_ptr<SystemCursorService2>::weak_ptr<SystemCursorService2>((_QWORD *)v6 + 2, v14);
  std::shared_ptr<SystemCursorShapeBitmap2>::shared_ptr<SystemCursorShapeBitmap2>((_QWORD *)v6 + 4, v10);
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  v12 = (std::_Ref_count_base *)v10[1];
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  *a1 = v6 + 4;
  result = a1;
  a1[1] = v6;
  return result;
}
