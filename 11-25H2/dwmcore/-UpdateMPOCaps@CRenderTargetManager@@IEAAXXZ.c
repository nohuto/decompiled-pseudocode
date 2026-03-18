/*
 * XREFs of ?UpdateMPOCaps@CRenderTargetManager@@IEAAXXZ @ 0x18013E800
 * Callers:
 *     ?CheckOcclusionState@CRenderTargetManager@@QEAAJXZ @ 0x18013E9A0 (-CheckOcclusionState@CRenderTargetManager@@QEAAJXZ.c)
 * Callees:
 *     ?ResetCheckMPOCache@CDeviceManager@@QEAAXXZ @ 0x18013D054 (-ResetCheckMPOCache@CDeviceManager@@QEAAXXZ.c)
 *     ?EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ @ 0x18013FC00 (-EndTargetEnumeration@CRenderTargetManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetManager::UpdateMPOCaps(CRenderTargetManager *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rsi
  CDeviceManager *v4; // rcx

  *((_BYTE *)this + 744) = 1;
  v2 = (_QWORD *)*((_QWORD *)this + 3);
  v3 = (_QWORD *)*((_QWORD *)this + 4);
  while ( v2 != v3 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 120LL))(*v2);
    ++v2;
  }
  CRenderTargetManager::EndTargetEnumeration(this);
  CDeviceManager::ResetCheckMPOCache(v4);
  *((_BYTE *)this + 746) = 0;
}
