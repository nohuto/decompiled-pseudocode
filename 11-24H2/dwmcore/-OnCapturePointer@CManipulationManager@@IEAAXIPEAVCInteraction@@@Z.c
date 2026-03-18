/*
 * XREFs of ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180256A64
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x1800901C0 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18012BE94 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18018ED9C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x18019112C (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x180193100 (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x180193408 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?FindKey@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEBAHAEBI@Z @ 0x1801943AC (-FindKey@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEBAHAEBI@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180194F9C (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180218188 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CManipulationManager::OnCapturePointer(
        CManipulationManager *this,
        unsigned int a2,
        struct CInteraction *a3)
{
  __int64 (__fastcall ***v5)(_QWORD); // r14
  int Key; // eax
  unsigned int v7; // r12d
  __int64 *v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD); // rbx
  int v10; // r15d
  int v11; // edx
  __int64 (__fastcall ***v12)(_QWORD); // rax
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // eax
  struct CInteraction *v17; // rbx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 (__fastcall ***v24)(_QWORD); // [rsp+40h] [rbp-38h] BYREF
  __int64 (__fastcall ***v25)(_QWORD); // [rsp+48h] [rbp-30h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h] BYREF
  __int64 (__fastcall ***v27)(_QWORD); // [rsp+58h] [rbp-20h] BYREF
  CCachedVisualImage *v28[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 (__fastcall ***v29)(_QWORD); // [rsp+C0h] [rbp+48h]
  unsigned int v30; // [rsp+C8h] [rbp+50h] BYREF
  struct CInteraction *v31; // [rsp+D0h] [rbp+58h]
  __int64 v32; // [rsp+D8h] [rbp+60h] BYREF

  v31 = a3;
  v30 = a2;
  v5 = 0LL;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          &v30);
  v7 = 2;
  if ( Key == -1 )
  {
    v26 = 0LL;
    v8 = &v26;
    v9 = 0LL;
    v10 = 1;
    v11 = 0;
  }
  else
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 21) + 8LL * Key);
    v24 = v9;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v24);
    v8 = (__int64 *)&v24;
    v11 = 2;
    v10 = 0;
  }
  v12 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v13 = 0LL;
  if ( &v25 == (__int64 (__fastcall ****)(_QWORD))v8 )
  {
    v9 = v27;
  }
  else
  {
    *v8 = 0LL;
    v13 = v9;
    v12 = v9;
    v25 = v9;
    v29 = v9;
    v5 = v9;
  }
  if ( v11 )
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v24);
    v12 = v29;
    v5 = v9;
  }
  if ( v10 )
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v26);
    v12 = v5;
  }
  v14 = 0LL;
  if ( v12 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v13 + 24LL))(v13, a2);
    v14 = (v15 - 72) & -(__int64)(v15 != 0);
  }
  v16 = CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::FindKey((__int64)this + 200, &v30);
  if ( v16 != -1 )
    v7 = *(_DWORD *)(*((_QWORD *)this + 26) + 4LL * v16);
  CManipulationManager::OnUp((__int64)this, v14, a2, v7, v13, 1, 1, 1);
  v17 = v31;
  CManipulationManager::OnNewContact((__int64)this, (__int64)v31, a2, v7, 1, 0, 1);
  v32 = 0LL;
  v18 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          &v30);
  if ( v18 != -1
    && *Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v32, (_QWORD *)(*((_QWORD *)this + 21) + 8LL * v18)) )
  {
    v28[0] = 0LL;
    LODWORD(v27) = 1;
    Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(v28, v19, v20);
    (*(void (__fastcall **)(__int64, _QWORD, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)v32 + 72LL))(v32, a2, &v27);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(v28, (__int64)v17, v21);
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)v32 + 88LL))(v32, &v27);
    Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(v28, v22, v23);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v32);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v25);
}
