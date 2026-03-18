/*
 * XREFs of MiSystemFault @ 0x140229570
 * Callers:
 *     MmAccessFault @ 0x140216750 (MmAccessFault.c)
 * Callees:
 *     MiUpdatePfnForPrefetchByPte @ 0x140215E80 (MiUpdatePfnForPrefetchByPte.c)
 *     KeInvalidAccessAllowed @ 0x1402292D0 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemPageTables @ 0x140229450 (MiCheckSystemPageTables.c)
 *     MiSystemVaTypeHasWsles @ 0x140229548 (MiSystemVaTypeHasWsles.c)
 *     MiSystemVaTypeToVm @ 0x14022ABF0 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiSynchronizeSystemVa @ 0x14022AD58 (MiSynchronizeSystemVa.c)
 *     MiNoFaultFound @ 0x140233220 (MiNoFaultFound.c)
 *     MiHyperSpaceSize @ 0x140235D2C (MiHyperSpaceSize.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     MiGenerateAccessViolation @ 0x140246254 (MiGenerateAccessViolation.c)
 *     MiGetLeafVa @ 0x1402DEE20 (MiGetLeafVa.c)
 *     MiUnlockSystemVa @ 0x1402E1BA0 (MiUnlockSystemVa.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiCheckSystemNxFault @ 0x140499024 (MiCheckSystemNxFault.c)
 *     MiTransientPageListWriter @ 0x1404D1B8C (MiTransientPageListWriter.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiSystemFault(_QWORD *a1)
{
  int v1; // eax
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbx
  _BYTE *v6; // rcx
  struct _KTHREAD *CurrentThread; // r15
  int v8; // eax
  unsigned int v9; // esi
  ULONG_PTR v10; // r12
  __int64 v11; // rcx
  _BYTE *v12; // rax
  char v13; // r13
  int v14; // r14d
  int SystemRegionType; // r10d
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // r10d
  void *v19; // r12
  int v20; // eax
  __int64 v21; // xmm1_8
  ULONG_PTR *v22; // r15
  ULONG_PTR v23; // rbx
  ULONG_PTR v24; // rdx
  __int64 v25; // r14
  __int64 v26; // rdx
  ULONG_PTR v28; // r9
  KIRQL v29; // al
  _QWORD *v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r14
  __int64 v33; // rdx
  int v34; // ebx
  __int64 v35; // rax
  __int64 v36; // xmm1_8
  _BYTE *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  _BYTE *v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  ULONG_PTR v43; // rdx
  __int64 v44; // rcx
  _BYTE *v45; // rax
  __int64 v46; // rcx
  _BYTE *v47; // rax
  _BYTE v48[4]; // [rsp+38h] [rbp-59h] BYREF
  int v49; // [rsp+3Ch] [rbp-55h]
  __int128 v50; // [rsp+50h] [rbp-41h]
  __int64 v51; // [rsp+60h] [rbp-31h]

  v1 = *((_DWORD *)a1 + 20);
  if ( (v1 & 0x100) == 0 )
  {
    if ( (v1 & 0x80u) != 0 )
      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
    LeafVa = MiGetLeafVa(*a1);
    v5 = LeafVa;
    if ( v4 >= 0xFFFFF68000000000uLL
      && LeafVa >= qword_140E2F280
      && v4 <= 0xFFFFF6FFFFFFFFFFuLL
      && LeafVa <= qword_140E2F290 )
    {
      a1[1] |= 2uLL;
    }
    v6 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1[2] & 1) != 0 && (*v6 == 7 || *v6 == 8) )
    {
      if ( v4 < 0xFFFFF68000000000uLL
        || v4 > 0xFFFFF6FFFFFFFFFFuLL
        || LeafVa > 0x7FFFFFFEFFFFLL && (LeafVa > qword_140E2F290 || LeafVa < qword_140E2F280) )
      {
        return 3489660934LL;
      }
      return 192LL;
    }
    if ( LeafVa < 0xFFFF800000000000uLL
      || LeafVa >= qword_140E2F288 && LeafVa < qword_140E2F288 + MiHyperSpaceSize(v6, 0xFFFFF6FFFFFFFFFFuLL) )
    {
      return 192LL;
    }
    CurrentThread = KeGetCurrentThread();
    v8 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
    if ( (v8 & 0x400) == 0 )
    {
      v9 = 0;
      if ( (v8 & 0x100) == 0 || !(unsigned int)MiTransientPageListWriter(CurrentThread, *a1) )
      {
        v10 = *a1;
        if ( !dword_140E2FE04 )
          goto LABEL_10;
        v29 = ExAcquireSpinLockShared(&dword_140E2FE00);
        v30 = (_QWORD *)qword_140E2FE08;
        LOBYTE(v31) = v29;
        while ( v30 )
        {
          if ( (unsigned __int64)CurrentThread > v30[3] )
          {
            v30 = (_QWORD *)v30[1];
          }
          else
          {
            if ( (unsigned __int64)CurrentThread >= v30[3] )
              break;
            v30 = (_QWORD *)*v30;
          }
        }
        if ( v30 && v30[5] != ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          v30 = 0LL;
        MiReleaseSpinLockShared(&dword_140E2FE00, v31);
        if ( !v30 )
        {
LABEL_10:
          v11 = a1[2];
          v12 = (_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL);
          if ( (v11 & 1) != 0 )
          {
            if ( *v12 != 1 && *v12 != 3 && *v12 != 6 )
              goto LABEL_12;
          }
          else if ( !KeInvalidAccessAllowed(v11, 0) )
          {
LABEL_12:
            v13 = 0;
            goto LABEL_13;
          }
          v13 = 1;
LABEL_13:
          memset_0(v48, 0, 0x80uLL);
          v14 = 1;
          v49 = 1;
          SystemRegionType = MiGetSystemRegionType(v5);
          if ( (a1[10] & 0x40) != 0 )
          {
            if ( SystemRegionType != 5 )
              return 3221225477LL;
          }
          else
          {
            v16 = a1[2];
            if ( (v16 & 1) == 0 || *(_BYTE *)(v16 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
            {
              if ( !v13 )
                v14 = 3;
              v49 = v14;
            }
          }
          if ( MiSystemVaTypeHasWsles(SystemRegionType) )
          {
            v19 = (void *)MiSystemVaTypeToVm(v17);
            if ( !v19 )
              goto LABEL_104;
          }
          else if ( v18 == 13 )
          {
            v37 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
            if ( (a1[2] & 1) == 0 || *v37 != 4 && *v37 != 1 )
              goto LABEL_104;
            v19 = &unk_140E38240;
          }
          else
          {
            if ( v18 != 8 )
              goto LABEL_104;
            v19 = &unk_140E38100;
          }
          if ( (unsigned int)MiSynchronizeSystemVa((_DWORD)v19, *a1, v18, 0, (__int64)v48) )
          {
            v20 = MiCheckSystemPageTables(a1);
            if ( v20 != 2 )
            {
              if ( v20 != 1 )
              {
                v21 = v51;
                *(_OWORD *)(a1 + 7) = v50;
                a1[9] = v21;
                v22 = (ULONG_PTR *)a1[3];
                v23 = *v22;
                if ( (*v22 & 1) == 0 )
                {
                  v24 = *a1;
                  if ( *a1 >= 0xFFFFF68000000000uLL && v24 <= 0xFFFFF6FFFFFFFFFFuLL )
                  {
                    if ( !v13 )
                    {
                      v28 = a1[2];
                      if ( (v28 & 1) == 0 || *(_BYTE *)(v28 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                        KeBugCheckEx(0x50u, v24, a1[1], v28, 9uLL);
                      goto LABEL_29;
                    }
                    goto LABEL_28;
                  }
                  v25 = 0LL;
                  if ( (v23 & 0x400) != 0 )
                  {
                    if ( (v23 & 2) != 0 )
                    {
                      v35 = a1[2];
                      if ( (v35 & 1) == 0 || *(_BYTE *)(v35 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                      {
                        v9 = MiResolveDemandZeroFault(a1, a1[3], 0LL, 0LL);
                        v36 = a1[9];
                        v50 = *(_OWORD *)(a1 + 7);
                        v51 = v36;
                      }
                      goto LABEL_29;
                    }
                    v32 = *v22;
                    if ( qword_140E2DB80 )
                    {
                      if ( (v23 & 0x10) != 0 )
                        v32 = v23 & 0xFFFFFFFFFFFFFFEFuLL;
                      else
                        v32 = v23 & ~qword_140E2DB80;
                    }
                    v25 = v32 >> 16;
                    goto LABEL_38;
                  }
                  v26 = *v22 & 0x3E0;
                  if ( v26 == 0 && (*v22 & 0x800) == 0 )
                  {
                    if ( (a1[10] & 0x40) != 0 )
                    {
LABEL_28:
                      v9 = -1073741819;
LABEL_29:
                      MiUnlockSystemVa(v48);
                      return v9;
                    }
                    v44 = a1[2];
                    v45 = (_BYTE *)(v44 & 0xFFFFFFFFFFFFFFFEuLL);
                    if ( (v44 & 1) != 0 )
                    {
                      if ( *v45 == 1 || *v45 == 3 || *v45 == 6 )
                        goto LABEL_28;
                    }
                    else if ( KeInvalidAccessAllowed(v44, 0) )
                    {
                      goto LABEL_28;
                    }
                    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0LL);
                    goto LABEL_28;
                  }
                  if ( v26 != 768 )
                  {
                    if ( v26 != 992 || (v38 = a1[2], (v38 & 1) != 0) && *(_BYTE *)(v38 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
                    {
LABEL_38:
                      if ( (a1[1] & 2) == 0 || v25 || (((unsigned __int8)v23 >> 5) & 4) != 0 )
                      {
                        a1[13] = v25;
                        return 3221225494LL;
                      }
                      if ( (a1[10] & 0x40) != 0 )
                        goto LABEL_28;
                      v46 = a1[2];
                      v47 = (_BYTE *)(v46 & 0xFFFFFFFFFFFFFFFEuLL);
                      if ( (v46 & 1) != 0 )
                      {
                        if ( *v47 == 1 || *v47 == 3 || *v47 == 6 )
                          goto LABEL_28;
                      }
                      else if ( KeInvalidAccessAllowed(v46, 0) )
                      {
                        goto LABEL_28;
                      }
                      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                        KeBugCheckEx(0xBEu, *a1, v23, a1[2], 0xEuLL);
                      goto LABEL_28;
                    }
                  }
                  if ( (a1[10] & 0x40) == 0 )
                  {
                    v39 = a1[2];
                    v40 = (_BYTE *)(v39 & 0xFFFFFFFFFFFFFFFEuLL);
                    if ( (v39 & 1) != 0 )
                    {
                      if ( *v40 == 1 || *v40 == 6 || *v40 == 3 )
                        goto LABEL_94;
                    }
                    else if ( KeInvalidAccessAllowed(v39, 0) )
                    {
                      goto LABEL_94;
                    }
                    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 1uLL);
                  }
LABEL_94:
                  if ( (v23 & 0x3E0) == 0x300 )
                    goto LABEL_28;
                  v41 = a1[2];
                  if ( (v41 & 1) == 0 || *(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                    goto LABEL_28;
                  goto LABEL_38;
                }
                if ( (v23 & 0x80u) != 0LL )
                {
                  v43 = *a1;
                  if ( *a1 >= 0xFFFFF68000000000uLL && v43 <= 0xFFFFF6FFFFFFFFFFuLL )
                  {
                    if ( (v49 & 2) != 0 )
                      KeBugCheckEx(0x50u, v43, a1[1], a1[2], 8uLL);
                    goto LABEL_28;
                  }
                }
                v33 = a1[2];
                if ( (v33 & 1) != 0 )
                {
                  v42 = v33 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( *(_BYTE *)v42 == 1 )
                  {
                    MiUpdatePfnForPrefetchByPte(a1[3], *(_DWORD *)(v42 + 80) & 7, 0LL);
                    goto LABEL_29;
                  }
                }
                if ( (a1[1] & 2) != 0 )
                {
                  if ( (v23 & 0x800) == 0 )
                  {
                    if ( (v23 & 0x200) == 0 && (a1[10] & 0x40) == 0 )
                    {
                      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                        KeBugCheckEx(0xBEu, *a1, v23, a1[2], 0xBuLL);
                      goto LABEL_28;
                    }
                    v34 = MiCopyOnWrite(*a1, (ULONG_PTR)v22, 0LL);
                    MiUnlockSystemVa(v48);
                    if ( v34 < 0 )
                      MiCopyOnWriteCheckConditions(v19, (unsigned int)v34, 0LL);
                    return 0LL;
                  }
                }
                else
                {
                  MiCheckSystemNxFault(a1, *v22, 2LL);
                }
                MiNoFaultFound(a1, v22, *a1, a1[2], 1, v23);
                goto LABEL_29;
              }
              MiUnlockSystemVa(v48);
              return 0LL;
            }
            MiUnlockSystemVa(v48);
          }
          LOBYTE(v14) = v49;
LABEL_104:
          if ( (v14 & 2) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 2uLL);
        }
      }
    }
  }
  return 3221225477LL;
}
