/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1403A2CD8
 * Callers:
 *     DxgkPresent @ 0x1402F11A0 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x140420F70 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14001EB30 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140031534 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402906C0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x140293000 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall PreIndirectPresentReadAllocationInfo(
        struct DXGPROCESS *a1,
        ADAPTER_RENDER **a2,
        unsigned int a3,
        struct INDIRECT_RESOURCE_INFO *a4)
{
  __int64 v4; // r14
  unsigned int v8; // eax
  __int64 v9; // r9
  int v10; // edx
  struct _EX_RUNDOWN_REF *v11; // rdx
  struct _EX_RUNDOWN_REF *v12; // rbx
  struct _EX_RUNDOWN_REF *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rsi
  ULONG_PTR Count; // rax
  ADAPTER_RENDER *v20; // rcx
  unsigned int v21; // ebx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  const wchar_t *v25; // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  struct _EX_RUNDOWN_REF *v30; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v31; // [rsp+58h] [rbp-A8h] BYREF
  char v32; // [rsp+60h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v33; // [rsp+68h] [rbp-98h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v34; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v35[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v36[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  char v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  _BYTE v41[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  struct DXGDEVICE *v46; // [rsp+128h] [rbp+28h]
  char v47; // [rsp+130h] [rbp+30h]

  v4 = a3;
  v31 = (struct DXGDEVICE *)a2;
  v32 = 0;
  if ( a2 )
    DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v31);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a1 + 248));
  v8 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v8 < *((_DWORD *)a1 + 74) )
  {
    v9 = *((_QWORD *)a1 + 35);
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v9 + 16LL * v8 + 8) & 0x60)
      && (*(_DWORD *)(v9 + 16LL * v8 + 8) & 0x2000) == 0 )
    {
      v10 = *(_DWORD *)(v9 + 16LL * v8 + 8) & 0x1F;
      if ( v10 )
      {
        if ( v10 == 5 )
        {
          v11 = *(struct _EX_RUNDOWN_REF **)(v9 + 16LL * v8);
          goto LABEL_9;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v11 = 0LL;
LABEL_9:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v33, v11);
  _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
  ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
  KeLeaveCriticalRegion();
  v12 = v33;
  v30 = v33;
  v13 = v33;
  v33 = 0LL;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v33);
  v14 = *((_QWORD *)a2[2] + 2);
  v38 = v14;
  v39 = 0;
  v40 = 0LL;
  if ( v14 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
    v37 = -1LL;
    v12 = v30;
  }
  v15 = *((_QWORD *)a2[2] + 2);
  v43 = v15;
  v44 = 0;
  v45 = 0LL;
  if ( v15 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
    v42 = -1LL;
    v12 = v30;
  }
  v46 = (struct DXGDEVICE *)a2;
  v47 = 0;
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
  v18 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry1(2LL, v16);
    WdLogGlobalForLineNumber = 736;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"0x%I64x fails Present, failed to take adapter core access shared lock",
      v18,
      0LL,
      0LL,
      0LL,
      0LL);
    COREACCESS::~COREACCESS((COREACCESS *)v41, v28);
    COREACCESS::~COREACCESS((COREACCESS *)v36, v29);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
    if ( v31 && v32 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v31 + 17));
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v18;
  }
  else
  {
    if ( v13 )
    {
      Count = v12[1].Count;
      if ( Count )
      {
        v20 = a2[2];
        if ( *(ADAPTER_RENDER **)(Count + 16) == v20 )
        {
          memset(&v34, 0, sizeof(v34));
          v34.hAllocation = *(HANDLE *)(v12[6].Count + 16);
          v21 = ADAPTER_RENDER::DdiDescribeAllocation(v20, &v34, v17);
          *(_DWORD *)a4 = v34.Width;
          *((_DWORD *)a4 + 1) = v34.Height;
          *((_DWORD *)a4 + 2) = v34.Format;
          COREACCESS::~COREACCESS((COREACCESS *)v41, v22);
          COREACCESS::~COREACCESS((COREACCESS *)v36, v23);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
          if ( v31 )
          {
            if ( v32 )
            {
              ExReleaseResourceLite(*((PERESOURCE *)v31 + 17));
              KeLeaveCriticalRegion();
            }
          }
          return v21;
        }
      }
      WdLogSingleEntry2(2LL, -1073741811LL, v4);
      v25 = L"0x%I64x fails Present hSource is for the wrong adapter";
      WdLogGlobalForLineNumber = 749;
    }
    else
    {
      WdLogSingleEntry2(2LL, -1073741811LL, v4);
      v25 = L"0x%I64x fails Present invalid hSource 0x%I64x";
      WdLogGlobalForLineNumber = 742;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v25, -1073741811LL, v4, 0LL, 0LL, 0LL);
    COREACCESS::~COREACCESS((COREACCESS *)v41, v26);
    COREACCESS::~COREACCESS((COREACCESS *)v36, v27);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v30);
    if ( v31 && v32 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v31 + 17));
      KeLeaveCriticalRegion();
    }
    return 3221225485LL;
  }
}
