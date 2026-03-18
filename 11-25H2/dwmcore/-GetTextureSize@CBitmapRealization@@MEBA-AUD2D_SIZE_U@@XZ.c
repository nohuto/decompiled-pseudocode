/*
 * XREFs of ?GetTextureSize@CBitmapRealization@@MEBA?AUD2D_SIZE_U@@XZ @ 0x18021B140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CBitmapRealization::GetTextureSize(CBitmapRealization *this, __int64 a2)
{
  (*(void (__fastcall **)(char *))(*((_QWORD *)this + 10) + 32LL))((char *)this + 80);
  return (struct D2D_SIZE_U)a2;
}
