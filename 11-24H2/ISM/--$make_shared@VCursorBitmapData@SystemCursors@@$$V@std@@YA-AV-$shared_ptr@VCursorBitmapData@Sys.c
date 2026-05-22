/*
 * XREFs of ??$make_shared@VCursorBitmapData@SystemCursors@@$$V@std@@YA?AV?$shared_ptr@VCursorBitmapData@SystemCursors@@@0@XZ @ 0x1800F8A50
 * Callers:
 *     ?CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z @ 0x1800F9AE0 (-CreateCursorShape@SystemCursorService2@@UEAAJ_K0PEBUCursorBitmapDataHeader@@IPEBEI@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<SystemCursors::CursorBitmapData,>(_QWORD *a1)
{
  _DWORD *v2; // rdx
  _QWORD *result; // rax

  v2 = operator new(0x40uLL);
  *(_OWORD *)v2 = 0LL;
  v2[2] = 1;
  v2[3] = 1;
  *(_QWORD *)v2 = &std::_Ref_count_obj2<SystemCursors::CursorBitmapData>::`vftable';
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 0LL;
  *((_QWORD *)v2 + 7) = 0LL;
  *a1 = v2 + 4;
  result = a1;
  a1[1] = v2;
  return result;
}
