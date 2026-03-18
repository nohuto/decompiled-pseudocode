/*
 * XREFs of ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401DC314
 * Callers:
 *     NtDxgkOpenNativeFenceFromNtHandle @ 0x1401DEDF0 (NtDxgkOpenNativeFenceFromNtHandle.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140013A20 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14001DB80 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14001E4E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140022CE0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002B770 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002D5E0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002F800 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140049660 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_3628896570__private_IsEnabledDeviceUsageNoInline @ 0x140076288 (Feature_3628896570__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x14009F890 (RtlCopyVolatileMemory.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x140180008 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     _NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP @ 0x1401DB548 (_NtDxgkOpenNativeFenceFromNtHandleInternal_--_2_--CLEANUP--_CLEANUP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x14033D52C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall NtDxgkOpenNativeFenceFromNtHandleInternal(struct _D3DKMT_OPENNATIVEFENCEFROMNTHANDLE *a1)
{
  struct _D3DKMT_OPENNATIVEFENCEFROMNTHANDLE *v1; // r14
  struct DXGPROCESS *Current; // rsi
  unsigned int v3; // ebx
  const void *v5; // rdx
  struct DXGDEVICE *v6; // rbx
  __int64 v7; // r9
  int v8; // eax
  int v9; // r15d
  struct DXGDEVICE *v10; // rbx
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  DXGSYNCOBJECT **v13; // rbx
  struct DXGGLOBAL *Global; // rax
  int v15; // r12d
  __int64 v16; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned int v24; // edx
  __int64 v25; // rbx
  unsigned __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rbx
  PVOID v30; // [rsp+80h] [rbp-1E8h] BYREF
  struct DXGDEVICE *v31; // [rsp+88h] [rbp-1E0h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v32[2]; // [rsp+90h] [rbp-1D8h]
  _BYTE v33[8]; // [rsp+98h] [rbp-1D0h] BYREF
  _BYTE v34[16]; // [rsp+A0h] [rbp-1C8h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-1B8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B8h] [rbp-1B0h] BYREF
  struct DXGDEVICESYNCOBJECT *v37; // [rsp+C0h] [rbp-1A8h] BYREF
  struct DXGADAPTERSYNCOBJECT *v38; // [rsp+C8h] [rbp-1A0h] BYREF
  _BYTE v39[16]; // [rsp+D0h] [rbp-198h] BYREF
  HANDLE Handle[22]; // [rsp+E0h] [rbp-188h] BYREF
  _BYTE v41[160]; // [rsp+190h] [rbp-D8h] BYREF

  v1 = a1;
  *(_QWORD *)&v32[0].hSyncObject = a1;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1609;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v3;
  }
  memset(Handle, 0, sizeof(Handle));
  v5 = v1;
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v5 = (const void *)MmUserProbeAddress;
  RtlCopyVolatileMemory(Handle, v5, 0xB0uLL);
  HIDWORD(Handle[2]) = 0;
  if ( ((__int64)Handle[2] & 0x7FFFF800) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1642;
    return -1073741811LL;
  }
  if ( !(unsigned __int8)RtlIsZeroMemory(&Handle[18], 32LL) )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1649;
    return v3;
  }
  if ( ((__int64)Handle[2] & 0x10) != 0 || ((__int64)Handle[2] & 0x20) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1655;
  }
  v31 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v33, (unsigned int)Handle[1], Current, &v31);
  v6 = v31;
  if ( !v31 )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 1663;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Handle[1]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_30:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v33);
    return v3;
  }
  v30 = 0LL;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34, v31);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v6, 0, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, v6, v8);
    WdLogGlobalForLineNumber = 1693;
LABEL_17:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v30);
    v3 = v9;
    goto LABEL_30;
  }
  if ( !g_NativeFenceDebugTest )
  {
    v10 = v31;
    v11 = *(_QWORD *)(*((_QWORD *)v31 + 2) + 16LL);
    if ( (*(_DWORD *)(v11 + 2464) & 0x800) == 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 1702;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Cannot open native fence on an DXGADAPTER (0x%I64x) that does not support native GPU fences",
        *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL),
        0LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
      NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v30);
      v3 = -1073741811;
      goto LABEL_30;
    }
  }
  HandleInformation = 0LL;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle[0], 0x20000u, g_pDxgkSharedSyncObjectType, 1, &Object, &HandleInformation);
  v3 = v12;
  v9 = -1073741788;
  if ( v12 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    WdLogGlobalForLineNumber = 1724;
    goto LABEL_17;
  }
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v12);
    WdLogGlobalForLineNumber = 1730;
LABEL_25:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v30);
    goto LABEL_30;
  }
  v13 = (DXGSYNCOBJECT **)Object;
  v30 = Object;
  if ( ((*(_DWORD *)(*(_QWORD *)Object + 404LL) - 5) & 0xFFFFFFFD) != 0 )
  {
    v3 = -1073741811;
    WdLogSingleEntry3(3LL, *(_QWORD *)Object, Handle[0], -1073741811LL);
    WdLogGlobalForLineNumber = 1743;
    goto LABEL_25;
  }
  LODWORD(Handle[2]) = (__int64)Handle[2] & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32 * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
  v38 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v39);
  v37 = 0LL;
  v15 = DXGSYNCOBJECT::Open(
          *v13,
          *((struct ADAPTER_RENDER **)v31 + 2),
          v31,
          &v37,
          (unsigned int *)&Handle[2] + 1,
          0LL,
          0LL,
          HIDWORD(Handle[1]),
          &v38,
          1,
          (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)Handle[2],
          0LL,
          0LL,
          *((_DWORD *)*v13 + 101) == 5,
          0);
  if ( v15 < 0 )
  {
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v30);
    v3 = v15;
    goto LABEL_30;
  }
  Handle[3] = *((HANDLE *)v37 + 7);
  Handle[4] = *((HANDLE *)v37 + 6);
  Handle[5] = *((HANDLE *)v37 + 15);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v39);
  if ( bTracingEnabled )
  {
    if ( v38 ? *((_QWORD *)v38 + 4) : 0LL )
    {
      v19 = v38 ? *((_QWORD *)v38 + 4) : 0LL;
      v18 = *(_QWORD *)(v19 + 16);
    }
    else
    {
      v18 = 0LL;
    }
    v20 = v38 ? *((_QWORD *)v38 + 4) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        HIDWORD(Handle[2]),
        &EventOpenSyncObject,
        v16,
        v20,
        HIDWORD(Handle[2]),
        v31,
        v18);
  }
  if ( (unsigned int)Feature_3628896570__private_IsEnabledDeviceUsageNoInline() )
  {
    v21 = HIDWORD(Handle[2]);
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v22 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v22 < *((_DWORD *)Current + 74) )
    {
      v23 = *((_QWORD *)Current + 35);
      v24 = *(_DWORD *)(v23 + 16 * v22 + 8);
      if ( (unsigned int)v21 >> 30 == ((v24 >> 5) & 3) && (v24 & 0x1F) != 0 )
      {
        v25 = 2 * ((v21 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v23 + 8 * v25 + 8) & 0x2000) == 0 )
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
        *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v25 + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v34);
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (struct _D3DKMT_OPENNATIVEFENCEFROMNTHANDLE *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v1, Handle, 0xB0uLL);
  if ( !(unsigned int)Feature_3628896570__private_IsEnabledDeviceUsageNoInline() )
  {
    v26 = HIDWORD(Handle[2]);
    DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
    v27 = ((unsigned int)v26 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v27 < *((_DWORD *)Current + 74) )
    {
      v28 = *((_QWORD *)Current + 35);
      if ( (((unsigned int)v26 >> 25) & 0x60) == (*(_BYTE *)(v28 + 16 * v27 + 8) & 0x60)
        && (*(_DWORD *)(v28 + 16 * v27 + 8) & 0x1F) != 0 )
      {
        v29 = 2 * ((v26 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(v28 + 8 * v29 + 8) & 0x2000) == 0 )
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
        *(_DWORD *)(*((_QWORD *)Current + 35) + 8 * v29 + 8) &= ~0x2000u;
      }
    }
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    *((_QWORD *)Current + 32) = 0LL;
    ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
    KeLeaveCriticalRegion();
  }
  NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v30);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v33);
  return (unsigned int)v15;
}
