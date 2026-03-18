/*
 * XREFs of ?LiveMigrationGetDirtyBitplane@DXGK_VIRTUAL_GPU_GPUP@@UEAAJI@Z @ 0x140212CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1400136BC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140013780 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x140015500 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DdiQueryDirtyBitData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDIRTYBITDATA@@@Z @ 0x1401A5020 (-DdiQueryDirtyBitData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYDIRTYBITDATA@@@Z.c)
 *     ?EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x140212810 (-EnableDirtyBitTrackingForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::LiveMigrationGetDirtyBitplane(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // r12
  unsigned int v4; // edi
  __int64 v5; // r14
  struct DXGPROCESS *Current; // r13
  unsigned int v7; // ecx
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // r15
  __int64 v11; // r8
  __int64 v12; // r13
  unsigned int i; // r12d
  __int64 v14; // rcx
  char *v15; // rbx
  int v16; // eax
  ADAPTER_RENDER *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  int DirtyBitData; // eax
  char *v21; // r12
  size_t v22; // r15
  char *v23; // r12
  unsigned __int64 v24; // r15
  __int64 v25; // rcx
  struct _KTHREAD *v26; // r8
  __int64 v27; // rdx
  size_t v28; // r13
  __int64 v29; // rbx
  _BYTE v31[24]; // [rsp+50h] [rbp-29h] BYREF
  _OWORD v32[2]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v33; // [rsp+88h] [rbp+Fh]
  __int64 v34; // [rsp+98h] [rbp+1Fh]
  struct _KTHREAD *v35; // [rsp+F0h] [rbp+77h]

  v2 = a2;
  v4 = 0;
  v34 = 0LL;
  LODWORD(v5) = 0;
  memset(v32, 0, sizeof(v32));
  v33 = 0LL;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v31, this + 25);
  Current = DXGPROCESS::GetCurrent();
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v7 = ((unsigned int)v2 >> 6) & 0xFFFFFF;
  if ( v7 >= *((_DWORD *)Current + 74) )
    goto LABEL_7;
  v8 = *((_QWORD *)Current + 35);
  if ( (((unsigned int)v2 >> 25) & 0x60) != (*(_BYTE *)(v8 + 16LL * v7 + 8) & 0x60) )
    goto LABEL_7;
  if ( (*(_DWORD *)(v8 + 16LL * v7 + 8) & 0x2000) != 0 )
    goto LABEL_7;
  v9 = *(_DWORD *)(v8 + 16LL * v7 + 8) & 0x1F;
  if ( !v9 )
    goto LABEL_7;
  if ( v9 != 20 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v10 = 0LL;
    goto LABEL_8;
  }
  v10 = *(_QWORD *)(v8 + 16LL * v7);
LABEL_8:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( v10 )
  {
    *((_BYTE *)this + 352) = 0;
    if ( !*((_BYTE *)this + 332) )
    {
      v12 = 0LL;
      for ( i = 0; i < *((_DWORD *)this + 42); ++i )
      {
        v14 = 112LL * i;
        v15 = (char *)this[23] + v14 + 32;
        if ( *((_DWORD *)v15 + 18) )
        {
          if ( *((_DWORD *)v15 + 14) )
          {
            RtlClearAllBits((PRTL_BITMAP)((char *)this[23] + v14 + 32));
            v17 = this[1];
            *(_QWORD *)&v32[0] = *((_QWORD *)v15 + 8);
            *(_QWORD *)&v33 = *((_QWORD *)v15 + 1);
            v18 = *((unsigned int *)v15 + 4);
            LODWORD(v34) = v34 | 1;
            *((_QWORD *)&v33 + 1) = v18;
            DirtyBitData = ADAPTER_RENDER::DdiQueryDirtyBitData(v17, (struct _DXGKARG_QUERYDIRTYBITDATA *)v32, v19);
            v5 = DirtyBitData;
            if ( DirtyBitData < 0 )
            {
              WdLogSingleEntry1(2LL, DirtyBitData);
              WdLogGlobalForLineNumber = 581;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                0xFFFFFFFFLL,
                L"LiveMigrationGetDirtyBitplane DDI call failed with status 0x%I64x",
                v5,
                0LL,
                0LL,
                0LL,
                0LL);
              goto LABEL_41;
            }
          }
          else
          {
            v16 = DXGK_VIRTUAL_GPU_GPUP::EnableDirtyBitTrackingForAllocation((DXGK_VIRTUAL_GPU_GPUP *)this, i, v11);
            LODWORD(v5) = v16;
            if ( v16 < 0 )
            {
              WdLogSingleEntry1(3LL, v16);
              WdLogGlobalForLineNumber = 564;
              goto LABEL_41;
            }
            RtlSetAllBits((PRTL_BITMAP)v15);
          }
          v12 += RtlNumberOfSetBits((PRTL_BITMAP)v15);
        }
      }
      *((_BYTE *)this + 332) = 1;
      if ( !v12 )
        *((_BYTE *)this + 352) = 1;
    }
    v21 = *(char **)(v10 + 8);
    v22 = *(_QWORD *)(v10 + 16);
    memset(v21, 0, v22);
    *(_DWORD *)v21 = 1;
    v23 = v21 + 4;
    v24 = v22 - 4;
    while ( v24 )
    {
      v25 = *((unsigned int *)this + 82);
      if ( (unsigned int)v25 >= *((_DWORD *)this + 42) )
        break;
      v26 = this[23];
      v27 = 112 * v25;
      v35 = v26;
      if ( *((_DWORD *)v26 + 28 * v25 + 26) )
      {
        v5 = 112 * v25;
        v28 = v24;
        v29 = *(_DWORD *)((char *)v26 + v27 + 108) >> 3;
        if ( v24 >= (unsigned int)(*(_DWORD *)((char *)v26 + v27 + 48) - v29) )
          v28 = (unsigned int)(*(_DWORD *)((char *)v26 + v27 + 48) - v29);
        memmove(v23, (const void *)(*(_QWORD *)((char *)v26 + v27 + 40) + 4 * v29), v28);
        *(_DWORD *)((char *)v35 + v5 + 108) += 8 * v28;
        if ( (unsigned int)(v29 + v28) >= *(_DWORD *)((char *)v35 + v5 + 48) )
        {
          *(_DWORD *)((char *)v35 + v5 + 108) = 0;
          LODWORD(v5) = 0;
        }
        else
        {
          LODWORD(v5) = 261;
        }
        if ( v24 < v28 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 616;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"SizeRemaining >= BytesCopied",
            616LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v24 -= v28;
        v23 += v28;
        if ( !(_DWORD)v5 )
          ++*((_DWORD *)this + 82);
      }
      else
      {
        *((_DWORD *)this + 82) = v25 + 1;
      }
    }
    if ( *((_DWORD *)this + 82) == *((_DWORD *)this + 42) )
    {
      *((_DWORD *)this + 82) = 0;
      *((_BYTE *)this + 332) = 0;
    }
LABEL_41:
    v4 = v5;
  }
  else
  {
    WdLogSingleEntry2(2LL, v2, 0LL);
    WdLogGlobalForLineNumber = 536;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Invalid hBuffer (0x%I64x), returning 0x%I64x",
      v2,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v31);
  return v4;
}
