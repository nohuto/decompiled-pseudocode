/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403973B4
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403A4C78 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140035C78 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x140040354 (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004DCCC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x14004F8C0 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ?GetProcessID@DXGPROCESS@@QEBAQEAXXZ @ 0x14005DA58 (-GetProcessID@DXGPROCESS@@QEBAQEAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018468C (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x140229444 (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402B64B0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x1403369A0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14036620C (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1403AC540 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  int v5; // r15d
  DXGADAPTER *v7; // rcx
  signed __int64 v8; // rax
  int v9; // esi
  __int64 result; // rax
  struct DXGPROCESS *Current; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r8d
  struct _ERESOURCE *v18; // rax
  NTSTATUS v19; // eax
  __int64 v20; // rax
  int HostProcess; // edx
  int *v22; // rsi
  int Device; // eax
  struct _KEVENT *v24; // rax
  _QWORD *v25; // r8
  int Value; // edx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rsi
  DXGGLOBAL *Global; // rax
  void *KmdProcessHandle; // rax
  ADAPTER_RENDER *v35; // rcx
  int v36; // edx
  int v37; // ecx
  int v38; // eax
  unsigned int v39; // r8d
  __int64 v40; // rax
  int v41; // eax
  unsigned int v42; // r14d
  __int64 v43; // r14
  unsigned __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rdi
  DXGPROCESS *v48; // rdi
  __int64 v49; // r14
  int v50; // r15d
  int v51; // r12d
  int v52; // r13d
  int v53; // esi
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 ProcessID; // r9
  __int64 v57; // [rsp+30h] [rbp-61h]
  __int64 v58; // [rsp+40h] [rbp-51h]
  __int64 v59; // [rsp+48h] [rbp-49h]
  unsigned int v60; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v61[20]; // [rsp+7Ch] [rbp-15h]
  _BYTE v62[24]; // [rsp+90h] [rbp-1h] BYREF
  _DXGKARG_CREATEDEVICE v63; // [rsp+A8h] [rbp+17h] BYREF
  unsigned __int8 v64; // [rsp+F8h] [rbp+67h]

  v3 = *((_QWORD *)this + 2);
  v5 = a3;
  v7 = *(DXGADAPTER **)(v3 + 16);
  if ( (*((_DWORD *)v7 + 744) & 8) != 0
    && (*((_DWORD *)v7 + 617) & 0x80u) == 0
    && !DXGADAPTER::IsGpuVirtualAddressingSupported(v7) )
  {
    v7 = (DXGADAPTER *)*((_QWORD *)this + 5);
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 176), (signed __int64)v7, 0LL);
    if ( v8 && *((_QWORD *)this + 5) != v8 )
    {
      v9 = -1071775744;
      WdLogSingleEntry3(3LL, this, v8, -1071775744LL);
      WdLogGlobalForLineNumber = 1051;
      return (unsigned int)v9;
    }
    *((_BYTE *)this + 1917) |= 4u;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL));
  }
  Current = DXGPROCESS::GetCurrent((__int64)v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v62, Current);
  v12 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)this + 5) + 280LL), (__int64)this, 3, 0, 0);
  *((_DWORD *)this + 117) = v12;
  v13 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1070;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
    return 3221225495LL;
  }
  v14 = *((_QWORD *)this + 5);
  v15 = (v12 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 < *(_DWORD *)(v14 + 296) )
  {
    v16 = *(_QWORD *)(v14 + 280);
    v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
    if ( (((unsigned int)v13 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
      && (v17 & 0x2000) == 0
      && (v17 & 0x1F) != 0 )
    {
      *(_DWORD *)(v16 + 16 * ((v13 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v62);
  v18 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 17) = v18;
  if ( !v18 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1088;
    return 3221225495LL;
  }
  v19 = ExInitializeResourceLite(v18);
  v9 = v19;
  if ( v19 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v19);
    WdLogGlobalForLineNumber = 1097;
    return (unsigned int)v9;
  }
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    v20 = operator new[](0x14uLL, 0x4B677844u, 64LL);
    *((_QWORD *)this + 60) = v20;
    if ( !v20 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1107;
      DxgkLogInternalTriageEvent(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Failed to allocate m_pVidSchErrorCode",
        1107LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *(_QWORD *)v20 = 0LL;
    *(_DWORD *)(v20 + 8) = 4;
    *(_DWORD *)(v20 + 12) = 1;
    *(_DWORD *)(*((_QWORD *)this + 60) + 16LL) = 0;
    HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
    if ( !HostProcess )
    {
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 1120;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to get host adapter process, returning 0x%I64x",
        -1073741823LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
    v22 = (int *)((char *)this + 464);
    Device = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateDevice(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 4664LL),
               HostProcess,
               *(struct _D3DKMT_CREATEDEVICEFLAGS *)((char *)this + 488),
               *((_DWORD *)this + 116) == 2,
               *((struct CRefCountedBuffer **)this + 60));
    *((_DWORD *)this + 118) = Device;
    if ( !Device )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1129;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to create device on the host",
        1129LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741823LL;
    }
LABEL_55:
    v43 = *((_QWORD *)this + 5);
    v44 = *((unsigned int *)this + 117);
    *((_DWORD *)this + 152) = 1;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v43 + 248));
    v45 = ((unsigned int)v44 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v45 < *(_DWORD *)(v43 + 296) )
    {
      v46 = *(_QWORD *)(v43 + 280);
      if ( (((unsigned int)v44 >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60)
        && (*(_DWORD *)(v46 + 16 * v45 + 8) & 0x1F) != 0 )
      {
        v47 = 2 * ((v44 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v46 + 8 * v47 + 8) & 0x2000) == 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 224;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v22 = (int *)((char *)this + 464);
        }
        *(_DWORD *)(*(_QWORD *)(v43 + 280) + 8 * v47 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v43 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v43 + 248, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 117), *((_QWORD *)this + 5));
    WdLogGlobalForLineNumber = 1270;
    if ( bTracingEnabled )
    {
      v48 = (DXGPROCESS *)*((_QWORD *)this + 5);
      v49 = *((_QWORD *)this + 14);
      v50 = *((_DWORD *)this + 118);
      v51 = *((_DWORD *)this + 117);
      v52 = *((unsigned __int8 *)this + 1914);
      v53 = *v22;
      v64 = *((_BYTE *)this + 1913);
      ProcessID = DXGPROCESS::GetProcessID(v48);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        LODWORD(v59) = v52;
        LODWORD(v58) = v64;
        LODWORD(v57) = v53;
        McTemplateK0ppqpttqpqp_EtwWriteTransfer(
          v54,
          &EventCreateDevice,
          v55,
          ProcessID,
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          v57,
          this,
          v58,
          v59,
          v51,
          v48,
          v50,
          v49);
      }
    }
    return 0LL;
  }
  v24 = (struct _KEVENT *)operator new(0x18uLL, 0x4B677844u, 64LL);
  *((_QWORD *)this + 241) = v24;
  if ( !v24 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1140;
    return 3221225495LL;
  }
  KeInitializeEvent(v24, NotificationEvent, 1u);
  v25 = (_QWORD *)*((_QWORD *)this + 2);
  *(_OWORD *)&v63.Flags.0 = 0LL;
  v63.hDevice = this;
  if ( (*(_DWORD *)(v25[2] + 2464LL) & 1) != 0 )
  {
    if ( (*((_BYTE *)this + 1917) & 8) != 0 || (*((_DWORD *)this + 122) & 8) != 0 )
    {
      Value = v63.Flags.Value | 2;
      v63.Flags.Value |= 2u;
    }
    else
    {
      Value = v63.Flags.Value;
    }
  }
  else
  {
    Value = (_DWORD)this + 624;
    v63.pInfo = (DXGK_DEVICEINFO *)((char *)this + 624);
  }
  if ( (*(_DWORD *)(v25[2] + 444LL) & 0x10) != 0 )
  {
    v27 = v5 << 31;
    LOBYTE(v5) = 1;
    v63.Flags.Value = Value & 0x7FFFFFFF | v27;
  }
  *((_BYTE *)this + 1913) = a2;
  *((_BYTE *)this + 1914) = v5;
  v28 = (*(__int64 (__fastcall **)(_QWORD, DXGDEVICE *))(*(_QWORD *)(v25[95] + 8LL) + 360LL))(v25[96], this);
  *((_QWORD *)this + 99) = v28;
  if ( !v28 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1192;
    return 3221225495LL;
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 368LL))(v28);
  if ( (int)result >= 0 )
  {
    v9 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(3LL, this);
      WdLogGlobalForLineNumber = 1210;
      return (unsigned int)v9;
    }
    v29 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 1918) = 1;
    v30 = *(_QWORD *)(v29 + 16);
    if ( (*(_DWORD *)(v30 + 2468) & 0x80u) != 0 )
    {
      v31 = *((_QWORD *)this + 5);
      v32 = *(unsigned int *)(v30 + 240);
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)v32 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
      {
        _mm_lfence();
        v63.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(v31 + 48) + 8 * v32) + 24LL);
      }
    }
    KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(
                         *((DXGPROCESS **)this + 5),
                         *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 240LL));
    v35 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v63.hKmdProcess = KmdProcessHandle;
    v9 = ADAPTER_RENDER::DdiCreateDevice(v35, &v63);
    if ( v9 < 0 )
    {
      WdLogSingleEntry1(3LL, this);
      WdLogGlobalForLineNumber = 1226;
      return (unsigned int)v9;
    }
    v22 = (int *)((char *)this + 464);
    v36 = *((_DWORD *)this + 116);
    v37 = 0;
    *((_QWORD *)this + 77) = v63.hDevice;
    *(_OWORD *)v61 = 0LL;
    if ( v36 == 2 )
      v37 = 8;
    v38 = 0;
    if ( v36 == 1 )
      v38 = 32;
    v39 = v38 | v37 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (v5 & 1))));
    *(_QWORD *)&v61[12] = *((_QWORD *)this + 60);
    v40 = *((_QWORD *)this + 2);
    v60 = v39;
    v41 = (*(__int64 (__fastcall **)(DXGDEVICE *, unsigned int *, char *))(*(_QWORD *)(*(_QWORD *)(v40 + 736) + 8LL)
                                                                         + 112LL))(
            this,
            &v60,
            (char *)this + 800);
    v42 = v41;
    if ( v41 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v41);
      result = v42;
      WdLogGlobalForLineNumber = 1246;
      return result;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 1032LL))(
      *((_QWORD *)this + 99),
      *((_QWORD *)this + 100));
    goto LABEL_55;
  }
  return result;
}
