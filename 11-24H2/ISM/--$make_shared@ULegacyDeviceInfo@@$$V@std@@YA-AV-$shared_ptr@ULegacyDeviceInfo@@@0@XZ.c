/*
 * XREFs of ??$make_shared@ULegacyDeviceInfo@@$$V@std@@YA?AV?$shared_ptr@ULegacyDeviceInfo@@@0@XZ @ 0x1800CF14C
 * Callers:
 *     ?AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z @ 0x1800CF5BC (-AttachDevice@MPCRawInputProvider@@QEAAJW4InputType@@PEAK@Z.c)
 *     ?OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z @ 0x1800D74F0 (-OnDdiDeviceAdded@SpatialRimDeviceCollection@@UEAAJW4InputType@@KAEBUMPCSourceDeviceInfo@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<LegacyDeviceInfo,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x620uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<LegacyDeviceInfo>::`vftable';
  memset_0(v3 + 4, 0, 0x60CuLL);
  v3[6] = 1548;
  result = a1;
  *a1 = v3 + 4;
  a1[1] = v3;
  return result;
}
