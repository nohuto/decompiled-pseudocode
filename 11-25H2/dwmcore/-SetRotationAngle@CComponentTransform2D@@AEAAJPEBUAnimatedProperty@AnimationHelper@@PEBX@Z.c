/*
 * XREFs of ?SetRotationAngle@CComponentTransform2D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E5700
 * Callers:
 *     ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180022290 (-SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180022480 (-SetProperty@CLinearGradientBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023510 (-SetProperty@CEllipseGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023690 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180023768 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETR.c)
 *     ?SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180033D10 (-SetPropertyImpl@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800E62E0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801F64E0 (-SetProperty@CColorBrush@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1801FDB4C (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONE.c)
 *     ?ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETHORIZONTALALIGNMENT@@@Z @ 0x1801FE3EC (-ProcessSetHorizontalAlignment@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUS.c)
 *     ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x1802007DC (-ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPONENTTRANSFO.c)
 *     _lambda_b5179accd76347ce48f9bb8196384d57_::_lambda_invoker_cdecl_ @ 0x1802077B0 (_lambda_b5179accd76347ce48f9bb8196384d57_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800209D0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800E54D0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComponentTransform2D::SetRotationAngle(
        CComponentTransform2D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  char *v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rsi
  struct _RTL_GENERIC_TABLE *v8; // rcx
  char *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rsi
  struct _RTL_GENERIC_TABLE *v12; // rcx
  char *v13; // rdi
  char *v14; // rdx
  __int64 (__fastcall *v15)(CComponentTransform2D *, unsigned int, __int64); // rax
  __int64 v16; // rax
  float v17; // xmm6_4
  __int64 i; // r8
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r8
  __int64 j; // r8
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v28; // edx
  int v29; // eax
  void *v30; // rcx
  signed int LastError; // eax
  void *v32; // rcx
  signed int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // [rsp+40h] [rbp-69h] BYREF
  LARGE_INTEGER DueTime; // [rsp+48h] [rbp-61h] BYREF
  LARGE_INTEGER v38; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v39[2]; // [rsp+58h] [rbp-51h] BYREF
  int v40; // [rsp+68h] [rbp-41h] BYREF
  __int128 v41; // [rsp+70h] [rbp-39h] BYREF
  __int64 v42; // [rsp+80h] [rbp-29h]
  int v43; // [rsp+88h] [rbp-21h]
  int Buffer; // [rsp+90h] [rbp-19h] BYREF
  __int128 v45; // [rsp+98h] [rbp-11h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-1h]
  int v47; // [rsp+B0h] [rbp+7h]
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+B8h] [rbp+Fh] BYREF
  int *v49; // [rsp+C8h] [rbp+1Fh]
  __int64 v50; // [rsp+D0h] [rbp+27h]
  void *retaddr; // [rsp+108h] [rbp+5Fh]

  v4 = 0LL;
  if ( *((float *)this + 48) != *(float *)a3 )
  {
    v6 = *((_QWORD *)this + 3);
    *((_DWORD *)this + 48) = *a3;
    v7 = *(_QWORD *)(v6 + 888);
    if ( v7 == *(_QWORD *)(v6 + 896) )
    {
      v34 = v7 + 1;
      v7 = 1LL;
      if ( v34 )
        v7 = v34;
    }
    v8 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    if ( v8 )
    {
      v46 = 0LL;
      v47 = 0;
      v45 = 0LL;
      Buffer = 4;
      v4 = (char *)RtlLookupElementGenericTable(v8, &Buffer);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v45);
    }
    v9 = v4 + 8;
    if ( !v4 )
      v9 = 0LL;
    if ( v9 )
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)v9 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v9 + 8 * v19) + 232LL) = v7 )
      {
        v19 = (unsigned int)i;
        i = (unsigned int)(i + 1);
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      v20 = *((_QWORD *)this + 3);
      (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v20 + 312) + 24LL))(*(_QWORD *)(v20 + 312), v9, i);
      if ( *(_DWORD *)(v20 + 248) )
      {
        v30 = *(void **)(v20 + 240);
        *(_DWORD *)(v20 + 248) = 0;
        DueTime.QuadPart = 0LL;
        if ( !SetWaitableTimerEx(v30, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          if ( LastError >= 0 )
            LastError = -2003304445;
          ModuleFailFastForHRESULT(LastError, retaddr);
        }
      }
      _m_prefetchw((const void *)(v20 + 252));
      if ( (~(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(v20 + 252), 8u) & 8) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        v36 = 8;
        v49 = &v36;
        v50 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULED_COMPOSITION_REASON,
          v21,
          2u,
          &v48);
      }
    }
    v10 = *((_QWORD *)this + 3);
    v11 = *(_QWORD *)(v10 + 888);
    if ( v11 == *(_QWORD *)(v10 + 896) )
    {
      v35 = v11 + 1;
      v11 = 1LL;
      if ( v35 )
        v11 = v35;
    }
    v12 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
    v13 = 0LL;
    if ( v12 )
    {
      v42 = 0LL;
      v43 = 0;
      v41 = 0LL;
      v40 = 5;
      v13 = (char *)RtlLookupElementGenericTable(v12, &v40);
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v41);
    }
    v14 = v13 + 8;
    if ( !v13 )
      v14 = 0LL;
    if ( v14 )
    {
      for ( j = 0LL;
            (unsigned int)j < *((_DWORD *)v14 + 6);
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8 * v23) + 232LL) = v11 )
      {
        v23 = (unsigned int)j;
        j = (unsigned int)(j + 1);
      }
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
      v24 = *((_QWORD *)this + 3);
      (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v24 + 312) + 24LL))(
        *(_QWORD *)(v24 + 312),
        v14,
        j);
      if ( *(_DWORD *)(v24 + 248) )
      {
        v32 = *(void **)(v24 + 240);
        *(_DWORD *)(v24 + 248) = 0;
        v38.QuadPart = 0LL;
        if ( !SetWaitableTimerEx(v32, &v38, 0, 0LL, 0LL, 0LL, 0) )
        {
          v33 = GetLastError();
          if ( v33 > 0 )
            v33 = (unsigned __int16)v33 | 0x80070000;
          if ( v33 >= 0 )
            v33 = -2003304445;
          ModuleFailFastForHRESULT(v33, retaddr);
        }
      }
      _m_prefetchw((const void *)(v24 + 252));
      if ( (~(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(v24 + 252), 8u) & 8) != 0
        && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        DueTime.LowPart = 8;
        *((_QWORD *)&v45 + 1) = &DueTime;
        v46 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_SCHEDULED_COMPOSITION_REASON,
          v25,
          2u,
          (PEVENT_DATA_DESCRIPTOR)&Buffer);
      }
    }
    v15 = *(__int64 (__fastcall **)(CComponentTransform2D *, unsigned int, __int64))(*(_QWORD *)this + 80LL);
    if ( (char *)v15 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 0, 0LL);
    else
      v15(this, 0, 0LL);
    v16 = *((_QWORD *)this + 7);
    LODWORD(v4) = 0;
    v17 = *((float *)this + 48);
    if ( v16 )
    {
      if ( *(_DWORD *)(v16 + 108) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          if ( (*((_BYTE *)this + 76) & 0x10) != 0 )
          {
            v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
                    *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
                    11LL);
            if ( v26 )
            {
              v27 = *((_QWORD *)this + 7);
              if ( v27 )
                v28 = *(_DWORD *)(v27 + 108);
              else
                v28 = 0;
              v39[0] = v28;
              v39[1] = *((unsigned int *)this + 18);
              v29 = CoreUICallSend(v26, v39, 2LL, 11LL, 0, &unk_180336EAA, 4, v17, v36);
              if ( v29 != -2018375675 )
                LODWORD(v4) = v29;
              if ( (int)v4 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0xC8u, 0LL);
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, (int)v4, 0xD9u, 0LL);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
