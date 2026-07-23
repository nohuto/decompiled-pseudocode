/*
 * XREFs of MiWriteAwePtes @ 0x1404B4FD0
 * Callers:
 *     MiDeleteVadAwePtes @ 0x1404B4D2C (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPages @ 0x1407FA870 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FAB20 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiFastLockLeafPageTable @ 0x14023A9C0 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x140244700 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14030CBA0 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiPageSizeToPteLevel @ 0x140414D2C (MiPageSizeToPteLevel.c)
 *     MiCompareTbFlushTimeStamp @ 0x14044D95C (MiCompareTbFlushTimeStamp.c)
 *     MiFinishPteChangesInPageTable @ 0x14046D518 (MiFinishPteChangesInPageTable.c)
 *     MiGetAweViewPageSize @ 0x1404B4F9C (MiGetAweViewPageSize.c)
 *     MiWriteAweClusterPte @ 0x1404D0434 (MiWriteAweClusterPte.c)
 *     MiGetAweNode @ 0x1404F2AEC (MiGetAweNode.c)
 *     MiDecrementAweMapCount @ 0x140682AFC (MiDecrementAweMapCount.c)
 *     MiGetAweFlushList @ 0x1406836D4 (MiGetAweFlushList.c)
 *     MiInsertAweFlushList @ 0x14068398C (MiInsertAweFlushList.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406844BC (MiZeroAndFlushAweLazyPtes.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall MiWriteAwePtes(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // rsi
  _KPROCESS *Process; // rbx
  int v10; // r12d
  __int64 AweViewPageSize; // rax
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned __int64 v17; // r8
  int v18; // esi
  int v19; // r11d
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  unsigned int v23; // r13d
  int v24; // r13d
  unsigned __int64 ValidPte; // r15
  int v26; // eax
  int v27; // r14d
  char v28; // al
  unsigned int v29; // r11d
  int v30; // ecx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // rdi
  unsigned __int64 v33; // rdx
  __int64 AweNode; // rax
  unsigned int v35; // r11d
  __int64 v36; // rax
  unsigned __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned __int64 v40; // r13
  __int64 v41; // r9
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v43; // rax
  ULONG_PTR v44; // rax
  int v45; // eax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rax
  unsigned int v48; // r13d
  int v49; // r8d
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // rdi
  unsigned __int64 v52; // rdi
  char *v53; // rcx
  int v54; // eax
  int v55; // eax
  __int64 v56; // rdi
  unsigned __int64 v57; // rdi
  __int64 AweFlushList; // rax
  unsigned int v59; // esi
  __int64 v60; // rcx
  unsigned __int64 v61; // rsi
  unsigned __int64 v62; // rbx
  __int64 v63; // r12
  __int64 v64; // r15
  __int64 v65; // r14
  signed __int32 v67[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v68; // [rsp+30h] [rbp-D0h]
  int v69; // [rsp+34h] [rbp-CCh]
  int v70; // [rsp+38h] [rbp-C8h]
  unsigned int v71; // [rsp+3Ch] [rbp-C4h]
  __int64 v72; // [rsp+40h] [rbp-C0h]
  int v73; // [rsp+48h] [rbp-B8h]
  int v74; // [rsp+4Ch] [rbp-B4h]
  int v75; // [rsp+50h] [rbp-B0h]
  __int64 v76; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v77; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v78; // [rsp+68h] [rbp-98h]
  __int64 v79; // [rsp+70h] [rbp-90h]
  __int64 v80; // [rsp+78h] [rbp-88h]
  unsigned __int64 v81; // [rsp+80h] [rbp-80h]
  __int64 v82; // [rsp+88h] [rbp-78h]
  unsigned __int64 v83; // [rsp+90h] [rbp-70h]
  __int64 v84; // [rsp+98h] [rbp-68h]
  unsigned __int64 v85; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v86; // [rsp+A8h] [rbp-58h]
  int v87; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v88; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v89; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C8h] [rbp-38h]
  __int64 v91; // [rsp+D0h] [rbp-30h]
  __int64 v92; // [rsp+D8h] [rbp-28h]
  __int64 v93; // [rsp+E0h] [rbp-20h]
  int v94; // [rsp+E8h] [rbp-18h]
  char *v95; // [rsp+F0h] [rbp-10h]
  char v96; // [rsp+F8h] [rbp-8h] BYREF
  int v97; // [rsp+138h] [rbp+38h]
  int v98; // [rsp+13Ch] [rbp+3Ch]
  __int64 v99; // [rsp+140h] [rbp+40h]
  __int64 v100; // [rsp+148h] [rbp+48h]
  unsigned __int8 v101; // [rsp+150h] [rbp+50h]
  __int16 v102; // [rsp+151h] [rbp+51h]
  char v103; // [rsp+153h] [rbp+53h]
  int v104; // [rsp+154h] [rbp+54h]

  v81 = a3;
  v76 = a7;
  v8 = *(_QWORD *)(a1 + 32);
  v79 = a2;
  v72 = a5;
  Process = KeGetCurrentThread()->ApcState.Process;
  v82 = a4;
  v80 = v8;
  memset_0(&v85, 0, 0xB8uLL);
  v92 = a1;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v100 = v8;
  v10 = *(_DWORD *)(v8 + 8);
  v84 = *(_QWORD *)(v8 + 16);
  v75 = v10;
  AweViewPageSize = MiGetAweViewPageSize(a1);
  v13 = v12;
  if ( AweViewPageSize )
    v13 = AweViewPageSize;
  v83 = v13;
  v14 = MiPageSizeToPteLevel(v13);
  v17 = 1LL;
  v98 = v14;
  v94 = 512;
  v18 = v14;
  v101 = 17;
  v19 = 0x4000000;
  if ( v14 < 1 )
    v19 = 0;
  v95 = &v96;
  v20 = *(_QWORD *)(a1 + 24);
  v21 = 1LL;
  if ( v15 == 16 )
    v21 = v16;
  v68 = v19;
  v99 = v21;
  *(_BYTE *)(a1 + 64) = 0;
  v97 = a6;
  v22 = 0xFFFFF68000000000uLL;
  if ( (a6 & 1) != 0 )
  {
    v91 = v20;
    v23 = *(_DWORD *)(v20 + 48);
    if ( (v23 & 0x600000) != 0x600000 )
    {
      v19 |= 0x80000000;
      v68 = v19;
    }
    if ( (v10 & 1) != 0 )
    {
      v24 = 4;
      v69 = 4;
    }
    else
    {
      v24 = (v23 >> 7) & 0x1F;
      v69 = v24;
      v104 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v20);
    }
    ValidPte = MiMakeValidPte(v22 + 0x3FFFFFFF78LL, 0LL, v24 | (unsigned int)v19);
    v77 = ValidPte;
    v26 = *(_DWORD *)(v20 + 48) & 0x4200000;
    v27 = (*(_DWORD *)(v20 + 48) >> 12) & 0x7F;
    v74 = v27;
    if ( v26 == 69206016 )
      v103 = 1;
  }
  else
  {
    v28 = v103;
    v29 = v19 | 0x80000000;
    HIBYTE(v102) = 1;
    v24 = 24;
    v104 = 0;
    ValidPte = 0LL;
    v30 = *(_DWORD *)(v20 + 48) & 0x4200000;
    v77 = 0LL;
    v69 = 24;
    v20 = 0LL;
    v74 = 0;
    if ( v30 == 69206016 )
      v28 = 1;
    v68 = v29;
    v103 = v28;
    v27 = 0;
    v91 = 0LL;
  }
  v31 = 0LL;
  v73 = 0;
  v78 = 0LL;
  if ( v81 )
  {
    v32 = v72;
    while ( 1 )
    {
      v33 = 0x7FFFFFFFF8LL;
      if ( v82 )
      {
        v17 = *(_QWORD *)(v82 + 8 * v31);
        v32 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v72 = v32;
        if ( v18 )
        {
          do
          {
            v32 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v18;
          }
          while ( v18 );
          LOBYTE(v10) = v75;
          v72 = v32;
        }
        if ( v17 < (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12
          || (v33 = ((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF,
              v17 > v33) )
        {
          AweNode = MiGetAweNode(v17);
          *(_BYTE *)(AweNode + 64) = 0;
          v92 = AweNode;
          v20 = *(_QWORD *)(AweNode + 24);
          v91 = v20;
          if ( (v10 & 1) != 0 )
            v24 = 4;
          else
            v24 = (*(_DWORD *)(v20 + 48) >> 7) & 0x1F;
          v69 = v24;
          ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v24 | v35);
          v31 = v78;
          v27 = (*(_DWORD *)(v20 + 48) >> 12) & 0x7F;
          v77 = ValidPte;
          v74 = v27;
        }
        v36 = v79;
        if ( v79 && *(_QWORD *)(v79 + 8 * v31) )
          v37 = ValidPte;
        else
          v37 = CLFS_LSN_NULL_EXT;
      }
      else
      {
        v36 = v79;
        v37 = CLFS_LSN_NULL_EXT;
        if ( v79 )
          v37 = ValidPte;
      }
      if ( (v37 & 1) != 0 )
      {
        v38 = *(_QWORD *)(v36 + 8 * v31);
        if ( v38 >= 0 )
        {
          v33 = v38 << 12;
          v37 = v33 ^ (v33 ^ v37) & 0xFFF0000000000FFFuLL;
        }
        else
        {
          v37 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, v38 & 0x7FFFFFFFFFFFFFFFLL, v68 | v24 & 0xFFFFFFF9 | 1);
        }
      }
      v39 = (v32 >> 9) & 0x7FFFFFFFF8LL;
      if ( !v20 )
      {
        v85 = v39 - 0x98000000000LL;
        goto LABEL_57;
      }
      v40 = v39 - 0x98000000000LL;
      if ( v85 == v39 - 0x98000000000LL )
        goto LABEL_57;
      if ( v85 )
      {
        MiFinishPteChangesInPageTable((__int64)&v85);
      }
      else
      {
        if ( !HIBYTE(v102) )
          goto LABEL_48;
        MiUnlockWorkingSetShared((__int64)p_Blink, v101);
      }
      v20 = v91;
LABEL_48:
      v73 = 0;
      v41 = 1LL;
      v102 = 257;
      v85 = v40;
      if ( (v10 & 0x10) != 0 )
      {
        LeafVa = MiGetLeafVa(v40);
        v33 = (*(unsigned int *)(v20 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 32) << 32)) << 12;
        if ( LeafVa >= v33 )
        {
          v43 = MiGetLeafVa(v40 + 8);
          v33 = ((*(unsigned int *)(v20 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v20 + 33) << 32)) << 12) | 0xFFF;
          LOBYTE(v102) = v33 < v43 - v41 ? v41 : 0;
        }
      }
      v101 = MiLockWorkingSetShared((__int64)p_Blink, v33, v17, v41);
      if ( v98 >= 1 )
      {
        v44 = MiGetLeafVa(v32);
        v45 = MiFastLockLeafPageTable((__int64)p_Blink, v44, 8u);
        if ( v45 )
        {
          if ( v45 - 1 == v98 )
            goto LABEL_57;
          v46 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v45 != 1 )
          {
            while ( 1 )
              v46 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          MiUnlockPageTableInternal((__int64)p_Blink, v46);
        }
      }
      MiMakeSystemAddressValid(v32, v27, v101, 0);
LABEL_57:
      v47 = v88;
      v48 = 0;
      v49 = 0;
      v70 = 0;
      if ( !v88 )
        v47 = v32;
      v71 = 0;
      v88 = v47;
      v89 = v32 + 8 * (v99 - 1);
      v50 = *(_QWORD *)v32;
      if ( (v37 & 1) != 0 )
      {
        if ( (v50 & 1) != 0 )
        {
          if ( v37 != v50 )
          {
            v70 = 1;
            v71 = 64;
            v48 = (v98 != 0) + 1;
          }
        }
        else
        {
          v48 = 5;
          if ( (v50 & 0x800) == 0 )
          {
            v86 += v99;
            if ( v50 )
            {
              v51 = v50;
              if ( qword_140E2DCC0 )
              {
                if ( (v50 & 0x10) != 0 )
                  v51 = v50 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v51 = v50 & ~qword_140E2DCC0;
              }
              v52 = HIDWORD(v51);
              if ( (_DWORD)v52 )
              {
                if ( (_DWORD)v52 == v73 )
                {
                  v70 = 0;
                }
                else if ( MiCompareTbFlushTimeStamp(v52) )
                {
                  MiZeroAndFlushAweLazyPtes(&v85, v72);
                  LODWORD(v52) = 0;
                }
              }
              v73 = v52;
              v32 = v72;
            }
            else
            {
              v87 += v99;
            }
          }
        }
      }
      else
      {
        if ( !v50 )
          goto LABEL_88;
        if ( (v50 & 1) != 0 )
        {
          v86 -= v99;
          v87 -= v99;
          v48 = (v98 != 0) + 3;
          if ( v91 )
          {
            if ( (_BYTE)v102 )
            {
              v49 = 1;
              v70 = 1;
            }
            else
            {
              v53 = &v95[(unsigned __int64)(((unsigned int)v32 >> 3) & 0x1FF) >> 3];
              v54 = *v53;
              _bittestandset(&v54, ((unsigned int)v32 >> 3) & 7);
              *v53 = v54;
            }
          }
          v71 = v49;
        }
        else
        {
          if ( (v50 & 0x800) != 0 )
          {
            v55 = v99;
            v86 -= v99;
          }
          else
          {
            if ( v91 )
              goto LABEL_88;
            v55 = v99;
          }
          v87 -= v55;
          v48 = 6;
        }
      }
LABEL_88:
      MiWriteAweClusterPte(p_Blink, v32, v37, v48, v99);
      v56 = -1LL;
      if ( !v50 )
        goto LABEL_98;
      if ( (v50 & 1) != 0 )
      {
        v57 = v50;
LABEL_96:
        v56 = (v57 >> 12) & 0xFFFFFFFFFFLL;
        goto LABEL_98;
      }
      if ( (v50 & 0x800) != 0 )
      {
        v57 = v50;
        if ( qword_140E2DCC0 )
        {
          if ( (v50 & 0x10) != 0 )
            v57 = v50 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v57 = v50 & ~qword_140E2DCC0;
        }
        goto LABEL_96;
      }
      v50 = 0LL;
LABEL_98:
      if ( v70 )
      {
        AweFlushList = v93;
        v59 = v71;
        if ( !v93 )
        {
          AweFlushList = MiGetAweFlushList(&v85, v71);
          v93 = AweFlushList;
        }
        MiInsertAweFlushList(&v85, AweFlushList, v72, v59);
      }
      if ( v50 )
      {
        v60 = v76;
        if ( (v10 & 0x10) != 0 )
        {
          _InterlockedOr(v67, 0);
          *(_DWORD *)(v60 + 16) = KiTbFlushTimeStamp;
        }
        if ( (v10 & 8) != 0 )
        {
          MiDecrementAweMapCount(v80, v56, 2LL, v60);
        }
        else
        {
          v61 = v83;
          v62 = 0LL;
          if ( v83 )
          {
            v63 = v76;
            v64 = v80;
            v65 = v84;
            do
            {
              MiDecrementAweMapCount(v64, v56, 2LL, v63);
              v56 += v65;
              v62 += v65;
            }
            while ( v62 < v61 );
            v27 = v74;
            ValidPte = v77;
            LOBYTE(v10) = v75;
          }
        }
      }
      v31 = v78 + 1;
      v78 = v31;
      v32 = v72 + 8 * v99;
      v72 = v32;
      if ( v31 >= v81 )
        return MiFinishPteChangesInPageTable((__int64)&v85);
      v18 = v98;
      v20 = v91;
      v24 = v69;
    }
  }
  return MiFinishPteChangesInPageTable((__int64)&v85);
}
