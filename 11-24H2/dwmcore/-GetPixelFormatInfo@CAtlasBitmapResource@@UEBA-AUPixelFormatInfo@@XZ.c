/*
 * XREFs of ?GetPixelFormatInfo@CAtlasBitmapResource@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801FFAB0
 * Callers:
 *     ?GetPixelFormatInfo@CAtlasBitmapResource@@WBA@EBA?AUPixelFormatInfo@@XZ @ 0x1802AC950 (-GetPixelFormatInfo@CAtlasBitmapResource@@WBA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAtlasBitmapResource::GetPixelFormatInfo(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  bool v4; // cf
  __int64 result; // rax

  v2 = *a1;
  *(_DWORD *)a2 = 87;
  v4 = (*(unsigned __int8 (__fastcall **)(__int64 *))(v2 + 32))(a1) != 0;
  result = a2;
  *(_QWORD *)(a2 + 4) = v4 ? 3 : 1;
  return result;
}
