/*
 * XREFs of ??$make_shared@VCVolumeUnit@@$$V@std@@YA?AV?$shared_ptr@VCVolumeUnit@@@0@XZ @ 0x1800CB214
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800D0124 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ??$_Construct_in_place@VCVolumeUnit@@$$V@std@@YAXAEAVCVolumeUnit@@@Z @ 0x1800CB1BC (--$_Construct_in_place@VCVolumeUnit@@$$V@std@@YAXAEAVCVolumeUnit@@@Z.c)
 */

_QWORD *__fastcall std::make_shared<CVolumeUnit,>(_QWORD *a1)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rbx

  v2 = operator new(0x50uLL);
  v4 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<CVolumeUnit>::`vftable';
    std::_Construct_in_place<CVolumeUnit,>((CVolumeUnit *)(v2 + 4), v3);
  }
  else
  {
    v4 = 0LL;
  }
  a1[1] = v4;
  *a1 = v4 + 4;
  return a1;
}
