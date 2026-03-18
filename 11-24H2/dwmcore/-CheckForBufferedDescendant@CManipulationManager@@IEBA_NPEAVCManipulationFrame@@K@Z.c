/*
 * XREFs of ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18012C534
 * Callers:
 *     ?RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18012C1AC (-RouteFrameInput@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18018ED38 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x18020B9B0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CManipulationManager::CheckForBufferedDescendant(
        CManipulationManager *this,
        struct CManipulationFrame *a2,
        unsigned int a3)
{
  int v4; // edi
  __int64 v5; // r9
  bool v6; // r15
  unsigned int v7; // esi
  CManipulationManager *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  char *v12; // r12
  char v13; // r12
  __int64 v14; // rbx
  __int64 *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h] BYREF
  __int64 i; // [rsp+30h] [rbp-18h]
  CCachedVisualImage *v25; // [rsp+98h] [rbp+50h] BYREF
  int v26; // [rsp+A0h] [rbp+58h]
  __int64 v27; // [rsp+A8h] [rbp+60h] BYREF

  v4 = 0;
  v5 = 248LL * a3;
  v6 = 0;
  v26 = 0;
  v7 = 0;
  v9 = this;
  for ( i = *(_QWORD *)((char *)a2 + v5 + 392); v7 < *((_DWORD *)a2 + 4); ++v7 )
  {
    if ( v6 )
      break;
    v25 = 0LL;
    v10 = 0LL;
    v27 = 0LL;
    v11 = 248LL * v7;
    v12 = (char *)a2 + v11;
    if ( v7 == a3 || *(_QWORD *)((char *)a2 + v11 + 392) != -1LL )
      goto LABEL_4;
    v4 |= 1u;
    v16 = (__int64 *)CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
                       (char *)v9 + 160,
                       &v22,
                       v12 + 372);
    v14 = 0LL;
    if ( &v21 != v16 )
    {
      v14 = *v16;
      *v16 = 0LL;
    }
    v21 = 0LL;
    v27 = v14;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v21);
    v10 = v14;
    if ( v14
      && (v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 24LL))(v14, *((unsigned int *)v12 + 93)),
          v20 = (_QWORD *)Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v25, v19),
          v10 = v14,
          *v20) )
    {
      v13 = 0;
    }
    else
    {
LABEL_4:
      v13 = 1;
      v14 = v10;
    }
    if ( (v4 & 1) != 0 )
    {
      v4 &= ~1u;
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v22);
    }
    if ( v13 )
    {
      if ( v14 )
        (*(void (__fastcall **)(__int64, __int64, CManipulationManager *))(*(_QWORD *)v14 + 8LL))(v14, v11, v9);
    }
    else
    {
      while ( v25 && !v6 )
      {
        v17 = (*(__int64 (__fastcall **)(CCachedVisualImage *, __int64, CManipulationManager *))(*(_QWORD *)v25 + 64LL))(
                v25,
                v11,
                v9);
        v18 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)v25 + 96LL))(v25);
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(&v25, v18);
        v6 = v17 == i;
      }
      Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v27);
    }
    Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(&v25, v11, (__int64)v9);
    v9 = this;
  }
  return v6;
}
