/*
 * XREFs of ??$_Construct_in_place@VCVolumeUnit@@$$V@std@@YAXAEAVCVolumeUnit@@@Z @ 0x1800CB1BC
 * Callers:
 *     ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800CB214 (--$make_shared@VCVolumeUnit@@$$V@std@@YA-AV-$shared_ptr@VCVolumeUnit@@@0@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
CVolumeUnit *__fastcall std::_Construct_in_place<CVolumeUnit,>(CVolumeUnit *this, __int64 a2)
{
  return CVolumeUnit::CVolumeUnit(this, a2);
}
