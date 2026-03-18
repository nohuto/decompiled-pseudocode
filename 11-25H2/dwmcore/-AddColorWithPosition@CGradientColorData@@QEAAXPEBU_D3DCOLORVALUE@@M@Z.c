/*
 * XREFs of ?AddColorWithPosition@CGradientColorData@@QEAAXPEBU_D3DCOLORVALUE@@M@Z @ 0x1801ED754
 * Callers:
 *     ?GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z @ 0x1801ED3BC (-GetGradientColorData@CGradientLegacyMilBrush@@IEAAXPEAVCGradientColorData@@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@?$vector@U_D3DCOLORVALUE@@V?$allocator@U_D3DCOLORVALUE@@@std@@@std@@AEAAPEAU_D3DCOLORVALUE@@QEAU2@AEBU2@@Z @ 0x1801ED7C4 (--$_Emplace_reallocate@AEBU_D3DCOLORVALUE@@@-$vector@U_D3DCOLORVALUE@@V-$allocator@U_D3DCOLORVAL.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@AEAAPEAMQEAMAEBM@Z @ 0x180213304 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@AEAAPEAMQEAMAEBM@Z.c)
 */

void __fastcall CGradientColorData::AddColorWithPosition(
        CGradientColorData *this,
        const struct _D3DCOLORVALUE *a2,
        float a3)
{
  struct _D3DCOLORVALUE *v4; // rdx
  float *v6; // rdx
  float v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = a3;
  v4 = (struct _D3DCOLORVALUE *)*((_QWORD *)this + 1);
  if ( v4 == *((struct _D3DCOLORVALUE **)this + 2) )
  {
    std::vector<_D3DCOLORVALUE>::_Emplace_reallocate<_D3DCOLORVALUE const &>(this, v4, a2);
  }
  else
  {
    *(struct _D3DCOLORVALUE *)&v4->r = *(const struct _D3DCOLORVALUE *)&a2->r;
    *((_QWORD *)this + 1) += 16LL;
  }
  v6 = (float *)*((_QWORD *)this + 4);
  if ( v6 == *((float **)this + 5) )
  {
    std::vector<float>::_Emplace_reallocate<float const &>((char *)this + 24, v6, &v7);
  }
  else
  {
    *v6 = a3;
    *((_QWORD *)this + 4) = v6 + 1;
  }
}
