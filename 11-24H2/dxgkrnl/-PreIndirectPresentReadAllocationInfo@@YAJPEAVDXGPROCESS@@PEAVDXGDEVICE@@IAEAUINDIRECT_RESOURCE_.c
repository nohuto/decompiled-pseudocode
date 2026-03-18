/*
 * XREFs of ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@IAEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1402F3D24
 * Callers:
 *     DxgkPresent @ 0x1402EAC90 (DxgkPresent.c)
 *     DxgkSubmitPresentToHwQueue @ 0x14041D400 (DxgkSubmitPresentToHwQueue.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14000CBC0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x140031454 (-Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
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
  __int64 v17; // rsi
  ULONG_PTR Count; // rax
  ADAPTER_RENDER *v19; // rcx
  unsigned int v20; // ebx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  const wchar_t *v24; // r9
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  struct _EX_RUNDOWN_REF *v29; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v30; // [rsp+58h] [rbp-A8h] BYREF
  char v31; // [rsp+60h] [rbp-A0h]
  struct _EX_RUNDOWN_REF *v32; // [rsp+68h] [rbp-98h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v33; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v34[8]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v35[8]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  char v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  _BYTE v40[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  char v43; // [rsp+100h] [rbp+0h]
  __int64 v44; // [rsp+108h] [rbp+8h]
  struct DXGDEVICE *v45; // [rsp+128h] [rbp+28h]
  char v46; // [rsp+130h] [rbp+30h]

  v4 = a3;
  v30 = (struct DXGDEVICE *)a2;
  v31 = 0;
  if ( a2 )
    DXGDEVICEACCESSLOCKSHARED::Acquire((DXGDEVICEACCESSLOCKSHARED *)&v30);
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
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v11 = 0LL;
LABEL_9:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v32, v11);
  _InterlockedDecrement((volatile signed __int32 *)a1 + 66);
  ExReleasePushLockSharedEx((char *)a1 + 248, 0LL);
  KeLeaveCriticalRegion();
  v12 = v32;
  v29 = v32;
  v13 = v32;
  v32 = 0LL;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32);
  v14 = *((_QWORD *)a2[2] + 2);
  v37 = v14;
  v38 = 0;
  v39 = 0LL;
  if ( v14 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
    v36 = -1LL;
    v12 = v29;
  }
  v15 = *((_QWORD *)a2[2] + 2);
  v42 = v15;
  v43 = 0;
  v44 = 0LL;
  if ( v15 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
    v41 = -1LL;
    v12 = v29;
  }
  v45 = (struct DXGDEVICE *)a2;
  v46 = 0;
  v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v34, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry1(2LL, v16);
    WdLogGlobalForLineNumber = 736;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"0x%I64x fails Present, failed to take adapter core access shared lock",
      v17,
      0LL,
      0LL,
      0LL,
      0LL);
    COREACCESS::~COREACCESS((COREACCESS *)v40, v27);
    COREACCESS::~COREACCESS((COREACCESS *)v35, v28);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
    if ( v30 && v31 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v30 + 17));
      KeLeaveCriticalRegion();
    }
    return (unsigned int)v17;
  }
  else
  {
    if ( v13 )
    {
      Count = v12[1].Count;
      if ( Count )
      {
        v19 = a2[2];
        if ( *(ADAPTER_RENDER **)(Count + 16) == v19 )
        {
          memset(&v33, 0, sizeof(v33));
          v33.hAllocation = *(HANDLE *)(v12[6].Count + 16);
          v20 = ADAPTER_RENDER::DdiDescribeAllocation(v19, &v33);
          *(_DWORD *)a4 = v33.Width;
          *((_DWORD *)a4 + 1) = v33.Height;
          *((_DWORD *)a4 + 2) = v33.Format;
          COREACCESS::~COREACCESS((COREACCESS *)v40, v21);
          COREACCESS::~COREACCESS((COREACCESS *)v35, v22);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
          if ( v30 )
          {
            if ( v31 )
            {
              ExReleaseResourceLite(*((PERESOURCE *)v30 + 17));
              KeLeaveCriticalRegion();
            }
          }
          return v20;
        }
      }
      WdLogSingleEntry2(2LL, -1073741811LL, v4);
      v24 = L"0x%I64x fails Present hSource is for the wrong adapter";
      WdLogGlobalForLineNumber = 749;
    }
    else
    {
      WdLogSingleEntry2(2LL, -1073741811LL, v4);
      v24 = L"0x%I64x fails Present invalid hSource 0x%I64x";
      WdLogGlobalForLineNumber = 742;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v24, -1073741811LL, v4, 0LL, 0LL, 0LL);
    COREACCESS::~COREACCESS((COREACCESS *)v40, v25);
    COREACCESS::~COREACCESS((COREACCESS *)v35, v26);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
    if ( v30 && v31 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)v30 + 17));
      KeLeaveCriticalRegion();
    }
    return 3221225485LL;
  }
}
