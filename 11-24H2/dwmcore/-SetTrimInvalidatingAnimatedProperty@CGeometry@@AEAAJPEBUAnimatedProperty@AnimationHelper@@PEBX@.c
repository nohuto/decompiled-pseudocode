/*
 * XREFs of ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180134C70
 * Callers:
 *     ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134660 (-SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x1801348D0 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETR.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134A10 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180134AF0 (-SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1801F0EBC (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONE.c)
 *     ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z @ 0x1801F1DFC (-ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUS.c)
 *     ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x1801F40EC (-ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFO.c)
 *     _lambda_e05a7b2a31e3bf4b8dde05b2cb6de375_::_lambda_invoker_cdecl_ @ 0x18020B790 (_lambda_e05a7b2a31e3bf4b8dde05b2cb6de375_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007EFE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801348B0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180136550 (-NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@.c)
 *     ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180182370 (-NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkno.c)
 *     ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801823D0 (-OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::SetTrimInvalidatingAnimatedProperty(
        CGeometry *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  char *v4; // rbp
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rdi
  struct _RTL_GENERIC_TABLE *v10; // rcx
  __int64 v11; // rsi
  PVOID v12; // rax
  void *v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  int v16; // eax
  __int64 (__fastcall *v17)(_QWORD, _QWORD, _QWORD); // rax
  int v18; // eax
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 (__fastcall *v27)(__int64, __int64 *, unsigned int, __int64); // rax
  HANDLE ProcessHeap; // rax
  __int64 i; // r8
  __int64 v30; // rcx
  __int64 v31; // rax
  int Buffer; // [rsp+30h] [rbp-38h] BYREF
  LPVOID lpMem[2]; // [rsp+38h] [rbp-30h]
  int v34; // [rsp+48h] [rbp-20h]
  int v35; // [rsp+4Ch] [rbp-1Ch]
  int v36; // [rsp+50h] [rbp-18h]

  v4 = (char *)this + *((_QWORD *)a2 + 1);
  if ( memcmp_0(v4, a3, *((_QWORD *)a2 + 2)) )
  {
    memcpy_0(v4, a3, *((_QWORD *)a2 + 2));
    v7 = *((_QWORD *)this + 3);
    v8 = *(_DWORD *)a2;
    v9 = *(_QWORD *)(v7 + 888);
    if ( v9 == *(_QWORD *)(v7 + 896) )
    {
      v31 = v9 + 1;
      v9 = 1LL;
      if ( v31 )
        v9 = v31;
    }
    v10 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v11 = 0LL;
    if ( v10 )
    {
      v34 = 0;
      v35 = 0;
      v36 = 0;
      Buffer = v8;
      *(_OWORD *)lpMem = 0LL;
      v12 = RtlLookupElementGenericTable(v10, &Buffer);
      v13 = lpMem[0];
      v11 = (__int64)v12;
      if ( lpMem[0] != lpMem[1] )
      {
        if ( lpMem[0] )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v13);
        }
        lpMem[0] = 0LL;
      }
    }
    v14 = v11 + 8;
    v15 = -v11;
    if ( (v14 & -(__int64)(v15 != 0)) != 0 )
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)((v14 & -(__int64)(v15 != 0)) + 0x18); *(_QWORD *)(v30 + 232) = v9 )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(v14 & -(__int64)(v15 != 0)) + 8 * i);
        i = (unsigned int)(i + 1);
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 8u);
    }
    v16 = *((_DWORD *)this + 10);
    *(_WORD *)((char *)this + 133) = 257;
    *((_DWORD *)this + 10) = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(v16 + 2)) & 6;
    if ( (((unsigned __int8)v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(v16 + 2)) & 6) & 6) == 2 )
    {
      v17 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 176LL);
      if ( (char *)v17 == (char *)CVisual::OnChanged )
      {
        v18 = CVisual::OnChanged((__int64)this, 0, 0LL);
      }
      else if ( (char *)v17 == (char *)CTransform3D::OnChanged )
      {
        v18 = CTransform3D::OnChanged((__int64)this);
      }
      else
      {
        v18 = v17 == CVectorShape::OnChanged ? CVectorShape::OnChanged(this, 0LL, 0LL) : v17(this, 0LL, 0LL);
      }
      if ( v18 )
      {
        v20 = *((_QWORD *)this + 4);
        if ( (v20 & 2) != 0 )
          v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v20) = v20 & 1;
        if ( (_DWORD)v20 )
        {
          v21 = 0LL;
          v22 = (unsigned int)v20;
          v23 = 2LL;
          do
          {
            v24 = *((_QWORD *)this + 4);
            if ( (v24 & 2) != 0 )
            {
              v25 = (__int64 *)(v24 & 0xFFFFFFFFFFFFFFFCuLL);
              v26 = *v25;
            }
            else
            {
              v26 = *((_QWORD *)this + 4) & 1LL;
              v25 = (__int64 *)(v24 & 0xFFFFFFFFFFFFFFFCuLL);
            }
            if ( v21 >= v26 )
            {
              v25 = 0LL;
            }
            else if ( v26 != 1 )
            {
              v25 = (__int64 *)v25[v23];
            }
            v27 = *(__int64 (__fastcall **)(__int64, __int64 *, unsigned int, __int64))(*(_QWORD *)this + 88LL);
            if ( v27 == CContent::NotifyListenerOfChange )
            {
              CContent::NotifyListenerOfChange((__int64)this, v25, 0, 0LL);
            }
            else if ( (char *)v27 == (char *)CBrush::NotifyListenerOfChange )
            {
              CBrush::NotifyListenerOfChange(this, v25, 0LL, 0LL);
            }
            else if ( (char *)v27 == (char *)CGeometry::NotifyListenerOfChange )
            {
              CGeometry::NotifyListenerOfChange(this, v25, 0LL, 0LL);
            }
            else
            {
              v27((__int64)this, v25, 0, 0LL);
            }
            ++v21;
            ++v23;
            --v22;
          }
          while ( v22 );
        }
      }
    }
    *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (2 * (*((_DWORD *)this + 10) >> 1) - 2)) & 6;
  }
  return 0LL;
}
