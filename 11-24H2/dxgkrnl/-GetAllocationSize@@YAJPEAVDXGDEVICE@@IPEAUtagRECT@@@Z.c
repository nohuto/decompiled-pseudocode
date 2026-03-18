/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1402F3A04
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1402F4144 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402F57E0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, unsigned int a2, struct tagRECT *a3)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // r15
  volatile signed __int32 *v8; // r12
  unsigned int v9; // eax
  __int64 v10; // r9
  unsigned int v11; // r15d
  int v12; // edx
  struct _EX_RUNDOWN_REF *v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // ebx
  struct _DXGKARG_DESCRIBEALLOCATION v17; // [rsp+50h] [rbp-30h] BYREF
  struct _EX_RUNDOWN_REF *v19; // [rsp+C8h] [rbp+48h] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v7 = Current;
  if ( Current )
  {
    v8 = (volatile signed __int32 *)((char *)Current + 248);
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v9 = (a2 >> 6) & 0xFFFFFF;
    if ( v9 >= *((_DWORD *)v7 + 74) )
    {
      v11 = a2;
    }
    else
    {
      v10 = *((_QWORD *)v7 + 35);
      v11 = a2;
      if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
        && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
      {
        v12 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
        if ( v12 )
        {
          if ( v12 == 5 )
          {
            v13 = *(struct _EX_RUNDOWN_REF **)(v10 + 16LL * v9);
            goto LABEL_8;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v13 = 0LL;
LABEL_8:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v19, v13);
    _InterlockedDecrement(v8 + 4);
    ExReleasePushLockSharedEx(v8, 0LL);
    KeLeaveCriticalRegion();
    if ( v19 )
    {
      v14 = *((_QWORD *)a1 + 2);
      if ( *(_QWORD *)(*(_QWORD *)(v19[1].Count + 16) + 16LL) != *(_QWORD *)(v14 + 16) )
      {
        v15 = -1073741811;
        WdLogSingleEntry3(2LL, a1, v19, -1073741811LL);
        WdLogGlobalForLineNumber = 2628;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          (__int64)a1,
          (__int64)v19,
          -1073741811LL,
          0LL,
          0LL);
        goto LABEL_12;
      }
      memset(&v17, 0, sizeof(v17));
      v17.hAllocation = *(HANDLE *)(v19[6].Count + 16);
      if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v14 + 16) + 3128LL), &v17) >= 0 )
      {
        a3->right = v17.Width;
        a3->bottom = v17.Height;
        *(_QWORD *)&a3->left = 0LL;
        v15 = 0;
LABEL_12:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v19);
        return v15;
      }
      WdLogSingleEntry2(2LL, v17.hAllocation, a1);
      WdLogGlobalForLineNumber = 2637;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to query source surface size for source 0x%I64x, device 0x%I64x",
        (__int64)v17.hAllocation,
        (__int64)a1,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, v11);
      WdLogGlobalForLineNumber = 2619;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Invalid source handle 0x%I64x",
        v11,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v15 = -1073741823;
    goto LABEL_12;
  }
  WdLogSingleEntry0(2LL);
  WdLogGlobalForLineNumber = 2611;
  DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Invalid process context.", 2611LL, 0LL, 0LL, 0LL, 0LL);
  return -1073741811LL;
}
