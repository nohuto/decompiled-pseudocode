/*
 * XREFs of ?OnContactDepart@CManipulationContext@@QEAAXIW4InputType@@PEAVCInteraction@@_N22@Z @ 0x1800F9D64
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800F9BEC (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType@@@Z @ 0x1800FA6AC (-CleanTreeState@CManipulationContext@@SAXPEAVCInteraction@@PEAV1@PEAVCComposition@@_NW4InputType.c)
 *     ?FindKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEBAHAEBI@Z @ 0x1800FA938 (-FindKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCIntera.c)
 *     ?RemoveRange@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHHH@Z @ 0x1801B123C (-RemoveRange@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCIn.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulationContext::OnContactDepart(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        char a6,
        char a7)
{
  _QWORD *v7; // rbx
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // r9
  __int64 result; // rax
  int Key; // eax
  __int64 i; // r14
  _QWORD *v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+68h] [rbp+10h] BYREF
  __int64 v21; // [rsp+78h] [rbp+20h] BYREF

  v20 = a2;
  v7 = (_QWORD *)a4;
  v21 = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
    v11 = a1 + 56;
  }
  else
  {
    v11 = a1 + 56;
    Key = CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::FindKey(
            a1 + 56,
            &v20);
    if ( Key == -1 )
    {
      v19 = 0LL;
      v7 = 0LL;
    }
    else
    {
      v7 = *(_QWORD **)(*(_QWORD *)(a1 + 64) + 8LL * Key);
      v19 = v7;
      wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v19);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v19);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
  }
  if ( a5 )
  {
    for ( i = (unsigned __int64)(v7 + 9) & -(__int64)(v7 != 0LL);
          i;
          i = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, i) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)i + 56LL))(i, a3);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 136) + 56LL))(*(_QWORD *)(a1 + 136), a3);
  }
  v12 = CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::FindKey(
          v11,
          &v20);
  if ( v12 != -1 )
    CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveRange(
      v13,
      v12);
  if ( !a5
    && (v14 = v7 + 9, (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(v7[9] + 216LL))(v7 + 9, 0LL))
    && (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v14 + 224LL))(v7 + 9, a2, 0LL) )
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 232LL))(v7 + 9, a2);
  }
  else if ( a7 )
  {
    NtDCompositionUpdatePointerCapture(0LL, a2);
  }
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 72LL))(a1, a2, 0LL);
  LOBYTE(v15) = a6;
  result = CManipulationContext::CleanTreeState(v7, a1, *(_QWORD *)(a1 + 40), v15, a3);
  if ( v7 )
    return (*(__int64 (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return result;
}
