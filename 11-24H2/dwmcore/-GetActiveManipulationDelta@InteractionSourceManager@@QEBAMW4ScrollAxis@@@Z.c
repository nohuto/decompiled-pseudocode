/*
 * XREFs of ?GetActiveManipulationDelta@InteractionSourceManager@@QEBAMW4ScrollAxis@@@Z @ 0x1800E3D10
 * Callers:
 *     ?CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x1800E34EC (-CalculateInContactDelta@CScrollAnimation@@AEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1800E663C (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 *     ??0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z @ 0x180226994 (--0CScrollPositionKeyframeAnimation@@QEAA@PEAVCComposition@@PEAVCInteractionTracker@@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x1800E3F48 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1800E42C4 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__m128 __fastcall InteractionSourceManager::GetActiveManipulationDelta(InteractionSourceManager *a1)
{
  __m128 v2; // xmm6
  int v3; // r10d
  int v4; // r10d
  struct CManipulation *v5; // rax
  struct CManipulation *ActiveManipulation; // rax
  __m128 v7; // xmm6
  struct CManipulation *v9; // rax
  _DWORD v10[16]; // [rsp+28h] [rbp-19h] BYREF
  __int64 v11; // [rsp+68h] [rbp+27h] BYREF
  int v12; // [rsp+70h] [rbp+2Fh]

  v2 = 0LL;
  if ( !InteractionSourceManager::HasActiveManipulation(a1) )
    return v2;
  if ( !v3 )
  {
    memset_0(v10, 0, sizeof(v10));
    v11 = 0LL;
    v12 = 0;
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(a1);
    (*(void (__fastcall **)(struct CManipulation *, __int64, _DWORD *))(*(_QWORD *)ActiveManipulation + 136LL))(
      ActiveManipulation,
      1LL,
      v10);
    v7 = (__m128)v10[0];
LABEL_7:
    v2 = _mm_xor_ps(v7, (__m128)_xmm);
    goto LABEL_8;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    memset_0(v10, 0, sizeof(v10));
    v11 = 0LL;
    v12 = 0;
    v9 = InteractionSourceManager::TryGetActiveManipulation(a1);
    (*(void (__fastcall **)(struct CManipulation *, __int64, _DWORD *))(*(_QWORD *)v9 + 136LL))(v9, 1LL, v10);
    v7 = (__m128)v10[1];
    goto LABEL_7;
  }
  if ( v4 == 1 )
  {
    memset_0(v10, 0, sizeof(v10));
    v11 = 0LL;
    v12 = 0;
    v5 = InteractionSourceManager::TryGetActiveManipulation(a1);
    (*(void (__fastcall **)(struct CManipulation *, __int64, _DWORD *))(*(_QWORD *)v5 + 136LL))(v5, 3LL, v10);
    v2 = (__m128)v10[0];
LABEL_8:
    Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v11);
  }
  return v2;
}
