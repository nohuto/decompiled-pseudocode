/*
 * XREFs of MiDispatchFault @ 0x1402142B0
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 * Callees:
 *     MiAccessCheck @ 0x140213E80 (MiAccessCheck.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     MiAdvanceFaultList @ 0x1402E5FE0 (MiAdvanceFaultList.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiCheckProtoAccess @ 0x1402FF1D0 (MiCheckProtoAccess.c)
 *     MiComputeMaximumFaultCluster @ 0x14040EB50 (MiComputeMaximumFaultCluster.c)
 *     KiIsTraceMemoryAccess @ 0x14040EE10 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x14040EE44 (KiRspInIstStack.c)
 *     MiAdjustFaultList @ 0x14043ABA0 (MiAdjustFaultList.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiDispatchFault(__int128 *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int128 *v3; // rdi
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm3
  __int64 v7; // r14
  __int128 v8; // xmm2
  __m128i v9; // xmm4
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm0
  ULONG_PTR v14; // rsi
  unsigned int v15; // r15d
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v19; // rdi
  unsigned __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rbx
  __int8 v23; // cl
  int v24; // ecx
  __int8 v25; // al
  unsigned __int64 v26; // rbx
  unsigned __int64 v27; // rcx
  __m128i v28; // xmm2
  unsigned int v29; // edx
  char v30; // al
  __int64 v31; // xmm0_8
  char v32; // cl
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 result; // rax
  __int64 *v37; // rax
  __int64 v38; // rcx
  unsigned int *MmInternal; // rax
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  int v42; // eax
  bool v43; // zf
  _KPROCESS *Process; // rcx
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int64 v47; // r14
  __int16 v48; // ax
  void *v49; // r12
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char v53; // al
  __int64 v54; // rdx
  unsigned __int8 IsTraceMemoryAccess; // al
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v59; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v60; // [rsp+48h] [rbp-C0h]
  __int64 v61; // [rsp+50h] [rbp-B8h]
  __int64 v62; // [rsp+58h] [rbp-B0h]
  __int128 *v63; // [rsp+60h] [rbp-A8h]
  _QWORD *v64; // [rsp+68h] [rbp-A0h]
  __int128 v65; // [rsp+88h] [rbp-80h] BYREF
  __m128i v66; // [rsp+98h] [rbp-70h]
  __int128 v67; // [rsp+A8h] [rbp-60h]
  __m256i v68; // [rsp+B8h] [rbp-50h]
  __int128 v69; // [rsp+D8h] [rbp-30h]
  __int128 v70; // [rsp+E8h] [rbp-20h]
  __int128 v71; // [rsp+F8h] [rbp-10h]
  __int128 v72; // [rsp+108h] [rbp+0h]
  __int64 v73; // [rsp+118h] [rbp+10h]

  v2 = a2;
  v3 = a1;
  *a2 = 0LL;
  v4 = a1[2];
  v5 = a1[5];
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 1) & 2LL;
  v64 = a2;
  v8 = a1[3];
  v63 = a1;
  v9 = (__m128i)a1[1];
  v59 = 0LL;
  v67 = v4;
  v10 = a1[4];
  v69 = v5;
  v11 = a1[7];
  v60 = v7;
  *(_OWORD *)&v68.m256i_u64[2] = v10;
  v12 = a1[6];
  *(_OWORD *)v68.m256i_i8 = v8;
  *(_QWORD *)&v8 = *((_QWORD *)a1 + 7);
  v70 = v12;
  v13 = a1[8];
  v71 = v11;
  *(_QWORD *)&v11 = *((_QWORD *)a1 + 18);
  v72 = v13;
  v65 = v6;
  v66 = v9;
  v73 = v11;
  v58 = v8;
  v14 = (((unsigned __int64)v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = 0;
  if ( (_mm_cvtsi128_si32(v9) & 1) != 0
    && (*(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 5
     || *(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2
     || *(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 1) )
  {
    v16 = v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v16 = 0LL;
  }
  v61 = 0LL;
  v17 = MiComputeMaximumFaultCluster(&v65, 0LL);
  v62 = v17;
  if ( v17 > 1 )
  {
    v68.m256i_i8[21] |= 8u;
    v68.m256i_i8[21] &= ~4u;
LABEL_7:
    v19 = v58;
    while ( 1 )
    {
      v20 = 0xFFFFF6FB7DBED000uLL;
      v21 = 0xFFFFF6FB7DBEDF68uLL;
      if ( (v68.m256i_i8[21] & 0x10) == 0 )
        goto LABEL_9;
      if ( (*(_DWORD *)(v19 + 188) & 1) != 0
        || (*(_DWORD *)(v19 + 184) & 0x40) != 0
        && (unsigned __int64)(*(_QWORD *)(v19 + 128) + 1LL) >= *(_QWORD *)(v19 + 120) )
      {
        goto LABEL_29;
      }
      if ( (v68.m256i_i8[21] & 1) != 0 )
        goto LABEL_29;
      if ( (*(_DWORD *)(v19 + 184) & 0xFu) <= 5 )
      {
        v37 = (*(_DWORD *)(v19 + 184) & 0xF) == 1 ? (__int64 *)&unk_140E38740 : (__int64 *)(v19 + 192);
        v38 = *v37;
        MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
        v40 = MmInternal ? MmInternal[81] : 0LL;
        if ( (*(_DWORD *)(v38 + (v40 << 6)) & 0x40000000) != 0 )
          goto LABEL_29;
      }
      v41 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( ((v14 >> 9) & 0x7FFFFFFFF8LL) == 0x7B7DBEDF68LL )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v53 = *(_DWORD *)(v19 + 184) & 0xF;
        if ( !v53 )
        {
          v54 = 2LL;
LABEL_102:
          v43 = CurrentPrcb->SelfmapLockHandle[v54].LockQueue.Next == 0LL;
          goto LABEL_54;
        }
        if ( v53 != 7 )
        {
          v54 = 3LL;
          if ( v53 == 5 )
            v54 = 0LL;
          goto LABEL_102;
        }
        v43 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
      }
      else
      {
        if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0
          || v41 < 0xFFFFF6FB7DBED000uLL
          || v41 > 0xFFFFF6FB7DBEDFFFuLL
          || (v51 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0 && v41 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            if ( (((unsigned int)dword_140E2F0AC[(unsigned __int64)(2
                                                                  * (unsigned int)((__int64)(v41 + 0x90482413000LL) >> 3)) >> 5] >> ((2 * ((__int64)(v41 + 0x90482413000LL) >> 3)) & 0x1F)) & 2) != 0 )
              goto LABEL_29;
            goto LABEL_55;
          }
          v42 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 60) & 2;
        }
        else
        {
          v42 = (*(_DWORD *)(v51 + 4 * ((((v14 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF)) & 0x40000000) != 0;
        }
        v43 = v42 == 0;
      }
LABEL_54:
      if ( !v43 )
        goto LABEL_29;
LABEL_55:
      if ( KeShouldYieldProcessor() )
        goto LABEL_29;
      v20 = 0xFFFFF6FB7DBED000uLL;
LABEL_9:
      v22 = *(_QWORD *)v14;
      if ( v14 >= 0xFFFFF6FB7DBED000uLL
        && v14 <= 0xFFFFF6FB7DBED7F8uLL
        && (v22 & 1) != 0
        && ((v22 & 0x42) == 0 || (v22 & 0x20) == 0)
        && (MiFlags & 0x600000) != 0 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( Process->AddressPolicy != 1 )
        {
          KernelWaitTime = Process[2].KernelWaitTime;
          if ( KernelWaitTime )
          {
            v45 = *(_QWORD *)(KernelWaitTime + 8 * ((v14 >> 3) & 0x1FF));
            if ( (v45 & 0x20) != 0 )
              v22 |= 0x20uLL;
            v46 = v22;
            v22 |= 0x42uLL;
            if ( (v45 & 0x42) == 0 )
              v22 = v46;
          }
        }
      }
      if ( !v22 || (v22 & 1) != 0 )
      {
        v24 = 0;
        goto LABEL_20;
      }
      LODWORD(v58) = 256;
      if ( (v22 & 0x400) != 0 )
      {
        if ( *((_QWORD *)&v70 + 1) )
          goto LABEL_17;
        v50 = MiCheckProtoAccess(v14, &v58, 0xFFFFF6FB7DBED000uLL, v21);
        if ( !v50 )
        {
          v24 = -1073741819;
          goto LABEL_20;
        }
        v21 = (unsigned int)v58;
        *((_QWORD *)&v70 + 1) = v50;
      }
      else
      {
        if ( (v68.m256i_i8[21] & 0x10) == 0 )
          goto LABEL_17;
        v21 = (v22 >> 5) & 0x1F;
      }
      if ( (_DWORD)v21 == 256 )
        goto LABEL_17;
      if ( (v21 & 0xFFFFFFF8) == 0x10 && (v68.m256i_i8[21] & 0x10) != 0 )
      {
        v24 = -1073741819;
        goto LABEL_20;
      }
      v24 = MiAccessCheck(v14, v7, BYTE1(v69) & 1, v21, v66.m128i_i64[0], 0);
      if ( !v24 )
      {
LABEL_17:
        v23 = v66.m128i_i8[0];
        if ( (v66.m128i_i8[0] & 1) != 0 && *(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
        {
          MiAdjustFaultList(&v65, KernelWaitTime, v20, v21);
          v23 = v66.m128i_i8[0];
        }
        if ( (v22 & 0x400) != 0 )
        {
          v24 = MiResolveProtoPteFault(&v65, v7, &v59, v21);
          goto LABEL_20;
        }
        if ( (v22 & 0x800) != 0 )
        {
          v24 = MiResolveTransitionFault(&v65, v14, 0LL, v7, &v59);
        }
        else if ( (v22 & 4) != 0 )
        {
          if ( (v68.m256i_i8[21] & 0x10) != 0 )
          {
            if ( v16 )
              MiAdvanceFaultList(v16, KernelWaitTime, v20, v21);
            v24 = -1073740748;
          }
          else
          {
            v24 = MiResolvePageFileFault(&v65, v14, 0LL, &v59);
          }
        }
        else
        {
          v47 = v66.m128i_i64[0];
          if ( (v23 & 1) != 0 )
          {
            if ( *(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) != 1
              && *(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) != 3
              && *(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            {
              goto LABEL_82;
            }
          }
          else
          {
            if ( !v66.m128i_i64[0] )
              goto LABEL_82;
            v48 = *(_WORD *)(v66.m128i_i64[0] + 368);
            LOBYTE(KernelWaitTime) = 0;
            if ( v48 == 16 )
            {
              if ( (*(_DWORD *)(v66.m128i_i64[0] + 376) & 0x200) == 0
                && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v66.m128i_i64[0] + 384), v20, v21)
                 || (unsigned int)KiRspInIstStack(2LL, *(_QWORD *)(v47 + 384), v56, v57)) )
              {
                goto LABEL_82;
              }
              v49 = &ExpInterlockedPopEntrySListFault;
              IsTraceMemoryAccess = KiIsTraceMemoryAccess(*(_QWORD *)(v47 + 360), KernelWaitTime, v20, v21);
              v23 = v66.m128i_i8[0];
              KernelWaitTime = IsTraceMemoryAccess;
            }
            else
            {
              if ( v48 != 51 )
                goto LABEL_82;
              v49 = (void *)qword_140FC6480;
            }
            if ( *(void **)(v47 + 360) != v49 && !(_BYTE)KernelWaitTime )
              goto LABEL_82;
          }
          if ( (v23 & 1) != 0 && *(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 6
            || (unsigned __int64)v65 < 0xFFFF800000000000uLL
            || (LODWORD(v58) = (v22 >> 5) & 0x1F, ((v22 >> 5) & 0x18) != 0x10) )
          {
LABEL_82:
            v24 = MiResolveDemandZeroFault(&v65, v14, 0LL, v60);
            goto LABEL_20;
          }
          v24 = -1073741819;
        }
      }
LABEL_20:
      if ( (v68.m256i_i8[21] & 0x10) == 0 )
        v15 = v24;
      if ( v24 < 0 )
      {
LABEL_29:
        v3 = v63;
        v2 = v64;
        goto LABEL_30;
      }
      v25 = v68.m256i_i8[21] | 0x10;
      *(_QWORD *)&v65 = v65 + 4096;
      v26 = v61 + 1;
      v14 += 8LL;
      v68.m256i_i8[21] = v25;
      v66.m128i_i64[1] = v14;
      ++v61;
      if ( (v25 & 4) != 0 )
      {
        v68.m256i_i8[21] = v25 & 0xFB;
        if ( v26 == v62 )
          goto LABEL_29;
        v62 = MiComputeMaximumFaultCluster(&v65, v62 - v26);
        v27 = v62;
        if ( v62 == 1 && (v68.m256i_i8[21] & 8) != 0 )
          v68.m256i_i8[21] &= ~8u;
        v26 = 0LL;
        v61 = 0LL;
      }
      else
      {
        v27 = v62;
      }
      *((_QWORD *)&v70 + 1) = 0LL;
      if ( (v66.m128i_i8[0] & 1) != 0 && *(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
      {
        v7 = v60;
LABEL_36:
        if ( *(_BYTE *)(v66.m128i_i64[0] & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
          v66.m128i_i64[0] &= ~1uLL;
        goto LABEL_28;
      }
      *((_QWORD *)&v65 + 1) &= ~2uLL;
      v7 = 0LL;
      v60 = 0LL;
      if ( (v66.m128i_i8[0] & 1) != 0 )
        goto LABEL_36;
LABEL_28:
      if ( v26 >= v27 )
        goto LABEL_29;
    }
  }
  v68.m256i_i8[21] &= ~4u;
  if ( v17 )
    goto LABEL_7;
LABEL_30:
  v28 = *(__m128i *)((char *)v3 + 56);
  v29 = v3[5] & 0xFFFFFFE0;
  v30 = v68.m256i_i8[21] & 3;
  v31 = v68.m256i_i64[3];
  *(__int128 *)((char *)v3 + 56) = *(_OWORD *)&v68.m256i_u64[1];
  *((_QWORD *)v3 + 9) = v31;
  v32 = v30 | _mm_srli_si128(v28, 8).m128i_i8[5] & 0xFC;
  v33 = *((_QWORD *)&v71 + 1);
  *((_BYTE *)v3 + 69) = v32;
  v34 = *((_QWORD *)&v72 + 1);
  *((_QWORD *)v3 + 15) = v33;
  v35 = v72;
  *((_QWORD *)v3 + 17) = v34;
  LOBYTE(v34) = v69;
  *((_QWORD *)v3 + 16) = v35;
  *((_QWORD *)v3 + 18) = v73;
  result = v15;
  *((_DWORD *)v3 + 20) = v34 & 0x1F | v29;
  if ( v15 == -1073532109 )
    *v2 = v59;
  return result;
}
