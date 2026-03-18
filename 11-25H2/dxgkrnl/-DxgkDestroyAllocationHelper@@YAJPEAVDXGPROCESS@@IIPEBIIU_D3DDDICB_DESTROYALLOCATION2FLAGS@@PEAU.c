/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1403403A8
 * Callers:
 *     DxgkDestroyAllocation @ 0x14033FD00 (DxgkDestroyAllocation.c)
 *     DxgkDestroyAllocation2 @ 0x14033FF90 (DxgkDestroyAllocation2.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140014A20 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140015280 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14001C110 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14001F490 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002D660 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002EE30 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline @ 0x14006681C (Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     OutputDuplCleanUpPendingList @ 0x1402E4F04 (OutputDuplCleanUpPendingList.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140340CE0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE @ 0x14039BB60 (_DxgkDestroyAllocationHelper_--_2_--ENSURE_POINTER_DEREFERENCE--_ENSURE_POINTER_DEREFERENCE.c)
 *     _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE2::_ENSURE_POINTER_DEREFERENCE2 @ 0x14039D04C (_DxgkDestroyAllocationHelper_--_2_--ENSURE_POINTER_DEREFERENCE2--_ENSURE_POINTER_DEREFERENCE2.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7,
        char a8)
{
  unsigned int v9; // esi
  struct DXGPROCESS *v10; // r15
  __int64 v11; // r14
  __int64 v12; // r9
  unsigned int v14; // r13d
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  void *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // r8
  int v21; // edx
  volatile signed __int64 *v22; // rdi
  __int64 v23; // r9
  unsigned int *v24; // r12
  __int64 v25; // r14
  int v26; // eax
  unsigned int v27; // r15d
  volatile signed __int64 *v28; // [rsp+60h] [rbp-A0h] BYREF
  void *v29; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v30; // [rsp+70h] [rbp-90h]
  void *v31; // [rsp+78h] [rbp-88h] BYREF
  void **v32; // [rsp+80h] [rbp-80h] BYREF
  void **v33; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v34; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION **v35; // [rsp+98h] [rbp-68h]
  unsigned int *v36; // [rsp+A0h] [rbp-60h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v37; // [rsp+A8h] [rbp-58h]
  struct DXGPROCESS *v38; // [rsp+B0h] [rbp-50h]
  _BYTE v39[16]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v40[8]; // [rsp+C8h] [rbp-38h] BYREF
  char *v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D8h] [rbp-28h]
  _BYTE v43[160]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v44[64]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v45[512]; // [rsp+280h] [rbp+180h] BYREF

  v9 = a5;
  v10 = a1;
  v11 = a2;
  v38 = a1;
  v30 = a3;
  v37 = a7;
  memset(v44, 0, sizeof(v44));
  v34 = a4;
  memset(v45, 0, sizeof(v45));
  v29 = 0LL;
  v36 = v44;
  v35 = (struct DXGALLOCATION **)v45;
  v33 = &v29;
  v32 = &v31;
  v31 = 0LL;
  if ( a3 && a5 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)v11, -1073741811LL);
    WdLogGlobalForLineNumber = 10412;
    if ( v31 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v31);
    if ( v29 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v29);
    return 3221225485LL;
  }
  v14 = a5;
  if ( a5 >= 0x41 )
  {
    v15 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v15 = -1LL;
    v29 = (void *)operator new[](v15, 0x4B677844u, 256LL, v12);
    v17 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v17 = -1LL;
    v18 = (void *)operator new[](v17, 0x4B677844u, 256LL, v16);
    v31 = v18;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && v29 && v18 )
    {
      v36 = (unsigned int *)v29;
      v35 = (struct DXGALLOCATION **)v18;
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 10431;
      v9 = 64;
    }
  }
  v42 = 0;
  v41 = (char *)v10 + 248;
  if ( v10 != (struct DXGPROCESS *)-248LL )
  {
    Feature_Servicing_GraphicsKernel_VolatileAccessorUpdate__private_IsEnabledDeviceUsageNoInline();
    if ( *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1575;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        0xFFFFFFFFLL,
        L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1575LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v40);
  v19 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( v19 >= *((_DWORD *)v10 + 74) )
    goto LABEL_27;
  v20 = *((_QWORD *)v10 + 35);
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60) )
    goto LABEL_27;
  if ( (*(_DWORD *)(v20 + 16LL * v19 + 8) & 0x2000) != 0 )
    goto LABEL_27;
  v21 = *(_DWORD *)(v20 + 16LL * v19 + 8) & 0x1F;
  if ( !v21 )
    goto LABEL_27;
  if ( v21 != 3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_27:
    v28 = 0LL;
    v22 = 0LL;
    goto LABEL_28;
  }
  v22 = *(volatile signed __int64 **)(v20 + 16LL * v19);
  v28 = v22;
  if ( v22 )
    _InterlockedIncrement64(v22 + 8);
LABEL_28:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
  if ( !v22 )
  {
    WdLogSingleEntry2(2LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 10448;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v28);
    DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE2::_ENSURE_POINTER_DEREFERENCE2(&v32);
    DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v33);
    return 3221225485LL;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v39,
    (struct DXGDEVICE *)v22);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v43, (__int64)v22, 2, v23, 0);
  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v43, 0LL) >= 0 )
    OutputDuplCleanUpPendingList((struct DXGDEVICE *)v22);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v43);
  v24 = v34;
  while ( 1 )
  {
    v25 = v14;
    if ( v14 >= v9 )
      v25 = v9;
    v26 = DxgkDestroyAllocationInternal(
            v10,
            (struct DXGDEVICE *)v22,
            v36,
            v35,
            v30,
            (const unsigned int **)&v34,
            v25,
            a6,
            v24,
            v37,
            a8);
    v27 = v26;
    if ( v26 < 0 )
      break;
    v10 = v38;
    v24 += v25;
    v14 -= v25;
    if ( !v14 )
    {
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v39);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v28);
      DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE2::_ENSURE_POINTER_DEREFERENCE2(&v32);
      DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v33);
      return 0LL;
    }
  }
  WdLogSingleEntry1(3LL, v26);
  WdLogGlobalForLineNumber = 10492;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v39);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v28);
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE2::_ENSURE_POINTER_DEREFERENCE2(&v32);
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v33);
  return v27;
}
