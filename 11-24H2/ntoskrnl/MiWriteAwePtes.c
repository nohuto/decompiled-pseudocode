/*
 * XREFs of MiWriteAwePtes @ 0x1404BA130
 * Callers:
 *     MiDeleteVadAwePtes @ 0x1404B9E8C (MiDeleteVadAwePtes.c)
 *     NtMapUserPhysicalPages @ 0x1407FA100 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1407FA3B0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x1402176A0 (MiMakeSystemAddressValid.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiCompareTbFlushTimeStamp @ 0x14023E0A8 (MiCompareTbFlushTimeStamp.c)
 *     MiFastLockLeafPageTable @ 0x1402D90E0 (MiFastLockLeafPageTable.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x140302420 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiUnlockPageTableInternal @ 0x140321070 (MiUnlockPageTableInternal.c)
 *     MiPageSizeToPteLevel @ 0x14041EFEC (MiPageSizeToPteLevel.c)
 *     MiFinishPteChangesInPageTable @ 0x1404738AC (MiFinishPteChangesInPageTable.c)
 *     MiGetAweViewPageSize @ 0x1404BA0FC (MiGetAweViewPageSize.c)
 *     MiWriteAweClusterPte @ 0x1404D6FE4 (MiWriteAweClusterPte.c)
 *     MiGetAweNode @ 0x1404F51EC (MiGetAweNode.c)
 *     MiDecrementAweMapCount @ 0x14068190C (MiDecrementAweMapCount.c)
 *     MiGetAweFlushList @ 0x1406824E4 (MiGetAweFlushList.c)
 *     MiInsertAweFlushList @ 0x14068279C (MiInsertAweFlushList.c)
 *     MiZeroAndFlushAweLazyPtes @ 0x1406832CC (MiZeroAndFlushAweLazyPtes.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // esi
  int v17; // r11d
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned int v21; // r13d
  int v22; // r13d
  unsigned __int64 ValidPte; // r15
  int v24; // eax
  int v25; // r14d
  char v26; // al
  unsigned int v27; // r11d
  int v28; // ecx
  unsigned __int64 v29; // r9
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // r8
  __int64 AweNode; // rax
  unsigned int v33; // r11d
  __int64 v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // r13
  unsigned __int64 LeafVa; // rax
  __int64 v40; // r9
  ULONG_PTR v41; // rax
  int v42; // eax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned int v45; // r13d
  int v46; // r8d
  unsigned __int64 v47; // rbx
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // rdi
  char *v50; // rcx
  int v51; // eax
  int v52; // eax
  __int64 v53; // rdi
  unsigned __int64 v54; // rdi
  __int64 AweFlushList; // rax
  unsigned int v56; // esi
  __int64 v57; // rcx
  unsigned __int64 v58; // rsi
  unsigned __int64 v59; // rbx
  __int64 v60; // r12
  __int64 v61; // r15
  __int64 v62; // r14
  signed __int32 v64[8]; // [rsp+0h] [rbp-100h] BYREF
  unsigned int v65; // [rsp+30h] [rbp-D0h]
  int v66; // [rsp+34h] [rbp-CCh]
  int v67; // [rsp+38h] [rbp-C8h]
  unsigned int v68; // [rsp+3Ch] [rbp-C4h]
  __int64 v69; // [rsp+40h] [rbp-C0h]
  int v70; // [rsp+48h] [rbp-B8h]
  int v71; // [rsp+4Ch] [rbp-B4h]
  int v72; // [rsp+50h] [rbp-B0h]
  __int64 v73; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v74; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v75; // [rsp+68h] [rbp-98h]
  __int64 v76; // [rsp+70h] [rbp-90h]
  __int64 v77; // [rsp+78h] [rbp-88h]
  unsigned __int64 v78; // [rsp+80h] [rbp-80h]
  __int64 v79; // [rsp+88h] [rbp-78h]
  unsigned __int64 v80; // [rsp+90h] [rbp-70h]
  __int64 v81; // [rsp+98h] [rbp-68h]
  unsigned __int64 v82; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v83; // [rsp+A8h] [rbp-58h]
  int v84; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v85; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v86; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY **p_Blink; // [rsp+C8h] [rbp-38h]
  __int64 v88; // [rsp+D0h] [rbp-30h]
  __int64 v89; // [rsp+D8h] [rbp-28h]
  __int64 v90; // [rsp+E0h] [rbp-20h]
  int v91; // [rsp+E8h] [rbp-18h]
  char *v92; // [rsp+F0h] [rbp-10h]
  char v93; // [rsp+F8h] [rbp-8h] BYREF
  int v94; // [rsp+138h] [rbp+38h]
  int v95; // [rsp+13Ch] [rbp+3Ch]
  __int64 v96; // [rsp+140h] [rbp+40h]
  __int64 v97; // [rsp+148h] [rbp+48h]
  unsigned __int8 v98; // [rsp+150h] [rbp+50h]
  __int16 v99; // [rsp+151h] [rbp+51h]
  char v100; // [rsp+153h] [rbp+53h]
  int v101; // [rsp+154h] [rbp+54h]

  v78 = a3;
  v73 = a7;
  v8 = *(_QWORD *)(a1 + 32);
  v76 = a2;
  v69 = a5;
  Process = KeGetCurrentThread()->ApcState.Process;
  v79 = a4;
  v77 = v8;
  memset_0(&v82, 0, 0xB8uLL);
  v89 = a1;
  p_Blink = &Process[2].ReadyListHead.Blink;
  v97 = v8;
  v10 = *(_DWORD *)(v8 + 8);
  v81 = *(_QWORD *)(v8 + 16);
  v72 = v10;
  AweViewPageSize = MiGetAweViewPageSize(a1);
  v13 = v12;
  if ( AweViewPageSize )
    v13 = AweViewPageSize;
  v80 = v13;
  v95 = MiPageSizeToPteLevel(v13);
  v91 = 512;
  v16 = v95;
  v98 = 17;
  v17 = 0x4000000;
  if ( v95 < 1 )
    v17 = 0;
  v92 = &v93;
  v18 = *(_QWORD *)(a1 + 24);
  v19 = 1LL;
  if ( v14 == 16 )
    v19 = v15;
  v65 = v17;
  v96 = v19;
  *(_BYTE *)(a1 + 64) = 0;
  v94 = a6;
  v20 = 0xFFFFF68000000000uLL;
  if ( (a6 & 1) != 0 )
  {
    v88 = v18;
    v21 = *(_DWORD *)(v18 + 48);
    if ( (v21 & 0x600000) != 0x600000 )
    {
      v17 |= 0x80000000;
      v65 = v17;
    }
    if ( (v10 & 1) != 0 )
    {
      v22 = 4;
      v66 = 4;
    }
    else
    {
      v22 = (v21 >> 7) & 0x1F;
      v66 = v22;
      v101 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v18);
    }
    ValidPte = MiMakeValidPte(v20 + 0x3FFFFFFF78LL, 0LL, v22 | (unsigned int)v17);
    v74 = ValidPte;
    v24 = *(_DWORD *)(v18 + 48) & 0x4200000;
    v25 = (*(_DWORD *)(v18 + 48) >> 12) & 0x7F;
    v71 = v25;
    if ( v24 == 69206016 )
      v100 = 1;
  }
  else
  {
    v26 = v100;
    v27 = v17 | 0x80000000;
    HIBYTE(v99) = 1;
    v22 = 24;
    v101 = 0;
    ValidPte = 0LL;
    v28 = *(_DWORD *)(v18 + 48) & 0x4200000;
    v74 = 0LL;
    v66 = 24;
    v18 = 0LL;
    v71 = 0;
    if ( v28 == 69206016 )
      v26 = 1;
    v65 = v27;
    v100 = v26;
    v25 = 0;
    v88 = 0LL;
  }
  v29 = 0LL;
  v70 = 0;
  v75 = 0LL;
  if ( v78 )
  {
    v30 = v69;
    while ( 1 )
    {
      if ( v79 )
      {
        v31 = *(_QWORD *)(v79 + 8 * v29);
        v30 = ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v69 = v30;
        if ( v16 )
        {
          do
          {
            v30 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            --v16;
          }
          while ( v16 );
          LOBYTE(v10) = v72;
          v69 = v30;
        }
        if ( v31 < (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) << 12
          || v31 > (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF) )
        {
          AweNode = MiGetAweNode(v31);
          *(_BYTE *)(AweNode + 64) = 0;
          v89 = AweNode;
          v18 = *(_QWORD *)(AweNode + 24);
          v88 = v18;
          if ( (v10 & 1) != 0 )
            v22 = 4;
          else
            v22 = (*(_DWORD *)(v18 + 48) >> 7) & 0x1F;
          v66 = v22;
          ValidPte = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, 0LL, v22 | v33);
          v29 = v75;
          v25 = (*(_DWORD *)(v18 + 48) >> 12) & 0x7F;
          v74 = ValidPte;
          v71 = v25;
        }
        v34 = v76;
        if ( v76 && *(_QWORD *)(v76 + 8 * v29) )
          v35 = ValidPte;
        else
          v35 = CLFS_LSN_NULL_EXT;
      }
      else
      {
        v34 = v76;
        v35 = CLFS_LSN_NULL_EXT;
        if ( v76 )
          v35 = ValidPte;
      }
      if ( (v35 & 1) != 0 )
      {
        v36 = *(_QWORD *)(v34 + 8 * v29);
        if ( v36 >= 0 )
          v35 = (v36 << 12) ^ ((v36 << 12) ^ v35) & 0xFFF0000000000FFFuLL;
        else
          v35 = MiMakeValidPte(0xFFFFF6BFFFFFFF78uLL, v36 & 0x7FFFFFFFFFFFFFFFLL, v65 | v22 & 0xFFFFFFF9 | 1);
      }
      v37 = (v30 >> 9) & 0x7FFFFFFFF8LL;
      if ( !v18 )
      {
        v82 = v37 - 0x98000000000LL;
        goto LABEL_57;
      }
      v38 = v37 - 0x98000000000LL;
      if ( v82 == v37 - 0x98000000000LL )
        goto LABEL_57;
      if ( v82 )
      {
        MiFinishPteChangesInPageTable((__int64)&v82);
      }
      else
      {
        if ( !HIBYTE(v99) )
          goto LABEL_48;
        MiUnlockWorkingSetShared((__int64)p_Blink, v98);
      }
      v18 = v88;
LABEL_48:
      v70 = 0;
      v99 = 257;
      v82 = v38;
      if ( (v10 & 0x10) != 0
        && MiGetLeafVa(v38) >= (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) << 12 )
      {
        LeafVa = MiGetLeafVa(v38 + 8);
        LOBYTE(v99) = (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF) < LeafVa - v40
                    ? v40
                    : 0;
      }
      v98 = MiLockWorkingSetShared((__int64)p_Blink);
      if ( v95 >= 1 )
      {
        v41 = MiGetLeafVa(v30);
        v42 = MiFastLockLeafPageTable((__int64)p_Blink, v41, 8u);
        if ( v42 )
        {
          if ( v42 - 1 == v95 )
            goto LABEL_57;
          v43 = ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v42 != 1 )
          {
            while ( 1 )
              v43 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
          MiUnlockPageTableInternal((__int64)p_Blink, v43);
        }
      }
      MiMakeSystemAddressValid(v30, v25, v98, 0);
LABEL_57:
      v44 = v85;
      v45 = 0;
      v46 = 0;
      v67 = 0;
      if ( !v85 )
        v44 = v30;
      v68 = 0;
      v85 = v44;
      v86 = v30 + 8 * (v96 - 1);
      v47 = *(_QWORD *)v30;
      if ( (v35 & 1) != 0 )
      {
        if ( (v47 & 1) != 0 )
        {
          if ( v35 != v47 )
          {
            v67 = 1;
            v68 = 64;
            v45 = (v95 != 0) + 1;
          }
        }
        else
        {
          v45 = 5;
          if ( (v47 & 0x800) == 0 )
          {
            v83 += v96;
            if ( v47 )
            {
              v48 = v47;
              if ( qword_140E2DB80 )
              {
                if ( (v47 & 0x10) != 0 )
                  v48 = v47 & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v48 = v47 & ~qword_140E2DB80;
              }
              v49 = HIDWORD(v48);
              if ( (_DWORD)v49 )
              {
                if ( (_DWORD)v49 == v70 )
                {
                  v67 = 0;
                }
                else if ( MiCompareTbFlushTimeStamp((unsigned int)v49) )
                {
                  MiZeroAndFlushAweLazyPtes(&v82, v69);
                  LODWORD(v49) = 0;
                }
              }
              v70 = v49;
              v30 = v69;
            }
            else
            {
              v84 += v96;
            }
          }
        }
      }
      else
      {
        if ( !v47 )
          goto LABEL_88;
        if ( (v47 & 1) != 0 )
        {
          v83 -= v96;
          v84 -= v96;
          v45 = (v95 != 0) + 3;
          if ( v88 )
          {
            if ( (_BYTE)v99 )
            {
              v46 = 1;
              v67 = 1;
            }
            else
            {
              v50 = &v92[(unsigned __int64)(((unsigned int)v30 >> 3) & 0x1FF) >> 3];
              v51 = *v50;
              _bittestandset(&v51, ((unsigned int)v30 >> 3) & 7);
              *v50 = v51;
            }
          }
          v68 = v46;
        }
        else
        {
          if ( (v47 & 0x800) != 0 )
          {
            v52 = v96;
            v83 -= v96;
          }
          else
          {
            if ( v88 )
              goto LABEL_88;
            v52 = v96;
          }
          v84 -= v52;
          v45 = 6;
        }
      }
LABEL_88:
      MiWriteAweClusterPte(p_Blink, v30, v35, v45, v96);
      v53 = -1LL;
      if ( !v47 )
        goto LABEL_98;
      if ( (v47 & 1) != 0 )
      {
        v54 = v47;
LABEL_96:
        v53 = (v54 >> 12) & 0xFFFFFFFFFFLL;
        goto LABEL_98;
      }
      if ( (v47 & 0x800) != 0 )
      {
        v54 = v47;
        if ( qword_140E2DB80 )
        {
          if ( (v47 & 0x10) != 0 )
            v54 = v47 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v54 = v47 & ~qword_140E2DB80;
        }
        goto LABEL_96;
      }
      v47 = 0LL;
LABEL_98:
      if ( v67 )
      {
        AweFlushList = v90;
        v56 = v68;
        if ( !v90 )
        {
          AweFlushList = MiGetAweFlushList(&v82, v68);
          v90 = AweFlushList;
        }
        MiInsertAweFlushList(&v82, AweFlushList, v69, v56);
      }
      if ( v47 )
      {
        v57 = v73;
        if ( (v10 & 0x10) != 0 )
        {
          _InterlockedOr(v64, 0);
          *(_DWORD *)(v57 + 16) = KiTbFlushTimeStamp;
        }
        if ( (v10 & 8) != 0 )
        {
          MiDecrementAweMapCount(v77, v53, 2LL, v57);
        }
        else
        {
          v58 = v80;
          v59 = 0LL;
          if ( v80 )
          {
            v60 = v73;
            v61 = v77;
            v62 = v81;
            do
            {
              MiDecrementAweMapCount(v61, v53, 2LL, v60);
              v53 += v62;
              v59 += v62;
            }
            while ( v59 < v58 );
            v25 = v71;
            ValidPte = v74;
            LOBYTE(v10) = v72;
          }
        }
      }
      v29 = v75 + 1;
      v75 = v29;
      v30 = v69 + 8 * v96;
      v69 = v30;
      if ( v29 >= v78 )
        return MiFinishPteChangesInPageTable((__int64)&v82);
      v16 = v95;
      v18 = v88;
      v22 = v66;
    }
  }
  return MiFinishPteChangesInPageTable((__int64)&v82);
}
