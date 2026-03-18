/*
 * XREFs of ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x18007D1C0
 * Callers:
 *     ?SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18007D130 (-SetProperty@CAnimationController@@EEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x1801D37B0 (-SetProgress@-$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800370D0 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@?$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ @ 0x18007CFE0 (-Release@-$CMILCOMBaseT@VIUnknownWeakRef@@V1@VCMilObjectDeleter@@@@UEAAKXZ.c)
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18007E420 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ??A?$CPtrArray@$$CBX@@QEBAPEBX_K@Z @ 0x18007EFA0 (--A-$CPtrArray@$$CBX@@QEBAPEBX_K@Z.c)
 *     ?NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007EFE0 (-NotifyListenerOfChange@CContent@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknow.c)
 *     ?IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18007F390 (-IsOfType@CBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnterResource@CResource@@QEAA_NXZ @ 0x18007F3B0 (-EnterResource@CResource@@QEAA_NXZ.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007F3E0 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FDF0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?GetCount@?$CPtrArray@VCVisual@@@@QEBA_KXZ @ 0x1800BF1E0 (-GetCount@-$CPtrArray@VCVisual@@@@QEBA_KXZ.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801348B0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180136900 (-IsOfType@CSpriteVectorShape@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180182370 (-NotifyListenerOfChange@CGeometry@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnkno.c)
 *     ?OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801823D0 (-OnChanged@CVectorShape@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??0CResourceWeakRef@@IEAA@PEAVCResource@@@Z @ 0x1801E2534 (--0CResourceWeakRef@@IEAA@PEAVCResource@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802412D4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationController::OnProgressChanged(CAnimationController *this)
{
  __int64 v1; // rbp
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
  __int64 v17; // r14
  struct _RTL_GENERIC_TABLE *v18; // rcx
  char *v19; // rbx
  char *v20; // rax
  void *v21; // rsi
  char *v22; // rdx
  void (__fastcall *v23)(CAnimationController *, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v24)(CAnimationController *, _QWORD, _QWORD); // rax
  int v25; // eax
  CResourceWeakRef *v26; // rax
  CResourceWeakRef *v27; // rax
  signed __int64 v28; // rbx
  unsigned int Count; // eax
  __int64 k; // rbx
  __int64 v31; // rsi
  void (__fastcall *v32)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 (__fastcall *v33)(__int64, __int64); // rax
  HANDLE ProcessHeap; // rax
  unsigned int j; // r8d
  __int64 v36; // rcx
  char v37; // al
  __int64 v38; // rax
  int v39; // [rsp+20h] [rbp-78h]
  int Buffer; // [rsp+30h] [rbp-68h] BYREF
  LPVOID lpMem[2]; // [rsp+38h] [rbp-60h]
  __int64 v42; // [rsp+48h] [rbp-50h]
  int v43; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v45; // [rsp+A0h] [rbp+8h] BYREF
  int v46; // [rsp+A8h] [rbp+10h] BYREF

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
        v45 = *((_DWORD *)this + 20);
        v11 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v10 + 96LL);
        v12 = (char *)v11 == (char *)CKeyframeAnimation::SetProperty
            ? CKeyframeAnimation::SetProperty(v10, 32LL, 18LL, &v45)
            : v11(v10, 32LL, 18LL, &v45);
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)0xCE,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
            (const char *)(unsigned int)v12,
            v39);
      }
      if ( (*((_BYTE *)this + 120) & 2) != 0 )
      {
        v13 = *v4;
        v46 = *((_DWORD *)this + 21);
        v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v13 + 96LL);
        v15 = (char *)v14 == (char *)CKeyframeAnimation::SetProperty
            ? CKeyframeAnimation::SetProperty(v13, 30LL, 18LL, &v46)
            : v14(v13, 30LL, 18LL, &v46);
        if ( v15 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            (wil::details::in1diag3 *)retaddr,
            (void *)0xD7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationcontroller.cpp",
            (const char *)(unsigned int)v15,
            v39);
      }
    }
    *((_BYTE *)this + 120) &= ~1u;
    *((_BYTE *)this + 120) &= 0xE9u;
  }
  v16 = *((_QWORD *)this + 3);
  v17 = *(_QWORD *)(v16 + 888);
  if ( v17 == *(_QWORD *)(v16 + 896) )
  {
    v38 = v17 + 1;
    v17 = 1LL;
    if ( v38 )
      v17 = v38;
  }
  v18 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
  v19 = 0LL;
  if ( v18 )
  {
    v42 = 0LL;
    v43 = 0;
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
    for ( j = 0; j < *((_DWORD *)v22 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 8 * v36) + 232LL) = v17 )
      v36 = j++;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0LL, 8LL);
  }
  v23 = *(void (__fastcall **)(CAnimationController *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL);
  if ( (char *)v23 == (char *)CResource::NotifyOnChanged )
  {
    if ( CResource::EnterResource(this) )
    {
      v24 = *(__int64 (__fastcall **)(CAnimationController *, _QWORD, _QWORD))(*(_QWORD *)this + 176LL);
      if ( (char *)v24 == (char *)CVisual::OnChanged )
      {
        v25 = CVisual::OnChanged(this, 0LL, 0LL);
      }
      else if ( (char *)v24 == (char *)CTransform3D::OnChanged )
      {
        v25 = CTransform3D::OnChanged(this, 0LL, 0LL);
      }
      else
      {
        v25 = (char *)v24 == (char *)CVectorShape::OnChanged
            ? CVectorShape::OnChanged(this, 0LL, 0LL)
            : v24(this, 0LL, 0LL);
      }
      if ( v25 )
      {
        Count = CPtrArray<CVisual>::GetCount((char *)this + 32);
        if ( Count )
        {
          for ( k = Count; k; --k )
          {
            v31 = __A__CPtrArray___CBX__QEBAPEBX_K_Z((char *)this + 32, v1);
            v32 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 88LL);
            if ( (char *)v32 != (char *)CContent::NotifyListenerOfChange )
            {
              if ( (char *)v32 == (char *)&CBrush::NotifyListenerOfChange )
              {
                CContent::NotifyListenerOfChange(this, v31, 0LL, 0LL);
              }
              else if ( (char *)v32 == (char *)CGeometry::NotifyListenerOfChange )
              {
                CGeometry::NotifyListenerOfChange(this, v31, 0LL, 0LL);
              }
              else
              {
                v32(this, v31, 0LL, 0LL);
              }
              goto LABEL_44;
            }
            v33 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 64LL);
            if ( v33 == CSurfaceBrush::IsOfType )
            {
              if ( (unsigned __int8)CBrush::IsOfType(v31, 184LL) )
                goto LABEL_51;
            }
            else
            {
              if ( v33 != CSpriteVisual::IsOfType )
              {
                if ( v33 == CSpriteVectorShape::IsOfType )
                  v37 = CSpriteVectorShape::IsOfType(v31, 184LL);
                else
                  v37 = v33(v31, 184LL);
                if ( !v37 )
                  goto LABEL_43;
LABEL_51:
                CResource::NotifyListenerOfChange(this, v31, 5LL);
                goto LABEL_43;
              }
              if ( CVisual::IsOfType(v31, 184) )
                goto LABEL_51;
            }
LABEL_43:
            CResource::NotifyListenerOfChange(this, v31, 0LL);
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
    v23(this, 0LL, 0LL);
  }
}
