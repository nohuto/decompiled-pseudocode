/*
 * XREFs of ?SetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@V?$span@$$CBI$0?0@gsl@@_N@Z @ 0x180079ED4
 * Callers:
 *     ?ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORSHAPE_SETSHAPES@@PEBXI@Z @ 0x1800781F0 (-ProcessSetShapes@CContainerVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONTAINERVECTORS.c)
 *     ?ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PEBXI@Z @ 0x18007840C (-ProcessSetShapes@CShapeVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAPEVISUAL_SETSHAPES@@PE.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x180079AD0 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXAEA_K@Z @ 0x180079E00 (--$_Reallocate@$0A@@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXA.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x180079E78 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 *     ?IsOfType@CContainerVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007A970 (-IsOfType@CContainerVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@?$vector@PEAUID3D11SamplerState@@V?$allocator@PEAUID3D11SamplerState@@@std@@@std@@AEAAPEAPEAUID3D11SamplerState@@QEAPEAU2@AEBQEAU2@@Z @ 0x18019076C (--$_Emplace_reallocate@AEBQEAUID3D11SamplerState@@@-$vector@PEAUID3D11SamplerState@@V-$allocator.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CContainerVectorShape::SetShapes(
        struct CResource ***this,
        __int64 a2,
        unsigned __int64 *a3,
        char a4)
{
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  __int64 v10; // r15
  __int64 i; // rbp
  unsigned int v12; // edx
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 (__fastcall *v15)(unsigned __int64, __int64); // rax
  char v16; // al
  struct CResource **v17; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  struct CResource *v20; // rax
  unsigned __int64 v22[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a4 )
  {
    v7 = this + 13;
    CResource::UnRegisterNNotifiersInternal((CResource *)this, this[13], (unsigned int)(this[14] - this[13]));
    if ( *v7 != v7[1] )
      v7[1] = *v7;
    v8 = *a3;
    v9 = (__int64)(v7[2] - *v7) >> 3;
    v22[0] = v8;
    if ( v8 > v9 )
    {
      if ( v8 > 0x1FFFFFFFFFFFFFFFLL )
        std::_Xlength_error("vector too long");
      std::vector<CVectorShape *>::_Reallocate<0>((__int64)v7, v22);
    }
  }
  v10 = this[14] - this[13];
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a3; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *a3 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    _mm_lfence();
    v12 = *(_DWORD *)(a3[1] + 4 * i);
    if ( v12
      && v12 < *(_DWORD *)(a2 + 28)
      && (v13 = *(_QWORD *)(a2 + 40), *(_DWORD *)(*(_DWORD *)(a2 + 24) * v12 + v13)) )
    {
      v14 = *(_QWORD *)(*(_DWORD *)(a2 + 24) * v12 + v13 + 8);
    }
    else
    {
      v14 = 0LL;
    }
    v15 = *(__int64 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)v14 + 64LL);
    if ( v15 == CContainerVectorShape::IsOfType )
      v16 = CContainerVectorShape::IsOfType(v14, 179LL);
    else
      v16 = v15(v14, 179LL);
    if ( !v16 )
    {
      v19 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x4Du, 0LL);
      return v19;
    }
    v17 = this[14];
    v22[0] = v14;
    if ( v17 == this[15] )
    {
      std::vector<ID3D11SamplerState *>::_Emplace_reallocate<ID3D11SamplerState * const &>(this + 13, v17, v22);
    }
    else
    {
      *v17 = (struct CResource *)v14;
      ++this[14];
    }
  }
  v18 = CResource::RegisterNNotifiersInternal(
          (CResource *)this,
          &this[13][(unsigned int)v10],
          (unsigned int)(this[14] - this[13]) - (unsigned int)v10);
  v19 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x53u, 0LL);
  }
  else
  {
    v20 = (*this)[10];
    if ( v20 == (struct CResource *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 0, 0LL);
    else
      ((void (__fastcall *)(struct CResource ***, _QWORD, _QWORD))v20)(this, 0LL, 0LL);
  }
  return v19;
}
