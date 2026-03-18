/*
 * XREFs of MiWriteAwePtes @ 0x1403FBB7C
 * Callers:
 *     MiDeleteVadAwePtes @ 0x1403FB8D8 (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPages @ 0x1407EA270 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407EA520 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiMakeValidPte @ 0x14020EF10 (MiMakeValidPte.c)
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiCompareTbFlushTimeStamp @ 0x140239C5C (MiCompareTbFlushTimeStamp.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiFastLockLeafPageTable @ 0x1402AF390 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiMakeSystemAddressValid @ 0x1402B67C0 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiGetProcessorFlushList @ 0x140381500 (MiGetProcessorFlushList.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     MiInsertLargeTbFlushEntry @ 0x14038BC74 (MiInsertLargeTbFlushEntry.c)
 *     MiGetAweViewPageSize @ 0x1403FBB48 (MiGetAweViewPageSize.c)
 *     MiFinishPteChangesInPageTable @ 0x1403FCA58 (MiFinishPteChangesInPageTable.c)
 *     MiPageSizeToPteLevel @ 0x1403FD95C (MiPageSizeToPteLevel.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14043CF80 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiWriteAweClusterPte @ 0x1404D8144 (MiWriteAweClusterPte.c)
 *     MiGetAweNode @ 0x1404F293C (MiGetAweNode.c)
 *     MiDecrementAweMapCount @ 0x1406760EC (MiDecrementAweMapCount.c)
 *     MiGetAweFlushList @ 0x140676CC4 (MiGetAweFlushList.c)
 *     MiInsertAweFlushList @ 0x140676F7C (MiInsertAweFlushList.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x140677AAC (MiZeroAndFlushAweLazyPtes.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiWriteAwePtes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v10; // r14
  _KPROCESS *Process; // rbx
  int v12; // r12d
  __int64 AweViewPageSize; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rbx
  unsigned int v21; // r8d
  int v22; // r11d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r9
  unsigned int v25; // edi
  int v26; // edi
  unsigned __int64 ValidPte; // r15
  unsigned int v28; // r14d
  int v29; // eax
  int v30; // r14d
  unsigned __int64 v31; // rdx
  char v32; // al
  int v33; // ecx
  unsigned __int64 v34; // r9
  unsigned __int64 v35; // r8
  int v36; // ecx
  __int64 AweNode; // rax
  unsigned int v38; // r11d
  bool v39; // zf
  unsigned __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // rdi
  unsigned __int64 LeafVa; // rax
  __int64 v46; // r9
  ULONG_PTR v47; // rax
  int v48; // eax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // rax
  unsigned int v51; // r13d
  unsigned int v52; // r8d
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // rbx
  char v56; // al
  int v57; // r8d
  char *v58; // rcx
  int v59; // eax
  int v60; // eax
  __int64 v61; // r9
  unsigned __int64 v62; // r13
  __int64 v63; // rbx
  unsigned __int64 v64; // rbx
  __int64 AweFlushList; // rax
  unsigned int v66; // esi
  __int64 *ProcessorFlushList; // rax
  unsigned int v68; // esi
  unsigned __int64 v69; // r13
  unsigned __int64 v70; // rsi
  __int64 v71; // rcx
  unsigned __int64 v72; // rsi
  unsigned __int64 v73; // rdi
  __int64 v74; // r13
  __int64 v75; // r12
  __int64 v76; // r15
  signed __int32 v78[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v79; // [rsp+30h] [rbp-D0h]
  int v80; // [rsp+34h] [rbp-CCh]
  unsigned int v81; // [rsp+38h] [rbp-C8h]
  int v82; // [rsp+3Ch] [rbp-C4h]
  int v83; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v84; // [rsp+48h] [rbp-B8h]
  int v85; // [rsp+50h] [rbp-B0h]
  int v86; // [rsp+54h] [rbp-ACh]
  __int64 v87; // [rsp+58h] [rbp-A8h]
  __int64 v88; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v89; // [rsp+68h] [rbp-98h]
  unsigned __int64 v90; // [rsp+70h] [rbp-90h]
  __int64 v91; // [rsp+78h] [rbp-88h]
  unsigned __int64 v92; // [rsp+80h] [rbp-80h]
  __int64 v93; // [rsp+88h] [rbp-78h]
  __int64 v94; // [rsp+90h] [rbp-70h]
  __int64 v95; // [rsp+98h] [rbp-68h]
  unsigned __int64 v96; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v97; // [rsp+A8h] [rbp-58h]
  int v98; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v99; // [rsp+B8h] [rbp-48h]
  _QWORD *v100; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v102; // [rsp+D0h] [rbp-30h]
  __int64 v103; // [rsp+D8h] [rbp-28h]
  __int64 v104; // [rsp+E0h] [rbp-20h]
  int v105; // [rsp+E8h] [rbp-18h]
  char *v106; // [rsp+F0h] [rbp-10h]
  char v107; // [rsp+F8h] [rbp-8h] BYREF
  int v108; // [rsp+138h] [rbp+38h]
  int v109; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int64 v110; // [rsp+140h] [rbp+40h]
  __int64 v111; // [rsp+148h] [rbp+48h]
  unsigned __int8 v112; // [rsp+150h] [rbp+50h]
  __int16 v113; // [rsp+151h] [rbp+51h]
  char v114; // [rsp+153h] [rbp+53h]
  int v115; // [rsp+154h] [rbp+54h]

  v7 = a2;
  v8 = (unsigned __int64)a5;
  v88 = a7;
  v10 = *(_QWORD *)(a1 + 32);
  v92 = a3;
  v87 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v93 = a4;
  v84 = (unsigned __int64)a5;
  v91 = v10;
  memset_0(&v96, 0, 0xB8uLL);
  v103 = a1;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v111 = v10;
  v12 = *(_DWORD *)(v10 + 8);
  v95 = *(_QWORD *)(v10 + 16);
  v86 = v12;
  AweViewPageSize = MiGetAweViewPageSize(a1);
  v15 = v14;
  if ( AweViewPageSize )
    v15 = AweViewPageSize;
  v94 = v15;
  v16 = MiPageSizeToPteLevel();
  v20 = *(_QWORD *)(a1 + 24);
  v21 = v19 + 1;
  v109 = v16;
  v22 = 0x4000000;
  v105 = 512;
  if ( v16 < (int)v19 + 1 )
    v22 = v19;
  *(_BYTE *)(a1 + 64) = v19;
  v81 = v22;
  v23 = v21;
  v112 = 17;
  if ( v17 == 16 )
    v23 = v18;
  v110 = v23;
  v106 = &v107;
  v108 = a6;
  v24 = 0xFFFFF68000000000uLL;
  if ( ((unsigned __int8)a6 & (unsigned __int8)v21) != 0 )
  {
    v102 = v20;
    v25 = *(_DWORD *)(v20 + 48);
    if ( (v25 & 0x600000) != 0x600000 )
    {
      v22 |= 0x80000000;
      v81 = v22;
    }
    if ( ((unsigned __int8)v12 & (unsigned __int8)v21) != 0 )
    {
      v26 = 4;
      v83 = 4;
    }
    else
    {
      v26 = (v25 >> 7) & 0x1F;
      v83 = v26;
      v115 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v20);
    }
    ValidPte = MiMakeValidPte(v24 + 0x3FFFFFFF78LL, 0LL, v26 | (unsigned int)v22);
    v89 = ValidPte;
    v19 = 0LL;
    v28 = *(_DWORD *)(v20 + 48);
    v29 = v28 & 0x4200000;
    v30 = (v28 >> 12) & 0x7F;
    v31 = 1LL;
    if ( v29 == 69206016 )
      v114 = 1;
  }
  else
  {
    v32 = v114;
    HIBYTE(v113) = v19 + 1;
    v26 = 24;
    v115 = v19;
    ValidPte = v19;
    v33 = *(_DWORD *)(v20 + 48) & 0x4200000;
    v89 = v19;
    v83 = 24;
    v20 = v19;
    v81 = v22 | 0x80000000;
    if ( v33 == 69206016 )
      v32 = v19 + 1;
    v102 = v19;
    v114 = v32;
    v31 = 1LL;
    v30 = v19;
  }
  v34 = v19;
  v85 = v19;
  v82 = v19;
  v90 = v19;
  if ( v92 > v19 )
  {
    while ( 1 )
    {
      if ( v93 )
      {
        v35 = *(_QWORD *)(v93 + 8 * v34);
        v36 = v109;
        v8 = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v84 = v8;
        if ( v109 )
        {
          do
          {
            v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v36;
          }
          while ( v36 );
          LOBYTE(v12) = v86;
          v7 = v87;
          v84 = v8;
        }
        if ( v35 < (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12
          || (v31 = ((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF,
              v35 > v31) )
        {
          AweNode = MiGetAweNode(v35, v31);
          *(_BYTE *)(AweNode + 64) = 0;
          v103 = AweNode;
          v20 = *(_QWORD *)(AweNode + 24);
          v102 = v20;
          if ( (v12 & 1) != 0 )
            v26 = 4;
          else
            v26 = (*(_DWORD *)(v20 + 48) >> 7) & 0x1F;
          v83 = v26;
          ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v26 | v38);
          v34 = v90;
          v30 = (*(_DWORD *)(v20 + 48) >> 12) & 0x7F;
          v89 = ValidPte;
          v19 = 0LL;
        }
        if ( !v7 || (v39 = *(_QWORD *)(v7 + 8 * v34) == v19, v40 = ValidPte, v39) )
          v40 = CLFS_LSN_NULL_EXT;
        v41 = v87;
      }
      else
      {
        v41 = v87;
        v40 = CLFS_LSN_NULL_EXT;
        if ( v87 )
          v40 = ValidPte;
      }
      if ( (v40 & 1) != 0 )
      {
        v42 = *(_QWORD *)(v41 + 8 * v34);
        if ( v42 >= 0 )
        {
          v40 = (v42 << 12) ^ ((v42 << 12) ^ v40) & 0xFFF0000000000FFFuLL;
        }
        else
        {
          v40 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, v42 & 0x7FFFFFFFFFFFFFFFLL, v81 | v26 & 0xFFFFFFF9 | 1);
          v19 = 0LL;
        }
      }
      v43 = (v8 >> 9) & 0x7FFFFFFFF8LL;
      if ( !v20 )
      {
        v96 = v43 - 0x98000000000LL;
        goto LABEL_56;
      }
      v44 = v43 - 0x98000000000LL;
      if ( v96 == v43 - 0x98000000000LL )
        goto LABEL_56;
      if ( v96 )
      {
        MiFinishPteChangesInPageTable(&v96);
      }
      else
      {
        if ( HIBYTE(v113) == (_BYTE)v19 )
          goto LABEL_47;
        MiUnlockWorkingSetShared((__int64)p_Blink, v112);
      }
      v20 = v102;
      LODWORD(v19) = 0;
LABEL_47:
      v85 = v19;
      v82 = v19;
      v113 = 257;
      v96 = v44;
      if ( (v12 & 0x10) != 0
        && MiGetLeafVa(v44) >= (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12 )
      {
        LeafVa = MiGetLeafVa(v44 + 8);
        LOBYTE(v113) = (((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF) < LeafVa - v46
                     ? v46
                     : 0;
      }
      v112 = MiLockWorkingSetShared((__int64)p_Blink);
      if ( v109 >= 1 )
      {
        v47 = MiGetLeafVa(v8);
        v48 = MiFastLockLeafPageTable((__int64)p_Blink, v47, 8u);
        v19 = 0LL;
        if ( v48 )
        {
          if ( v48 - 1 == v109 )
            goto LABEL_56;
          v49 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v48 != 1 )
          {
            while ( 1 )
              v49 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          MiUnlockPageTable((__int64)p_Blink, v49);
        }
      }
      MiMakeSystemAddressValid(v8, v30, v112, 0);
      v19 = 0LL;
LABEL_56:
      v50 = v99;
      v51 = v19;
      v52 = v19;
      if ( !v99 )
        v50 = v84;
      v80 = v19;
      v99 = v50;
      v79 = v19;
      v100 = (_QWORD *)(v84 + 8 * (v110 - 1));
      v53 = *(_QWORD *)v84;
      if ( (v40 & 1) != 0 )
      {
        if ( (v53 & 1) == 0 )
        {
          v51 = 5;
          if ( (v53 & 0x800) != 0 )
            goto LABEL_91;
          v97 += v110;
          if ( !v53 )
          {
            v98 += v110;
            goto LABEL_91;
          }
          v54 = v53;
          if ( qword_140E2D940 )
          {
            if ( (v53 & 0x10) != 0 )
              v54 = v53 & 0xFFFFFFFFFFFFFFEFuLL;
            else
              v54 = v53 & ~qword_140E2D940;
          }
          v55 = HIDWORD(v54);
          if ( (_DWORD)v55 )
          {
            if ( (_DWORD)v55 == v85 )
            {
              v80 = v82;
LABEL_78:
              v85 = v55;
              goto LABEL_91;
            }
            v56 = MiCompareTbFlushTimeStamp((unsigned int)v55);
            LODWORD(v19) = 0;
            if ( v56 )
            {
              if ( MmAweLazyFlushFixEnabled )
              {
                MiZeroAndFlushAweLazyPtes(&v96, v84);
                v57 = v80;
                LODWORD(v55) = 0;
              }
              else
              {
                v57 = 1;
                v79 = 64;
                v80 = 1;
              }
              v82 = v57;
              goto LABEL_78;
            }
          }
          v82 = v19;
          goto LABEL_78;
        }
        if ( v40 != v53 )
        {
          v80 = 1;
          v79 = 64;
          v51 = (v109 != 0) + 1;
        }
      }
      else
      {
        if ( !v53 )
          goto LABEL_91;
        if ( (v53 & 1) != 0 )
        {
          v97 -= v110;
          v98 -= v110;
          v51 = (v109 != 0) + 3;
          if ( v102 != v19 )
          {
            if ( (_BYTE)v113 == (_BYTE)v19 )
            {
              v58 = &v106[(unsigned __int64)(((unsigned int)v84 >> 3) & 0x1FF) >> 3];
              v59 = *v58;
              _bittestandset(&v59, ((unsigned int)v84 >> 3) & 7);
              *v58 = v59;
            }
            else
            {
              v52 = 1;
              v80 = 1;
            }
          }
          v79 = v52;
        }
        else
        {
          if ( (v53 & 0x800) != 0 )
          {
            v60 = v110;
            v97 -= v110;
          }
          else
          {
            if ( v102 != v19 )
              goto LABEL_91;
            v60 = v110;
          }
          v98 -= v60;
          v51 = 6;
        }
      }
LABEL_91:
      v61 = v51;
      v62 = v84;
      MiWriteAweClusterPte(p_Blink, v84, v40, v61, v110);
      v19 = 0LL;
      v63 = -1LL;
      if ( !v53 )
        goto LABEL_101;
      if ( (v53 & 1) != 0 )
      {
        v64 = v53;
LABEL_99:
        v63 = (v64 >> 12) & 0xFFFFFFFFFFLL;
        goto LABEL_101;
      }
      if ( (v53 & 0x800) != 0 )
      {
        v64 = v53;
        if ( qword_140E2D940 )
        {
          if ( (v53 & 0x10) != 0 )
            v64 = v53 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v64 = v53 & ~qword_140E2D940;
        }
        goto LABEL_99;
      }
      v53 = 0LL;
LABEL_101:
      if ( !v80 )
        goto LABEL_117;
      AweFlushList = v104;
      if ( MmAweLazyFlushFixEnabled )
      {
        v66 = v79;
        if ( !v104 )
        {
          AweFlushList = MiGetAweFlushList(&v96, v79);
          v104 = AweFlushList;
        }
        MiInsertAweFlushList(&v96, AweFlushList, v62, v66);
        goto LABEL_111;
      }
      if ( v104 )
      {
        v68 = v79;
      }
      else
      {
        ProcessorFlushList = MiGetProcessorFlushList();
        v68 = v79;
        v104 = (__int64)ProcessorFlushList;
        MiInitializeTbFlushList(
          (__int64)ProcessorFlushList,
          (__int64)p_Blink,
          *((_DWORD *)ProcessorFlushList + 3),
          0,
          v79);
        AweFlushList = v104;
        v19 = 0LL;
      }
      *(_DWORD *)(AweFlushList + 20) |= v68;
      if ( !v109 )
      {
        MiInsertTbFlushEntry(v104, (__int64)(v62 << 25) >> 16, v110, 0);
LABEL_111:
        v19 = 0LL;
        goto LABEL_117;
      }
      v69 = 0LL;
      if ( v110 )
      {
        v70 = v84;
        do
        {
          MiInsertLargeTbFlushEntry(v104, v109, v70);
          ++v69;
          v70 += 8LL;
        }
        while ( v69 < v110 );
        v19 = 0LL;
      }
      v62 = v84;
LABEL_117:
      if ( !v53 )
        goto LABEL_127;
      v71 = v88;
      if ( (v12 & 0x10) != 0 )
      {
        _InterlockedOr(v78, 0);
        *(_DWORD *)(v71 + 16) = KiTbFlushTimeStamp;
      }
      if ( (v12 & 8) != 0 )
      {
        MiDecrementAweMapCount(v91, v63, 2LL, v71);
      }
      else
      {
        v72 = v94;
        v73 = 0LL;
        if ( !v94 )
          goto LABEL_127;
        v74 = v88;
        v75 = v91;
        v76 = v95;
        do
        {
          MiDecrementAweMapCount(v75, v63, 2LL, v74);
          v63 += v76;
          v73 += v76;
        }
        while ( v73 < v72 );
        ValidPte = v89;
        LOBYTE(v12) = v86;
        v62 = v84;
      }
      v19 = 0LL;
LABEL_127:
      v31 = 1LL;
      v34 = v90 + 1;
      v90 = v34;
      v8 = v62 + 8 * v110;
      v84 = v8;
      if ( v34 >= v92 )
        return MiFinishPteChangesInPageTable(&v96);
      v20 = v102;
      v26 = v83;
      v7 = v87;
    }
  }
  return MiFinishPteChangesInPageTable(&v96);
}
