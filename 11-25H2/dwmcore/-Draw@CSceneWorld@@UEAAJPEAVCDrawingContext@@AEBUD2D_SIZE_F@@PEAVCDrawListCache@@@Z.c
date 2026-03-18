/*
 * XREFs of ?Draw@CSceneWorld@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1802B4C20
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18003082C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIHolographicExclusiveModeManagerProxy@@Uerr_returnc.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18016DEF8 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18027095C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneWorld::Draw(
        CSceneWorld *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  _QWORD *v4; // rsi
  _QWORD *i; // rdi
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  _BYTE v13[64]; // [rsp+40h] [rbp-58h] BYREF
  int v14; // [rsp+80h] [rbp-18h]

  v4 = (_QWORD *)*((_QWORD *)this + 17);
  for ( i = (_QWORD *)*((_QWORD *)this + 16); i != v4; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 184LL))(*i);
  v8 = (__int64 *)*((_QWORD *)this + 16);
  v9 = (__int64 *)*((_QWORD *)this + 17);
  if ( v8 != v9 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IHolographicExclusiveModeManagerProxy,wil::err_returncode_policy>>>(
      v8,
      v9);
    *((_QWORD *)this + 17) = *((_QWORD *)this + 16);
  }
  v14 = 0;
  CMILMatrix::SetScale((CMILMatrix *)v13, 1.0, -1.0, 1.0, 0.0, 0.0, 0.0);
  v10 = CDrawingContext::DrawScene3D(
          a2,
          *((struct ISpectreWorld **)this + 11),
          *((struct CCompositionEnvironmentLight **)this + 19),
          (const struct CMILMatrix *)v13);
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xF7u, 0LL);
  return v11;
}
