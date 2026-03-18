/*
 * XREFs of ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AE7AC
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AE308 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x18004DEFC (-InternalAddRef@-$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800F9BEC (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1800FB9A4 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1801AD018 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801AF4A8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1801E4320 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18022AAF8 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::ProcessFrameInputPostTargeting(
        CManipulationManager *this,
        struct CManipulationFrame *a2)
{
  char v4; // r12
  unsigned int v5; // esi
  bool IsMousewheelFrame; // r13
  __int64 v7; // rdx
  __int64 v8; // r14
  int v9; // eax
  char *v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // r8
  char v16; // r10
  __int64 v17; // rax
  CManipulationContext *v18; // rcx
  CEffectCompilationTask *v19; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v20; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  IsMousewheelFrame = CManipulationFrame::IsMousewheelFrame(a2);
  if ( *(_DWORD *)(v7 + 16) )
  {
    do
    {
      v8 = 248LL * v5;
      v9 = *(_DWORD *)((char *)a2 + v8 + 380);
      v10 = (char *)a2 + v8;
      if ( (v9 & 0x840000) != 0 || IsMousewheelFrame )
      {
        CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
          (__int64)this + 160,
          (__int64 (__fastcall ****)(_QWORD))&v20,
          (_DWORD *)v10 + 93);
        v11 = v20;
        if ( v20 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v20 + 24))(v20, *((unsigned int *)v10 + 93));
          v14 = ConvertToInputType(*((unsigned int *)a2 + 92), *((unsigned int *)a2 + 95), v12, v13);
          CManipulationManager::OnUp(
            (__int64)this,
            (v15 - 72) & -(__int64)(v15 != 0),
            *((_DWORD *)v10 + 93),
            v14,
            v11,
            0,
            0,
            v16);
          v17 = *v11;
          v20 = 0LL;
          (*(void (__fastcall **)(__int64 *))(v17 + 8))(v11);
        }
      }
      else if ( (v9 & 2) == 0 )
      {
        v18 = (CManipulationContext *)*((_QWORD *)this + 30);
        if ( v18 )
          CManipulationContext::OnContactHoverDepart(v18, *((_DWORD *)v10 + 93));
      }
      if ( !v4 && *(_QWORD *)((char *)a2 + v8 + 392) == -1LL )
      {
        v19 = a2;
        v4 = 1;
        Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(&v19);
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
          (char *)this + 224,
          &v19);
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v19);
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 4) );
  }
}
