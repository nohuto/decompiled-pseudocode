/*
 * XREFs of ?ApplyOpacity@CGradientColorData@@QEAAXM@Z @ 0x18022C11C
 * Callers:
 *     ?GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z @ 0x1801DD4DC (-GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CGradientColorData::ApplyOpacity(CGradientColorData *this, float a2)
{
  __int64 v2; // rdx
  __int64 i; // rax

  v2 = *((_QWORD *)this + 1);
  for ( i = *(_QWORD *)this; i != v2; i += 16LL )
    *(float *)(i + 12) = a2 * *(float *)(i + 12);
}
