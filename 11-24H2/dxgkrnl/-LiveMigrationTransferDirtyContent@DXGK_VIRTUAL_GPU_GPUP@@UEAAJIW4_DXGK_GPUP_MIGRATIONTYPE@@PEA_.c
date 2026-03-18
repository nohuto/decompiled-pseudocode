/*
 * XREFs of ?LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1402198F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140012300 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140022D5C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140022E00 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?VidMmDestroyDirtyBitplane@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x14007AEDC (-VidMmDestroyDirtyBitplane@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DIRTY_BITPLANE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?UpdateLiveMigrationAllocIndex@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ @ 0x14021AB34 (-UpdateLiveMigrationAllocIndex@DXGK_VIRTUAL_GPU_GPUP@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::LiveMigrationTransferDirtyContent(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4)
{
  __int64 v4; // r15
  struct DXGPROCESS *Current; // r14
  unsigned int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  __int64 v12; // rsi
  unsigned int v13; // edi
  unsigned int *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rbx
  char *v19; // r12
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 v23; // rbx
  size_t v24; // r15
  int v25; // ebx
  int v26; // eax
  __int64 v27; // rsi
  unsigned int v28; // ebx
  __int64 v29; // rcx
  _DWORD *v30; // rbx
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // r14
  int v34; // eax
  __int64 v35; // rsi
  struct VIDMM_GLOBAL *v36; // rdx
  __int64 v38; // [rsp+28h] [rbp-49h]
  _BYTE v39[24]; // [rsp+58h] [rbp-19h] BYREF
  __int128 v40; // [rsp+70h] [rbp-1h]
  __int128 v41; // [rsp+80h] [rbp+Fh]
  __int128 v42; // [rsp+90h] [rbp+1Fh]
  __int64 v43; // [rsp+A0h] [rbp+2Fh]
  struct VIDMM_DIRTY_BITPLANE *v44; // [rsp+D8h] [rbp+67h] BYREF

  v4 = a2;
  *a4 = 0LL;
  v44 = 0LL;
  v43 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v39, (struct _KTHREAD **)(a1 + 200));
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v9 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( v9 < *((_DWORD *)Current + 74) )
  {
    v10 = *((_QWORD *)Current + 35);
    if ( (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x60)
      && (*(_DWORD *)(v10 + 16LL * v9 + 8) & 0x2000) == 0 )
    {
      v11 = *(_DWORD *)(v10 + 16LL * v9 + 8) & 0x1F;
      if ( v11 )
      {
        if ( v11 == 20 )
        {
          v12 = *(_QWORD *)(v10 + 16LL * v9);
          goto LABEL_9;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  v12 = 0LL;
LABEL_9:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v12 )
  {
    if ( a3 )
    {
      if ( !*(_BYTE *)(a1 + 333) )
      {
        *(_BYTE *)(a1 + 332) = 1;
        *(_BYTE *)(a1 + 352) = 0;
        v14 = *(unsigned int **)(v12 + 8);
        v15 = *v14;
        if ( *v14 > 1 )
        {
          v13 = -1073741811;
          WdLogSingleEntry2(2LL, v15, -1073741811LL);
          v38 = *v14;
          WdLogGlobalForLineNumber = 742;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Invalid Bitplane Header Version (0x%I64x), returning 0x%I64x",
            v38,
            -1073741811LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_56;
        }
        if ( v15 == 1 )
        {
          v16 = 4LL;
        }
        else
        {
          v17 = *v14;
          v18 = v17;
          WdLogSingleEntry1(2LL, v17);
          WdLogGlobalForLineNumber = 1159;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Unknown Live Migration Bitplane Header Version 0x%I64x",
            v18,
            0LL,
            0LL,
            0LL,
            0LL);
          v16 = 0LL;
        }
        v19 = (char *)(v16 + *(_QWORD *)(v12 + 8));
        v20 = *(_QWORD *)(v12 + 16) - v16;
        while ( v20 )
        {
          v21 = *(unsigned int *)(a1 + 328);
          if ( (unsigned int)v21 >= *(_DWORD *)(a1 + 168) )
            break;
          v22 = *(_QWORD *)(a1 + 184) + 112 * v21;
          if ( *(_DWORD *)(v22 + 104) )
          {
            if ( !*(_DWORD *)(v22 + 108) )
              RtlClearAllBits((PRTL_BITMAP)(v22 + 32));
            v23 = *(_DWORD *)(v22 + 108) >> 3;
            v24 = (unsigned int)(*(_DWORD *)(v22 + 48) - v23);
            if ( v20 < v24 )
              v24 = v20;
            memmove((void *)(*(_QWORD *)(v22 + 40) + 4 * v23), v19, v24);
            *(_DWORD *)(v22 + 108) += 8 * v24;
            if ( (unsigned int)(v24 + v23) >= *(_DWORD *)(v22 + 48) )
            {
              *(_DWORD *)(v22 + 108) = 0;
              v25 = 0;
            }
            else
            {
              v25 = 261;
            }
            if ( v20 < v24 )
            {
              WdLogSingleEntry0(1LL);
              WdLogGlobalForLineNumber = 761;
              DxgkLogInternalTriageEvent(
                0LL,
                262146LL,
                0xFFFFFFFFLL,
                L"SizeRemaining >= BytesCopied",
                761LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v20 -= v24;
            v19 += v24;
            if ( !v25 )
              ++*(_DWORD *)(a1 + 328);
          }
          else
          {
            *(_DWORD *)(a1 + 328) = v21 + 1;
          }
        }
        v26 = *(_DWORD *)(a1 + 168);
        if ( *(_DWORD *)(a1 + 328) == v26 )
        {
          *(_DWORD *)(a1 + 328) = 0;
          v27 = 0LL;
          *(_BYTE *)(a1 + 333) = 1;
          v28 = 0;
          if ( !v26 )
            goto LABEL_41;
          do
          {
            v29 = *(_QWORD *)(a1 + 184) + 32LL + 112LL * v28;
            if ( *(_DWORD *)(v29 + 72) )
              v27 += RtlNumberOfSetBits((PRTL_BITMAP)v29);
            ++v28;
          }
          while ( v28 < *(_DWORD *)(a1 + 168) );
          if ( !v27 )
LABEL_41:
            *(_BYTE *)(a1 + 352) = 1;
        }
LABEL_42:
        v13 = 0;
        goto LABEL_56;
      }
      *(_BYTE *)(a1 + 332) = 0;
    }
    else
    {
      memset(*(void **)(v12 + 8), 0, *(_QWORD *)(v12 + 16));
    }
    DXGK_VIRTUAL_GPU_GPUP::UpdateLiveMigrationAllocIndex((DXGK_VIRTUAL_GPU_GPUP *)a1);
    v30 = (_DWORD *)(a1 + 328);
    v31 = *(unsigned int *)(a1 + 328);
    if ( (_DWORD)v31 == *(_DWORD *)(a1 + 168) )
    {
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 823;
      *v30 = 0;
    }
    else
    {
      v32 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct VIDMM_DIRTY_BITPLANE **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL) + 760LL) + 8LL)
                                                                                               + 1216LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 768LL),
              112 * v31 + *(_QWORD *)(a1 + 184) + 32LL,
              *(_QWORD *)(v12 + 16),
              &v44);
      v33 = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry1(2LL, v32);
        WdLogGlobalForLineNumber = 836;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"VidMmCreateDirtyBitplane call failed with status 0x%I64x",
          v33,
          0LL,
          0LL,
          0LL,
          0LL);
        v13 = v33;
        goto LABEL_56;
      }
      if ( !v32 )
        ++*v30;
      v34 = (*(__int64 (__fastcall **)(_QWORD, struct VIDMM_DIRTY_BITPLANE *, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL) + 760LL) + 8LL) + 1232LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + 768LL),
              v44,
              a3,
              *(_QWORD *)(v12 + 32),
              a4);
      v35 = v34;
      v36 = *(struct VIDMM_GLOBAL **)(*(_QWORD *)(a1 + 8) + 768LL);
      if ( v34 < 0 )
      {
        VIDMM_EXPORT::VidMmDestroyDirtyBitplane(
          *(VIDMM_EXPORT **)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL) + 760LL),
          v36,
          v44);
        WdLogSingleEntry1(2LL, v35);
        WdLogGlobalForLineNumber = 855;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"VidMmTransferDirtyContentForLiveMigration call failed with status 0x%I64x",
          v35,
          0LL,
          0LL,
          0LL,
          0LL);
        v13 = v35;
        goto LABEL_56;
      }
      VIDMM_EXPORT::VidMmDestroyDirtyBitplane(
        *(VIDMM_EXPORT **)(*(_QWORD *)(*(_QWORD *)(a1 + 176) + 16LL) + 760LL),
        v36,
        v44);
      DXGK_VIRTUAL_GPU_GPUP::UpdateLiveMigrationAllocIndex((DXGK_VIRTUAL_GPU_GPUP *)a1);
      if ( *v30 != *(_DWORD *)(a1 + 168) )
      {
        WdLogSingleEntry0(4LL);
        WdLogGlobalForLineNumber = 878;
        v13 = 261;
        goto LABEL_56;
      }
      WdLogSingleEntry0(4LL);
      WdLogGlobalForLineNumber = 871;
      *(_DWORD *)(a1 + 328) = 0;
    }
    *(_BYTE *)(a1 + 333) = 0;
    goto LABEL_42;
  }
  v13 = -1073741811;
  WdLogSingleEntry2(2LL, v4, -1073741811LL);
  WdLogGlobalForLineNumber = 724;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid hBuffer (0x%I64x), returning 0x%I64x",
    v4,
    -1073741811LL,
    0LL,
    0LL,
    0LL);
LABEL_56:
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
  return v13;
}
