/*
 * XREFs of ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180080250
 * Callers:
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18000DF90 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180080C60 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134660 (-SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1801348D0 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETR.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134A10 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134AF0 (-SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801BD0C0 (-SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C3760 (-SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1801F0EBC (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONE.c)
 *     ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z @ 0x1801F1DFC (-ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUS.c)
 *     ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x1801F40EC (-ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFO.c)
 *     _lambda_b5179accd76347ce48f9bb8196384d57_::_lambda_invoker_cdecl_ @ 0x1801FB140 (_lambda_b5179accd76347ce48f9bb8196384d57_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComponentTransform2D::SetRotationAngle(
        CComponentTransform2D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        float *a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  struct _RTL_GENERIC_TABLE *v7; // rcx
  char *v8; // rdi
  char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  struct _RTL_GENERIC_TABLE *v12; // rcx
  char *v13; // rdi
  char *v14; // rdx
  __int64 (__fastcall *v15)(CComponentTransform2D *, __int64, __int64); // rax
  __int64 v16; // rax
  unsigned int v17; // edi
  float v18; // xmm6_4
  unsigned int v19; // ebx
  unsigned int i; // r8d
  __int64 v21; // rcx
  unsigned int j; // r9d
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD v30[2]; // [rsp+40h] [rbp-58h] BYREF
  int Buffer; // [rsp+50h] [rbp-48h] BYREF
  __int128 v32; // [rsp+58h] [rbp-40h] BYREF
  __int64 v33; // [rsp+68h] [rbp-30h]
  int v34; // [rsp+70h] [rbp-28h]

  if ( *((float *)this + 48) == *a3 )
    return 0LL;
  v5 = *((_QWORD *)this + 3);
  *((float *)this + 48) = *a3;
  v6 = *(_QWORD *)(v5 + 888);
  if ( v6 == *(_QWORD *)(v5 + 896) )
  {
    v28 = v6 + 1;
    v6 = 1LL;
    if ( v28 )
      v6 = v28;
  }
  v7 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
  v8 = 0LL;
  if ( v7 )
  {
    v33 = 0LL;
    v34 = 0;
    v32 = 0LL;
    Buffer = 4;
    v8 = (char *)RtlLookupElementGenericTable(v7, &Buffer);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v32);
  }
  v9 = v8 + 8;
  if ( !v8 )
    v9 = 0LL;
  if ( v9 )
  {
    for ( i = 0; i < *((_DWORD *)v9 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8 * v21) + 232LL) = v6 )
      v21 = i++;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0LL, 8LL);
  }
  v10 = *((_QWORD *)this + 3);
  v11 = *(_QWORD *)(v10 + 888);
  if ( v11 == *(_QWORD *)(v10 + 896) )
  {
    v29 = v11 + 1;
    v11 = 1LL;
    if ( v29 )
      v11 = v29;
  }
  v12 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
  v13 = 0LL;
  if ( v12 )
  {
    v33 = 0LL;
    v34 = 0;
    v32 = 0LL;
    Buffer = 5;
    v13 = (char *)RtlLookupElementGenericTable(v12, &Buffer);
    DynArrayImpl<0>::~DynArrayImpl<0>(&v32);
  }
  v14 = v13 + 8;
  if ( !v13 )
    v14 = 0LL;
  if ( v14 )
  {
    for ( j = 0; j < *((_DWORD *)v14 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8 * v23) + 232LL) = v11 )
      v23 = j++;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0LL, 8LL);
  }
  v15 = *(__int64 (__fastcall **)(CComponentTransform2D *, __int64, __int64))(*(_QWORD *)this + 80LL);
  if ( (char *)v15 == (char *)CResource::NotifyOnChanged )
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  else
    v15(this, 0LL, 0LL);
  v16 = *((_QWORD *)this + 7);
  v17 = 0;
  v18 = *((float *)this + 48);
  if ( !v16 )
    return v17;
  if ( !*(_DWORD *)(v16 + 108) )
    return v17;
  if ( !*((_DWORD *)this + 18) )
    return v17;
  if ( (*((_BYTE *)this + 76) & 0x10) == 0 )
    return v17;
  v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
          *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
          11LL);
  if ( !v24 )
    return v17;
  v25 = *((_QWORD *)this + 7);
  v26 = v25 ? *(_DWORD *)(v25 + 108) : 0;
  v30[0] = v26;
  v30[1] = *((unsigned int *)this + 18);
  v27 = CoreUICallSend(v24, v30, 2LL, 11LL, 0, &unk_18032BF6A, 4, v18, v26);
  if ( v27 != -2018375675 )
    v17 = v27;
  if ( (v17 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xC8u, 0LL);
    v19 = v17;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xD9u, 0LL);
  }
  else
  {
    return v17;
  }
  return v19;
}
