/*
 * XREFs of ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1401DCBEC
 * Callers:
 *     ?CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCESS@@PEAI3@Z @ 0x1402A9884 (-CheckPrimaryContentTile@VIDPNSOURCEINFO@@AEAAJPEAVDXGDEVICE@@IIPEBUtagRECT@@PEAVCOREDEVICEACCES.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1402ED810 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402F72C8 (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     DxgkLock @ 0x140365AD0 (DxgkLock.c)
 *     ?PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z @ 0x1403F49F0 (-PresentCddShadowBuffer@@YAJPEAVDXGCONTEXT@@PEAVDXGHWQUEUE@@I@Z.c)
 *     ?DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z @ 0x14040E800 (-DxgkCddLock@@YAJPEAU_D3DKMT_LOCK@@I@Z.c)
 *     ?DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z @ 0x14040F280 (-DxgkCddPresentOnScreen@@YAJPEAU_DXGKCDD_PRESENT_ON_SCREEN@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x14000E300 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z @ 0x14000F550 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEBD@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140034334 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?UpdateHandleInstance@DXGPROCESS@@QEAAIII@Z @ 0x14003DAA0 (-UpdateHandleInstance@DXGPROCESS@@QEAAIII@Z.c)
 *     ?VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KKIPEAPEAX@Z @ 0x1400471D4 (-VidMmBeginCPUAccess@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@KKIPEAPEAX@Z.c)
 *     ?VidMmWaitOnAllocationDmaReferences@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@IK@Z @ 0x1400477B8 (-VidMmWaitOnAllocationDmaReferences@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAUVIDMM_MULTI_ALLOC@@.c)
 *     Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline @ 0x140067A98 (Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1402A4B10 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1402A7430 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1403FB920 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 */

__int64 __fastcall DXGDEVICE::Lock(DXGDEVICE *this, struct _D3DKMT_LOCK *a2, struct COREDEVICEACCESS *a3, char a4)
{
  char v4; // r15
  D3DKMT_HANDLE hAllocation; // eax
  __int64 v8; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 result; // rax
  __int64 Value; // r8
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // ecx
  int v18; // edx
  unsigned int v19; // ebx
  __int64 v20; // r13
  D3DKMT_HANDLE v21; // r15d
  unsigned int v22; // eax
  __int64 v23; // r8
  int v24; // ecx
  struct DXGALLOCATION *v25; // rdx
  __int64 v26; // rax
  DXGDEVICE *v27; // r9
  __int64 v28; // rcx
  int v29; // edx
  int v30; // eax
  int v31; // r15d
  DXGPROCESS *v32; // rbx
  __int16 v33; // ax
  int v34; // eax
  unsigned int v35; // ebx
  const char *v36; // rdx
  unsigned int v37; // [rsp+28h] [rbp-48h]
  unsigned int v38; // [rsp+30h] [rbp-40h]
  __int64 v39; // [rsp+50h] [rbp-20h] BYREF
  _D3DKMT_LOCK2 v40; // [rsp+58h] [rbp-18h] BYREF
  int v41; // [rsp+B0h] [rbp+40h]

  v4 = a4;
  if ( (*((_BYTE *)this + 1917) & 1) != 0 )
  {
    hAllocation = a2->hAllocation;
    memset(&v40, 0, sizeof(v40));
    v40.hAllocation = hAllocation;
    v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    Current = DXGPROCESS::GetCurrent();
    result = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v8 + 4664),
               Current,
               this,
               &v40,
               1u,
               v37,
               v38);
    if ( (int)result >= 0 )
      a2->pData = v40.pData;
    return result;
  }
  Value = a2->Flags.Value;
  v41 = 1;
  if ( (unsigned int)Value < 0x800 )
  {
    while ( 1 )
    {
      if ( (a2->NumPages == 0) != (a2->pPages == 0LL) )
      {
        v35 = -1073741811;
        WdLogSingleEntry3(3LL, this, a2->NumPages, -1073741811LL);
        WdLogGlobalForLineNumber = 65;
        return v35;
      }
      v12 = ((Value & 4) == 0) | 2;
      if ( (Value & 8) == 0 )
        v12 = (Value & 4) == 0;
      v13 = v12 | 4;
      if ( (Value & 0x20) == 0 )
        v13 = v12;
      v14 = v13 | 8;
      if ( (Value & 0x40) == 0 )
        v14 = v13;
      v15 = v14 | 0x10;
      if ( (Value & 0x80u) == 0LL )
        v15 = v14;
      v16 = v15 | 0x20;
      if ( (Value & 0x100) == 0 )
        v16 = v15;
      v17 = v16 | 0x48;
      if ( (Value & 0x200) == 0 )
        v17 = v16;
      v18 = v17 | 0x80;
      if ( (Value & 0x400) == 0 )
        v18 = v17;
      v19 = v18 | 0x200;
      if ( (Value & 1) == 0 )
        v19 = v18;
      if ( (unsigned int)Feature_Servicing_GraphicsKernel_CddShadowBuffer__private_IsEnabledDeviceUsageNoInline() && v4 )
        v19 |= 0x400u;
      v20 = *((_QWORD *)this + 5);
      v21 = a2->hAllocation;
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v20 + 248));
      v22 = (v21 >> 6) & 0xFFFFFF;
      if ( v22 >= *(_DWORD *)(v20 + 296) )
        goto LABEL_31;
      v23 = *(_QWORD *)(v20 + 280);
      if ( ((v21 >> 25) & 0x60) != (*(_BYTE *)(v23 + 16LL * v22 + 8) & 0x60) )
        goto LABEL_31;
      if ( (*(_DWORD *)(v23 + 16LL * v22 + 8) & 0x2000) != 0 )
        goto LABEL_31;
      v24 = *(_DWORD *)(v23 + 16LL * v22 + 8) & 0x1F;
      if ( !v24 )
        goto LABEL_31;
      if ( v24 != 5 )
        break;
      v25 = *(struct DXGALLOCATION **)(v23 + 16LL * v22);
LABEL_32:
      DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39, v25);
      _InterlockedDecrement((volatile signed __int32 *)(v20 + 264));
      ExReleasePushLockSharedEx(v20 + 248, 0LL);
      KeLeaveCriticalRegion();
      v26 = v39;
      if ( !v39 )
      {
        v35 = -1073741811;
        WdLogSingleEntry3(3LL, this, a2->hAllocation, -1073741811LL);
        WdLogGlobalForLineNumber = 129;
        goto LABEL_54;
      }
      if ( !*(_QWORD *)(v39 + 24) )
      {
        v35 = -1073741811;
        WdLogSingleEntry4(3LL, this, a2->hAllocation, v39, -1073741811LL);
        WdLogGlobalForLineNumber = 140;
        goto LABEL_54;
      }
      v27 = *(DXGDEVICE **)(v39 + 8);
      if ( v27 != this )
      {
        v35 = -1073741811;
        WdLogSingleEntry4(3LL, v39, this, v27, -1073741811LL);
        WdLogGlobalForLineNumber = 151;
        goto LABEL_54;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(v39 + 48) + 4LL) & 2) == 0 )
      {
        v28 = *(_QWORD *)(v39 + 40);
        if ( v28 )
        {
          v29 = *(_DWORD *)(v28 + 4);
          if ( (v29 & 1) != 0 && (v29 & 2) == 0 )
          {
            if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL)
                                                                        + 8LL)
                                                            + 1280LL))(*(_QWORD *)(v39 + 24)) )
            {
              v30 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 444LL);
              if ( (v30 & 0x10) == 0 && (v30 & 8) == 0 )
              {
                v35 = -1073741811;
                WdLogSingleEntry3(3LL, this, a2->hAllocation, -1073741811LL);
                WdLogGlobalForLineNumber = 171;
LABEL_54:
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39);
                return v35;
              }
            }
            v26 = v39;
          }
        }
      }
      if ( v41 == 1 )
        v19 |= 0x100u;
      v31 = VIDMM_EXPORT::VidMmBeginCPUAccess(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
              *(struct VIDMM_MULTI_ALLOC **)(v26 + 24),
              a2->hAllocation & 0x3F,
              v19,
              a2->PrivateDriverData,
              &a2->pData);
      v32 = (DXGPROCESS *)*((_QWORD *)this + 5);
      v33 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 760LL) + 8LL)
                                                      + 256LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 768LL),
              *(_QWORD *)(v39 + 24));
      a2->hAllocation = DXGPROCESS::UpdateHandleInstance(v32, a2->hAllocation, v33);
      if ( v31 != -1071775484
        || (COREDEVICEACCESS::Release(a3),
            v31 = VIDMM_EXPORT::VidMmWaitOnAllocationDmaReferences(
                    *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 760LL),
                    *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 768LL),
                    *(struct VIDMM_MULTI_ALLOC **)(v39 + 24),
                    a2->hAllocation & 0x3F,
                    2u),
            v31 < 0) )
      {
LABEL_55:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39);
        return (unsigned int)v31;
      }
      v34 = COREDEVICEACCESS::AcquireShared(a3, 0LL);
      v31 = v34;
      if ( v34 < 0 )
      {
        WdLogSingleEntry1(4LL, v34);
        WdLogGlobalForLineNumber = 216;
        COREDEVICEACCESS::AcquireSharedUncheck(a3, v36);
        v35 = v31;
        goto LABEL_54;
      }
      a2->Flags.Value &= ~0x80u;
      if ( v41 != 1 )
        goto LABEL_55;
      v41 = 2;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v39);
      Value = a2->Flags.Value;
      if ( (unsigned int)Value >= 0x800 )
        goto LABEL_60;
      v4 = a4;
    }
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_31:
    v25 = 0LL;
    goto LABEL_32;
  }
LABEL_60:
  v35 = -1073741811;
  WdLogSingleEntry3(3LL, this, Value, -1073741811LL);
  WdLogGlobalForLineNumber = 55;
  return v35;
}
