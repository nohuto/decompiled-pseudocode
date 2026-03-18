/*
 * XREFs of ?GetCddDeviceAndContext@SESSION_ADAPTER@@QEAAJPEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@E@Z @ 0x140346FDC
 * Callers:
 *     DxgkGetCddDeviceAndContextForCurrentSession @ 0x140346DD8 (DxgkGetCddDeviceAndContextForCurrentSession.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14000CAD0 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x14004A410 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1402951D0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403D8328 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1403FD47C (-CreateCddDevice@SESSION_ADAPTER@@AEAAJPEAVDXGADAPTER@@PEAPEAVDXGDEVICE@@PEAPEAVDXGCONTEXT@@PEAP.c)
 */

__int64 __fastcall SESSION_ADAPTER::GetCddDeviceAndContext(
        struct DXGADAPTER **this,
        struct DXGDEVICE **a2,
        struct DXGCONTEXT **a3,
        struct DXGHWQUEUE **a4,
        unsigned __int8 a5)
{
  struct DXGDEVICE *v5; // r15
  struct DXGADAPTER *v7; // r14
  __int64 v10; // rbx
  struct DXGADAPTER **v11; // rax
  int PairingAdapters; // esi
  struct DXGADAPTER *v13; // rdx
  __int64 v14; // rsi
  int CddDevice; // r14d
  struct DXGDEVICE *v16; // rdx
  struct DXGADAPTER *v17; // rdx
  struct DXGADAPTER **v18; // rax
  volatile signed __int64 **v19; // rax
  volatile signed __int64 *v20; // rax
  struct DXGHWQUEUE **v21; // rax
  struct DXGHWQUEUE *v22; // rcx
  unsigned __int64 *v24; // [rsp+28h] [rbp-48h]
  struct DXGADAPTER *v25; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-18h] BYREF
  struct DXGADAPTER *v27; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 v28; // [rsp+68h] [rbp-8h] BYREF

  v5 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    if ( v5 )
    {
      SESSION_ADAPTER::DestroyCddDeviceAndContext((SESSION_ADAPTER *)this, v5);
      v5 = 0LL;
    }
    v10 = *((_QWORD *)*this + 2333) + 216LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    v25 = 0LL;
    v11 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v25);
    PairingAdapters = DxgkpGetPairingAdapters(this[2], 0, v11, &v26, 0LL, 0LL, a5);
    if ( PairingAdapters < 0 )
      break;
    v13 = v25;
    if ( !v25 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2710;
      DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"RenderAdapterRef", 2710LL, 0LL, 0LL, 0LL, 0LL);
      v13 = v25;
    }
    if ( v7 == v13 )
    {
      CddDevice = -1073741275;
      WdLogSingleEntry3(1LL, v13, this[2], -1073741275LL);
      v24 = (unsigned __int64 *)this[2];
      WdLogGlobalForLineNumber = 2722;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"DxgkpGetPairingAdapters keeps returning same disabled adapter 0x%I64x for display adapter 0x%I64x, returning 0x%I64x.",
        (__int64)v25,
        (__int64)v24,
        -1073741275LL,
        0LL,
        0LL);
      DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v25, 0LL);
      *(_QWORD *)(v10 + 8) = 0LL;
      goto LABEL_35;
    }
    v14 = *((_QWORD *)v13 + 391) + 48LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v14, 0LL);
    CddDevice = 0;
    *(_QWORD *)(v14 + 8) = KeGetCurrentThread();
    v16 = this[7];
    if ( v16 )
    {
      if ( *(struct DXGADAPTER **)(*((_QWORD *)v16 + 2) + 16LL) == v25 )
      {
        if ( a2 )
        {
          *a2 = v16;
          _InterlockedIncrement64((volatile signed __int64 *)this[7] + 8);
        }
        if ( a3 )
        {
          v19 = (volatile signed __int64 **)(this + 8);
          if ( *((_DWORD *)this + 13) != 1 )
            v19 = (volatile signed __int64 **)*v19;
          v20 = *v19;
          *a3 = (struct DXGCONTEXT *)v20;
          _InterlockedIncrement64(v20 + 4);
        }
        if ( a4 )
        {
          v21 = (struct DXGHWQUEUE **)this[9];
          v22 = *v21;
          *a4 = *v21;
          if ( v22 )
            _InterlockedIncrement64((volatile signed __int64 *)v22 + 13);
        }
LABEL_23:
        *(_QWORD *)(v14 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v14, 0LL);
        KeLeaveCriticalRegion();
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v25, 0LL);
        *(_QWORD *)(v10 + 8) = 0LL;
LABEL_35:
        ExReleasePushLockExclusiveEx(v10, 0LL);
        KeLeaveCriticalRegion();
        return (unsigned int)CddDevice;
      }
      if ( !a5 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2803;
        DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"AllowPairingChanged", 2803LL, 0LL, 0LL, 0LL, 0LL);
      }
      v5 = this[7];
      v7 = *(struct DXGADAPTER **)(*((_QWORD *)v5 + 2) + 16LL);
    }
    else
    {
      v17 = v25;
      if ( v25 != this[2] )
      {
        v27 = 0LL;
        v18 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v27);
        CddDevice = DxgkpGetPairingAdapters(this[2], 0, v18, &v28, 0LL, 0LL, a5);
        if ( CddDevice < 0 )
        {
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v27, 0LL);
          goto LABEL_23;
        }
        v7 = v25;
        if ( v25 != v27 )
        {
          WdLogSingleEntry1(3LL, v25);
          WdLogGlobalForLineNumber = 2756;
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v27, 0LL);
          goto LABEL_13;
        }
        DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v27, 0LL);
        v17 = v25;
      }
      CddDevice = SESSION_ADAPTER::CreateCddDevice((SESSION_ADAPTER *)this, v17, a2, a3, a4);
      if ( CddDevice != -1073741267 )
        goto LABEL_23;
      if ( !a5 )
      {
        CddDevice = -1073741130;
        WdLogSingleEntry2(3LL, v25, -1073741130LL);
        WdLogGlobalForLineNumber = 2784;
        goto LABEL_23;
      }
      v7 = v25;
      WdLogSingleEntry1(3LL, v25);
      WdLogGlobalForLineNumber = 2771;
    }
LABEL_13:
    *(_QWORD *)(v14 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v25, 0LL);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v25, 0LL);
  *(_QWORD *)(v10 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)PairingAdapters;
}
