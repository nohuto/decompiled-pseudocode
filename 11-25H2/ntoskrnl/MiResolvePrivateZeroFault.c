/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1402420D0
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiZeroFault @ 0x1402429D0 (MiZeroFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiCompletePrivateZeroFault @ 0x14024C030 (MiCompletePrivateZeroFault.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiLockVadTree @ 0x1402B54D0 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1402B57D0 (MiLocateAddress.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x1402CE090 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiAdvanceFaultList @ 0x14037A740 (MiAdvanceFaultList.c)
 *     MiComputeZeroClusterMaximum @ 0x1403C2038 (MiComputeZeroClusterMaximum.c)
 *     MiGetClusterPage @ 0x1404D2FFC (MiGetClusterPage.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiResolvePrivateZeroFault(int *a1)
{
  unsigned __int64 v1; // r15
  __int64 v3; // r10
  __int64 v4; // rdx
  int v5; // r8d
  __int64 v6; // r12
  _KPROCESS *Process; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r11
  struct _KTHREAD *v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rsi
  int v14; // ebx
  unsigned __int64 v15; // r14
  int v16; // ecx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v18; // r13
  int v19; // eax
  unsigned int v20; // edx
  unsigned __int64 v21; // r12
  unsigned __int64 i; // r15
  char v23; // al
  int v24; // r15d
  __int64 v25; // r14
  unsigned __int64 v26; // r15
  int j; // r13d
  unsigned int v28; // eax
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // edx
  __int64 v32; // rsi
  struct _KTHREAD *v33; // rcx
  struct _KPRCB *CurrentPrcb; // r11
  unsigned int IdealGlobalNode; // eax
  __int64 v36; // rdx
  unsigned __int8 k; // dl
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // r14
  __int64 v41; // rax
  bool v42; // zf
  unsigned __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // rax
  unsigned int v46; // ecx
  int ClusterPage; // eax
  unsigned __int64 v48; // r15
  __int64 v49; // r10
  __int128 v50; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  _QWORD v54[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  _QWORD v56[3]; // [rsp+80h] [rbp-80h] BYREF
  int v57; // [rsp+98h] [rbp-68h]
  _DWORD v58[3]; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int *p_PageColor; // [rsp+A8h] [rbp-58h]
  unsigned int v60; // [rsp+B0h] [rbp-50h]
  __int64 v61; // [rsp+B8h] [rbp-48h]
  __int64 v62; // [rsp+C0h] [rbp-40h]
  __int64 *v63; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v64; // [rsp+D0h] [rbp-30h]
  __int128 v65; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v66; // [rsp+E8h] [rbp-18h]
  char v67[8]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v68; // [rsp+F8h] [rbp-8h]
  __int64 v69; // [rsp+100h] [rbp+0h]
  __int64 v70; // [rsp+108h] [rbp+8h]
  __int64 v71; // [rsp+110h] [rbp+10h]
  int v72; // [rsp+1C0h] [rbp+C0h]
  __int64 v73; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned __int64 v74; // [rsp+1D0h] [rbp+D0h]
  __int64 v75; // [rsp+1D8h] [rbp+D8h]

  v1 = *((_QWORD *)a1 + 2);
  v3 = *((_QWORD *)a1 + 7);
  v4 = *((_QWORD *)a1 + 1);
  v5 = *a1;
  v54[0] = v1;
  v55 = v3;
  v52 = v4;
  if ( (v5 & 2) == 0 )
    goto LABEL_2;
  if ( (v5 & 8) != 0 )
  {
    if ( (a1[8] & 0xFFFFFFF8) != 0x10 )
      goto LABEL_2;
LABEL_69:
    MiAdvanceFaultList(v3);
    return 0LL;
  }
  if ( (v5 & 4) == 0 )
    goto LABEL_69;
  v46 = a1[8];
  if ( (v46 >> 3 != 3 || (v46 & 7) == 0) && v46 >> 3 != 1 )
    goto LABEL_69;
LABEL_2:
  if ( (v5 & 0x20) != 0 && (*(_DWORD *)(v3 + 56) & 8) != 0 )
    return 3221225495LL;
  v6 = *(_QWORD *)(v4 + 56);
  v75 = v6;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *((_QWORD *)a1 + 9);
  if ( v8 )
    v9 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 544) + 1198LL);
  else
    v9 = *(unsigned __int16 *)(v6 + 174);
  v10 = *((_QWORD *)qword_140E2FD48 + v9);
  v53 = v10;
  if ( (v5 & 0x100) == 0
    || (v11 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0]) == 0LL
    || v11 == KeGetCurrentThread() )
  {
    v12 = -1LL;
    v74 = -1LL;
    v13 = 1LL;
    v14 = a1[12];
    v15 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = 9;
    LODWORD(v73) = 0;
    v51 = 0LL;
    v50 = 0LL;
    v72 = 9;
    if ( (*(_DWORD *)(v6 + 184) & 0xF) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread[1].SavedApcStateFill[15] != 0xFF && (BYTE2(CurrentThread[1].Queue) & 1) == 0
        || BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes) != 0xFF )
      {
        v72 = 8;
        goto LABEL_12;
      }
      v16 = 9;
    }
    if ( (*a1 & 0x40000) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 4) & 8) != 0 )
        v16 = 2;
      v72 = v16;
    }
LABEL_12:
    if ( !*((_QWORD *)a1 + 8) && v15 <= 0xFFFFF6BFFFFFFF78uLL && v15 >= 0xFFFFF68000000000uLL )
    {
      MiLockVadTree(1LL);
      *((_QWORD *)a1 + 8) = MiLocateAddress(v1);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      v3 = v55;
      v12 = v74;
    }
    v18 = *((_QWORD *)a1 + 8);
    v19 = *a1;
    if ( v18 )
    {
      if ( (v19 & 3) != 0 || (v19 & 0x40) != 0 )
      {
        v45 = MiComputeZeroClusterMaximum(v3, v6, *((_QWORD *)a1 + 8));
        LODWORD(v73) = 1;
        v12 = v45;
      }
      v20 = *(_DWORD *)(v18 + 48);
      v14 = (v20 >> 12) & 0x7F;
      v74 = v12;
      if ( (v20 & 0x200000) != 0 && MiVadPageSizes[(v20 >> 19) & 3] == 16 && v72 == 9 )
      {
        ClusterPage = MiGetClusterPage(
                        v18,
                        v1,
                        (*(_BYTE *)(v52 + 69) & 1) != 0,
                        16,
                        a1[8],
                        a1[9],
                        *(_QWORD *)(v52 + 96),
                        (__int64)&v50);
        if ( v51 )
        {
          if ( v51 != 1 )
          {
            v48 = v1 & 0xFFFFFFFFFFFF0000uLL;
            *((_QWORD *)a1 + 2) = v48;
            v13 = 16LL;
            v15 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            goto LABEL_39;
          }
          v12 = v74;
          if ( ClusterPage )
            *a1 |= 0x10u;
LABEL_40:
          v24 = v73;
          if ( !(_DWORD)v73 )
            goto LABEL_41;
          goto LABEL_70;
        }
LABEL_39:
        v12 = v74;
        goto LABEL_40;
      }
      if ( ((v1 >> 9) & 0x78) != 0
        || (*a1 & 0x43) != 0
        || (v20 & 0x200000) == 0
        || (v20 & 0x600000) == 0x600000
        || v1 < ((((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32) | *(unsigned int *)(v18 + 24)) + 16) << 12
        || ((v1 >> 9) & 0xFF8) == 0
        || v1 >= 0xFFFFF68000000000uLL && v1 <= 0xFFFFF6FFFFFFFFFFuLL
        || (*a1 & 0x40000) != 0 )
      {
        goto LABEL_40;
      }
      v21 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000008LL;
      for ( i = 0LL; i < 0x10; ++i )
      {
        v23 = MI_READ_PTE_LOCK_FREE(v21);
        if ( (v23 & 1) == 0 )
          break;
        if ( (v23 & 0x20) == 0 )
          break;
        v21 -= 8LL;
      }
      if ( i != 16 )
      {
        v6 = v75;
        goto LABEL_39;
      }
      memset_0(v67, 0, 0x78uLL);
      v6 = v75;
      v54[0] &= 0xFFFFFFFFFFFFF000uLL;
      v68 = v54;
      v54[1] = 0x10000LL;
      v70 = 0LL;
      v71 = 0LL;
      v69 = 1LL;
      if ( (unsigned __int64)MiComputeZeroClusterMaximum(v67, v75, v18) < 0x10 )
        goto LABEL_41;
      v12 = 16LL;
      v74 = 16LL;
      v24 = 2;
    }
    else
    {
      if ( (*a1 & 0x101) != 1 )
        goto LABEL_41;
      if ( (*(_DWORD *)(v6 + 184) & 0xF) == 0 )
        goto LABEL_41;
      v74 = MiComputeZeroClusterMaximum(v3, v6, 0LL);
      v12 = v74;
      if ( v74 <= 1 )
        goto LABEL_41;
      v24 = 1;
    }
LABEL_70:
    if ( v51 )
      return MiCompletePrivateZeroFault(a1, &v50, v13);
    v13 = 1LL;
    if ( v12 > 1 )
    {
      v39 = v74;
      v40 = v15 + 8;
      do
      {
        v41 = MI_READ_PTE_LOCK_FREE(v40);
        if ( a1[9] )
        {
          if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v41) )
            break;
          v42 = v44 == ((v43 >> 5) & 0x1F);
        }
        else
        {
          v42 = v41 == 0;
        }
        if ( !v42 )
          break;
        ++v13;
        v40 += 8LL;
      }
      while ( v13 < v39 );
      v6 = v75;
      v12 = v74;
    }
    if ( v24 == 2 )
    {
      if ( v13 == v12 )
        *a1 |= 0x200u;
      else
        v13 = 1LL;
    }
LABEL_41:
    if ( !v51 )
    {
      v73 = 0LL;
      memset_0(v58, 0, 0x54uLL);
      v25 = v52;
      v26 = v13;
      for ( j = v72; ; j = 9 )
      {
        v28 = a1[8];
        v29 = 1;
        if ( v28 )
        {
          if ( v28 != 31 )
          {
            if ( v28 >> 3 == 3 )
            {
              if ( (v28 & 7) != 0 )
                v29 = 2;
            }
            else
            {
              v29 = v28 >> 3 != 1;
            }
          }
        }
        else
        {
          v29 = 3;
        }
        v30 = *((_QWORD *)a1 + 2);
        v31 = 0;
        v32 = *(_QWORD *)(v25 + 96);
        if ( (*(_BYTE *)(v25 + 69) & 1) != 0 )
          v31 = 16;
        v56[1] = v6;
        v56[0] = v53;
        v56[2] = v30;
        v57 = v14;
        v58[0] = v31 | v58[0] & 0xFFFFFFCF;
        if ( v14 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          IdealGlobalNode = v14 - 1;
        }
        else
        {
          v33 = KeGetCurrentThread();
          if ( v6 && (*(_DWORD *)(v6 + 184) & 0xF) == 0 && v33->ApcStateIndex == 1 )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            IdealGlobalNode = v33->ApcState.Process->IdealGlobalNode;
          }
          else
          {
            CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v33->IdealProcessor];
            IdealGlobalNode = CurrentPrcb->NodeColor;
          }
        }
        v36 = qword_140E389D0 + 57216LL * IdealGlobalNode;
        if ( (*(_DWORD *)(v36 + 15184) & 1) != 0 )
        {
          v49 = v36 + 15237;
          for ( k = 0; k < (unsigned __int8)MmNumberOfChannels; ++k )
          {
            if ( *(_BYTE *)(k + v49) == 1 )
              goto LABEL_56;
          }
          for ( k = 0; k < (unsigned __int8)MmNumberOfChannels; ++k )
          {
            if ( *(_BYTE *)(k + v49) == 2 )
              goto LABEL_56;
          }
        }
        k = 0;
LABEL_56:
        v60 = (k & 1 | (2 * (IdealGlobalNode & 0x3F | 0x380))) << 8;
        if ( !v6 || (*(_DWORD *)(v6 + 184) & 0xF) != 0 )
          p_PageColor = &CurrentPrcb->PageColor;
        else
          p_PageColor = (unsigned int *)v6;
        v58[1] = 57;
        v60 = v60 & 0xFFF3FFFF | (v29 << 18);
        v73 = 0LL;
        v61 = -1LL;
        v63 = &v73;
        v62 = v32;
        v64 = v26;
        v58[0] = j | v58[0] & 0xFFFFFFF0;
        v66 = 0LL;
        v65 = 0LL;
        MiGetPageChain(v56);
        v13 = v66;
        if ( v66 )
          break;
        if ( j == 9 )
          return 3221225495LL;
        if ( v73 )
        {
          *(_QWORD *)(v25 + 128) = v73;
          *(_QWORD *)(v25 + 144) = v26;
          return 3221225495LL;
        }
        if ( j == 8 )
          *(_DWORD *)(v25 + 80) |= 0x10u;
      }
      if ( (_QWORD)v50 )
      {
        **((_QWORD **)&v50 + 1) = v65;
        v51 += v13;
        *((_QWORD *)&v50 + 1) = *((_QWORD *)&v65 + 1);
      }
      else
      {
        v50 = v65;
        v51 = v66;
      }
    }
    return MiCompletePrivateZeroFault(a1, &v50, v13);
  }
  *(_DWORD *)(v4 + 80) |= 2u;
  return 3221226548LL;
}
