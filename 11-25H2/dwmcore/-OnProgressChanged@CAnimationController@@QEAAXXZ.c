/*
 * XREFs of ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x1800AF200
 * Callers:
 *     ?SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800AF170 (-SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x1800B1200 (-SetProgress@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 * Callees:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180020CD0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021130 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?EnterResource@CResource@@QEAA_NXZ @ 0x1800213D0 (-EnterResource@CResource@@QEAA_NXZ.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x180021770 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180021DE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022190 (-IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022620 (-IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x1800AF020 (-Release@-$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B0590 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800E56E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18012E8F0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801DC2B0 (-OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??0CResourceWeakRef@@IEAA@PEAVCResource@@@Z @ 0x1801EC244 (--0CResourceWeakRef@@IEAA@PEAVCResource@@@Z.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F75B0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801F8C30 (-NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkno.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180248848 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationController::OnProgressChanged(CAnimationController *this)
{
  unsigned __int64 v1; // rbp
  char v2; // al
  __int64 *v4; // rsi
  __int64 *i; // r15
  __int64 v6; // r14
  CResourceWeakRef *v7; // rcx
  void (*v8)(void); // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64, __int64, __int64, int *); // rax
  int v12; // eax
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, __int64, __int64, int *); // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rsi
  struct _RTL_GENERIC_TABLE *v18; // rcx
  char *v19; // rbx
  char *v20; // rax
  void *v21; // r14
  char *v22; // rdx
  __int64 (__fastcall *v23)(CAnimationController *, unsigned int, __int64); // rax
  __int64 (__fastcall *v24)(__int64, unsigned int, CMaskBrush *); // rax
  int v25; // eax
  CResourceWeakRef *v26; // rax
  CResourceWeakRef *v27; // rax
  signed __int64 v28; // rbx
  unsigned int Count; // eax
  __int64 k; // rbx
  __int64 *v31; // rsi
  void (__fastcall *v32)(__int64, __int64 *, __int64, CMaskBrush *); // rax
  bool (__fastcall *v33)(__int64, int); // rax
  HANDLE ProcessHeap; // rax
  __int64 j; // r8
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // r8
  void *v39; // rcx
  signed int LastError; // eax
  bool v41; // al
  __int64 v42; // rax
  int lpArgToCompletionRoutine; // [rsp+20h] [rbp-B8h]
  int v44; // [rsp+40h] [rbp-98h] BYREF
  int v45; // [rsp+44h] [rbp-94h] BYREF
  int v46; // [rsp+48h] [rbp-90h] BYREF
  LARGE_INTEGER DueTime; // [rsp+50h] [rbp-88h] BYREF
  int Buffer; // [rsp+58h] [rbp-80h] BYREF
  LPVOID lpMem[2]; // [rsp+60h] [rbp-78h]
  __int64 v50; // [rsp+70h] [rbp-68h]
  int v51; // [rsp+78h] [rbp-60h]
  char v52[16]; // [rsp+80h] [rbp-58h] BYREF
  int *v53; // [rsp+90h] [rbp-48h]
  __int64 v54; // [rsp+98h] [rbp-40h]
  void *retaddr; // [rsp+D8h] [rbp+0h]

  v1 = 0LL;
  v2 = *((_BYTE *)this + 120) | 1;
  *((_BYTE *)this + 120) = v2;
  if ( (v2 & 4) != 0 )
  {
    v4 = (__int64 *)*((_QWORD *)this + 11);
    for ( i = (__int64 *)*((_QWORD *)this + 12); v4 != i; ++v4 )
    {
      if ( (*((_BYTE *)this + 120) & 0x10) != 0 )
      {
        v6 = *v4;
        v7 = *(CResourceWeakRef **)(*v4 + 328);
        *(_QWORD *)(*v4 + 328) = 0LL;
        if ( v7 )
        {
          v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
          if ( (char *)v8 == (char *)CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release )
            CMILCOMBaseT<IUnknownWeakRef,IUnknownWeakRef,CMilObjectDeleter>::Release(v7);
          else
            v8();
        }
        if ( !*((_QWORD *)this + 2) )
        {
          v26 = (CResourceWeakRef *)MIDL_user_allocate(0x60uLL);
          if ( !v26 || (v27 = CResourceWeakRef::CResourceWeakRef(v26, this), (v28 = (signed __int64)v27) == 0) )
            ModuleFailFastForHRESULT(-2147024882, retaddr);
          (*(void (__fastcall **)(CResourceWeakRef *))(*(_QWORD *)v27 + 8LL))(v27);
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 2, v28, 0LL) )
            (*(void (__fastcall **)(signed __int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        v9 = *((_QWORD *)this + 2);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
        *(_QWORD *)(v6 + 328) = v9;
      }
      if ( (*((_BYTE *)this + 120) & 1) != 0 )
      {
        v10 = *v4;
        v44 = *((_DWORD *)this + 20);
        v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v10 + 96LL);
        v12 = (char *)v11 == (char *)CKeyframeAnimation::SetProperty
            ? CKeyframeAnimation::SetProperty(v10, 32LL, 18LL, &v44)
            : v11(v10, 32LL, 18LL, &v44);
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)0xCE,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
            (const char *)(unsigned int)v12,
            lpArgToCompletionRoutine);
      }
      if ( (*((_BYTE *)this + 120) & 2) != 0 )
      {
        v13 = *v4;
        v45 = *((_DWORD *)this + 21);
        v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v13 + 96LL);
        v15 = (char *)v14 == (char *)CKeyframeAnimation::SetProperty
            ? CKeyframeAnimation::SetProperty(v13, 30LL, 18LL, &v45)
            : v14(v13, 30LL, 18LL, &v45);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)0xD7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
            (const char *)(unsigned int)v15,
            lpArgToCompletionRoutine);
      }
    }
    *((_BYTE *)this + 120) &= 0xE8u;
  }
  v16 = *((_QWORD *)this + 3);
  v17 = *(_QWORD *)(v16 + 888);
  if ( v17 == *(_QWORD *)(v16 + 896) )
  {
    v42 = v17 + 1;
    v17 = 1LL;
    if ( v42 )
      v17 = v42;
  }
  v18 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
  v19 = 0LL;
  if ( v18 )
  {
    v50 = 0LL;
    v51 = 0;
    *(_OWORD *)lpMem = 0LL;
    Buffer = 2;
    v20 = (char *)RtlLookupElementGenericTable(v18, &Buffer);
    v21 = lpMem[0];
    v19 = v20;
    if ( lpMem[0] != lpMem[1] )
    {
      if ( lpMem[0] )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v21);
      }
      lpMem[0] = 0LL;
    }
  }
  v22 = v19 + 8;
  if ( !v19 )
    v22 = 0LL;
  if ( v22 )
  {
    for ( j = 0LL; (unsigned int)j < *((_DWORD *)v22 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 8 * v36) + 232LL) = v17 )
    {
      v36 = (unsigned int)j;
      j = (unsigned int)(j + 1);
    }
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
    v37 = *((_QWORD *)this + 3);
    (*(void (__fastcall **)(_QWORD, char *, __int64))(**(_QWORD **)(v37 + 312) + 24LL))(*(_QWORD *)(v37 + 312), v22, j);
    if ( *(_DWORD *)(v37 + 248) )
    {
      v39 = *(void **)(v37 + 240);
      *(_DWORD *)(v37 + 248) = 0;
      DueTime.QuadPart = 0LL;
      if ( !SetWaitableTimerEx(v39, &DueTime, 0, 0LL, 0LL, 0LL, 0) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        if ( LastError >= 0 )
          LastError = -2003304445;
        ModuleFailFastForHRESULT(LastError, retaddr);
      }
    }
    _m_prefetchw((const void *)(v37 + 252));
    if ( (~(unsigned __int8)_InterlockedOr((volatile signed __int32 *)(v37 + 252), 8u) & 8) != 0
      && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v46 = 8;
      v53 = &v46;
      v54 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULED_COMPOSITION_REASON,
        v38,
        2LL,
        v52);
    }
  }
  v23 = *(__int64 (__fastcall **)(CAnimationController *, unsigned int, __int64))(*(_QWORD *)this + 80LL);
  if ( (char *)v23 == (char *)CResource::NotifyOnChanged )
  {
    if ( CResource::EnterResource(this) )
    {
      v24 = *(__int64 (__fastcall **)(__int64, unsigned int, CMaskBrush *))(*(_QWORD *)this + 176LL);
      if ( v24 == CVisual::OnChanged )
      {
        v25 = CVisual::OnChanged((__int64)this, 0, 0LL);
      }
      else if ( (char *)v24 == (char *)CTransform3D::OnChanged )
      {
        v25 = CTransform3D::OnChanged(this);
      }
      else
      {
        v25 = (char *)v24 == (char *)CVectorShape::OnChanged
            ? CVectorShape::OnChanged(this)
            : v24((__int64)this, 0, 0LL);
      }
      if ( v25 )
      {
        Count = CPtrArray<CVisual>::GetCount((char *)this + 32);
        if ( Count )
        {
          for ( k = Count; k; --k )
          {
            v31 = (__int64 *)__A__CPtrArray___CBX__QEBAPEBX_K_Z((__int64 *)this + 4, v1);
            v32 = *(void (__fastcall **)(__int64, __int64 *, __int64, CMaskBrush *))(*(_QWORD *)this + 88LL);
            if ( v32 != CContent::NotifyListenerOfChange )
            {
              if ( v32 == CBrush::NotifyListenerOfChange )
              {
                CContent::NotifyListenerOfChange((__int64)this, v31, 0LL, 0LL);
              }
              else if ( (char *)v32 == (char *)CGeometry::NotifyListenerOfChange )
              {
                CGeometry::NotifyListenerOfChange(this, v31, 0LL, 0LL);
              }
              else
              {
                v32((__int64)this, v31, 0LL, 0LL);
              }
              goto LABEL_44;
            }
            v33 = *(bool (__fastcall **)(__int64, int))(*v31 + 64);
            if ( v33 == CSurfaceBrush::IsOfType )
            {
              if ( CBrush::IsOfType((__int64)v31, 182) )
                goto LABEL_54;
            }
            else
            {
              if ( v33 != CSpriteVisual::IsOfType )
              {
                if ( v33 == CSpriteVectorShape::IsOfType )
                  v41 = CSpriteVectorShape::IsOfType((__int64)v31, 182);
                else
                  v41 = v33((__int64)v31, 182);
                if ( !v41 )
                  goto LABEL_43;
LABEL_54:
                CResource::NotifyListenerOfChange((__int64)this, (CResource *)v31, 5u, 0LL);
                goto LABEL_43;
              }
              if ( (unsigned __int8)CVisual::IsOfType(v31, 182LL) )
                goto LABEL_54;
            }
LABEL_43:
            CResource::NotifyListenerOfChange((__int64)this, (CResource *)v31, 0, 0LL);
LABEL_44:
            ++v1;
          }
        }
      }
    }
    *((_DWORD *)this + 10) ^= ((unsigned __int8)*((_DWORD *)this + 10) ^ (unsigned __int8)(2
                                                                                         * (*((_DWORD *)this + 10) >> 1)
                                                                                         - 2)) & 6;
  }
  else
  {
    v23(this, 0, 0LL);
  }
}
