/*
 * XREFs of NtOpenCompositionSurfaceRealizationInfo @ 0x1400453C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x140018D84 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x140019E18 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     DxgkGetWin32kImportTable @ 0x14001C128 (DxgkGetWin32kImportTable.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1400383AC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x14003A1F4 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z @ 0x14004BDDC (-GetSwapChainRealizationInfo@CCompositionSurface@@QEBAJ_KPEAIPEAUCSM_REALIZATION_INFO@@@Z.c)
 *     RtlCopyFromUser @ 0x140064F88 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x14018D054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceRealizationInfo(CCompositionSurface *a1, void *a2, void *a3, void *a4)
{
  int SwapChainRealizationInfo; // edi
  PVOID v7; // r12
  struct CSM_REALIZATION_INFO *v8; // rsi
  __int64 Pool2; // r15
  __int64 Win32kImportTable; // rax
  __int64 v11; // r8
  __int64 i; // r14
  bool v14; // [rsp+20h] [rbp-578h]
  unsigned int Src[3]; // [rsp+24h] [rbp-574h] BYREF
  CCompositionSurface *v16; // [rsp+30h] [rbp-568h] BYREF
  PVOID Object; // [rsp+38h] [rbp-560h] BYREF
  _BYTE *v18; // [rsp+40h] [rbp-558h]
  __int64 v19; // [rsp+48h] [rbp-550h]
  PVOID v20; // [rsp+50h] [rbp-548h]
  CCompositionSurface *v21; // [rsp+58h] [rbp-540h]
  void *v22; // [rsp+60h] [rbp-538h]
  void *v23; // [rsp+68h] [rbp-530h]
  _BYTE v24[1248]; // [rsp+70h] [rbp-528h] BYREF

  v16 = a1;
  v21 = a1;
  v22 = a3;
  v23 = a4;
  SwapChainRealizationInfo = 0;
  v7 = 0LL;
  v20 = 0LL;
  v8 = 0LL;
  v18 = 0LL;
  Pool2 = 0LL;
  v19 = 0LL;
  Src[0] = 0;
  v14 = 0;
  if ( a2 && a3 )
  {
    Object = 0LL;
    RtlCopyFromUser(&Object, a2, 8uLL);
    v7 = Object;
    v20 = Object;
    Src[1] = 0;
    RtlCopyFromUser(&Src[1], a3, 4uLL);
    Src[0] = Src[1];
  }
  else
  {
    SwapChainRealizationInfo = -1073741811;
  }
  KeEnterCriticalRegion();
  *(_QWORD *)&Src[1] = 0LL;
  if ( SwapChainRealizationInfo < 0 )
    goto LABEL_33;
  if ( a4 )
  {
    if ( Src[0] )
    {
      SwapChainRealizationInfo = RtlULongLongMult(Src[0], 0x28uLL, (unsigned __int64 *)&Src[1]);
      if ( SwapChainRealizationInfo >= 0 )
      {
        if ( *(_QWORD *)&Src[1] > 0x4D8uLL )
        {
          Pool2 = ExAllocatePool2(257LL, *(_QWORD *)&Src[1], 1766675267LL);
          v19 = Pool2;
          v8 = (struct CSM_REALIZATION_INFO *)Pool2;
          v18 = (_BYTE *)Pool2;
          if ( !Pool2 )
            SwapChainRealizationInfo = -1073741801;
        }
        else
        {
          v8 = (struct CSM_REALIZATION_INFO *)v24;
          v18 = v24;
        }
      }
    }
  }
  if ( SwapChainRealizationInfo < 0 )
    goto LABEL_33;
  Win32kImportTable = DxgkGetWin32kImportTable();
  if ( (*(unsigned int (**)(void))(Win32kImportTable + 608))() )
  {
    Object = 0LL;
    SwapChainRealizationInfo = CompositionSurfaceObject::ResolveHandle(
                                 v16,
                                 1u,
                                 v11,
                                 (struct CompositionSurfaceObject **)&Object);
    if ( SwapChainRealizationInfo >= 0 )
    {
      v16 = 0LL;
      SwapChainRealizationInfo = CompositionSurfaceObject::LockForRead((CompositionSurfaceObject *)Object, &v16);
      if ( SwapChainRealizationInfo >= 0 )
      {
        SwapChainRealizationInfo = CCompositionSurface::GetSwapChainRealizationInfo(v16, (unsigned __int64)v7, Src, v8);
        CCompositionSurface::UnlockAndRelease(v16);
        v14 = SwapChainRealizationInfo >= 0;
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    SwapChainRealizationInfo = -1073741790;
  }
  if ( SwapChainRealizationInfo < 0 )
  {
LABEL_33:
    if ( v14 )
    {
      if ( v8 )
      {
        for ( i = 0LL; (unsigned int)i < Src[0]; i = (unsigned int)(i + 1) )
          ObCloseHandle(*((HANDLE *)v8 + 5 * i + 1), 1);
      }
    }
  }
  else
  {
    RtlCopyToUser(a3, Src, 4uLL);
    if ( v8 )
      RtlCopyToUser(a4, v8, *(size_t *)&Src[1]);
  }
  if ( Pool2 )
    ExFreePool2(Pool2, 1766675267LL, 0LL, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)SwapChainRealizationInfo;
}
