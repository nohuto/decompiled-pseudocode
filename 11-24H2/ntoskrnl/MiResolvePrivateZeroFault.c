/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1402FE070
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1402FEA50 (MiZeroFault.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiPteHasShadow @ 0x1402141A0 (MiPteHasShadow.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402C6590 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiLockVadTree @ 0x1402DEE70 (MiLockVadTree.c)
 *     MiAdvanceFaultList @ 0x1402E5FE0 (MiAdvanceFaultList.c)
 *     MiLocateAddress @ 0x1402FC070 (MiLocateAddress.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiComputeZeroClusterMaximum @ 0x1404448BC (MiComputeZeroClusterMaximum.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(__int64 a1)
{
  __int64 v1; // r10
  int v3; // r8d
  unsigned __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  _KPROCESS *Process; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r11
  struct _KTHREAD *v11; // rcx
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rsi
  int v14; // ebx
  unsigned __int64 v15; // r13
  int v16; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v18; // r12
  int v19; // eax
  unsigned int v20; // edx
  unsigned __int64 v21; // r8
  unsigned __int64 j; // r9
  __int64 v23; // rdx
  int v24; // r15d
  int ClusterPage; // eax
  unsigned __int64 v27; // r15
  unsigned int *v28; // r15
  __int64 v29; // r13
  unsigned __int64 v30; // r14
  unsigned int v31; // ecx
  int v32; // r8d
  __int64 v33; // rcx
  int v34; // edx
  __int64 v35; // rsi
  struct _KTHREAD *v36; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned int IdealGlobalNode; // eax
  __int64 v39; // rdx
  unsigned __int8 i; // dl
  _KPROCESS *v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rax
  char v44; // cl
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // rdx
  bool v47; // zf
  _KPROCESS *v48; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  int v53; // r9d
  __int64 v54; // rax
  unsigned int v55; // ecx
  __int64 v56; // r11
  __int128 v57; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v58; // [rsp+50h] [rbp-B0h]
  __int64 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h]
  __int64 v61; // [rsp+68h] [rbp-98h]
  _QWORD v62[3]; // [rsp+70h] [rbp-90h] BYREF
  int v63; // [rsp+88h] [rbp-78h]
  _DWORD v64[3]; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int *p_PageColor; // [rsp+98h] [rbp-68h]
  unsigned int v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  __int64 v68; // [rsp+B0h] [rbp-50h]
  __int64 *v69; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v70; // [rsp+C0h] [rbp-40h]
  __int128 v71; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v72; // [rsp+D8h] [rbp-28h]
  _QWORD v73[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v74[8]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v75; // [rsp+F8h] [rbp-8h]
  __int64 v76; // [rsp+100h] [rbp+0h]
  __int64 v77; // [rsp+108h] [rbp+8h]
  __int64 v78; // [rsp+110h] [rbp+10h]
  int v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1D8h] [rbp+D8h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 56);
  v60 = v1;
  if ( (v3 & 2) != 0 )
  {
    if ( (v3 & 8) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0xFFFFFFF8) != 0x10 )
        goto LABEL_4;
LABEL_41:
      MiAdvanceFaultList((_QWORD *)v5);
      return 0LL;
    }
    if ( (v3 & 4) == 0 )
      goto LABEL_41;
    v55 = *(_DWORD *)(a1 + 32);
    if ( (v55 >> 3 != 3 || (v55 & 7) == 0) && v55 >> 3 != 1 )
      goto LABEL_41;
  }
LABEL_4:
  if ( (v3 & 0x20) != 0 && (*(_DWORD *)(v5 + 56) & 8) != 0 )
    return 3221225495LL;
  v6 = *(_QWORD *)(v1 + 56);
  v82 = v6;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *(_QWORD *)(a1 + 72);
  if ( v8 )
    v9 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 544) + 1198LL);
  else
    v9 = *(unsigned __int16 *)(v6 + 174);
  v10 = *((_QWORD *)qword_140E2FF88 + v9);
  v61 = v10;
  if ( (v3 & 0x100) == 0
    || (v11 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0]) == 0LL
    || v11 == KeGetCurrentThread() )
  {
    v12 = -1LL;
    v81 = -1LL;
    v13 = 1LL;
    v14 = *(_DWORD *)(a1 + 48);
    v15 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = 9;
    LODWORD(v80) = 0;
    v58 = 0LL;
    v57 = 0LL;
    v79 = 9;
    if ( (*(_DWORD *)(v6 + 184) & 0xF) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread[1].SavedApcStateFill[15] != 0xFF && (BYTE2(CurrentThread[1].Queue) & 1) == 0
        || BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes) != 0xFF )
      {
        v79 = 8;
        goto LABEL_14;
      }
      v16 = 9;
    }
    if ( (*(_DWORD *)a1 & 0x40000) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 4) & 8) != 0 )
        v16 = 2;
      v79 = v16;
    }
LABEL_14:
    if ( !*(_QWORD *)(a1 + 64) && v15 <= 0xFFFFF6BFFFFFFF78uLL && v15 >= 0xFFFFF68000000000uLL )
    {
      MiLockVadTree(1, v6, 0xFFFFF68000000000uLL);
      *(_QWORD *)(a1 + 64) = MiLocateAddress(v4);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      v12 = v81;
      v6 = v82;
    }
    v18 = *(_QWORD *)(a1 + 64);
    v19 = *(_DWORD *)a1;
    v59 = v18;
    if ( !v18 )
    {
      if ( (v19 & 0x101) != 1
        || (*(_DWORD *)(v6 + 184) & 0xF) == 0
        || (v12 = MiComputeZeroClusterMaximum(v5, v6, 0LL), v12 <= 1) )
      {
LABEL_48:
        if ( !v58 )
        {
LABEL_49:
          v80 = 0LL;
          memset_0(v64, 0, 0x54uLL);
          v28 = (unsigned int *)v82;
          v29 = v60;
          v30 = v13;
          while ( 1 )
          {
            v31 = *(_DWORD *)(a1 + 32);
            v32 = 1;
            if ( v31 )
            {
              if ( v31 != 31 )
              {
                if ( v31 >> 3 == 3 )
                {
                  if ( (v31 & 7) != 0 )
                    v32 = 2;
                }
                else
                {
                  v32 = v31 >> 3 != 1;
                }
              }
            }
            else
            {
              v32 = 3;
            }
            v33 = *(_QWORD *)(a1 + 16);
            v34 = 0;
            v35 = *(_QWORD *)(v29 + 96);
            if ( (*(_BYTE *)(v29 + 69) & 1) != 0 )
              v34 = 16;
            v62[1] = v28;
            v62[0] = v61;
            v62[2] = v33;
            v63 = v14;
            v64[0] = v34 | v64[0] & 0xFFFFFFCF;
            if ( v14 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              IdealGlobalNode = v14 - 1;
            }
            else
            {
              v36 = KeGetCurrentThread();
              if ( v28 && (v28[46] & 0xF) == 0 && v36->ApcStateIndex == 1 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                IdealGlobalNode = v36->ApcState.Process->IdealGlobalNode;
              }
              else
              {
                CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v36->IdealProcessor];
                IdealGlobalNode = CurrentPrcb->NodeColor;
              }
            }
            v39 = qword_140E38C10 + 57216LL * IdealGlobalNode;
            if ( (*(_DWORD *)(v39 + 15184) & 1) != 0 )
            {
              v56 = v39 + 15237;
              for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
              {
                if ( *(_BYTE *)(i + v56) == 1 )
                  goto LABEL_63;
              }
              for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
              {
                if ( *(_BYTE *)(i + v56) == 2 )
                  goto LABEL_63;
              }
            }
            i = 0;
LABEL_63:
            v66 = (i & 1 | (2 * (IdealGlobalNode & 0x3F | 0x380))) << 8;
            if ( !v28 || (v28[46] & 0xF) != 0 )
              p_PageColor = &CurrentPrcb->PageColor;
            else
              p_PageColor = v28;
            v64[1] = 57;
            v66 = (v32 << 18) | v66 & 0xFFF3FFFF;
            v67 = -1LL;
            v80 = 0LL;
            v69 = &v80;
            v68 = v35;
            v64[0] = v79 | v64[0] & 0xFFFFFFF0;
            v72 = 0LL;
            v70 = v30;
            v71 = 0LL;
            MiGetPageChain(v62);
            v13 = v72;
            if ( v72 )
              break;
            if ( v79 == 9 )
              return 3221225495LL;
            if ( v80 )
            {
              *(_QWORD *)(v29 + 128) = v80;
              *(_QWORD *)(v29 + 144) = v30;
              return 3221225495LL;
            }
            if ( v79 == 8 )
              *(_DWORD *)(v29 + 80) |= 0x10u;
            v79 = 9;
          }
          if ( (_QWORD)v57 )
          {
            **((_QWORD **)&v57 + 1) = v71;
            v58 += v13;
            *((_QWORD *)&v57 + 1) = *((_QWORD *)&v71 + 1);
          }
          else
          {
            v57 = v71;
            v58 = v72;
          }
          return MiCompletePrivateZeroFault(a1, (ULONG_PTR *)&v57, v13);
        }
        return MiCompletePrivateZeroFault(a1, (ULONG_PTR *)&v57, v13);
      }
      v24 = 1;
LABEL_85:
      if ( !v58 )
      {
        v13 = 1LL;
        if ( v12 > 1 )
        {
          v45 = v15 + 8;
          do
          {
            v46 = *(_QWORD *)v45;
            if ( v45 >= 0xFFFFF6FB7DBED000uLL
              && v45 <= 0xFFFFF6FB7DBED7F8uLL
              && (v46 & 1) != 0
              && ((v46 & 0x42) == 0 || (v46 & 0x20) == 0) )
            {
              v48 = MiPteHasShadow();
              if ( v48 )
              {
                KernelWaitTime = v48[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v50 = *(_QWORD *)(KernelWaitTime + 8 * ((v45 >> 3) & 0x1FF));
                  if ( (v50 & 0x20) != 0 )
                    v46 |= 0x20uLL;
                  v51 = v46;
                  v46 |= 0x42uLL;
                  if ( (v50 & 0x42) == 0 )
                    v46 = v51;
                }
              }
            }
            if ( *(_DWORD *)(a1 + 36) )
            {
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v46) )
                break;
              v47 = v53 == ((v52 >> 5) & 0x1F);
            }
            else
            {
              v47 = v46 == 0;
            }
            if ( !v47 )
              break;
            ++v13;
            v45 += 8LL;
          }
          while ( v13 < v12 );
        }
        if ( v24 == 2 )
        {
          if ( v13 == v12 )
            *(_DWORD *)a1 |= 0x200u;
          else
            v13 = 1LL;
        }
        goto LABEL_49;
      }
      return MiCompletePrivateZeroFault(a1, (ULONG_PTR *)&v57, v13);
    }
    if ( (v19 & 3) != 0 || (v19 & 0x40) != 0 )
    {
      v54 = MiComputeZeroClusterMaximum(v5, v6, v18);
      LODWORD(v80) = 1;
      v12 = v54;
    }
    v20 = *(_DWORD *)(v18 + 48);
    v14 = (v20 >> 12) & 0x7F;
    v81 = v12;
    if ( (v20 & 0x200000) == 0 || MiVadPageSizes[(v20 >> 19) & 3] != 16 || v79 != 9 )
    {
      if ( ((v4 >> 9) & 0x78) == 0
        && (*(_DWORD *)a1 & 0x43) == 0
        && (v20 & 0x200000) != 0
        && (v20 & 0x600000) != 0x600000
        && v4 >= ((((unsigned __int64)*(unsigned __int8 *)(v59 + 32) << 32) | *(unsigned int *)(v59 + 24)) + 16) << 12
        && ((v4 >> 9) & 0xFF8) != 0
        && (v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL)
        && (*(_DWORD *)a1 & 0x40000) == 0 )
      {
        v21 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
        for ( j = 0LL; j < 0x10; ++j )
        {
          v23 = *(_QWORD *)v21;
          if ( v21 >= 0xFFFFF6FB7DBED000uLL && v21 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (v23 & 1) == 0 )
              break;
            if ( (v23 & 0x42) == 0 || (v23 & 0x20) == 0 )
            {
              v41 = MiPteHasShadow();
              if ( v41 )
              {
                v42 = v41[2].KernelWaitTime;
                if ( v42 )
                {
                  v43 = *(_QWORD *)(v42 + 8 * ((v21 >> 3) & 0x1FF));
                  if ( (v43 & 0x20) != 0 )
                    LOBYTE(v23) = v23 | 0x20;
                  v44 = v23;
                  LOBYTE(v23) = v23 | 0x42;
                  if ( (v43 & 0x42) == 0 )
                    LOBYTE(v23) = v44;
                }
              }
            }
          }
          if ( (v23 & 1) == 0 )
            break;
          if ( (v23 & 0x20) == 0 )
            break;
          v21 -= 8LL;
        }
        if ( j == 16 )
        {
          memset_0(v74, 0, 0x78uLL);
          v75 = v73;
          v73[0] = v4 & 0xFFFFFFFFFFFFF000uLL;
          v77 = 0LL;
          v78 = 0LL;
          v73[1] = 0x10000LL;
          v76 = 1LL;
          if ( (unsigned __int64)MiComputeZeroClusterMaximum(v74, v82, v59) < 0x10 )
            goto LABEL_48;
          v12 = 16LL;
          v24 = 2;
          goto LABEL_85;
        }
      }
      goto LABEL_47;
    }
    ClusterPage = MiGetClusterPage(
                    v59,
                    v4,
                    (*(_BYTE *)(v60 + 69) & 1) != 0,
                    16,
                    *(_DWORD *)(a1 + 32),
                    *(_DWORD *)(a1 + 36),
                    *(_QWORD *)(v60 + 96),
                    (__int64)&v57);
    if ( v58 )
    {
      if ( v58 == 1 )
      {
        v12 = v81;
        if ( ClusterPage )
          *(_DWORD *)a1 |= 0x10u;
LABEL_47:
        v24 = v80;
        if ( !(_DWORD)v80 )
          goto LABEL_48;
        goto LABEL_85;
      }
      v27 = v4 & 0xFFFFFFFFFFFF0000uLL;
      *(_QWORD *)(a1 + 16) = v27;
      v13 = 16LL;
      v15 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v12 = v81;
    goto LABEL_47;
  }
  *(_DWORD *)(v1 + 80) |= 2u;
  return 3221226548LL;
}
