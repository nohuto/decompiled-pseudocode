/*
 * XREFs of ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190634
 * Callers:
 *     ?ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x180190190 (-ProcessManipulationInfo@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ @ 0x180146A68 (-InternalAddRef@-$ComPtr@VSharedData@CPolygonShape@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x18018ED38 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ @ 0x1801911E8 (-IsMousewheelFrame@CManipulationFrame@@QEBA_NXZ.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180193100 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x180194E30 (-OnContactHoverDepart@CManipulationContext@@QEAAXI@Z.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1801D82E0 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?Add@?$CArray@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x18021F5C8 (-Add@-$CArray@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr@VCMa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v19; // [rsp+28h] [rbp-50h]
  int v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+38h] [rbp-40h]
  CEffectCompilationTask *v22; // [rsp+88h] [rbp+10h] BYREF
  __int64 *v23; // [rsp+90h] [rbp+18h] BYREF

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
          &v23,
          (_DWORD *)v10 + 93);
        v11 = v23;
        if ( v23 )
        {
          v12 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v23 + 24))(v23, *((unsigned int *)v10 + 93));
          v14 = ConvertToInputType(*((unsigned int *)a2 + 92), *((unsigned int *)a2 + 95), v12, v13);
          LOBYTE(v21) = v16;
          LOBYTE(v20) = 0;
          LOBYTE(v19) = 0;
          CManipulationManager::OnUp(
            this,
            (v15 - 72) & -(__int64)(v15 != 0),
            *((unsigned int *)v10 + 93),
            v14,
            v11,
            v19,
            v20,
            v21);
          v17 = *v11;
          v23 = 0LL;
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
        v22 = a2;
        v4 = 1;
        Microsoft::WRL::ComPtr<CPolygonShape::SharedData>::InternalAddRef(&v22);
        CArray<Microsoft::WRL::ComPtr<CManipulationFrame>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationFrame>>>::Add(
          (char *)this + 224,
          &v22);
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v22);
      }
      ++v5;
    }
    while ( v5 < *((_DWORD *)a2 + 4) );
  }
}
