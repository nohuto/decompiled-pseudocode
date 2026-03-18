/*
 * XREFs of ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180261CDC
 * Callers:
 *     ?OnInteractionUpdate@CManipulationManager@@IEAAXXZ @ 0x180134D80 (-OnInteractionUpdate@CManipulationManager@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18005D64C (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F114C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800F9BEC (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800F9EF4 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?FindKey@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEBAHAEBI@Z @ 0x1800FAD00 (-FindKey@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEBAHAEBI@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800FBB10 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ @ 0x18017F774 (-InternalRelease@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801AF2A4 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ??$?4VCInteraction@@@?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180223F14 (--$-4VCInteraction@@@-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+40h] [rbp-38h] BYREF
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+48h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-28h] BYREF
  __int64 (__fastcall ***v22)(_QWORD); // [rsp+58h] [rbp-20h] BYREF
  CResource *v23[3]; // [rsp+60h] [rbp-18h] BYREF
  __int64 (__fastcall ***v24)(_QWORD); // [rsp+C0h] [rbp+48h]
  unsigned int v25; // [rsp+C8h] [rbp+50h] BYREF
  struct CInteraction *v26; // [rsp+D0h] [rbp+58h]
  __int64 v27; // [rsp+D8h] [rbp+60h] BYREF

  v26 = a3;
  v25 = a2;
  v5 = 0LL;
  Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          &v25);
  v7 = 2;
  if ( Key == -1 )
  {
    v21 = 0LL;
    v8 = &v21;
    v9 = 0LL;
    v10 = 1;
    v11 = 0;
  }
  else
  {
    v9 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 21) + 8LL * Key);
    v19 = v9;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v19);
    v8 = (__int64 *)&v19;
    v11 = 2;
    v10 = 0;
  }
  v12 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v13 = 0LL;
  if ( &v20 == (__int64 (__fastcall ****)(_QWORD))v8 )
  {
    v9 = v22;
  }
  else
  {
    *v8 = 0LL;
    v13 = v9;
    v12 = v9;
    v20 = v9;
    v24 = v9;
    v5 = v9;
  }
  if ( v11 )
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v19);
    v12 = v24;
    v5 = v9;
  }
  if ( v10 )
  {
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v21);
    v12 = v5;
  }
  v14 = 0LL;
  if ( v12 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v13 + 24LL))(v13, a2);
    v14 = (v15 - 72) & -(__int64)(v15 != 0);
  }
  v16 = CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::FindKey((__int64)this + 200, &v25);
  if ( v16 != -1 )
    v7 = *(_DWORD *)(*((_QWORD *)this + 26) + 4LL * v16);
  CManipulationManager::OnUp((__int64)this, v14, a2, v7, v13, 1, 1, 1);
  v17 = v26;
  CManipulationManager::OnNewContact((__int64)this, (__int64)v26, a2, v7, 1, 0, 1);
  v27 = 0LL;
  v18 = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
          (__int64)this + 160,
          &v25);
  if ( v18 != -1
    && *Microsoft::WRL::ComPtr<CManipulationContext>::operator=(&v27, (_QWORD *)(*((_QWORD *)this + 21) + 8LL * v18)) )
  {
    v23[0] = 0LL;
    LODWORD(v22) = 1;
    Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(v23);
    (*(void (__fastcall **)(__int64, _QWORD, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)v27 + 72LL))(v27, a2, &v22);
    Microsoft::WRL::ComPtr<IInteractionResource>::operator=<CInteraction>(v23, (__int64)v17);
    (*(void (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)v27 + 88LL))(v27, &v22);
    Microsoft::WRL::ComPtr<IInteractionResource>::InternalRelease(v23);
  }
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v20);
}
