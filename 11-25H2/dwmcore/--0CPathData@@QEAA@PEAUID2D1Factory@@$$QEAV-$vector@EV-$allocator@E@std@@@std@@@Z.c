/*
 * XREFs of ??0CPathData@@QEAA@PEAUID2D1Factory@@$$QEAV?$vector@EV?$allocator@E@std@@@std@@@Z @ 0x18005DBAC
 * Callers:
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x18005C06C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 *     ?Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z @ 0x18005C390 (-Trim@CTrimPathOperation@@QEAAJPEBVCPathData@@MMMPEAPEAV2@@Z.c)
 * Callees:
 *     ??0?$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ @ 0x180042D58 (--0-$CMILCOMBaseT@UID2D1SimplifiedGeometrySink@@U1@VCMilObjectDeleter@@@@IEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathData::CPathData(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *v3; // r8
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 result; // rax

  CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>::CMILCOMBaseT<ID2D1SimplifiedGeometrySink,ID2D1SimplifiedGeometrySink,CMilObjectDeleter>();
  *(_QWORD *)a1 = &CPathData::`vftable';
  v4 = v3[2];
  v3[2] = 0LL;
  v5 = v3[1];
  v3[1] = 0LL;
  v6 = *v3;
  *v3 = 0LL;
  *(_QWORD *)(a1 + 16) = v6;
  *(_QWORD *)(a1 + 24) = v5;
  *(_QWORD *)(a1 + 32) = v4;
  *(_QWORD *)(a1 + 40) = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  *(_DWORD *)(a1 + 48) = 0;
  result = a1;
  *(_DWORD *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_BYTE *)(a1 + 66) = 0;
  return result;
}
