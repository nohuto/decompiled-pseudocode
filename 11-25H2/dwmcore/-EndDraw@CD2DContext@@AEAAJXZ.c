/*
 * XREFs of ?EndDraw@CD2DContext@@AEAAJXZ @ 0x1800D93D0
 * Callers:
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x1800D8170 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D8BD0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x1800D9780 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCDrawListEntryBatch@@U?$RefCountLifetime@PEAVCDrawListEntryBatch@@@@@@QEAAXXZ @ 0x1800DA920 (-Optimize@-$ShrinkableArray@PEAVCDrawListEntryBatch@@U-$RefCountLifetime@PEAVCDrawListEntryBatch.c)
 *     ?Optimize@?$ShrinkableArray@PEAVCBatchCommand@@U?$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ @ 0x1800DAA30 (-Optimize@-$ShrinkableArray@PEAVCBatchCommand@@U-$UniqueLifetime@PEAVCBatchCommand@@@@@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180142B50 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18025B75C (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::EndDraw(CD2DContext *this, __int64 a2, __int64 a3)
{
  char v4; // r15
  int v5; // eax
  __int64 v6; // r8
  int v7; // ebx
  int *v8; // r14
  __int64 v10; // rax
  int v11; // eax
  int v12; // ecx
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+40h] [rbp-40h] BYREF
  int *v19; // [rsp+50h] [rbp-30h]
  __int64 v20; // [rsp+58h] [rbp-28h]
  int *v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+68h] [rbp-18h]

  if ( *((_BYTE *)this + 437) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v17 = 0;
      v19 = &v16;
      v16 = 17;
      v21 = &v17;
      v20 = 4LL;
      v22 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Start,
        a3,
        3u,
        &v18);
    }
    if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    {
      v4 = 1;
      v14 = 0LL;
      if ( g_pComposition )
        v14 = *((_QWORD *)g_pComposition + 111);
      if ( *((_QWORD *)g_pComposition + 2) == v14 )
        QueryPerformanceCounter((LARGE_INTEGER *)g_pComposition + 19);
    }
    else
    {
      v4 = 0;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 25) + 392LL))(
           *((_QWORD *)this + 25),
           0LL,
           0LL);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x6C2u, 0LL);
    *(_WORD *)((char *)this + 437) = 0;
    if ( !*((_DWORD *)this + 41) )
    {
      *((_DWORD *)this + 41) = 512;
      ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize((char *)this + 8);
      ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize((char *)this + 48);
      ShrinkableArray<CDrawListEntryBatch *,RefCountLifetime<CDrawListEntryBatch *>>::Optimize((char *)this + 88);
    }
    --*((_DWORD *)this + 41);
    if ( v4 )
    {
      v15 = 0LL;
      if ( g_pComposition )
        v15 = *((_QWORD *)g_pComposition + 111);
      if ( *((_QWORD *)g_pComposition + 2) == v15 )
        QueryPerformanceCounter((LARGE_INTEGER *)g_pComposition + 20);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v16 = 0;
      v19 = &v17;
      v17 = 17;
      v21 = &v16;
      v20 = 4LL;
      v22 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v6,
        3u,
        &v18);
    }
  }
  else
  {
    v10 = (__int64)this + 1096;
    if ( !this )
      v10 = 1112LL;
    if ( *(_DWORD *)v10 )
    {
      v7 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x6D4u, 0LL);
    }
    else
    {
      v7 = 0;
    }
  }
  v8 = (int *)((char *)this + 1096);
  if ( *((_DWORD *)this + 274)
    || v7 != -2005532292 && v7 != -2147024882 && v7 != -2005270523
    || !*((_DWORD *)this + 108) )
  {
    goto LABEL_17;
  }
  if ( v7 != -2005270523 )
  {
LABEL_28:
    CD2DContext::TempDisableHardwareProtection(this);
    goto LABEL_17;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 67) + 312LL))(*((_QWORD *)this + 67));
  v12 = *v8;
  if ( v11 == -2005270480 )
  {
    if ( v12 )
      goto LABEL_28;
    *v8 = -2005270480;
    CD2DContext::TempDisableHardwareProtection(this);
LABEL_17:
    if ( v7 >= 0 )
      goto LABEL_18;
    goto LABEL_29;
  }
  if ( !v12 )
    *v8 = -2005270523;
LABEL_29:
  if ( *v8 )
    return 2291662989LL;
LABEL_18:
  v16 = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v7, 0LL, &v16) )
  {
    v13 = v16;
    if ( v16 == -2003304307 )
    {
      if ( v7 >= 0 )
        v7 = -2003304307;
      if ( !*v8 )
        *v8 = v7;
    }
    v7 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xB4Du, 0LL);
  }
  return (unsigned int)v7;
}
