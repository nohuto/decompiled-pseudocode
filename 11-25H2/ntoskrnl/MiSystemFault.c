/*
 * XREFs of MiSystemFault @ 0x1403E1EBC
 * Callers:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 * Callees:
 *     MiSystemVaTypeToVm @ 0x140219640 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MiSynchronizeSystemVa @ 0x1402197A8 (MiSynchronizeSystemVa.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140231A30 (MiUpdatePfnForPrefetchByPte.c)
 *     MiResolveDemandZeroFault @ 0x140241160 (MiResolveDemandZeroFault.c)
 *     MiGetLeafVa @ 0x1402B5480 (MiGetLeafVa.c)
 *     MiUnlockSystemVa @ 0x1402BB200 (MiUnlockSystemVa.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiTransientCombineAddress @ 0x1403E2664 (MiTransientCombineAddress.c)
 *     MiSystemVaTypeHasWsles @ 0x1403E2738 (MiSystemVaTypeHasWsles.c)
 *     MiCheckSystemPageTables @ 0x1403E2760 (MiCheckSystemPageTables.c)
 *     KeInvalidAccessAllowed @ 0x1403E2860 (KeInvalidAccessAllowed.c)
 *     MiGenerateAccessViolation @ 0x1403E297C (MiGenerateAccessViolation.c)
 *     MiHyperSpaceSize @ 0x1403E2A20 (MiHyperSpaceSize.c)
 *     MiNoFaultFound @ 0x1403E2AA0 (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x1403E2CC4 (MiCheckSystemNxFault.c)
 *     MiTransientPageListWriter @ 0x1403E2D30 (MiTransientPageListWriter.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MiSystemFault(_QWORD *a1)
{
  int v1; // eax
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbx
  _BYTE *v6; // rcx
  struct _KTHREAD *CurrentThread; // r14
  int v8; // eax
  unsigned int v9; // esi
  __int64 v10; // rcx
  _BYTE *v11; // rax
  char v12; // r13
  int v13; // r14d
  unsigned int SystemRegionType; // eax
  unsigned int v15; // r10d
  int v16; // ecx
  int v17; // r10d
  struct _LIST_ENTRY **v18; // r12
  int v19; // eax
  __int64 v20; // xmm1_8
  volatile signed __int64 *v21; // r15
  ULONG_PTR v22; // rbx
  ULONG_PTR v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v27; // rax
  ULONG_PTR v28; // r9
  __int64 v29; // r14
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rax
  __int64 v33; // xmm1_8
  _BYTE *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  _BYTE *v37; // rax
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  ULONG_PTR v40; // rdx
  __int64 v41; // rcx
  _BYTE *v42; // rax
  __int64 v43; // rcx
  _BYTE *v44; // rax
  _BYTE v45[4]; // [rsp+38h] [rbp-59h] BYREF
  int v46; // [rsp+3Ch] [rbp-55h]
  __int128 v47; // [rsp+50h] [rbp-41h]
  __int64 v48; // [rsp+60h] [rbp-31h]

  v1 = *((_DWORD *)a1 + 20);
  if ( (v1 & 0x100) != 0 )
    return 3221225477LL;
  if ( (v1 & 0x80u) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  LeafVa = MiGetLeafVa(*a1);
  v5 = LeafVa;
  if ( v4 >= 0xFFFFF68000000000uLL
    && LeafVa >= qword_140E2F040
    && v4 <= 0xFFFFF6FFFFFFFFFFuLL
    && LeafVa <= qword_140E2F050 )
  {
    a1[1] |= 2uLL;
  }
  v6 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1) != 0 && (*v6 == 7 || *v6 == 8) )
  {
    if ( v4 < 0xFFFFF68000000000uLL
      || v4 > 0xFFFFF6FFFFFFFFFFuLL
      || LeafVa > 0x7FFFFFFEFFFFLL && (LeafVa > qword_140E2F050 || LeafVa < qword_140E2F040) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( LeafVa < 0xFFFF800000000000uLL
    || LeafVa >= qword_140E2F048 && LeafVa < qword_140E2F048 + MiHyperSpaceSize(v6, 0xFFFFF6FFFFFFFFFFuLL) )
  {
    return 192LL;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v8 & 0x400) != 0 )
    return 3221225477LL;
  v9 = 0;
  if ( (v8 & 0x100) != 0 )
  {
    if ( (unsigned int)MiTransientPageListWriter(CurrentThread, *a1) )
      return 3221225477LL;
  }
  if ( (unsigned int)MiTransientCombineAddress(CurrentThread, *a1, 0LL) )
    return 3221225477LL;
  v10 = a1[2];
  v11 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v10 & 1) != 0 )
  {
    if ( *v11 != 1 && *v11 != 3 && *v11 != 6 )
      goto LABEL_12;
LABEL_72:
    v12 = 1;
    goto LABEL_13;
  }
  if ( (unsigned __int8)KeInvalidAccessAllowed(v10, 0LL) )
    goto LABEL_72;
LABEL_12:
  v12 = 0;
LABEL_13:
  memset_0(v45, 0, 0x80uLL);
  v13 = 1;
  v46 = 1;
  SystemRegionType = MiGetSystemRegionType(v5);
  v15 = SystemRegionType;
  if ( (a1[10] & 0x40) == 0 )
  {
    v27 = a1[2];
    if ( (v27 & 1) == 0 || *(_BYTE *)(v27 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      if ( !v12 )
        v13 = 3;
      v46 = v13;
    }
LABEL_15:
    if ( (unsigned int)MiSystemVaTypeHasWsles(v15) )
    {
      v18 = MiSystemVaTypeToVm(v16);
      if ( v18 )
      {
LABEL_17:
        if ( (unsigned int)MiSynchronizeSystemVa((__int64)v18, *a1, v17, 0, (__int64)v45) )
        {
          v19 = MiCheckSystemPageTables(a1);
          if ( v19 != 2 )
          {
            if ( v19 != 1 )
            {
              v20 = v48;
              *(_OWORD *)(a1 + 7) = v47;
              a1[9] = v20;
              v21 = (volatile signed __int64 *)a1[3];
              v22 = *v21;
              if ( (*v21 & 1) == 0 )
              {
                v23 = *a1;
                if ( *a1 >= 0xFFFFF68000000000uLL && v23 <= 0xFFFFF6FFFFFFFFFFuLL )
                {
                  if ( !v12 )
                  {
                    v28 = a1[2];
                    if ( (v28 & 1) == 0 || *(_BYTE *)(v28 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                      KeBugCheckEx(0x50u, v23, a1[1], v28, 9uLL);
                    goto LABEL_26;
                  }
                  goto LABEL_25;
                }
                v24 = 0LL;
                if ( (v22 & 0x400) != 0 )
                {
                  if ( (v22 & 2) != 0 )
                  {
                    v32 = a1[2];
                    if ( (v32 & 1) == 0 || *(_BYTE *)(v32 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                    {
                      v9 = MiResolveDemandZeroFault(a1, a1[3], 0LL, 0LL);
                      v33 = a1[9];
                      v47 = *(_OWORD *)(a1 + 7);
                      v48 = v33;
                    }
                    goto LABEL_26;
                  }
                  v29 = *v21;
                  if ( qword_140E2D940 )
                  {
                    if ( (v22 & 0x10) != 0 )
                      v29 = v22 & 0xFFFFFFFFFFFFFFEFuLL;
                    else
                      v29 = v22 & ~qword_140E2D940;
                  }
                  v24 = v29 >> 16;
                  goto LABEL_29;
                }
                v25 = *v21 & 0x3E0;
                if ( v25 == 0 && (*v21 & 0x800) == 0 )
                {
                  if ( (a1[10] & 0x40) != 0 )
                  {
LABEL_25:
                    v9 = -1073741819;
LABEL_26:
                    MiUnlockSystemVa((__int64)v45);
                    return v9;
                  }
                  v41 = a1[2];
                  v42 = (_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL);
                  if ( (v41 & 1) != 0 )
                  {
                    if ( *v42 == 1 || *v42 == 3 || *v42 == 6 )
                      goto LABEL_25;
                  }
                  else if ( (unsigned __int8)KeInvalidAccessAllowed(v41, 0LL) )
                  {
                    goto LABEL_25;
                  }
                  if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0LL);
                  goto LABEL_25;
                }
                if ( v25 != 768 )
                {
                  if ( v25 != 992 || (v35 = a1[2], (v35 & 1) != 0) && *(_BYTE *)(v35 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
                  {
LABEL_29:
                    if ( (a1[1] & 2) == 0 || v24 || (((unsigned __int8)v22 >> 5) & 4) != 0 )
                    {
                      a1[13] = v24;
                      return 3221225494LL;
                    }
                    if ( (a1[10] & 0x40) != 0 )
                      goto LABEL_25;
                    v43 = a1[2];
                    v44 = (_BYTE *)(v43 & 0xFFFFFFFFFFFFFFFEuLL);
                    if ( (v43 & 1) != 0 )
                    {
                      if ( *v44 == 1 || *v44 == 3 || *v44 == 6 )
                        goto LABEL_25;
                    }
                    else if ( (unsigned __int8)KeInvalidAccessAllowed(v43, 0LL) )
                    {
                      goto LABEL_25;
                    }
                    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                      KeBugCheckEx(0xBEu, *a1, v22, a1[2], 0xEuLL);
                    goto LABEL_25;
                  }
                }
                if ( (a1[10] & 0x40) == 0 )
                {
                  v36 = a1[2];
                  v37 = (_BYTE *)(v36 & 0xFFFFFFFFFFFFFFFEuLL);
                  if ( (v36 & 1) != 0 )
                  {
                    if ( *v37 == 1 || *v37 == 6 || *v37 == 3 )
                      goto LABEL_85;
                  }
                  else if ( (unsigned __int8)KeInvalidAccessAllowed(v36, 0LL) )
                  {
                    goto LABEL_85;
                  }
                  if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 1uLL);
                }
LABEL_85:
                if ( (v22 & 0x3E0) == 0x300 )
                  goto LABEL_25;
                v38 = a1[2];
                if ( (v38 & 1) == 0 || *(_BYTE *)(v38 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                  goto LABEL_25;
                goto LABEL_29;
              }
              if ( (v22 & 0x80u) != 0LL )
              {
                v40 = *a1;
                if ( *a1 >= 0xFFFFF68000000000uLL && v40 <= 0xFFFFF6FFFFFFFFFFuLL )
                {
                  if ( (v46 & 2) != 0 )
                    KeBugCheckEx(0x50u, v40, a1[1], a1[2], 8uLL);
                  goto LABEL_25;
                }
              }
              v30 = a1[2];
              if ( (v30 & 1) != 0 )
              {
                v39 = v30 & 0xFFFFFFFFFFFFFFFEuLL;
                if ( *(_BYTE *)v39 == 1 )
                {
                  MiUpdatePfnForPrefetchByPte(a1[3], *(_DWORD *)(v39 + 80) & 7, 0LL);
                  goto LABEL_26;
                }
              }
              if ( (a1[1] & 2) != 0 )
              {
                if ( (v22 & 0x800) == 0 )
                {
                  if ( (v22 & 0x200) == 0 && (a1[10] & 0x40) == 0 )
                  {
                    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                      KeBugCheckEx(0xBEu, *a1, v22, a1[2], 0xBuLL);
                    goto LABEL_25;
                  }
                  v31 = MiCopyOnWrite(*a1, v21, 0xFFFFFFFFFFFFFFFFuLL, 0, 0LL);
                  MiUnlockSystemVa((__int64)v45);
                  if ( v31 < 0 )
                    MiCopyOnWriteCheckConditions((__int64)v18, v31, 0LL);
                  return 0LL;
                }
              }
              else
              {
                MiCheckSystemNxFault(a1, *v21, 2LL);
              }
              MiNoFaultFound(a1, v21, *a1, a1[2], 1, v22);
              goto LABEL_26;
            }
            MiUnlockSystemVa((__int64)v45);
            return 0LL;
          }
          MiUnlockSystemVa((__int64)v45);
        }
        LOBYTE(v13) = v46;
      }
    }
    else if ( v17 == 13 )
    {
      v34 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (a1[2] & 1) != 0 && (*v34 == 4 || *v34 == 1) )
      {
        v18 = (struct _LIST_ENTRY **)&unk_140E38000;
        goto LABEL_17;
      }
    }
    else if ( v17 == 8 )
    {
      v18 = (struct _LIST_ENTRY **)&unk_140E37EC0;
      goto LABEL_17;
    }
    if ( (v13 & 2) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 2uLL);
    return 3221225477LL;
  }
  if ( SystemRegionType == 5 )
    goto LABEL_15;
  return 3221225477LL;
}
