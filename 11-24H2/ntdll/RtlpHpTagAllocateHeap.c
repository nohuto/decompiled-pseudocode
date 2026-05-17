/*
 * XREFs of RtlpHpTagAllocateHeap @ 0x180094EF0
 * Callers:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 * Callees:
 *     RtlpAllocateNTHeapInternal @ 0x1800283A0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpExtrasGet @ 0x18002CA80 (RtlpHpExtrasGet.c)
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     RtlpHpLfhSubsegmentPrefetch @ 0x18004B138 (RtlpHpLfhSubsegmentPrefetch.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18004EAC0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpAllocateHeapBackend @ 0x180051334 (RtlpHpAllocateHeapBackend.c)
 *     RtlpHpLfhSubsegmentCommitBlock @ 0x180056390 (RtlpHpLfhSubsegmentCommitBlock.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     RtlpHpLargeAlloc @ 0x180093F08 (RtlpHpLargeAlloc.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18009F9E0 (RtlNtStatusToDosErrorNoTeb.c)
 *     RtlpHpLfhBucketCheckAndUpdate @ 0x1800A4EB0 (RtlpHpLfhBucketCheckAndUpdate.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpTagContextAllocateTag @ 0x1800B79F0 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpVsContextAllocate @ 0x1800ED0DC (RtlpHpVsContextAllocate.c)
 *     RtlpAllocateHeapRaiseException @ 0x1801154C4 (RtlpAllocateHeapRaiseException.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180119830 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011CBF4 (RtlpHpEnvAcquireGlobalLockSharedContended.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     RtlHeapZero @ 0x180167000 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpTagAllocateHeap(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r13
  __int64 v6; // rax
  bool v7; // zf
  unsigned __int64 SubProcessTag; // rax
  __int64 v9; // r8
  __int16 v10; // ax
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r11
  int v16; // r14d
  unsigned int v17; // edx
  int v18; // ecx
  unsigned int v19; // r15d
  __int64 NTHeapInternal; // rdi
  unsigned __int64 v21; // r12
  __int64 v22; // r14
  unsigned int v23; // ecx
  int v24; // eax
  __int64 v25; // rsi
  __int64 v26; // rax
  void **TlsExpansionSlots; // rdx
  __int64 v28; // rdi
  __int64 v29; // rbx
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  signed __int64 v33; // rbx
  signed __int64 v34; // rax
  struct _TEB *v35; // r9
  unsigned __int64 v36; // r15
  __int64 v37; // r14
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // r12
  int v40; // edi
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rdx
  int v44; // r11d
  unsigned int v45; // esi
  volatile signed __int64 *v46; // rdi
  volatile signed __int64 *v47; // r8
  signed __int64 v48; // r9
  __int64 v53; // rdx
  unsigned __int64 v55; // rcx
  unsigned int v57; // ecx
  signed __int64 v59; // rcx
  signed __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // r12
  unsigned int v63; // esi
  __int64 v64; // r14
  __int64 v65; // rdi
  bool v66; // cc
  unsigned int v67; // esi
  __int16 v68; // cx
  signed __int64 v69; // rax
  char v70; // dl
  unsigned __int64 v71; // rdx
  signed __int64 v72; // rtt
  signed __int64 v73; // rax
  signed __int64 v74; // rax
  signed __int64 v75; // rtt
  signed __int64 v76; // rdx
  __int64 v77; // rax
  __int64 v78; // r14
  unsigned __int64 v79; // r11
  struct _TEB *v80; // r9
  int v81; // r10d
  int v82; // eax
  unsigned __int64 v83; // rcx
  unsigned __int64 v84; // rdx
  __int64 v85; // rbx
  unsigned __int64 v86; // r8
  unsigned __int64 v87; // rdx
  __int16 v88; // di
  _DWORD *v89; // r8
  unsigned __int64 i; // rcx
  unsigned int v94; // ecx
  __int16 v95; // cx
  __int64 HeapBackend; // rax
  struct _TEB *v97; // rbx
  int v99; // [rsp+38h] [rbp-99h]
  signed __int64 v100; // [rsp+38h] [rbp-99h]
  unsigned __int16 v101; // [rsp+3Ah] [rbp-97h]
  unsigned __int8 v102; // [rsp+3Ch] [rbp-95h]
  unsigned __int8 v103; // [rsp+40h] [rbp-91h]
  unsigned __int16 v104; // [rsp+48h] [rbp-89h]
  unsigned int v105; // [rsp+4Ch] [rbp-85h]
  int v106; // [rsp+50h] [rbp-81h]
  __int64 v108; // [rsp+60h] [rbp-71h]
  int v109; // [rsp+64h] [rbp-6Dh]
  int v111; // [rsp+70h] [rbp-61h]
  unsigned __int64 v112; // [rsp+78h] [rbp-59h]
  __int64 v113; // [rsp+80h] [rbp-51h]
  __int128 v114[3]; // [rsp+88h] [rbp-49h] BYREF
  __int128 v115; // [rsp+B8h] [rbp-19h] BYREF
  void *v116; // [rsp+D0h] [rbp-1h] BYREF
  int v117; // [rsp+D8h] [rbp+7h]
  int v118; // [rsp+DCh] [rbp+Bh]
  void *v119; // [rsp+E0h] [rbp+Fh]
  int v120; // [rsp+E8h] [rbp+17h]
  int v121; // [rsp+ECh] [rbp+1Bh]

  v3 = a1;
  v4 = a2;
  v104 = 0;
  v6 = 2LL * (unsigned int)dword_1801800C8[BYTE1(RtlpHpEnvHandle)];
  v7 = *(_DWORD *)(a1 + 16) == -571548178;
  v114[2] = RtlpHpEnvHandle;
  if ( !v7 )
    goto LABEL_146;
  if ( a1 != qword_1801D21B8[v6] )
  {
    v115 = 0LL;
    SubProcessTag = (unsigned __int64)NtCurrentTeb()->SubProcessTag;
    *(_QWORD *)&v115 = SubProcessTag;
    if ( SubProcessTag != RtlpHpNullGUID || qword_1801CE880 )
    {
      if ( word_1801D3C44
        && (v9 = *(_QWORD *)(qword_1801D3C38 + 8LL * (unsigned __int16)word_1801D3C44 - 8),
            *(_QWORD *)(v9 + 16) == SubProcessTag)
        && !*(_QWORD *)(v9 + 24) )
      {
        v4 = a2;
        _InterlockedAdd64((volatile signed __int64 *)(v9 + 32), a2);
        v10 = *(_WORD *)(v9 + 40);
      }
      else
      {
        v11 = dword_1801D3C2C & 0x1F;
        v12 = HIBYTE(v115)
            + 0x8B7970C2A4EFB2A9uLL * BYTE1(SubProcessTag)
            + 0x288D4C21D6A4D26DLL * (unsigned __int8)SubProcessTag
            + 0x3433B6F080FF8F35LL * BYTE2(SubProcessTag)
            + 37
            * (BYTE14(v115)
             + 37
             * (BYTE13(v115)
              + 37
              * (BYTE12(v115)
               + 37
               * (BYTE11(v115)
                + 37
                * (BYTE10(v115)
                 + 37
                 * (BYTE9(v115)
                  + 1369
                  * (HIBYTE(SubProcessTag)
                   + 37
                   * (BYTE6(SubProcessTag)
                    + 37 * (BYTE5(SubProcessTag) + 37 * (BYTE4(SubProcessTag) + 37LL * BYTE3(SubProcessTag)))))))))))
            + 0x201911C49281756FLL;
        v13 = -1LL << v11;
        v14 = 0LL;
        v15 = (-1LL << v11) & v12;
LABEL_11:
        if ( v14 )
          goto LABEL_14;
        if ( (unsigned int)dword_1801D3C2C >> 5 )
        {
          v11 = HIBYTE(v15)
              + 37
              * (BYTE6(v15)
               + 37
               * (BYTE5(v15)
                + 37
                * (BYTE4(v15)
                 + 37
                 * (BYTE3(v15)
                  + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned int)(unsigned __int8)v15 + 11623883)))))));
          v14 = qword_1801D3C30 + 8LL * ((unsigned int)v11 & (((unsigned int)dword_1801D3C2C >> 5) - 1));
LABEL_14:
          while ( 1 )
          {
            v14 = *(_QWORD *)v14;
            if ( (v14 & 1) != 0 )
              break;
            v11 = v13 & *(_QWORD *)(v14 + 8);
            if ( v15 == v11 )
            {
              if ( SubProcessTag != *(_QWORD *)(v14 + 16) || *(_QWORD *)(v14 + 24) )
                goto LABEL_11;
              v4 = a2;
              if ( v14 )
              {
                _InterlockedAdd64((volatile signed __int64 *)(v14 + 32), a2);
                v10 = *(_WORD *)(v14 + 40);
                if ( v10 )
                  goto LABEL_24;
              }
              goto LABEL_22;
            }
          }
        }
        v4 = a2;
LABEL_22:
        v10 = RtlpHpTagContextAllocateTag(v11, &v115, v12, v4);
      }
      if ( v10 )
      {
LABEL_24:
        word_1801D3C44 = v10;
        a3 |= 0x100u;
      }
      v104 = v10;
    }
    else
    {
      v104 = 0;
    }
    v3 = a1;
  }
  if ( *(_DWORD *)(v3 + 16) != -571548178 )
  {
LABEL_146:
    NTHeapInternal = RtlpAllocateNTHeapInternal((void *)v3, v4, a3);
    goto LABEL_147;
  }
  if ( a3 )
  {
    if ( a3 == 8 )
    {
      v16 = 2;
    }
    else
    {
      v17 = (a3 >> 2) & 2 | 0x80000000;
      if ( (a3 & 4) == 0 )
        v17 = (a3 >> 2) & 2;
      v18 = v17 | 0x100;
      if ( (a3 & 0x100) == 0 )
        v18 = v17;
      v16 = v18 | a3 & 0xE00;
      if ( (a3 & 0xE00) == 0 )
        v16 = v18;
    }
  }
  else
  {
    v16 = 0;
  }
  v106 = v16;
  __writegsqword(0x1858u, v3 + 20);
  v19 = ((unsigned __int16)v16 | (unsigned __int16)*(_DWORD *)(v3 + 20)) & 0x2FFA;
  v105 = v19;
  if ( (((unsigned __int16)v16 | (unsigned __int16)*(_DWORD *)(v3 + 20)) & 0x2FF8) != 0 )
  {
    if ( (v19 & 0x10) != 0 && *(_DWORD *)(v3 + 224) != (unsigned int)NtCurrentTeb()->ClientId.UniqueThread )
      RtlpHpEnvAcquireGlobalLockSharedContended(
        v3 + 20,
        ((unsigned __int16)v16 | (unsigned __int16)*(_DWORD *)(v3 + 20)) & 0x2FFA);
    NTHeapInternal = RtlpHpAllocateHeapSlow(v3, v4, v19);
    goto LABEL_142;
  }
  v21 = 1LL;
  if ( v4 > 1 )
    v21 = v4;
  v112 = v21;
  if ( v21 >= *(unsigned __int16 *)(v3 + 900) )
    goto LABEL_135;
  v22 = v3 + 832;
  v23 = *(unsigned __int16 *)(v3 + 908);
  v24 = v21 + 2;
  if ( (_DWORD)v4 == (_DWORD)v21 )
    v24 = v21;
  v108 = v3 + 832;
  v25 = (unsigned int)RtlpLfhBucketIndexMap[(unsigned int)(v24 + 15) >> 4] - 1;
  if ( v23 < 0x40 )
  {
    v26 = __readgsqword(8 * v23 + 5248);
    goto LABEL_52;
  }
  TlsExpansionSlots = NtCurrentTeb()->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v26 = (__int64)TlsExpansionSlots[v23 - 64];
LABEL_52:
    if ( v26 )
      goto LABEL_54;
  }
  v26 = RtlpHpLfhThreadDataInitializeSet(v22);
LABEL_54:
  v28 = 2 * v25;
  v29 = v22 + ((unsigned __int16)v26 << 6);
  v102 = BYTE4(v26);
  v30 = *(unsigned __int16 *)(2 * v25 + v29);
  if ( !*(_WORD *)(2 * v25 + v29) )
  {
    if ( !RtlpHpLfhBucketCheckAndUpdate(v22, (unsigned int)v25, v30) )
    {
      v3 = a1;
LABEL_135:
      if ( v21 > 0x20000 )
      {
        if ( v21 > *(unsigned int *)(v3 + 528) )
          HeapBackend = RtlpHpLargeAlloc(v3, v4, v21, v19);
        else
          HeapBackend = RtlpHpAllocateHeapBackend(v3, v4, v21, v19);
      }
      else
      {
        HeapBackend = RtlpHpVsContextAllocate(v3 + 704, (unsigned int)v4, (unsigned int)v21, v19);
      }
      NTHeapInternal = HeapBackend;
      goto LABEL_141;
    }
    v31 = v22 + ((unsigned __int64)v102 << 8) + 1472;
    LODWORD(v30) = *(unsigned __int16 *)(v28 + v31);
    if ( v29 != v31 )
      *(_WORD *)(v28 + v29) = *(_WORD *)(v28 + v31);
  }
  v32 = v22 + (unsigned int)((_DWORD)v30 << 6);
  v113 = v32;
  if ( !*(_WORD *)(v32 + 4) )
  {
    v111 = 0;
    _m_prefetchw((const void *)(v32 + 56));
    v33 = *(_QWORD *)(v32 + 56);
    if ( (v33 & 0xFFF) != 0 )
    {
      while ( 1 )
      {
        v34 = _InterlockedCompareExchange64((volatile signed __int64 *)(v32 + 56), v33 - 1, v33);
        if ( v33 == v34 )
          break;
        v111 = 1;
        v33 = v34;
        if ( (v34 & 0xFFF) == 0 )
          goto LABEL_118;
      }
      v35 = NtCurrentTeb();
      v36 = v33 & 0xFFFFFFFFFFFFF000uLL;
      v37 = 0x100000001LL;
      v38 = v35->RngState[0];
      v39 = (v33 & 0xFFFFFFFFFFFFF000uLL) + 64;
      v40 = *(unsigned __int8 *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
      v41 = v35->RngState[1];
      v99 = qword_1801CDEC8 ^ *(_DWORD *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v33 & 0xFFFFFFFFFFFFF000uLL) >> 12);
      if ( (unsigned int)v4 >= (unsigned __int16)v99 )
        v37 = 1LL;
      v42 = v41 + v38;
      v43 = v38 ^ v41;
      v44 = BYTE4(v42);
      v35->RngState[1] = __ROL8__(v43, 37);
      v35->RngState[0] = v43 ^ (v43 << 16) ^ __ROL8__(v38, 24);
      v45 = *(unsigned __int8 *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x32);
      v103 = *(_BYTE *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x27);
      v46 = (volatile signed __int64 *)(v39 + 8 * ((unsigned int)(v40 - 8) - 1LL));
      v47 = (volatile signed __int64 *)(v39 + 8LL * *(unsigned __int8 *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x24));
LABEL_66:
      v48 = *v47;
      for ( _RAX = (unsigned int)~*(_DWORD *)v47; *(_DWORD *)v47 == -1; _RAX = (unsigned int)~*(_DWORD *)v47 )
      {
        if ( v47 == v46 )
          v47 = (volatile signed __int64 *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 64);
        else
          ++v47;
        v48 = *v47;
      }
      while ( 1 )
      {
        if ( (qword_1801CDEE8 & 4) != 0 )
        {
          _RCX = 1LL << ((unsigned __int16)(v44 * __popcnt(_RAX)) >> 8);
          __asm
          {
            pdep    rdx, rcx, rax
            tzcnt   r10, rdx
          }
          v53 = v37 << _R10;
        }
        else
        {
          if ( v47 == v46 || v45 != 32 )
          {
            _BitScanReverse64(&v55, _RAX);
            __asm { tzcnt   rdx, rax }
            v57 = v55 - _RDX + 1;
            if ( v45 < v57 )
              v57 = v45;
            v44 = _RDX + ((v57 * v44) >> 8);
            _RAX = __ROR8__(_RAX, v44);
            __asm { tzcnt   r10, rax }
            LODWORD(_R10) = v44 + _R10;
          }
          else
          {
            _RCX = (unsigned int)__ROR4__(_RAX, v44);
            __asm { tzcnt   r10, rcx }
            LODWORD(_R10) = ((_BYTE)v44 + (_BYTE)_R10) & 0x1F;
          }
          v53 = v37 << _R10;
        }
        v59 = v48;
        v60 = _InterlockedCompareExchange64(v47, v48 | v53, v48);
        v48 = v60;
        if ( v60 == v59 )
          break;
        _RAX = (unsigned int)~(_DWORD)v60;
        if ( !_RAX )
        {
          if ( v47 == v46 )
            v47 = (volatile signed __int64 *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 64);
          else
            ++v47;
          goto LABEL_66;
        }
      }
      v61 = (unsigned int)((_DWORD)v47 - v39);
      v62 = v108;
      v63 = _R10 + 4 * v61;
      v64 = v63 >> 5;
      *(_BYTE *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x24) = v64;
      v65 = HIWORD(v99) + v63 * (unsigned __int16)v99;
      if ( v103 <= 1u )
      {
        v66 = v63 <= *(unsigned __int16 *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x30);
        v67 = (unsigned __int16)v99;
        if ( !v66 )
          RtlpHpLfhSubsegmentPrefetch(v108, v33 & 0xFFFFFFFFFFFFF000uLL, v65, (unsigned __int16)v99);
      }
      else
      {
        if ( (int)RtlpHpLfhSubsegmentCommitBlock(v108, v33 & 0xFFFFFFFFFFFFF000uLL, (unsigned int)v65) < 0 )
        {
          NTHeapInternal = 0LL;
          if ( v63 != -1 )
          {
            _InterlockedAnd64(
              (volatile signed __int64 *)(v36 + 8 * v64 + 64),
              __ROL8__(0xFFFFFFFEFFFFFFFEuLL, v63 & 0x1F));
            goto LABEL_99;
          }
LABEL_98:
          if ( NTHeapInternal )
          {
LABEL_114:
            if ( v111 )
              RtlpHpLfhBucketUpdateAffinityMapping(
                v62,
                v62 + ((unsigned __int64)*(unsigned __int16 *)(v113 + 2) << 6),
                v61,
                v48);
            v19 = v105;
            v21 = v112;
            goto LABEL_132;
          }
LABEL_99:
          v69 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
          do
          {
            v100 = v69;
            v70 = BYTE6(v69);
            v109 = HIDWORD(v69);
            if ( BYTE6(v69) == 1 )
              v70 = 2;
            WORD1(v100) = WORD1(v69) + 1;
            BYTE6(v100) = v70;
            v71 = (unsigned __int64)*(unsigned __int16 *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x2C) << 6;
            v72 = v69;
            v69 = _InterlockedCompareExchange64((volatile signed __int64 *)(v36 + 16), v100, v69);
          }
          while ( v72 != v69 );
          if ( !*(_BYTE *)(v71 + v62 + 92) )
          {
            *(_BYTE *)(v71 + v62 + 92) = 1;
            if ( !(_DWORD)qword_1801CE278 )
            {
              if ( qword_1801CE268 )
              {
                if ( !byte_1801D2908 && !_InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CE278, 1, 0) )
                {
                  TpSetTimerEx((_PEB_LDR_DATA *)qword_1801CE268, (unsigned __int64)&qword_1801CE270, 0, 0x3E8uLL);
                  if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CC670 > 5 )
                  {
                    v116 = off_1801CC678;
                    v114[0] = 0x50B000000uLL;
                    v117 = *(unsigned __int16 *)off_1801CC678;
                    v119 = &unk_1801A23DE;
                    v118 = 2;
                    v120 = 25;
                    v121 = 1;
                    EtwEventWriteTransfer(qword_1801CC690, v114, 0LL, 0LL, 2, (__int64)&v116);
                  }
                }
              }
            }
          }
          if ( BYTE2(v109) == 1 )
          {
            v61 = v62 + ((unsigned __int16)v109 << 6);
            _m_prefetchw((const void *)(v61 + 8));
            v73 = *(_QWORD *)(v61 + 8);
            v48 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
            *(_QWORD *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = v48 ^ (v73 ^ v48) & 0xFFFFFFFFFFFFF000uLL;
            v75 = v73;
            v74 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)(v61 + 8),
                    v73 ^ (v73 ^ v33) & 0xFFFFFFFFFFFFF000uLL,
                    v73);
            if ( v75 != v74 )
            {
              do
              {
                v76 = v74;
                *(_QWORD *)((v33 & 0xFFFFFFFFFFFFF000uLL) + 0x18) = v48 ^ (v74 ^ v48) & 0xFFFFFFFFFFFFF000uLL;
                v74 = _InterlockedCompareExchange64(
                        (volatile signed __int64 *)(v61 + 8),
                        v74 ^ (v74 ^ v33) & 0xFFFFFFFFFFFFF000uLL,
                        v74);
              }
              while ( v74 != v76 );
            }
          }
          goto LABEL_114;
        }
        v67 = (unsigned __int16)v99;
      }
      NTHeapInternal = v36 + v65;
      if ( (v105 & 2) != 0 )
        RtlHeapZero(NTHeapInternal, ((unsigned int)v4 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
      if ( (unsigned int)v4 < v67 )
      {
        v68 = v67 - v4;
        if ( v67 - (_DWORD)v4 == 1 )
          v68 = 0x8000;
        *(_WORD *)(v67 + NTHeapInternal - 2) = v68;
      }
      goto LABEL_98;
    }
LABEL_118:
    NTHeapInternal = RtlpHpLfhSlotAllocateSlow(v22, v32, (unsigned int)v4, v19);
    goto LABEL_132;
  }
  v77 = *(_QWORD *)(v32 + 56);
  if ( (v77 & 0xFFF) == 0 )
    goto LABEL_118;
  v78 = 0x100000001LL;
  v79 = v77 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)(v32 + 56) = v77 - 1;
  v80 = NtCurrentTeb();
  v81 = *(unsigned __int8 *)((v77 & 0xFFFFFFFFFFFFF000uLL) + 0x18);
  v82 = qword_1801CDEC8 ^ *(_DWORD *)((v77 & 0xFFFFFFFFFFFFF000uLL) + 0x28) ^ ((v77 & 0xFFFFFFFFFFFFF000uLL) >> 12);
  v83 = v80->RngState[0];
  v84 = v80->RngState[1];
  v85 = (unsigned __int16)v82;
  v101 = HIWORD(v82);
  if ( (unsigned int)v4 >= (unsigned __int16)v82 )
    v78 = 1LL;
  v86 = v84 + v83;
  v87 = v83 ^ v84;
  v88 = BYTE4(v86);
  v80->RngState[1] = __ROL8__(v87, 37);
  v80->RngState[0] = v87 ^ (v87 << 16) ^ __ROL8__(v83, 24);
  v89 = (_DWORD *)(v79 + 64 + 8LL * *(unsigned __int8 *)(v79 + 36));
  for ( i = (unsigned int)~*v89; *v89 == -1; i = (unsigned int)~*v89 )
  {
    if ( v89 == (_DWORD *)(v79 + 64 + 8 * ((unsigned int)(v81 - 8) - 1LL)) )
      v89 = (_DWORD *)(v79 + 64);
    else
      v89 += 2;
  }
  _RAX = 1LL << ((unsigned __int16)(v88 * __popcnt(i)) >> 8);
  __asm
  {
    pdep    rcx, rax, rcx
    tzcnt   rdx, rcx
  }
  *(_QWORD *)v89 |= v78 << _RDX;
  v94 = _RDX + 4 * ((_DWORD)v89 - (v79 + 64));
  *(_BYTE *)(v79 + 36) = v94 >> 5;
  NTHeapInternal = v79 + v101 + v94 * (unsigned int)v85;
  if ( (v19 & 2) != 0 )
    RtlHeapZero(v79 + v101 + v94 * (unsigned int)v85, ((unsigned int)v4 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (unsigned int)v4 < (unsigned int)v85 )
  {
    v95 = v85 - v4;
    if ( (_DWORD)v85 - (_DWORD)v4 == 1 )
      v95 = 0x8000;
    *(_WORD *)(v85 + NTHeapInternal - 2) = v95;
  }
LABEL_132:
  v3 = a1;
  if ( NTHeapInternal == -1 )
    goto LABEL_135;
LABEL_141:
  v16 = v106;
LABEL_142:
  __writegsqword(0x1858u, 0LL);
  if ( !NTHeapInternal )
  {
    v97 = NtCurrentTeb();
    v97->LastStatusValue = -1073741801;
    v97->LastErrorValue = RtlNtStatusToDosErrorNoTeb(3221225495LL);
    if ( v16 < 0 || *(int *)(v3 + 20) < 0 )
      RtlpAllocateHeapRaiseException(v4);
  }
LABEL_147:
  if ( v104 )
  {
    if ( NTHeapInternal )
      *(_WORD *)RtlpHpExtrasGet(v3, NTHeapInternal, *(_DWORD *)(v3 + 20), 0LL) = v104;
    else
      _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801D3C38 + 8LL * v104 - 8) + 32LL), -(__int64)v4);
  }
  return NTHeapInternal;
}
