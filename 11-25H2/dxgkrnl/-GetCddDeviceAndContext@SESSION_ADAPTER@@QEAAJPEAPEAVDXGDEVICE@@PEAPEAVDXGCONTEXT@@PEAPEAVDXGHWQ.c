/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x1402DCA5C
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x1402DC858 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14001C0B0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004AB20 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x140288C10 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403E0558 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x14040373C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4,
        unsigned __int8 a5)
{
  struct DXGDEVICE *v5; // r15
  struct DXGADAPTER *v6; // r14
  __int64 v9; // rbx
  struct DXGADAPTER **v10; // rax
  int PairingAdapters; // esi
  struct DXGADAPTER *v12; // rdx
  __int64 v13; // rsi
  int CddDevice; // r14d
  struct DXGDEVICE *v15; // rdx
  struct DXGADAPTER *v16; // rdx
  struct DXGADAPTER **v17; // rax
  volatile signed __int64 **v18; // rax
  volatile signed __int64 *v19; // rax
  struct DXGHWQUEUE **v20; // rax
  struct DXGHWQUEUE *v21; // rcx
  unsigned __int64 *v23; // [rsp+28h] [rbp-48h]
  struct DXGADAPTER *v24; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+58h] [rbp-18h] BYREF
  struct DXGADAPTER *v26; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-8h] BYREF

  v5 = 0LL;
  v6 = 0LL;
  while ( 1 )
  {
    if ( v5 )
    {
      SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, v5);
      v5 = 0LL;
    }
    v9 = *((_QWORD *)*this + 2333) + 216LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v9 + 8) = KeGetCurrentThread();
    v24 = 0LL;
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v24);
    PairingAdapters = DxgkpGetPairingAdapters(this[2], 0, v10, &v25, 0LL, 0LL, a5);
    if ( PairingAdapters < 0 )
      break;
    v12 = v24;
    if ( !v24 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2690;
      DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"RenderAdapterRef", 2690LL, 0LL, 0LL, 0LL, 0LL);
      v12 = v24;
    }
    if ( v6 == v12 )
    {
      CddDevice = -1073741275;
      WdLogSingleEntry3(1LL, v12, this[2], -1073741275LL);
      v23 = (unsigned __int64 *)this[2];
      WdLogGlobalForLineNumber = 2702;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v24,
        (__int64)v23,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v24, 0LL);
      Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
      *(_QWORD *)(v9 + 8) = 0LL;
      goto LABEL_35;
    }
    v13 = *((_QWORD *)v12 + 391) + 48LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    CddDevice = 0;
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v15 = this[7];
    if ( v15 )
    {
      if ( *(struct DXGADAPTER **)(*((_QWORD *)v15 + 2) + 16LL) == v24 )
      {
        if ( a2 )
        {
          *a2 = v15;
          _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
        }
        if ( a3 )
        {
          v18 = (volatile signed __int64 **)(this + 8);
          if ( *((_DWORD *)this + 13) != 1 )
            v18 = (volatile signed __int64 **)*v18;
          v19 = *v18;
          *a3 = (struct DXGCONTEXT *)v19;
          _InterlockedIncrement64(v19 + 4);
        }
        if ( a4 )
        {
          v20 = (struct DXGHWQUEUE **)this[9];
          v21 = *v20;
          *a4 = *v20;
          if ( v21 )
            _InterlockedIncrement64((volatile signed __int64 *)v21 + 13);
        }
        goto LABEL_23;
      }
      if ( !a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2783;
        DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"AllowPairingChanged", 2783LL, 0LL, 0LL, 0LL, 0LL);
      }
      v5 = this[7];
      v6 = *(struct DXGADAPTER **)(*((_QWORD *)v5 + 2) + 16LL);
    }
    else
    {
      v16 = v24;
      if ( v24 != this[2] )
      {
        v26 = 0LL;
        v17 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v26);
        CddDevice = DxgkpGetPairingAdapters(this[2], 0, v17, &v27, 0LL, 0LL, a5);
        if ( CddDevice < 0 )
        {
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v26, 0LL);
LABEL_23:
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *(_QWORD *)(v13 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v13, 0LL);
          KeLeaveCriticalRegion();
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v24, 0LL);
          Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
          *(_QWORD *)(v9 + 8) = 0LL;
LABEL_35:
          ExReleasePushLockExclusiveEx(v9, 0LL);
          goto LABEL_36;
        }
        v6 = v24;
        if ( v24 != v26 )
        {
          WdLogSingleEntry1(3LL, v24);
          WdLogGlobalForLineNumber = 2736;
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v26, 0LL);
          goto LABEL_13;
        }
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v26, 0LL);
        v16 = v24;
      }
      CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v16, a2, a3, a4);
      if ( CddDevice != -1073741267 )
        goto LABEL_23;
      if ( !a5 )
      {
        WdLogSingleEntry2(3LL, v24, -1073741130LL);
        WdLogGlobalForLineNumber = 2764;
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v13 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v24, 0LL);
        Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
        *(_QWORD *)(v9 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v9, 0LL);
        CddDevice = -1073741130;
LABEL_36:
        KeLeaveCriticalRegion();
        return (unsigned int)CddDevice;
      }
      v6 = v24;
      WdLogSingleEntry1(3LL, v24);
      WdLogGlobalForLineNumber = 2751;
    }
LABEL_13:
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v24, 0LL);
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v24, 0LL);
  Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
  *(_QWORD *)(v9 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v9, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)PairingAdapters;
}
