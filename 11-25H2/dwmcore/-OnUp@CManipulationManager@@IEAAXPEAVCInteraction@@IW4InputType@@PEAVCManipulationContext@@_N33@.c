/*
 * XREFs of ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800F9BEC
 * Callers:
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x1800F9EF4 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x1801AE7AC (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180261CDC (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1800F9D64 (-OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1800FA6AC (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?FindKey@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEBAHAEBI@Z @ 0x1800FAD00 (-FindKey@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEBAHAEBI@Z.c)
 *     ?RemoveRange@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x1800FAD54 (-RemoveRange@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$Com.c)
 *     ?Remove@?$CArray@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CArrayEqualHelper@V?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEAAHAEBV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@Z @ 0x1800FB8F4 (-Remove@-$CArray@V-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CArrayEqualHelper@V-$ComPtr.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1801AF2A4 (-FindKey@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@.c)
 *     ?RemoveRange@?$CMap@IW4InputType@@V?$CMapEqualHelper@IW4InputType@@@@@@QEAAHHH@Z @ 0x1801B1584 (-RemoveRange@-$CMap@IW4InputType@@V-$CMapEqualHelper@IW4InputType@@@@@@QEAAHHH@Z.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801FE024 (-clear@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 *     McTemplateU0pq_EventWriteTransfer @ 0x180210BF4 (McTemplateU0pq_EventWriteTransfer.c)
 *     ?ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ @ 0x180225540 (-ResetDefaultStateForAllInteractions@CInteraction@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationManager::OnUp(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        char a6,
        char a7,
        char a8)
{
  _QWORD *v8; // rdi
  unsigned int v9; // ebx
  unsigned int Key; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 result; // rax
  void (__fastcall **v18)(_QWORD *); // rax
  void *v19; // rdx
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = a3;
  v8 = a5;
  v9 = a4;
  if ( a5 )
  {
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::FindKey(
            a1 + 160,
            &v20);
    if ( Key != -1 )
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::RemoveRange(
        v14,
        Key);
    v15 = CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::FindKey(a1 + 200, &v20);
    if ( v15 != -1 )
      CMap<unsigned int,enum InputType,CMapEqualHelper<unsigned int,enum InputType>>::RemoveRange(v16, v15);
    CManipulationContext::OnContactDepart(v8, a3, v9, a2, a6, a7, a8);
    if ( v8[6] )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
      {
LABEL_8:
        result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8 + 72LL))(v8, a3, 0LL);
        goto LABEL_9;
      }
      v19 = &MANIPULATION_CONTEXT_CONTACT_DEPARTED;
    }
    else
    {
      v18 = (void (__fastcall **)(_QWORD *))*v8;
      a5 = v8;
      (*v18)(v8);
      CArray<Microsoft::WRL::ComPtr<CManipulationContext>,CArrayEqualHelper<Microsoft::WRL::ComPtr<CManipulationContext>>>::Remove(
        a1 + 184,
        &a5);
      (*(void (__fastcall **)(_QWORD *))(*v8 + 8LL))(v8);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
        goto LABEL_8;
      v19 = &MANIPULATION_CONTEXT_DESTROYED;
    }
    McTemplateU0pq_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, v19, v8, a3);
    goto LABEL_8;
  }
  LOBYTE(a4) = a7;
  result = CManipulationContext::CleanTreeState(a2, 0LL, *(_QWORD *)(a1 + 16), a4, v9);
LABEL_9:
  if ( !*(_DWORD *)(a1 + 192) )
  {
    CInteraction::ResetDefaultStateForAllInteractions();
    return std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear();
  }
  return result;
}
