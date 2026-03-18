/*
 * XREFs of ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x14000EF64
 * Callers:
 *     ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x14000E5A8 (-bValid@OPTAPIDCOBJ@@QEAA_NXZ.c)
 *     GreIntersectClipRect @ 0x14001DA50 (GreIntersectClipRect.c)
 *     ?InitXform@DC@@QEAAPEAUMATRIX@@K@Z @ 0x140039BC0 (-InitXform@DC@@QEAAPEAUMATRIX@@K@Z.c)
 *     ?QuickInitXform@DC@@QEAA?AVEXFORMOBJ@@K@Z @ 0x140039DF0 (-QuickInitXform@DC@@QEAA-AVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DC::vMarkTransformDirty(DC *this)
{
  __int64 v1; // rdx

  *((_DWORD *)this + 130) &= ~4u;
  v1 = *((_QWORD *)this + 122);
  if ( (*((_DWORD *)this + 130) & 1) != 0 )
    *(_DWORD *)(v1 + 340) |= 0x16090u;
  else
    *(_DWORD *)(v1 + 340) |= 0x6090u;
}
