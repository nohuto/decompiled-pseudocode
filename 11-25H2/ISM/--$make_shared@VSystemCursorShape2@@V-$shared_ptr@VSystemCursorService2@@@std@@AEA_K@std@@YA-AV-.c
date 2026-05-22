/*
 * XREFs of ??$make_shared@VSystemCursorShape2@@V?$shared_ptr@VSystemCursorService2@@@std@@AEA_K@std@@YA?AV?$shared_ptr@VSystemCursorShape2@@@0@$$QEAV?$shared_ptr@VSystemCursorService2@@@0@AEA_K@Z @ 0x1800F6E84
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F7E10 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ??0SystemCursorShape2@@QEAA@V?$shared_ptr@VSystemCursorService2@@@std@@_K@Z @ 0x1800F7244 (--0SystemCursorShape2@@QEAA@V-$shared_ptr@VSystemCursorService2@@@std@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_shared<SystemCursorShape2,std::shared_ptr<SystemCursorService2>,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // r8
  _QWORD v8[6]; // [rsp+28h] [rbp-30h] BYREF
  _DWORD *v9; // [rsp+60h] [rbp+8h]

  v9 = operator new(0x68uLL);
  *(_OWORD *)v9 = 0LL;
  v9[2] = 1;
  v9[3] = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj2<SystemCursorShape2>::`vftable';
  v6 = *a3;
  v8[0] = *a2;
  v8[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  SystemCursorShape2::SystemCursorShape2(v9 + 4, v8, v6);
  *a1 = v9 + 4;
  a1[1] = v9;
  return a1;
}
