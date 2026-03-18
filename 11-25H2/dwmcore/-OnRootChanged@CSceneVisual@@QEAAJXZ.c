/*
 * XREFs of ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x180299890
 * Callers:
 *     ?SetRoot@?$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z @ 0x1802849F8 (-SetRoot@-$CSceneVisualGeneratedT@VCSceneVisual@@VCVisual@@@@QEAAJPEAVCSceneNode@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OnPropertyChanged@CResource@@IEAAXXZ @ 0x180078FA4 (-OnPropertyChanged@CResource@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x18012DD40 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x1802AF5CC (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x1802B4848 (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneVisual::OnRootChanged(CSceneVisual *this)
{
  __int64 v1; // rsi
  CSceneWorld *v3; // rax
  CSceneWorld *v4; // rax
  struct CContent *v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  CResource *v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 84);
  if ( !v1 )
  {
    v11 = CVisual::SetContent(this, 0LL);
    v7 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x30u, 0LL);
      return v7;
    }
    goto LABEL_15;
  }
  if ( !*((_QWORD *)this + 32) )
  {
    v3 = (CSceneWorld *)DefaultHeap::AllocClear(0xA8uLL);
    if ( v3 )
    {
      v4 = CSceneWorld::CSceneWorld(v3, *((struct CComposition **)this + 3), this);
      v13 = (__int64)v4;
      v5 = v4;
      if ( v4 )
      {
        (*(void (__fastcall **)(CSceneWorld *))(*(_QWORD *)v4 + 8LL))(v4);
        v6 = CVisual::SetContent(this, v5);
        v7 = v6;
        if ( v6 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
          goto LABEL_7;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x25u, 0LL);
LABEL_13:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
        return v7;
      }
    }
    else
    {
      v13 = 0LL;
    }
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x23u, 0LL);
    goto LABEL_13;
  }
LABEL_7:
  v8 = *((_QWORD *)this + 32);
  if ( !v8 || (v9 = *(CResource **)(v8 + 96), v13 = v1, v10 = CSceneNode::SetChildren(v9), v7 = v10, v10 >= 0) )
  {
LABEL_15:
    CResource::OnPropertyChanged(this);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x2Bu, 0LL);
  return v7;
}
