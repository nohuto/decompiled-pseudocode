/*
 * XREFs of ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403A0D64
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1403B1998 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14003583C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x140040964 (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x14004E3CC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x14004FE40 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1401821C4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCountedBuffer@@@Z @ 0x140222B58 (-VmBusSendCreateDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIU_D3DKMT_CREATEDEVICEFLAGS@@EPEAVCRefCo.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402FF830 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140348EA0 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x14037DFF0 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 *     ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1403B8104 (-DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Initialize(DXGDEVICE *this, char a2, unsigned __int8 a3)
{
  __int64 v3; // rdi
  int v5; // r15d
  DXGADAPTER *v7; // rcx
  signed __int64 v8; // rax
  unsigned int v9; // esi
  __int64 result; // rax
  struct DXGPROCESS *Current; // rax
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r8d
  __int64 v18; // r9
  struct _ERESOURCE *v19; // rax
  NTSTATUS v20; // eax
  __int64 v21; // r9
  __int64 v22; // rax
  int HostProcess; // edx
  int Device; // eax
  struct _KEVENT *v25; // rax
  _QWORD *v26; // r8
  int Value; // edx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rsi
  DXGGLOBAL *Global; // rax
  void *KmdProcessHandle; // rax
  ADAPTER_RENDER *v36; // rcx
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  unsigned int v40; // r8d
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rsi
  unsigned __int64 v44; // rdi
  __int64 v45; // rax
  __int64 v46; // r8
  __int64 v47; // rdi
  __int64 v48; // [rsp+30h] [rbp-61h]
  __int64 v49; // [rsp+40h] [rbp-51h]
  __int64 v50; // [rsp+48h] [rbp-49h]
  unsigned int v51; // [rsp+78h] [rbp-19h] BYREF
  _BYTE v52[20]; // [rsp+7Ch] [rbp-15h]
  _BYTE v53[24]; // [rsp+90h] [rbp-1h] BYREF
  _DXGKARG_CREATEDEVICE v54; // [rsp+A8h] [rbp+17h] BYREF

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
      WdLogGlobalForLineNumber = 999;
      return v9;
    }
    *((_BYTE *)this + 1901) |= 4u;
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 184LL));
  }
  Current = DXGPROCESS::GetCurrent((__int64)v7);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v53, Current);
  v12 = HMGRTABLE::AllocHandle((unsigned int *)(*((_QWORD *)this + 5) + 280LL), (__int64)this, 3, 0, 0);
  *((_DWORD *)this + 117) = v12;
  v13 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1018;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
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
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v53);
  v19 = (struct _ERESOURCE *)operator new(0x68uLL, 0x4B677844u, 64LL, v18);
  *((_QWORD *)this + 17) = v19;
  if ( !v19 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1036;
    return 3221225495LL;
  }
  v20 = ExInitializeResourceLite(v19);
  v9 = v20;
  if ( v20 < 0 )
  {
    WdLogSingleEntry2(3LL, this, v20);
    WdLogGlobalForLineNumber = 1045;
    return v9;
  }
  if ( (*((_BYTE *)this + 1901) & 1) != 0 )
  {
    v22 = operator new[](0x14uLL, 0x4B677844u, 64LL, v21);
    *((_QWORD *)this + 60) = v22;
    if ( !v22 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1055;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate m_pVidSchErrorCode",
        1055LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *(_QWORD *)v22 = 0LL;
    *(_DWORD *)(v22 + 8) = 4;
    *(_DWORD *)(v22 + 12) = 1;
    *(_DWORD *)(*((_QWORD *)this + 60) + 16LL) = 0;
    HostProcess = DXGPROCESS::GetHostProcess(*((DXGPROCESS **)this + 5));
    if ( !HostProcess )
    {
      WdLogSingleEntry1(2LL, -1073741823LL);
      WdLogGlobalForLineNumber = 1068;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to get host adapter process, returning 0x%I64x",
        -1073741823LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
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
      WdLogGlobalForLineNumber = 1077;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to create device on the host",
        1077LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return -1073741823LL;
    }
    goto LABEL_55;
  }
  v25 = (struct _KEVENT *)operator new(0x18uLL, 0x4B677844u, 64LL, v21);
  *((_QWORD *)this + 239) = v25;
  if ( !v25 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1088;
    return 3221225495LL;
  }
  KeInitializeEvent(v25, NotificationEvent, 1u);
  v26 = (_QWORD *)*((_QWORD *)this + 2);
  *(_OWORD *)&v54.Flags.0 = 0LL;
  v54.hDevice = this;
  if ( (*(_DWORD *)(v26[2] + 2464LL) & 1) != 0 )
  {
    if ( (*((_BYTE *)this + 1901) & 8) != 0 || (*((_DWORD *)this + 122) & 8) != 0 )
    {
      Value = v54.Flags.Value | 2;
      v54.Flags.Value |= 2u;
    }
    else
    {
      Value = v54.Flags.Value;
    }
  }
  else
  {
    Value = (_DWORD)this + 624;
    v54.pInfo = (DXGK_DEVICEINFO *)((char *)this + 624);
  }
  if ( (*(_DWORD *)(v26[2] + 444LL) & 0x10) != 0 )
  {
    v28 = v5 << 31;
    LOBYTE(v5) = 1;
    v54.Flags.Value = Value & 0x7FFFFFFF | v28;
  }
  *((_BYTE *)this + 1897) = a2;
  *((_BYTE *)this + 1898) = v5;
  v29 = (*(__int64 (__fastcall **)(_QWORD, DXGDEVICE *))(*(_QWORD *)(v26[95] + 8LL) + 360LL))(v26[96], this);
  *((_QWORD *)this + 99) = v29;
  if ( !v29 )
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 1140;
    return 3221225495LL;
  }
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 368LL))(v29);
  if ( (int)result >= 0 )
  {
    v9 = DXGPROCESS::OpenAdapter(*((DXGPROCESS **)this + 5), *((struct ADAPTER_RENDER **)this + 2), 1);
    if ( (v9 & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(3LL, this);
      WdLogGlobalForLineNumber = 1158;
      return v9;
    }
    v30 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 1902) = 1;
    v31 = *(_QWORD *)(v30 + 16);
    if ( (*(_DWORD *)(v31 + 2468) & 0x80u) != 0 )
    {
      v32 = *((_QWORD *)this + 5);
      v33 = *(unsigned int *)(v31 + 240);
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)v33 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global) )
      {
        _mm_lfence();
        v54.Pasid = **(_DWORD **)(*(_QWORD *)(*(_QWORD *)(v32 + 48) + 8 * v33) + 24LL);
      }
    }
    KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(
                         *((DXGPROCESS **)this + 5),
                         *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 240LL));
    v36 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    v54.hKmdProcess = KmdProcessHandle;
    v9 = ADAPTER_RENDER::DdiCreateDevice(v36, &v54);
    if ( (v9 & 0x80000000) != 0 )
    {
      WdLogSingleEntry1(3LL, this);
      WdLogGlobalForLineNumber = 1174;
      return v9;
    }
    v37 = *((_DWORD *)this + 116);
    v38 = 0;
    *((_QWORD *)this + 77) = v54.hDevice;
    *(_OWORD *)v52 = 0LL;
    if ( v37 == 2 )
      v38 = 8;
    v39 = 0;
    if ( v37 == 1 )
      v39 = 32;
    v40 = v39 | v38 & 0xFFFFFFDF | (2 * (a2 & 1 | (2 * (v5 & 1))));
    *(_QWORD *)&v52[12] = *((_QWORD *)this + 60);
    v41 = *((_QWORD *)this + 2);
    v51 = v40;
    v42 = (*(__int64 (__fastcall **)(DXGDEVICE *, unsigned int *, char *))(*(_QWORD *)(*(_QWORD *)(v41 + 736) + 8LL)
                                                                         + 112LL))(
            this,
            &v51,
            (char *)this + 800);
    v9 = v42;
    if ( v42 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v42);
      WdLogGlobalForLineNumber = 1194;
      return v9;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL) + 1032LL))(
      *((_QWORD *)this + 99),
      *((_QWORD *)this + 100));
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
            262146,
            0xFFFFFFFFLL,
            L"m_pEntryTable[GetIndex(hObject)].Destroyed",
            224LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        *(_DWORD *)(*(_QWORD *)(v43 + 280) + 8 * v47 + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *(_QWORD *)(v43 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v43 + 248, 0LL);
    KeLeaveCriticalRegion();
    WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 117), *((_QWORD *)this + 5));
    WdLogGlobalForLineNumber = 1218;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
      {
        LODWORD(v50) = *((unsigned __int8 *)this + 1898);
        LODWORD(v49) = *((unsigned __int8 *)this + 1897);
        LODWORD(v48) = *((_DWORD *)this + 116);
        McTemplateK0ppqpttqpqp_EtwWriteTransfer(
          *((_QWORD *)this + 5),
          (const EVENT_DESCRIPTOR *)"\x1B",
          *((unsigned __int8 *)this + 1897),
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 64LL) + 80LL),
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          v48,
          this,
          v49,
          v50,
          *((_DWORD *)this + 117),
          *((_QWORD *)this + 5),
          *((_DWORD *)this + 118),
          *((_QWORD *)this + 14));
      }
    }
    return 0LL;
  }
  return result;
}
