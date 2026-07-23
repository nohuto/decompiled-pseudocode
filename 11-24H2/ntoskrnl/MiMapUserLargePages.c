/*
 * XREFs of MiMapUserLargePages @ 0x14026A20C
 * Callers:
 *     MiCopyLargeVad @ 0x140800CE4 (MiCopyLargeVad.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14023BA60 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiInsertLargeUserMapping @ 0x14026AC6C (MiInsertLargeUserMapping.c)
 *     MiComputePreferredNode @ 0x14026AF48 (MiComputePreferredNode.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiWorkingSetIsContended @ 0x1403915E0 (MiWorkingSetIsContended.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404C9744 (MiLogPerfMemoryRangeEvent.c)
 *     MiFlushGraphicsPtes @ 0x1404CFF34 (MiFlushGraphicsPtes.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D1EB4 (MiLockWorkingSetForLargeMapping.c)
 *     MiDemotePfnListChain @ 0x14069341C (MiDemotePfnListChain.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2, char a3, __int64 a4)
{
  _KPROCESS *Process; // rax
  __int64 p_Blink; // r13
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 result; // rax
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  __int64 v23; // rsi
  ULONG_PTR v24; // rcx
  __int64 v25; // r9
  unsigned __int8 v26; // r15
  ULONG_PTR v27; // rbx
  unsigned __int64 v28; // r10
  __int64 v29; // r11
  unsigned int i; // esi
  unsigned __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 **v33; // r10
  __int64 *v34; // rcx
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 *v38; // rax
  __int64 *v39; // r8
  ULONG_PTR v40; // r14
  __int64 v41; // rcx
  int v42; // ecx
  unsigned __int8 v43; // al
  unsigned __int64 v44; // rbx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rdx
  unsigned __int64 v52; // r8
  __int64 *v53; // rcx
  __int64 *v54; // rax
  __int64 *v55; // rax
  int v56; // [rsp+50h] [rbp-B0h]
  unsigned int v57; // [rsp+54h] [rbp-ACh]
  int v58; // [rsp+58h] [rbp-A8h]
  unsigned int v59; // [rsp+5Ch] [rbp-A4h]
  __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v61; // [rsp+68h] [rbp-98h]
  int v62; // [rsp+70h] [rbp-90h]
  int v63; // [rsp+74h] [rbp-8Ch]
  int v64; // [rsp+78h] [rbp-88h]
  unsigned __int64 v65; // [rsp+80h] [rbp-80h]
  __int64 v66; // [rsp+88h] [rbp-78h]
  ULONG_PTR v67; // [rsp+90h] [rbp-70h]
  __int64 v68; // [rsp+98h] [rbp-68h]
  int v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  __int64 v71; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v72; // [rsp+B8h] [rbp-48h]
  __int64 **v73; // [rsp+C0h] [rbp-40h]
  __int64 v74; // [rsp+C8h] [rbp-38h]
  __int64 v75; // [rsp+D0h] [rbp-30h]
  _KPROCESS *v76; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v77; // [rsp+E0h] [rbp-20h]
  __int64 v78; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v79; // [rsp+F0h] [rbp-10h]
  _QWORD v80[12]; // [rsp+100h] [rbp+0h] BYREF

  v75 = a1;
  memset_0(v80, 0, sizeof(v80));
  v64 = *(_DWORD *)(a1 + 48) & 0x4200000;
  v79 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v76 = Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  if ( a2 )
    v10 = a2 - 1;
  else
    v10 = MiComputePreferredNode(&Process[2].ReadyListHead.Blink, a1);
  v11 = *(_DWORD *)(a1 + 48);
  v12 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v13 = (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) + 1;
  v72 = v12;
  v14 = (v11 >> 19) & 3;
  v15 = (v13 - v12) >> 12;
  v77 = v15;
  if ( LODWORD(MiVadPageSizes[v14]) == 16 )
  {
    v16 = 2LL;
    LODWORD(v70) = 2;
  }
  else if ( (v11 & 0xA00000) == 0xA00000 )
  {
    v16 = (unsigned int)MiVadPageIndices[v14];
    LODWORD(v70) = v16;
  }
  else
  {
    v16 = 1LL;
    v70 = (((unsigned __int64)KeFeatureBits >> 37) & 1) == 0;
    LODWORD(v12) = v72;
  }
  v17 = MiPageSizes[v16];
  v18 = 4LL;
  v59 = v16;
  v19 = v80;
  do
  {
    v19[2] = 0LL;
    v19[1] = v19;
    *v19 = v19;
    v19 += 3;
    --v18;
  }
  while ( v18 );
  v78 = a1;
  result = MiCreateLargePfnList((unsigned int)&v78, v12, v15, v17, a2, a3, a4, 0, (__int64)v80);
  if ( (int)result < 0 )
    return result;
  v21 = v72;
  v22 = *(unsigned int *)(a1 + 48);
  v63 = 0;
  v23 = 0LL;
  v58 = 0;
  v24 = 0LL;
  v56 = 0;
  v25 = 0LL;
  v26 = 17;
  v68 = 0LL;
  v27 = 0LL;
  v67 = 0LL;
  v28 = v72;
  v57 = 0;
  v69 = MmMakeProtectNotWriteCopy[(v22 >> 7) & 0x1F];
  v61 = &v60;
  v60 = (__int64)&v60;
  v65 = v72;
  v29 = ((v72 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v66 = v29;
  if ( v72 < v13 )
  {
    while ( 2 )
    {
      for ( i = v70; i <= v59; ++i )
      {
        v31 = MiPageSizes[i] << 12;
        if ( !(v28 % v31) && v13 - v28 >= v31 )
        {
          v32 = i;
          do
          {
            if ( (_QWORD *)v80[3 * v32] != &v80[3 * v32] )
              break;
            ++v32;
          }
          while ( v32 <= v59 );
          if ( v32 > v59 )
          {
            MiDemotePfnListChain(v80, i);
            v25 = v57;
            v29 = v66;
          }
          else
          {
            i = v32;
          }
          break;
        }
      }
      v33 = (__int64 **)&v80[3 * i];
      v74 = 3LL * i;
      v34 = *v33;
      v73 = v33;
      if ( (__int64 **)v34[1] != v33 )
        goto LABEL_22;
      v35 = (__int64 *)*v34;
      if ( *(__int64 **)(*v34 + 8) != v34 )
        goto LABEL_22;
      *v33 = v35;
      v35[1] = (__int64)v33;
      v36 = MiPageSizes[i];
      v37 = 16LL;
      --v80[3 * i + 2];
      v71 = v36;
      v38 = v61;
      if ( i != 2 )
        v37 = 1LL;
      v62 = v37;
      if ( (__int64 *)*v61 != &v60 )
LABEL_22:
        __fastfail(3u);
      v34[1] = (__int64)v61;
      v39 = &v60;
      *v34 = (__int64)&v60;
      v40 = v29;
      *v38 = (__int64)v34;
      v61 = v34;
      if ( i < 2 )
      {
        v41 = 2 - i;
        do
        {
          v40 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v41;
        }
        while ( v41 );
        v33 = v73;
        v25 = v57;
      }
      if ( !v58 && ((v40 ^ v27) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        goto LABEL_57;
      if ( v64 == 69206016 && (_DWORD)v25 )
      {
        MiFlushGraphicsPtes(v67, (unsigned int)v25);
        v67 = 0LL;
      }
      if ( v68 )
      {
        MiUnlockPageTableInternal(p_Blink, v68);
        v68 = 0LL;
      }
      v42 = v56;
      if ( !v58 )
      {
        if ( v56 == 1 )
        {
          if ( !i )
          {
LABEL_50:
            if ( v26 != 17 )
              goto LABEL_60;
            goto LABEL_51;
          }
        }
        else if ( i )
        {
          goto LABEL_50;
        }
      }
      v58 = 0;
      if ( v26 != 17 )
      {
        if ( v56 == 1 )
          MiUnlockWorkingSetExclusive(p_Blink, v26);
        else
          MiUnlockWorkingSetShared(p_Blink, v26);
        v26 = 17;
      }
LABEL_51:
      if ( !i )
      {
        v56 = 1;
        v26 = MiLockWorkingSetForLargeMapping(p_Blink, v37, v10);
      }
      if ( v26 == 17 )
      {
        v56 = 0;
        v43 = MiLockWorkingSetShared(p_Blink, v37, (__int64)v39, v25);
        LOBYTE(v42) = 0;
        v26 = v43;
LABEL_55:
        v68 = ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_56:
        MiMakeSystemAddressValid(v40, v10 + 1, v26, v42);
        v33 = v73;
        LODWORD(v37) = v62;
        LODWORD(v29) = v66;
LABEL_57:
        v44 = 0LL;
        v45 = (v71 << 12) + v65;
        v65 = v45;
        if ( v45 < v13 )
        {
          v48 = v13 - v45;
          if ( ((v40 + 8) & 0xFFF) != 0 )
            v49 = 512LL - (((unsigned int)(v40 + 8) >> 3) & 0x1FF);
          else
            v49 = 0LL;
          v50 = (v71 * (v49 / (unsigned int)v37)) << 12;
          if ( v50 > v48 )
            v50 = v48;
          v51 = v74;
          v52 = v50 / (v71 << 12);
          while ( v44 < v52 )
          {
            v53 = *v33;
            if ( *v33 == (__int64 *)v33 )
              break;
            if ( (__int64 **)v53[1] != v33 )
              goto LABEL_22;
            v54 = (__int64 *)*v53;
            if ( *(__int64 **)(*v53 + 8) != v53 )
              goto LABEL_22;
            *v33 = v54;
            v54[1] = (__int64)v33;
            v55 = v61;
            --v80[v51 + 2];
            if ( (__int64 *)*v55 != &v60 )
              goto LABEL_22;
            v53[1] = (__int64)v55;
            *v53 = (__int64)&v60;
            ++v44;
            *v55 = (__int64)v53;
            v61 = v53;
          }
        }
        MiInsertLargeUserMapping(v75, v29, (unsigned int)&v60, i, v69);
        v46 = v44;
        v47 = v44 + 1;
        v65 += (v71 * v46) << 12;
        if ( v67 )
        {
          v57 += v47 * v62;
        }
        else
        {
          v67 = v40;
          v57 = v47 * v62;
        }
        v66 += 8 * v71 * v47;
        v63 += v47;
        if ( (v63 & 0xF) == 0 && (unsigned int)MiWorkingSetIsContended(p_Blink, v56 & 1) || KeShouldYieldProcessor() )
          v58 = 1;
        v28 = v65;
        v27 = v40;
        v25 = v57;
        if ( v65 < v13 )
        {
          v29 = v66;
          continue;
        }
        v23 = v68;
        v21 = v72;
        v24 = v67;
        goto LABEL_30;
      }
      break;
    }
    v42 = v56;
LABEL_60:
    if ( v42 )
      goto LABEL_56;
    goto LABEL_55;
  }
LABEL_30:
  if ( v64 == 69206016 && (_DWORD)v25 )
    MiFlushGraphicsPtes(v24, (unsigned int)v25);
  if ( v23 )
    MiUnlockPageTableInternal(p_Blink, v23);
  if ( v26 != 17 )
  {
    if ( v56 == 1 )
      MiUnlockWorkingSetExclusive(p_Blink, v26);
    else
      MiUnlockWorkingSetShared(p_Blink, v26);
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(v21, LODWORD(v76[1].Header.WaitListHead.Flink), 27LL, v77);
  return 0LL;
}
