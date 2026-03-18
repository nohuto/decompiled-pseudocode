/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14032FBB8
 * Callers:
 *     DxgkDestroyAllocation @ 0x14032F510 (DxgkDestroyAllocation.c)
 *     DxgkDestroyAllocation2 @ 0x14032F7A0 (DxgkDestroyAllocation2.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x14000CB30 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x14000FEB0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140011820 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140012080 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x14002DDD0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x14002F470 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     OutputDuplCleanUpPendingList @ 0x140305E44 (OutputDuplCleanUpPendingList.c)
 *     _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE @ 0x140393D34 (_DxgkDestroyAllocationHelper_--_2_--ENSURE_POINTER_DEREFERENCE--_ENSURE_POINTER_DEREFERENCE.c)
 *     _DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE2::_ENSURE_POINTER_DEREFERENCE2 @ 0x14039403C (_DxgkDestroyAllocationHelper_--_2_--ENSURE_POINTER_DEREFERENCE2--_ENSURE_POINTER_DEREFERENCE2.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x140409620 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
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
  unsigned int v13; // r13d
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  void *v16; // rax
  unsigned int v17; // eax
  __int64 v18; // r8
  int v19; // edx
  volatile signed __int64 *v20; // rdi
  __int64 v21; // r9
  unsigned int *v22; // r12
  __int64 v23; // r14
  int v24; // eax
  unsigned int v25; // r15d
  volatile signed __int64 *v26; // [rsp+60h] [rbp-A0h] BYREF
  void *v27; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v28; // [rsp+70h] [rbp-90h]
  void *v29; // [rsp+78h] [rbp-88h] BYREF
  void **v30; // [rsp+80h] [rbp-80h] BYREF
  void **v31; // [rsp+88h] [rbp-78h] BYREF
  unsigned int *v32; // [rsp+90h] [rbp-70h] BYREF
  struct DXGALLOCATION **v33; // [rsp+98h] [rbp-68h]
  unsigned int *v34; // [rsp+A0h] [rbp-60h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v35; // [rsp+A8h] [rbp-58h]
  struct DXGPROCESS *v36; // [rsp+B0h] [rbp-50h]
  _BYTE v37[16]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v38[8]; // [rsp+C8h] [rbp-38h] BYREF
  char *v39; // [rsp+D0h] [rbp-30h]
  int v40; // [rsp+D8h] [rbp-28h]
  _BYTE v41[160]; // [rsp+E0h] [rbp-20h] BYREF
  _DWORD v42[64]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v43[512]; // [rsp+280h] [rbp+180h] BYREF

  v9 = a5;
  v10 = a1;
  v11 = a2;
  v36 = a1;
  v28 = a3;
  v35 = a7;
  memset(v42, 0, sizeof(v42));
  v32 = a4;
  memset(v43, 0, sizeof(v43));
  v27 = 0LL;
  v33 = (struct DXGALLOCATION **)v43;
  v30 = &v29;
  v29 = 0LL;
  v34 = v42;
  v31 = &v27;
  if ( a3 && a5 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)v11, -1073741811LL);
    WdLogGlobalForLineNumber = 10478;
    if ( v29 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v29);
    if ( v27 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v27);
    return 3221225485LL;
  }
  v13 = a5;
  if ( a5 >= 0x41 )
  {
    v14 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v14 = -1LL;
    v27 = (void *)operator new[](v14, 0x4B677844u, 256LL);
    v15 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v15 = -1LL;
    v16 = (void *)operator new[](v15, 0x4B677844u, 256LL);
    v29 = v16;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && v27 && v16 )
    {
      v34 = (unsigned int *)v27;
      v33 = (struct DXGALLOCATION **)v16;
    }
    else
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 10497;
      v9 = 64;
    }
  }
  v40 = 0;
  v39 = (char *)v10 + 248;
  if ( v10 != (struct DXGPROCESS *)-248LL && *((struct _KTHREAD **)v10 + 32) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1512;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
      1512LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v38);
  v17 = ((unsigned int)v11 >> 6) & 0xFFFFFF;
  if ( v17 >= *((_DWORD *)v10 + 74) )
    goto LABEL_27;
  v18 = *((_QWORD *)v10 + 35);
  if ( (((unsigned int)v11 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16LL * v17 + 8) & 0x60) )
    goto LABEL_27;
  if ( (*(_DWORD *)(v18 + 16LL * v17 + 8) & 0x2000) != 0 )
    goto LABEL_27;
  v19 = *(_DWORD *)(v18 + 16LL * v17 + 8) & 0x1F;
  if ( !v19 )
    goto LABEL_27;
  if ( v19 != 3 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_27:
    v26 = 0LL;
    v20 = 0LL;
    goto LABEL_28;
  }
  v20 = *(volatile signed __int64 **)(v18 + 16LL * v17);
  v26 = v20;
  if ( v20 )
    _InterlockedIncrement64(v20 + 8);
LABEL_28:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v38);
  if ( !v20 )
  {
    WdLogSingleEntry2(2LL, v11, -1073741811LL);
    WdLogGlobalForLineNumber = 10514;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v26);
    DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE2::_ENSURE_POINTER_DEREFERENCE2(&v30);
    DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v31);
    return 3221225485LL;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v37,
    (struct DXGDEVICE *)v20);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v41, (__int64)v20, 2, v21, 0);
  if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v41, 0LL) >= 0 )
    OutputDuplCleanUpPendingList((struct DXGDEVICE *)v20);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v41);
  v22 = v32;
  while ( 1 )
  {
    v23 = v13;
    if ( v13 >= v9 )
      v23 = v9;
    v24 = DxgkDestroyAllocationInternal(
            v10,
            (struct DXGDEVICE *)v20,
            v34,
            v33,
            v28,
            (const unsigned int **)&v32,
            v23,
            a6,
            v22,
            v35,
            a8);
    v25 = v24;
    if ( v24 < 0 )
      break;
    v10 = v36;
    v22 += v23;
    v13 -= v23;
    if ( !v13 )
    {
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v37);
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v26);
      DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE2::_ENSURE_POINTER_DEREFERENCE2(&v30);
      DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v31);
      return 0LL;
    }
  }
  WdLogSingleEntry1(3LL, v24);
  WdLogGlobalForLineNumber = 10558;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v37);
  ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v26);
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE2::_ENSURE_POINTER_DEREFERENCE2(&v30);
  DxgkDestroyAllocationHelper_::_2_::ENSURE_POINTER_DEREFERENCE::_ENSURE_POINTER_DEREFERENCE(&v31);
  return v25;
}
