/*
 * XREFs of ?Clear@CGradientColorData@@QEAAXXZ @ 0x1801ED704
 * Callers:
 *     ?GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z @ 0x1801ED3BC (-GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientColorData::Clear(CGradientColorData *this)
{
  __int64 v1; // rax

  if ( *(_QWORD *)this != *((_QWORD *)this + 1) )
    *((_QWORD *)this + 1) = *(_QWORD *)this;
  v1 = *((_QWORD *)this + 3);
  if ( v1 != *((_QWORD *)this + 4) )
    *((_QWORD *)this + 4) = v1;
}
