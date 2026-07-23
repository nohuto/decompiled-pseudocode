/*
 * XREFs of MiDispatchFault @ 0x140333520
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiAccessCheck @ 0x1403071E0 (MiAccessCheck.c)
 *     MiCheckProtoAccess @ 0x140309950 (MiCheckProtoAccess.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiComputeMaximumFaultCluster @ 0x140406D50 (MiComputeMaximumFaultCluster.c)
 *     KiIsTraceMemoryAccess @ 0x140407010 (KiIsTraceMemoryAccess.c)
 *     KiRspInIstStack @ 0x140407044 (KiRspInIstStack.c)
 *     MiAdjustFaultList @ 0x14042D3E0 (MiAdjustFaultList.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
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
  unsigned __int64 v14; // rsi
  unsigned int v15; // r15d
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v19; // rdi
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rbx
  char v23; // cl
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
  __int64 v47; // r8
  __int64 v48; // r14
  __int16 v49; // ax
  void *v50; // r12
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char v54; // al
  __int64 v55; // rdx
  unsigned __int8 IsTraceMemoryAccess; // al
  __int64 v57; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v58; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+48h] [rbp-C0h]
  __int64 v60; // [rsp+50h] [rbp-B8h]
  __int64 v61; // [rsp+58h] [rbp-B0h]
  __int128 *v62; // [rsp+60h] [rbp-A8h]
  _QWORD *v63; // [rsp+68h] [rbp-A0h]
  __int128 v64; // [rsp+88h] [rbp-80h] BYREF
  __int64 v65[2]; // [rsp+98h] [rbp-70h]
  __int128 v66; // [rsp+A8h] [rbp-60h]
  __m256i v67; // [rsp+B8h] [rbp-50h]
  __int128 v68; // [rsp+D8h] [rbp-30h]
  __int128 v69; // [rsp+E8h] [rbp-20h]
  __int128 v70; // [rsp+F8h] [rbp-10h]
  __int128 v71; // [rsp+108h] [rbp+0h]
  __int64 v72; // [rsp+118h] [rbp+10h]

  v2 = a2;
  v3 = a1;
  *a2 = 0LL;
  v4 = a1[2];
  v5 = a1[5];
  v6 = *a1;
  v7 = *((_QWORD *)a1 + 1) & 2LL;
  v63 = a2;
  v8 = a1[3];
  v62 = a1;
  v9 = (__m128i)a1[1];
  v58 = 0LL;
  v66 = v4;
  v10 = a1[4];
  v68 = v5;
  v11 = a1[7];
  v59 = v7;
  *(_OWORD *)&v67.m256i_u64[2] = v10;
  v12 = a1[6];
  *(_OWORD *)v67.m256i_i8 = v8;
  *(_QWORD *)&v8 = *((_QWORD *)a1 + 7);
  v69 = v12;
  v13 = a1[8];
  v70 = v11;
  *(_QWORD *)&v11 = *((_QWORD *)a1 + 18);
  v71 = v13;
  v64 = v6;
  *(__m128i *)v65 = v9;
  v72 = v11;
  v57 = v8;
  v14 = (((unsigned __int64)v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v15 = 0;
  if ( (_mm_cvtsi128_si32(v9) & 1) != 0
    && (*(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) == 5
     || *(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2
     || *(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) == 1) )
  {
    v16 = v65[0] & 0xFFFFFFFFFFFFFFFEuLL;
  }
  else
  {
    v16 = 0LL;
  }
  v60 = 0LL;
  v17 = MiComputeMaximumFaultCluster(&v64, 0LL);
  v61 = v17;
  if ( v17 > 1 )
  {
    v67.m256i_i8[21] |= 8u;
    v67.m256i_i8[21] &= ~4u;
LABEL_7:
    v19 = v57;
    while ( 1 )
    {
      v20 = 0xFFFFF6FB7DBED000uLL;
      v21 = 0xFFFFF6FB7DBEDF68uLL;
      if ( (v67.m256i_i8[21] & 0x10) == 0 )
        goto LABEL_9;
      if ( (*(_DWORD *)(v19 + 188) & 1) != 0
        || (*(_DWORD *)(v19 + 184) & 0x40) != 0
        && (unsigned __int64)(*(_QWORD *)(v19 + 128) + 1LL) >= *(_QWORD *)(v19 + 120) )
      {
        goto LABEL_29;
      }
      if ( (v67.m256i_i8[21] & 1) != 0 )
        goto LABEL_29;
      if ( (*(_DWORD *)(v19 + 184) & 0xFu) <= 5 )
      {
        v37 = (*(_DWORD *)(v19 + 184) & 0xF) == 1 ? (__int64 *)&unk_140E38880 : (__int64 *)(v19 + 192);
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
        v54 = *(_DWORD *)(v19 + 184) & 0xF;
        if ( !v54 )
        {
          v55 = 2LL;
LABEL_102:
          v43 = CurrentPrcb->SelfmapLockHandle[v55].LockQueue.Next == 0LL;
          goto LABEL_54;
        }
        if ( v54 != 7 )
        {
          v55 = 3LL;
          if ( v54 == 5 )
            v55 = 0LL;
          goto LABEL_102;
        }
        v43 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
      }
      else
      {
        if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0
          || v41 < 0xFFFFF6FB7DBED000uLL
          || v41 > 0xFFFFF6FB7DBEDFFFuLL
          || (v52 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
        {
          if ( (*(_DWORD *)(v19 + 184) & 0xF) != 0 && v41 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            if ( (((unsigned int)dword_140E2F1EC[(unsigned __int64)(2
                                                                  * (unsigned int)((__int64)(v41 + 0x90482413000LL) >> 3)) >> 5] >> ((2 * ((__int64)(v41 + 0x90482413000LL) >> 3)) & 0x1F)) & 2) != 0 )
              goto LABEL_29;
            goto LABEL_55;
          }
          v42 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 60) & 2;
        }
        else
        {
          v42 = (*(_DWORD *)(v52 + 4 * ((((v14 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF)) & 0x40000000) != 0;
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
      LODWORD(v57) = 256;
      if ( (v22 & 0x400) != 0 )
      {
        if ( *((_QWORD *)&v69 + 1) )
          goto LABEL_17;
        v51 = MiCheckProtoAccess(v14, &v57, 0xFFFFF6FB7DBED000uLL, v21);
        if ( !v51 )
        {
          v24 = -1073741819;
          goto LABEL_20;
        }
        v21 = (unsigned int)v57;
        *((_QWORD *)&v69 + 1) = v51;
      }
      else
      {
        if ( (v67.m256i_i8[21] & 0x10) == 0 )
          goto LABEL_17;
        v21 = (v22 >> 5) & 0x1F;
      }
      if ( (_DWORD)v21 == 256 )
        goto LABEL_17;
      if ( (v21 & 0xFFFFFFF8) == 0x10 && (v67.m256i_i8[21] & 0x10) != 0 )
      {
        v24 = -1073741819;
        goto LABEL_20;
      }
      v47 = (unsigned int)v68 >> 8;
      LOBYTE(v47) = BYTE1(v68) & 1;
      v24 = MiAccessCheck(v14, v7, v47, v21, v65[0], 0);
      if ( !v24 )
      {
LABEL_17:
        v23 = v65[0];
        if ( (v65[0] & 1) != 0 && *(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
        {
          MiAdjustFaultList(&v64, KernelWaitTime, v20, v21);
          v23 = v65[0];
        }
        if ( (v22 & 0x400) != 0 )
        {
          v24 = MiResolveProtoPteFault(&v64, v7, &v58, v21);
          goto LABEL_20;
        }
        if ( (v22 & 0x800) != 0 )
        {
          v24 = MiResolveTransitionFault((__int64)&v64, v14, 0LL, v7, &v58);
        }
        else if ( (v22 & 4) != 0 )
        {
          if ( (v67.m256i_i8[21] & 0x10) != 0 )
          {
            if ( v16 )
              MiAdvanceFaultList(v16);
            v24 = -1073740748;
          }
          else
          {
            v24 = MiResolvePageFileFault(&v64, v14, 0LL, &v58);
          }
        }
        else
        {
          v48 = v65[0];
          if ( (v23 & 1) != 0 )
          {
            if ( *(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) != 1
              && *(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) != 3
              && *(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            {
              goto LABEL_82;
            }
          }
          else
          {
            if ( !v65[0] )
              goto LABEL_82;
            v49 = *(_WORD *)(v65[0] + 368);
            LOBYTE(KernelWaitTime) = 0;
            if ( v49 == 16 )
            {
              if ( (*(_DWORD *)(v65[0] + 376) & 0x200) == 0
                && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v65[0] + 384))
                 || (unsigned int)KiRspInIstStack(2LL, *(_QWORD *)(v48 + 384))) )
              {
                goto LABEL_82;
              }
              v50 = &ExpInterlockedPopEntrySListFault;
              IsTraceMemoryAccess = KiIsTraceMemoryAccess(*(_QWORD *)(v48 + 360), KernelWaitTime, v20, v21);
              v23 = v65[0];
              KernelWaitTime = IsTraceMemoryAccess;
            }
            else
            {
              if ( v49 != 51 )
                goto LABEL_82;
              v50 = (void *)qword_140FC7500;
            }
            if ( *(void **)(v48 + 360) != v50 && !(_BYTE)KernelWaitTime )
              goto LABEL_82;
          }
          if ( (v23 & 1) != 0 && *(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) == 6
            || (unsigned __int64)v64 < 0xFFFF800000000000uLL
            || (LODWORD(v57) = (v22 >> 5) & 0x1F, ((v22 >> 5) & 0x18) != 0x10) )
          {
LABEL_82:
            v24 = MiResolveDemandZeroFault(&v64, v14, 0LL, v59);
            goto LABEL_20;
          }
          v24 = -1073741819;
        }
      }
LABEL_20:
      if ( (v67.m256i_i8[21] & 0x10) == 0 )
        v15 = v24;
      if ( v24 < 0 )
      {
LABEL_29:
        v3 = v62;
        v2 = v63;
        goto LABEL_30;
      }
      v25 = v67.m256i_i8[21] | 0x10;
      *(_QWORD *)&v64 = v64 + 4096;
      v26 = v60 + 1;
      v14 += 8LL;
      v67.m256i_i8[21] = v25;
      v65[1] = v14;
      ++v60;
      if ( (v25 & 4) != 0 )
      {
        v67.m256i_i8[21] = v25 & 0xFB;
        if ( v26 == v61 )
          goto LABEL_29;
        v61 = MiComputeMaximumFaultCluster(&v64, v61 - v26);
        v27 = v61;
        if ( v61 == 1 && (v67.m256i_i8[21] & 8) != 0 )
          v67.m256i_i8[21] &= ~8u;
        v26 = 0LL;
        v60 = 0LL;
      }
      else
      {
        v27 = v61;
      }
      *((_QWORD *)&v69 + 1) = 0LL;
      if ( (v65[0] & 1) != 0 && *(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
      {
        v7 = v59;
LABEL_36:
        if ( *(_BYTE *)(v65[0] & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
          v65[0] &= ~1uLL;
        goto LABEL_28;
      }
      *((_QWORD *)&v64 + 1) &= ~2uLL;
      v7 = 0LL;
      v59 = 0LL;
      if ( (v65[0] & 1) != 0 )
        goto LABEL_36;
LABEL_28:
      if ( v26 >= v27 )
        goto LABEL_29;
    }
  }
  v67.m256i_i8[21] &= ~4u;
  if ( v17 )
    goto LABEL_7;
LABEL_30:
  v28 = *(__m128i *)((char *)v3 + 56);
  v29 = v3[5] & 0xFFFFFFE0;
  v30 = v67.m256i_i8[21] & 3;
  v31 = v67.m256i_i64[3];
  *(__int128 *)((char *)v3 + 56) = *(_OWORD *)&v67.m256i_u64[1];
  *((_QWORD *)v3 + 9) = v31;
  v32 = v30 | _mm_srli_si128(v28, 8).m128i_i8[5] & 0xFC;
  v33 = *((_QWORD *)&v70 + 1);
  *((_BYTE *)v3 + 69) = v32;
  v34 = *((_QWORD *)&v71 + 1);
  *((_QWORD *)v3 + 15) = v33;
  v35 = v71;
  *((_QWORD *)v3 + 17) = v34;
  LOBYTE(v34) = v68;
  *((_QWORD *)v3 + 16) = v35;
  *((_QWORD *)v3 + 18) = v72;
  result = v15;
  *((_DWORD *)v3 + 20) = v34 & 0x1F | v29;
  if ( v15 == -1073532109 )
    *v2 = v58;
  return result;
}
