/*
 * XREFs of ?SetAnimatedProperty@CBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180021B30
 * Callers:
 *     ?SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023510 (-SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023690 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180023768 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETR.c)
 *     ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F64E0 (-SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1801FDB4C (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONE.c)
 *     ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z @ 0x1801FE3EC (-ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUS.c)
 *     ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x1802007DC (-ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFO.c)
 *     _lambda_f6c3773d29e46d99479d5ff35211f48a_::_lambda_invoker_cdecl_ @ 0x180217780 (_lambda_f6c3773d29e46d99479d5ff35211f48a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021400 (-NotifyOnChanged@CBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1802E8968 (memcmp_0.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 v10; // rbp
  struct _RTL_GENERIC_TABLE *v11; // rcx
  char *v12; // rdi
  char *v13; // rax
  void *v14; // rsi
  char *v15; // rdx
  void (__fastcall *v16)(__int64, unsigned int, __int64); // rax
  HANDLE ProcessHeap; // rax
  __int64 i; // r8
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r8
  void *v23; // rcx
  signed int LastError; // eax
  __int64 v25; // rax
  LARGE_INTEGER DueTime; // [rsp+40h] [rbp-68h] BYREF
  int Buffer; // [rsp+48h] [rbp-60h] BYREF
  LPVOID lpMem[2]; // [rsp+50h] [rbp-58h]
  __int64 v29; // [rsp+60h] [rbp-48h]
  int v30; // [rsp+68h] [rbp-40h]
  void *retaddr; // [rsp+A8h] [rbp+0h]

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
      v25 = v10 + 1;
      v10 = 1LL;
      if ( v25 )
        v10 = v25;
    }
    v11 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v12 = 0LL;
    if ( v11 )
    {
      Buffer = v9;
      v29 = 0LL;
      *(_OWORD *)lpMem = 0LL;
      v30 = 0;
      v13 = (char *)RtlLookupElementGenericTable(v11, &Buffer);
      v14 = lpMem[0];
      v12 = v13;
      if ( lpMem[0] != lpMem[1] )
      {
        if ( lpMem[0] )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v14);
        }
        lpMem[0] = 0LL;
      }
    }
    v15 = v12 + 8;
    if ( !v12 )
      v15 = 0LL;
    if ( v15 )
    {
      for ( i = 0LL;
            (unsigned int)i < *((_DWORD *)v15 + 6);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8 * v20) + 232LL) = v10 )
      {
        v20 = (unsigned int)i;
        i = (unsigned int)(i + 1);
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      v21 = *((_QWORD *)this + 3);
      (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v21 + 312) + 24LL))(
        *(_QWORD *)(v21 + 312),
        v15,
        i);
      if ( *(_DWORD *)(v21 + 248) )
      {
        v23 = *(void **)(v21 + 240);
        *(_DWORD *)(v21 + 248) = 0;
        DueTime.QuadPart = 0LL;
        if ( !SetWaitableTimerEx(v23, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError >= 0 )
            LastError = -2003304445;
          ModuleFailFastForHRESULT(LastError, retaddr);
        }
      }
      _m_prefetchw((const void *)(v21 + 252));
      if ( (~(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(v21 + 252), 8u) & 8) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        DueTime.LowPart = 8;
        lpMem[1] = &DueTime;
        v29 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULED_COMPOSITION_REASON,
          v22,
          2LL,
          &Buffer);
      }
    }
    v16 = *(void (__fastcall **)(__int64, unsigned int, __int64))(*(_QWORD *)this + 80LL);
    if ( (char *)v16 == (char *)&CGradientBrush::NotifyOnChanged || v16 == CBrush::NotifyOnChanged )
      CBrush::NotifyOnChanged((__int64)this, 0, (__int64)this);
    else
      v16((__int64)this, 0, (__int64)this);
  }
  return 0LL;
}
