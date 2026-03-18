/*
 * XREFs of ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180022C70
 * Callers:
 *     ?SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023510 (-SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023690 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180023768 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETR.c)
 *     ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F64E0 (-SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1801FDB4C (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONE.c)
 *     ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z @ 0x1801FE3EC (-ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUS.c)
 *     ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x1802007DC (-ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFO.c)
 *     _lambda_e05a7b2a31e3bf4b8dde05b2cb6de375_::_lambda_invoker_cdecl_ @ 0x1802178A0 (_lambda_e05a7b2a31e3bf4b8dde05b2cb6de375_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800217B0 (-NotifyListenerOfChange@CBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021DE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801DC2B0 (-OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F75B0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F8C30 (-NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkno.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGeometry::SetTrimInvalidatingAnimatedProperty(
        CGeometry *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  char *v4; // r14
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rdi
  struct _RTL_GENERIC_TABLE *v10; // rcx
  __int64 v11; // rsi
  PVOID v12; // rax
  void *v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  _QWORD *v16; // rdx
  int v17; // eax
  __int64 (__fastcall *v18)(__int64, unsigned int, CMaskBrush *); // rax
  int v19; // eax
  __int64 v21; // rax
  unsigned __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 *v26; // rdx
  unsigned __int64 v27; // rax
  void (__fastcall *v28)(__int64, __int64 *, __int64, CMaskBrush *); // rax
  HANDLE ProcessHeap; // rax
  __int64 i; // r8
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // r8
  void *v34; // rcx
  signed int LastError; // eax
  __int64 v36; // rax
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp-40h] BYREF
  int Buffer; // [rsp+48h] [rbp-38h] BYREF
  LPVOID lpMem[2]; // [rsp+50h] [rbp-30h]
  __int64 v40; // [rsp+60h] [rbp-20h]
  int v41; // [rsp+68h] [rbp-18h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v4 = (char *)this + *((_QWORD *)a2 + 1);
  if ( memcmp_0(v4, a3, *((_QWORD *)a2 + 2)) )
  {
    memcpy_0(v4, a3, *((_QWORD *)a2 + 2));
    v7 = *((_QWORD *)this + 3);
    v8 = *(_DWORD *)a2;
    v9 = *(_QWORD *)(v7 + 888);
    if ( v9 == *(_QWORD *)(v7 + 896) )
    {
      v36 = v9 + 1;
      v9 = 1LL;
      if ( v36 )
        v9 = v36;
    }
    v10 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v11 = 0LL;
    if ( v10 )
    {
      Buffer = v8;
      v40 = 0LL;
      *(_OWORD *)lpMem = 0LL;
      v41 = 0;
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
    v16 = (_QWORD *)(v14 & -(__int64)(v15 != 0));
    if ( v16 )
    {
      for ( i = 0LL;
            (unsigned int)i < *(_DWORD *)((v14 & -(__int64)(v15 != 0)) + 0x18);
            *(_QWORD *)(*(_QWORD *)(*v16 + 8 * v31) + 232LL) = v9 )
      {
        v31 = (unsigned int)i;
        i = (unsigned int)(i + 1);
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      v32 = *((_QWORD *)this + 3);
      (*(void (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(v32 + 312) + 24LL))(
        *(_QWORD *)(v32 + 312),
        v16,
        i);
      if ( *(_DWORD *)(v32 + 248) )
      {
        v34 = *(void **)(v32 + 240);
        *(_DWORD *)(v32 + 248) = 0;
        DueTime.QuadPart = 0LL;
        if ( !SetWaitableTimerEx(v34, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError >= 0 )
            LastError = -2003304445;
          ModuleFailFastForHRESULT(LastError, retaddr);
        }
      }
      _m_prefetchw((const void *)(v32 + 252));
      if ( (~(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(v32 + 252), 8u) & 8) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        DueTime.LowPart = 8;
        lpMem[1] = &DueTime;
        v40 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULED_COMPOSITION_REASON,
          v33,
          2LL,
          &Buffer);
      }
    }
    v17 = *((_DWORD *)this + 10);
    *(_WORD *)((char *)this + 133) = 257;
    *((_DWORD *)this + 10) = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(v17 + 2)) & 6;
    if ( (((unsigned __int8)v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)(v17 + 2)) & 6) & 6) == 2 )
    {
      v18 = *(__int64 (__fastcall **)(__int64, unsigned int, CMaskBrush *))(*(_QWORD *)this + 176LL);
      if ( v18 == CVisual::OnChanged )
      {
        v19 = CVisual::OnChanged((__int64)this, 0, 0LL);
      }
      else if ( (char *)v18 == (char *)CTransform3D::OnChanged )
      {
        v19 = CTransform3D::OnChanged(this);
      }
      else
      {
        v19 = (char *)v18 == (char *)CVectorShape::OnChanged
            ? CVectorShape::OnChanged(this)
            : v18((__int64)this, 0, 0LL);
      }
      if ( v19 )
      {
        v21 = *((_QWORD *)this + 4);
        if ( (v21 & 2) != 0 )
          v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v21) = v21 & 1;
        if ( (_DWORD)v21 )
        {
          v22 = 0LL;
          v23 = (unsigned int)v21;
          v24 = 2LL;
          do
          {
            v25 = *((_QWORD *)this + 4);
            if ( (v25 & 2) != 0 )
            {
              v26 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
              v27 = *v26;
            }
            else
            {
              v27 = *((_QWORD *)this + 4) & 1LL;
              v26 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
            }
            if ( v22 >= v27 )
            {
              v26 = 0LL;
            }
            else if ( v27 != 1 )
            {
              v26 = (__int64 *)v26[v24];
            }
            v28 = *(void (__fastcall **)(__int64, __int64 *, __int64, CMaskBrush *))(*(_QWORD *)this + 88LL);
            if ( v28 == CContent::NotifyListenerOfChange )
            {
              CContent::NotifyListenerOfChange((__int64)this, v26, 0LL, 0LL);
            }
            else if ( v28 == CBrush::NotifyListenerOfChange )
            {
              CBrush::NotifyListenerOfChange((__int64)this, v26, 0LL, 0LL);
            }
            else if ( (char *)v28 == (char *)CGeometry::NotifyListenerOfChange )
            {
              CGeometry::NotifyListenerOfChange(this, v26, 0LL, 0LL);
            }
            else
            {
              v28((__int64)this, v26, 0LL, 0LL);
            }
            ++v22;
            ++v24;
            --v23;
          }
          while ( v23 );
        }
      }
    }
    *((_DWORD *)this + 10) ^= (*((_DWORD *)this + 10) ^ (2 * (*((_DWORD *)this + 10) >> 1) - 2)) & 6;
  }
  return 0LL;
}
