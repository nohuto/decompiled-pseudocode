/*
 * XREFs of MiMapUserLargePages @ 0x14040538C
 * Callers:
 *     MiCopyLargeVad @ 0x1407F06EC (MiCopyLargeVad.c)
 *     MiReserveUserMemory @ 0x1409012DC (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1409028FC (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiWorkingSetIsContended @ 0x140338960 (MiWorkingSetIsContended.c)
 *     MiInsertLargeUserMapping @ 0x140384EB8 (MiInsertLargeUserMapping.c)
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 *     MiComputePreferredNode @ 0x140405DE8 (MiComputePreferredNode.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1404D05B4 (MiLogPerfMemoryRangeEvent.c)
 *     MiFlushGraphicsPtes @ 0x1404D7CB4 (MiFlushGraphicsPtes.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1404D99E4 (MiLockWorkingSetForLargeMapping.c)
 *     MiDemotePfnListChain @ 0x140686EEC (MiDemotePfnListChain.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  unsigned __int64 v23; // rsi
  ULONG_PTR v24; // rcx
  int v25; // r9d
  unsigned __int8 v26; // r15
  ULONG_PTR v27; // rbx
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r11
  unsigned int i; // esi
  unsigned __int64 v31; // rcx
  unsigned int v32; // edx
  _QWORD **v33; // r10
  _QWORD *v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  _QWORD *v38; // rax
  ULONG_PTR v39; // r14
  __int64 v40; // rcx
  int v41; // ecx
  unsigned __int8 v42; // al
  unsigned __int64 v43; // rbx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // r8
  _QWORD *v52; // rcx
  _QWORD *v53; // rax
  _QWORD ***v54; // rax
  int v55; // [rsp+50h] [rbp-B0h]
  int v56; // [rsp+54h] [rbp-ACh]
  int v57; // [rsp+58h] [rbp-A8h]
  unsigned int v58; // [rsp+5Ch] [rbp-A4h]
  _QWORD *v59; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD ***v60; // [rsp+68h] [rbp-98h]
  int v61; // [rsp+70h] [rbp-90h]
  int v62; // [rsp+74h] [rbp-8Ch]
  int v63; // [rsp+78h] [rbp-88h]
  unsigned __int64 v64; // [rsp+80h] [rbp-80h]
  unsigned __int64 v65; // [rsp+88h] [rbp-78h]
  ULONG_PTR v66; // [rsp+90h] [rbp-70h]
  unsigned __int64 v67; // [rsp+98h] [rbp-68h]
  unsigned int v68; // [rsp+A0h] [rbp-60h]
  __int64 v69; // [rsp+A8h] [rbp-58h]
  __int64 v70; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v71; // [rsp+B8h] [rbp-48h]
  _QWORD **v72; // [rsp+C0h] [rbp-40h]
  __int64 v73; // [rsp+C8h] [rbp-38h]
  __int64 v74; // [rsp+D0h] [rbp-30h]
  _KPROCESS *v75; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v76; // [rsp+E0h] [rbp-20h]
  __int64 v77; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v78; // [rsp+F0h] [rbp-10h]
  _QWORD v79[12]; // [rsp+100h] [rbp+0h] BYREF

  v74 = a1;
  memset_0(v79, 0, sizeof(v79));
  v63 = *(_DWORD *)(a1 + 48) & 0x4200000;
  v78 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v75 = Process;
  p_Blink = (__int64)&Process[2].ReadyListHead.Blink;
  if ( a2 )
    v10 = a2 - 1;
  else
    v10 = MiComputePreferredNode(&Process[2].ReadyListHead.Blink, a1);
  v11 = *(_DWORD *)(a1 + 48);
  v12 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v13 = (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) + 1;
  v71 = v12;
  v14 = (v11 >> 19) & 3;
  v15 = (v13 - v12) >> 12;
  v76 = v15;
  if ( LODWORD(MiVadPageSizes[v14]) == 16 )
  {
    v16 = 2LL;
    LODWORD(v69) = 2;
  }
  else if ( (v11 & 0xA00000) == 0xA00000 )
  {
    v16 = (unsigned int)MiVadPageIndices[v14];
    LODWORD(v69) = v16;
  }
  else
  {
    v16 = 1LL;
    v69 = (((unsigned __int64)KeFeatureBits >> 37) & 1) == 0;
    LODWORD(v12) = v71;
  }
  v17 = MiPageSizes[v16];
  v18 = 4LL;
  v58 = v16;
  v19 = v79;
  do
  {
    v19[2] = 0LL;
    v19[1] = v19;
    *v19 = v19;
    v19 += 3;
    --v18;
  }
  while ( v18 );
  v77 = a1;
  result = MiCreateLargePfnList((unsigned int)&v77, v12, v15, v17, a2, a3, a4, 0, (__int64)v79);
  if ( (int)result < 0 )
    return result;
  v21 = v71;
  v22 = *(unsigned int *)(a1 + 48);
  v62 = 0;
  v23 = 0LL;
  v57 = 0;
  v24 = 0LL;
  v55 = 0;
  v25 = 0;
  v26 = 17;
  v67 = 0LL;
  v27 = 0LL;
  v66 = 0LL;
  v28 = v71;
  v56 = 0;
  v68 = MmMakeProtectNotWriteCopy[(v22 >> 7) & 0x1F];
  v60 = (_QWORD ***)&v59;
  v59 = &v59;
  v64 = v71;
  v29 = ((v71 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v65 = v29;
  if ( v71 < v13 )
  {
    while ( 2 )
    {
      for ( i = v69; i <= v58; ++i )
      {
        v31 = MiPageSizes[i] << 12;
        if ( !(v28 % v31) && v13 - v28 >= v31 )
        {
          v32 = i;
          do
          {
            if ( (_QWORD *)v79[3 * v32] != &v79[3 * v32] )
              break;
            ++v32;
          }
          while ( v32 <= v58 );
          if ( v32 > v58 )
          {
            MiDemotePfnListChain(v79, i);
            v25 = v56;
            v29 = v65;
          }
          else
          {
            i = v32;
          }
          break;
        }
      }
      v33 = (_QWORD **)&v79[3 * i];
      v73 = 3LL * i;
      v34 = *v33;
      v72 = v33;
      if ( (_QWORD **)v34[1] != v33 )
        goto LABEL_22;
      v35 = (_QWORD *)*v34;
      if ( *(_QWORD **)(*v34 + 8LL) != v34 )
        goto LABEL_22;
      *v33 = v35;
      v35[1] = v33;
      v36 = MiPageSizes[i];
      v37 = 16LL;
      --v79[3 * i + 2];
      v70 = v36;
      v38 = v60;
      if ( i != 2 )
        v37 = 1LL;
      v61 = v37;
      if ( *v60 != &v59 )
LABEL_22:
        __fastfail(3u);
      v34[1] = v60;
      *v34 = &v59;
      v39 = v29;
      *v38 = v34;
      v60 = (_QWORD ***)v34;
      if ( i < 2 )
      {
        v40 = 2 - i;
        do
        {
          v39 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v40;
        }
        while ( v40 );
        v33 = v72;
        v25 = v56;
      }
      if ( !v57 && ((v39 ^ v27) & 0xFFFFFFFFFFFFF000uLL) == 0 )
        goto LABEL_44;
      if ( v63 == 69206016 && v25 )
      {
        MiFlushGraphicsPtes(v66);
        v66 = 0LL;
      }
      if ( v67 )
      {
        MiUnlockPageTable(p_Blink, v67);
        v67 = 0LL;
      }
      v41 = v55;
      if ( !v57 )
      {
        if ( v55 == 1 )
        {
          if ( !i )
          {
LABEL_37:
            if ( v26 != 17 )
              goto LABEL_60;
            goto LABEL_38;
          }
        }
        else if ( i )
        {
          goto LABEL_37;
        }
      }
      v57 = 0;
      if ( v26 != 17 )
      {
        if ( v55 == 1 )
          MiUnlockWorkingSetExclusive(p_Blink, v26);
        else
          MiUnlockWorkingSetShared(p_Blink, v26);
        v26 = 17;
      }
LABEL_38:
      if ( !i )
      {
        v55 = 1;
        v26 = MiLockWorkingSetForLargeMapping(p_Blink, v37, v10);
      }
      if ( v26 == 17 )
      {
        v55 = 0;
        v42 = MiLockWorkingSetShared(p_Blink);
        LOBYTE(v41) = 0;
        v26 = v42;
LABEL_42:
        v67 = ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_43:
        MiMakeSystemAddressValid(v39, v10 + 1, v26, v41);
        v33 = v72;
        LODWORD(v37) = v61;
        v29 = v65;
LABEL_44:
        v43 = 0LL;
        v44 = (v70 << 12) + v64;
        v64 = v44;
        if ( v44 < v13 )
        {
          v47 = v13 - v44;
          if ( ((v39 + 8) & 0xFFF) != 0 )
            v48 = 512LL - (((unsigned int)(v39 + 8) >> 3) & 0x1FF);
          else
            v48 = 0LL;
          v49 = (v70 * (v48 / (unsigned int)v37)) << 12;
          if ( v49 > v47 )
            v49 = v47;
          v50 = v73;
          v51 = v49 / (v70 << 12);
          while ( v43 < v51 )
          {
            v52 = *v33;
            if ( *v33 == v33 )
              break;
            if ( (_QWORD **)v52[1] != v33 )
              goto LABEL_22;
            v53 = (_QWORD *)*v52;
            if ( *(_QWORD **)(*v52 + 8LL) != v52 )
              goto LABEL_22;
            *v33 = v53;
            v53[1] = v33;
            v54 = v60;
            --v79[v50 + 2];
            if ( *v54 != &v59 )
              goto LABEL_22;
            v52[1] = v54;
            *v52 = &v59;
            ++v43;
            *v54 = (_QWORD **)v52;
            v60 = (_QWORD ***)v52;
          }
        }
        MiInsertLargeUserMapping(v74, v29, &v59, i, v68);
        v45 = v43;
        v46 = v43 + 1;
        v64 += (v70 * v45) << 12;
        if ( v66 )
        {
          v56 += v46 * v61;
        }
        else
        {
          v66 = v39;
          v56 = v46 * v61;
        }
        v65 += 8 * v70 * v46;
        v62 += v46;
        if ( (v62 & 0xF) == 0 && (unsigned int)MiWorkingSetIsContended(p_Blink, v55 & 1) || KeShouldYieldProcessor() )
          v57 = 1;
        v28 = v64;
        v27 = v39;
        v25 = v56;
        if ( v64 < v13 )
        {
          v29 = v65;
          continue;
        }
        v23 = v67;
        v21 = v71;
        v24 = v66;
        goto LABEL_51;
      }
      break;
    }
    v41 = v55;
LABEL_60:
    if ( v41 )
      goto LABEL_43;
    goto LABEL_42;
  }
LABEL_51:
  if ( v63 == 69206016 && v25 )
    MiFlushGraphicsPtes(v24);
  if ( v23 )
    MiUnlockPageTable(p_Blink, v23);
  if ( v26 != 17 )
  {
    if ( v55 == 1 )
      MiUnlockWorkingSetExclusive(p_Blink, v26);
    else
      MiUnlockWorkingSetShared(p_Blink, v26);
  }
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(v21, LODWORD(v75[1].Header.WaitListHead.Flink), 27LL, v76);
  return 0LL;
}
