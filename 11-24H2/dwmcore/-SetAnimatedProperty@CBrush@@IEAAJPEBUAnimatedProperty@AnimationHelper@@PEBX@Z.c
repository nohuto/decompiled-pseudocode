/*
 * XREFs of ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134F50
 * Callers:
 *     ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134660 (-SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1801348D0 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETR.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134A10 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134AF0 (-SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1801F0EBC (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONE.c)
 *     ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z @ 0x1801F1DFC (-ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUS.c)
 *     ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x1801F40EC (-ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFO.c)
 *     _lambda_f6c3773d29e46d99479d5ff35211f48a_::_lambda_invoker_cdecl_ @ 0x18020B670 (_lambda_f6c3773d29e46d99479d5ff35211f48a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F680 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrush::SetAnimatedProperty(
        CBrush *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  size_t v4; // r14
  char *v5; // rbp
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // r14
  struct _RTL_GENERIC_TABLE *v11; // rcx
  unsigned int v12; // ebx
  char *v13; // rsi
  char *v14; // rax
  void *v15; // rbp
  char *v16; // rdx
  void (__fastcall *v17)(CBrush *, _QWORD, CBrush *); // rax
  HANDLE ProcessHeap; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  LPVOID lpMem[2]; // [rsp+28h] [rbp-30h]
  __int64 v24; // [rsp+38h] [rbp-20h]
  int v25; // [rsp+40h] [rbp-18h]

  v4 = *((_QWORD *)a2 + 2);
  v5 = (char *)this + *((_QWORD *)a2 + 1);
  if ( memcmp_0(v5, a3, v4) )
  {
    memcpy_0(v5, a3, v4);
    v8 = *((_QWORD *)this + 3);
    v9 = *(_DWORD *)a2;
    v10 = *(_QWORD *)(v8 + 888);
    if ( v10 == *(_QWORD *)(v8 + 896) )
    {
      v21 = v10 + 1;
      v10 = 1LL;
      if ( v21 )
        v10 = v21;
    }
    v11 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v12 = 0;
    v13 = 0LL;
    if ( v11 )
    {
      Buffer = v9;
      v24 = 0LL;
      *(_OWORD *)lpMem = 0LL;
      v25 = 0;
      v14 = (char *)RtlLookupElementGenericTable(v11, &Buffer);
      v15 = lpMem[0];
      v13 = v14;
      if ( lpMem[0] != lpMem[1] )
      {
        if ( lpMem[0] )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v15);
        }
        lpMem[0] = 0LL;
      }
    }
    v16 = v13 + 8;
    if ( !v13 )
      v16 = 0LL;
    if ( v16 )
    {
      if ( *((_DWORD *)v16 + 6) )
      {
        do
        {
          v20 = v12++;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v16 + 8 * v20) + 232LL) = v10;
        }
        while ( v12 < *((_DWORD *)v16 + 6) );
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 8u);
    }
    v17 = *(void (__fastcall **)(CBrush *, _QWORD, CBrush *))(*(_QWORD *)this + 80LL);
    if ( (char *)v17 == (char *)CGradientBrush::NotifyOnChanged || (char *)v17 == (char *)CBrush::NotifyOnChanged )
      CBrush::NotifyOnChanged((__int64)this, 0, (__int64)this);
    else
      v17(this, 0LL, this);
  }
  return 0LL;
}
