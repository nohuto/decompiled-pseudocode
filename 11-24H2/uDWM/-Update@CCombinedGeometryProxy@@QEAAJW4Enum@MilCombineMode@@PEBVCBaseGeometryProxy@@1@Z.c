/*
 * XREFs of ?Update@CCombinedGeometryProxy@@QEAAJW4Enum@MilCombineMode@@PEBVCBaseGeometryProxy@@1@Z @ 0x1800636E8
 * Callers:
 *     ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800635E8 (-CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPE.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCombinedGeometryProxy::Update(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r9
  int v6; // eax

  v5 = 0LL;
  if ( a4 )
    v6 = *(_DWORD *)(*(_QWORD *)(a4 + 16) + 24LL);
  else
    v6 = 0;
  if ( a3 )
    v5 = *(unsigned int *)(*(_QWORD *)(a3 + 16) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 16LL)
                                                                          + 632LL))(
           *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL),
           1LL,
           v5,
           v6);
}
