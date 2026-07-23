/*
 * XREFs of MiResolvePrivateZeroFault @ 0x1403087F0
 * Callers:
 *     MiZeroFault @ 0x1403091D0 (MiZeroFault.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiLockVadTree @ 0x140240750 (MiLockVadTree.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     IS_PTE_NOT_DEMAND_ZERO @ 0x140269980 (IS_PTE_NOT_DEMAND_ZERO.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiLocateAddress @ 0x140344F70 (MiLocateAddress.c)
 *     MiComputeZeroClusterMaximum @ 0x14043CB7C (MiComputeZeroClusterMaximum.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v24; // r9
  int v25; // r15d
  int ClusterPage; // eax
  unsigned __int64 v28; // r15
  unsigned int *v29; // r15
  __int64 v30; // r13
  unsigned __int64 v31; // r14
  unsigned int v32; // ecx
  int v33; // r8d
  __int64 v34; // rcx
  int v35; // edx
  __int64 v36; // rsi
  struct _KTHREAD *v37; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned int IdealGlobalNode; // eax
  __int64 v40; // rdx
  unsigned __int8 i; // dl
  _KPROCESS *v42; // rax
  unsigned __int64 v43; // rcx
  __int64 v44; // rax
  char v45; // cl
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rdx
  bool v48; // zf
  _KPROCESS *v49; // rax
  unsigned __int64 KernelWaitTime; // rcx
  __int64 v51; // rax
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  int v54; // r9d
  __int64 v55; // rax
  unsigned int v56; // ecx
  __int64 v57; // r11
  __int128 v58; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v59; // [rsp+50h] [rbp-B0h]
  __int64 v60; // [rsp+58h] [rbp-A8h]
  __int64 v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  _QWORD v63[3]; // [rsp+70h] [rbp-90h] BYREF
  int v64; // [rsp+88h] [rbp-78h]
  _DWORD v65[3]; // [rsp+8Ch] [rbp-74h] BYREF
  unsigned int *p_PageColor; // [rsp+98h] [rbp-68h]
  unsigned int v67; // [rsp+A0h] [rbp-60h]
  __int64 v68; // [rsp+A8h] [rbp-58h]
  __int64 v69; // [rsp+B0h] [rbp-50h]
  __int64 *v70; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v71; // [rsp+C0h] [rbp-40h]
  __int128 v72; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v73; // [rsp+D8h] [rbp-28h]
  _QWORD v74[2]; // [rsp+E0h] [rbp-20h] BYREF
  char v75[8]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD *v76; // [rsp+F8h] [rbp-8h]
  __int64 v77; // [rsp+100h] [rbp+0h]
  __int64 v78; // [rsp+108h] [rbp+8h]
  __int64 v79; // [rsp+110h] [rbp+10h]
  int v80; // [rsp+1C0h] [rbp+C0h]
  __int64 v81; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v82; // [rsp+1D0h] [rbp+D0h]
  __int64 v83; // [rsp+1D8h] [rbp+D8h]

  v1 = *(_QWORD *)(a1 + 8);
  v3 = *(_DWORD *)a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 56);
  v61 = v1;
  if ( (v3 & 2) != 0 )
  {
    if ( (v3 & 8) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) & 0xFFFFFFF8) != 0x10 )
        goto LABEL_4;
LABEL_41:
      MiAdvanceFaultList(v5);
      return 0LL;
    }
    if ( (v3 & 4) == 0 )
      goto LABEL_41;
    v56 = *(_DWORD *)(a1 + 32);
    if ( (v56 >> 3 != 3 || (v56 & 7) == 0) && v56 >> 3 != 1 )
      goto LABEL_41;
  }
LABEL_4:
  if ( (v3 & 0x20) != 0 && (*(_DWORD *)(v5 + 56) & 8) != 0 )
    return 3221225495LL;
  v6 = *(_QWORD *)(v1 + 56);
  v83 = v6;
  Process = KeGetCurrentThread()->ApcState.Process;
  v8 = *(_QWORD *)(a1 + 72);
  if ( v8 )
    v9 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 544) + 1198LL);
  else
    v9 = *(unsigned __int16 *)(v6 + 174);
  v10 = *((_QWORD *)qword_140E300C8 + v9);
  v62 = v10;
  if ( (v3 & 0x100) == 0
    || (v11 = (struct _KTHREAD *)Process[1].ActiveGroupPadding[0]) == 0LL
    || v11 == KeGetCurrentThread() )
  {
    v12 = -1LL;
    v82 = -1LL;
    v13 = 1LL;
    v14 = *(_DWORD *)(a1 + 48);
    v15 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v16 = 9;
    LODWORD(v81) = 0;
    v59 = 0LL;
    v58 = 0LL;
    v80 = 9;
    if ( (*(_DWORD *)(v6 + 184) & 0xF) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread[1].SavedApcStateFill[15] != 0xFF && (BYTE2(CurrentThread[1].Queue) & 1) == 0
        || BYTE6(CurrentThread->ApcState.Process[3].PerProcessorCycleTimes) != 0xFF )
      {
        v80 = 8;
        goto LABEL_14;
      }
      v16 = 9;
    }
    if ( (*(_DWORD *)a1 & 0x40000) != 0 )
    {
      if ( (*(_DWORD *)(v10 + 4) & 8) != 0 )
        v16 = 2;
      v80 = v16;
    }
LABEL_14:
    if ( !*(_QWORD *)(a1 + 64) && v15 <= 0xFFFFF6BFFFFFFF78uLL && v15 >= 0xFFFFF68000000000uLL )
    {
      MiLockVadTree(1, v6, 0xFFFFF68000000000uLL, 1LL);
      *(_QWORD *)(a1 + 64) = MiLocateAddress(v4);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)&KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[3].StaticBitmap[25] + 1);
      v12 = v82;
      v6 = v83;
    }
    v18 = *(_QWORD *)(a1 + 64);
    v19 = *(_DWORD *)a1;
    v60 = v18;
    if ( !v18 )
    {
      if ( (v19 & 0x101) != 1
        || (*(_DWORD *)(v6 + 184) & 0xF) == 0
        || (v12 = MiComputeZeroClusterMaximum(v5, v6, 0LL, 16LL), v12 <= 1) )
      {
LABEL_48:
        if ( !v59 )
        {
LABEL_49:
          v81 = 0LL;
          memset_0(v65, 0, 0x54uLL);
          v29 = (unsigned int *)v83;
          v30 = v61;
          v31 = v13;
          while ( 1 )
          {
            v32 = *(_DWORD *)(a1 + 32);
            v33 = 1;
            if ( v32 )
            {
              if ( v32 != 31 )
              {
                if ( v32 >> 3 == 3 )
                {
                  if ( (v32 & 7) != 0 )
                    v33 = 2;
                }
                else
                {
                  v33 = v32 >> 3 != 1;
                }
              }
            }
            else
            {
              v33 = 3;
            }
            v34 = *(_QWORD *)(a1 + 16);
            v35 = 0;
            v36 = *(_QWORD *)(v30 + 96);
            if ( (*(_BYTE *)(v30 + 69) & 1) != 0 )
              v35 = 16;
            v63[1] = v29;
            v63[0] = v62;
            v63[2] = v34;
            v64 = v14;
            v65[0] = v35 | v65[0] & 0xFFFFFFCF;
            if ( v14 )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              IdealGlobalNode = v14 - 1;
            }
            else
            {
              v37 = KeGetCurrentThread();
              if ( v29 && (v29[46] & 0xF) == 0 && v37->ApcStateIndex == 1 )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                IdealGlobalNode = v37->ApcState.Process->IdealGlobalNode;
              }
              else
              {
                CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[v37->IdealProcessor];
                IdealGlobalNode = CurrentPrcb->NodeColor;
              }
            }
            v40 = qword_140E38D50 + 57216LL * IdealGlobalNode;
            if ( (*(_DWORD *)(v40 + 15184) & 1) != 0 )
            {
              v57 = v40 + 15237;
              for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
              {
                if ( *(_BYTE *)(i + v57) == 1 )
                  goto LABEL_63;
              }
              for ( i = 0; i < (unsigned __int8)MmNumberOfChannels; ++i )
              {
                if ( *(_BYTE *)(i + v57) == 2 )
                  goto LABEL_63;
              }
            }
            i = 0;
LABEL_63:
            v67 = (i & 1 | (2 * (IdealGlobalNode & 0x3F | 0x380))) << 8;
            if ( !v29 || (v29[46] & 0xF) != 0 )
              p_PageColor = &CurrentPrcb->PageColor;
            else
              p_PageColor = v29;
            v65[1] = 57;
            v67 = (v33 << 18) | v67 & 0xFFF3FFFF;
            v68 = -1LL;
            v81 = 0LL;
            v70 = &v81;
            v69 = v36;
            v65[0] = v80 | v65[0] & 0xFFFFFFF0;
            v73 = 0LL;
            v71 = v31;
            v72 = 0LL;
            MiGetPageChain(v63);
            v13 = v73;
            if ( v73 )
              break;
            if ( v80 == 9 )
              return 3221225495LL;
            if ( v81 )
            {
              *(_QWORD *)(v30 + 128) = v81;
              *(_QWORD *)(v30 + 144) = v31;
              return 3221225495LL;
            }
            if ( v80 == 8 )
              *(_DWORD *)(v30 + 80) |= 0x10u;
            v80 = 9;
          }
          if ( (_QWORD)v58 )
          {
            **((_QWORD **)&v58 + 1) = v72;
            v59 += v13;
            *((_QWORD *)&v58 + 1) = *((_QWORD *)&v72 + 1);
          }
          else
          {
            v58 = v72;
            v59 = v73;
          }
          return MiCompletePrivateZeroFault(a1, (__int64 *)&v58, v13);
        }
        return MiCompletePrivateZeroFault(a1, (__int64 *)&v58, v13);
      }
      v25 = 1;
LABEL_85:
      if ( !v59 )
      {
        v13 = 1LL;
        if ( v12 > 1 )
        {
          v46 = v15 + 8;
          do
          {
            v47 = *(_QWORD *)v46;
            if ( v46 >= 0xFFFFF6FB7DBED000uLL
              && v46 <= 0xFFFFF6FB7DBED7F8uLL
              && (v47 & 1) != 0
              && ((v47 & 0x42) == 0 || (v47 & 0x20) == 0) )
            {
              v49 = MiPteHasShadow();
              if ( v49 )
              {
                KernelWaitTime = v49[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v51 = *(_QWORD *)(KernelWaitTime + 8 * ((v46 >> 3) & 0x1FF));
                  if ( (v51 & 0x20) != 0 )
                    v47 |= 0x20uLL;
                  v52 = v47;
                  v47 |= 0x42uLL;
                  if ( (v51 & 0x42) == 0 )
                    v47 = v52;
                }
              }
            }
            if ( *(_DWORD *)(a1 + 36) )
            {
              if ( (unsigned int)IS_PTE_NOT_DEMAND_ZERO(v47) )
                break;
              v48 = v54 == ((v53 >> 5) & 0x1F);
            }
            else
            {
              v48 = v47 == 0;
            }
            if ( !v48 )
              break;
            ++v13;
            v46 += 8LL;
          }
          while ( v13 < v12 );
        }
        if ( v25 == 2 )
        {
          if ( v13 == v12 )
            *(_DWORD *)a1 |= 0x200u;
          else
            v13 = 1LL;
        }
        goto LABEL_49;
      }
      return MiCompletePrivateZeroFault(a1, (__int64 *)&v58, v13);
    }
    if ( (v19 & 3) != 0 || (v19 & 0x40) != 0 )
    {
      v55 = MiComputeZeroClusterMaximum(v5, v6, v18, 16LL);
      LODWORD(v81) = 1;
      v12 = v55;
    }
    v20 = *(_DWORD *)(v18 + 48);
    v14 = (v20 >> 12) & 0x7F;
    v82 = v12;
    if ( (v20 & 0x200000) == 0 || MiVadPageSizes[(v20 >> 19) & 3] != 16 || v80 != 9 )
    {
      if ( ((v4 >> 9) & 0x78) == 0
        && (*(_DWORD *)a1 & 0x43) == 0
        && (v20 & 0x200000) != 0
        && (v20 & 0x600000) != 0x600000
        && v4 >= ((((unsigned __int64)*(unsigned __int8 *)(v60 + 32) << 32) | *(unsigned int *)(v60 + 24)) + 16) << 12
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
              v42 = MiPteHasShadow();
              if ( v42 )
              {
                v43 = v42[2].KernelWaitTime;
                if ( v43 )
                {
                  v44 = *(_QWORD *)(v43 + 8 * ((v21 >> 3) & 0x1FF));
                  if ( (v44 & 0x20) != 0 )
                    LOBYTE(v23) = v23 | 0x20;
                  v45 = v23;
                  LOBYTE(v23) = v23 | 0x42;
                  if ( (v44 & 0x42) == 0 )
                    LOBYTE(v23) = v45;
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
          memset_0(v75, 0, 0x78uLL);
          v76 = v74;
          v74[0] = v4 & 0xFFFFFFFFFFFFF000uLL;
          v78 = 0LL;
          v79 = 0LL;
          v74[1] = 0x10000LL;
          v77 = 1LL;
          if ( (unsigned __int64)MiComputeZeroClusterMaximum(v75, v83, v60, v24) < 0x10 )
            goto LABEL_48;
          v12 = 16LL;
          v25 = 2;
          goto LABEL_85;
        }
      }
      goto LABEL_47;
    }
    ClusterPage = MiGetClusterPage(
                    v60,
                    v4,
                    (*(_BYTE *)(v61 + 69) & 1) != 0,
                    16,
                    *(_DWORD *)(a1 + 32),
                    *(_DWORD *)(a1 + 36),
                    *(_QWORD *)(v61 + 96),
                    (__int64)&v58);
    if ( v59 )
    {
      if ( v59 == 1 )
      {
        v12 = v82;
        if ( ClusterPage )
          *(_DWORD *)a1 |= 0x10u;
LABEL_47:
        v25 = v81;
        if ( !(_DWORD)v81 )
          goto LABEL_48;
        goto LABEL_85;
      }
      v28 = v4 & 0xFFFFFFFFFFFF0000uLL;
      *(_QWORD *)(a1 + 16) = v28;
      v13 = 16LL;
      v15 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    }
    v12 = v82;
    goto LABEL_47;
  }
  *(_DWORD *)(v1 + 80) |= 2u;
  return 3221226548LL;
}
