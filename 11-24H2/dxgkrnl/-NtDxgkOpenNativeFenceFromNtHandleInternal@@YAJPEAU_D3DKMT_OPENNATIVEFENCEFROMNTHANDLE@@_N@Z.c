/*
 * XREFs of ?NtDxgkOpenNativeFenceFromNtHandleInternal@@YAJPEAU_D3DKMT_OPENNATIVEFENCEFROMNTHANDLE@@_N@Z @ 0x1401E15EC
 * Callers:
 *     NtDxgkOpenNativeFenceFromNtHandle @ 0x1401E3FF0 (NtDxgkOpenNativeFenceFromNtHandle.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x14000E5A0 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x14000EF08 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x140022B90 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x140023510 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14002BEF0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x14002DD50 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x14002FE40 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x140048D4C (McTemplateK0pppp_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1400A1BF0 (RtlCopyVolatileMemory.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     _NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP @ 0x1401E07D8 (_NtDxgkOpenNativeFenceFromNtHandleInternal_--_2_--CLEANUP--_CLEANUP.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77@Z @ 0x1401F4640 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1403ABF4C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 */

__int64 __fastcall NtDxgkOpenNativeFenceFromNtHandleInternal(struct _D3DKMT_OPENNATIVEFENCEFROMNTHANDLE *a1)
{
  struct _D3DKMT_OPENNATIVEFENCEFROMNTHANDLE *v1; // rsi
  struct DXGPROCESS *Current; // r14
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
  PVOID v26; // [rsp+80h] [rbp-1D8h] BYREF
  struct DXGDEVICE *v27; // [rsp+88h] [rbp-1D0h] BYREF
  struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT v28[2]; // [rsp+90h] [rbp-1C8h]
  _BYTE v29[8]; // [rsp+98h] [rbp-1C0h] BYREF
  _BYTE v30[16]; // [rsp+A0h] [rbp-1B8h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-1A8h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B8h] [rbp-1A0h] BYREF
  struct DXGDEVICESYNCOBJECT *v33; // [rsp+C0h] [rbp-198h] BYREF
  struct DXGADAPTERSYNCOBJECT *v34; // [rsp+C8h] [rbp-190h] BYREF
  _BYTE v35[16]; // [rsp+D0h] [rbp-188h] BYREF
  HANDLE Handle[22]; // [rsp+E0h] [rbp-178h] BYREF
  _BYTE v37[160]; // [rsp+190h] [rbp-C8h] BYREF

  v1 = a1;
  *(_QWORD *)&v28[0].hSyncObject = a1;
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1607;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
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
    WdLogGlobalForLineNumber = 1640;
    return -1073741811LL;
  }
  if ( !(unsigned __int8)RtlIsZeroMemory(&Handle[18], 32LL) )
  {
    v3 = -1073741811;
    WdLogSingleEntry1(3LL, -1073741811LL);
    WdLogGlobalForLineNumber = 1647;
    return v3;
  }
  if ( ((__int64)Handle[2] & 0x10) != 0 || ((__int64)Handle[2] & 0x20) != 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1653;
  }
  v27 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)v29,
    (unsigned int)Handle[1],
    (struct _KTHREAD **)Current,
    &v27);
  v6 = v27;
  if ( !v27 )
  {
    v3 = -1073741811;
    WdLogSingleEntry2(2LL, LODWORD(Handle[1]), -1073741811LL);
    WdLogGlobalForLineNumber = 1661;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      LODWORD(Handle[1]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_30:
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v29);
    return v3;
  }
  v26 = 0LL;
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30, v27);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v6, 0, v7, 0);
  v8 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37, 0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry2(3LL, v6, v8);
    WdLogGlobalForLineNumber = 1691;
LABEL_17:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v26);
    v3 = v9;
    goto LABEL_30;
  }
  if ( !g_NativeFenceDebugTest )
  {
    v10 = v27;
    v11 = *(_QWORD *)(*((_QWORD *)v27 + 2) + 16LL);
    if ( (*(_DWORD *)(v11 + 2464) & 0x800) == 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 1700;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Cannot open native fence on an DXGADAPTER (0x%I64x) that does not support native GPU fences",
        *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL),
        0LL,
        0LL,
        0LL,
        0LL);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
      NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v26);
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
    WdLogGlobalForLineNumber = 1722;
    goto LABEL_17;
  }
  if ( v12 < 0 )
  {
    WdLogSingleEntry2(3LL, Handle[0], v12);
    WdLogGlobalForLineNumber = 1728;
LABEL_25:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v26);
    goto LABEL_30;
  }
  v13 = (DXGSYNCOBJECT **)Object;
  v26 = Object;
  if ( ((*(_DWORD *)(*(_QWORD *)Object + 404LL) - 5) & 0xFFFFFFFD) != 0 )
  {
    v3 = -1073741811;
    WdLogSingleEntry3(3LL, *(_QWORD *)Object, Handle[0], -1073741811LL);
    WdLogGlobalForLineNumber = 1741;
    goto LABEL_25;
  }
  LODWORD(Handle[2]) = (__int64)Handle[2] & 0xFFFFFFCF | ~(8 * LOBYTE(HandleInformation.GrantedAccess)) & 0x10 | ~(32 * LOBYTE(HandleInformation.GrantedAccess)) & 0x20;
  v34 = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v35, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v35);
  v33 = 0LL;
  v15 = DXGSYNCOBJECT::Open(
          *v13,
          *((struct ADAPTER_RENDER **)v27 + 2),
          v27,
          &v33,
          (unsigned int *)&Handle[2] + 1,
          0LL,
          0LL,
          HIDWORD(Handle[1]),
          &v34,
          1,
          (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)Handle[2],
          0LL,
          0LL,
          *((_DWORD *)*v13 + 101) == 5,
          0);
  if ( v15 < 0 )
  {
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v35);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
    NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v26);
    v3 = v15;
    goto LABEL_30;
  }
  Handle[3] = *((HANDLE *)v33 + 7);
  Handle[4] = *((HANDLE *)v33 + 6);
  Handle[5] = *((HANDLE *)v33 + 15);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v35);
  if ( bTracingEnabled )
  {
    if ( v34 ? *((_QWORD *)v34 + 4) : 0LL )
    {
      v19 = v34 ? *((_QWORD *)v34 + 4) : 0LL;
      v18 = *(_QWORD *)(v19 + 16);
    }
    else
    {
      v18 = 0LL;
    }
    v20 = v34 ? *((_QWORD *)v34 + 4) : 0LL;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        HIDWORD(Handle[2]),
        &EventOpenSyncObject,
        v16,
        v20,
        HIDWORD(Handle[2]),
        v27,
        v18);
  }
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
          262146LL,
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
  *((_QWORD *)Current + 32) = 0LL;
  ExReleasePushLockExclusiveEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (struct _D3DKMT_OPENNATIVEFENCEFROMNTHANDLE *)MmUserProbeAddress;
  RtlCopyVolatileMemory(v1, Handle, 0xB0uLL);
  NtDxgkOpenNativeFenceFromNtHandleInternal_::_2_::CLEANUP::_CLEANUP(&v26);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)v29);
  return (unsigned int)v15;
}
