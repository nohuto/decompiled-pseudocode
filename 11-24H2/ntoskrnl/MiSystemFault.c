/*
 * XREFs of MiSystemFault @ 0x1402FC7E0
 * Callers:
 *     MmAccessFault @ 0x140243610 (MmAccessFault.c)
 * Callees:
 *     MiNoFaultFound @ 0x140203670 (MiNoFaultFound.c)
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiHyperSpaceSize @ 0x14020FEBC (MiHyperSpaceSize.c)
 *     MiGetLeafVa @ 0x140240700 (MiGetLeafVa.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     MiGenerateAccessViolation @ 0x1402FB178 (MiGenerateAccessViolation.c)
 *     KeInvalidAccessAllowed @ 0x1402FC4D0 (KeInvalidAccessAllowed.c)
 *     MiUnlockSystemVa @ 0x1402FC650 (MiUnlockSystemVa.c)
 *     MiCheckSystemPageTables @ 0x1402FC6C0 (MiCheckSystemPageTables.c)
 *     MiSystemVaTypeHasWsles @ 0x1402FC7B8 (MiSystemVaTypeHasWsles.c)
 *     MiSystemVaTypeToVm @ 0x1402FDE60 (MiSystemVaTypeToVm.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiSynchronizeSystemVa @ 0x1402FDFC8 (MiSynchronizeSystemVa.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140334220 (MiUpdatePfnForPrefetchByPte.c)
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiCheckSystemNxFault @ 0x1404939B0 (MiCheckSystemNxFault.c)
 *     MiTransientPageListWriter @ 0x1404CABCC (MiTransientPageListWriter.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  int SystemRegionType; // r10d
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r10d
  void *v21; // r12
  int v22; // eax
  __int64 v23; // xmm1_8
  volatile signed __int64 *v24; // r15
  ULONG_PTR v25; // rbx
  ULONG_PTR v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rdx
  ULONG_PTR v30; // r9
  KIRQL v31; // al
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // r14
  __int64 v35; // r14
  __int64 v36; // rdx
  int v37; // ebx
  __int64 v38; // rax
  __int64 v39; // xmm1_8
  _BYTE *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rcx
  _BYTE *v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rdx
  ULONG_PTR v46; // rdx
  __int64 v47; // rcx
  _BYTE *v48; // rax
  __int64 v49; // rcx
  _BYTE *v50; // rax
  _BYTE v51[4]; // [rsp+38h] [rbp-59h] BYREF
  int v52; // [rsp+3Ch] [rbp-55h]
  __int128 v53; // [rsp+50h] [rbp-41h]
  __int64 v54; // [rsp+60h] [rbp-31h]

  v1 = *((_DWORD *)a1 + 20);
  if ( (v1 & 0x100) == 0 )
  {
    if ( (v1 & 0x80u) != 0 )
      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
    LeafVa = MiGetLeafVa(*a1);
    v5 = LeafVa;
    if ( v4 >= 0xFFFFF68000000000uLL
      && LeafVa >= qword_140E2F3C0
      && v4 <= 0xFFFFF6FFFFFFFFFFuLL
      && LeafVa <= qword_140E2F3D0 )
    {
      a1[1] |= 2uLL;
    }
    v6 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1[2] & 1) != 0 && (*v6 == 7 || *v6 == 8) )
    {
      if ( v4 < 0xFFFFF68000000000uLL
        || v4 > 0xFFFFF6FFFFFFFFFFuLL
        || LeafVa > 0x7FFFFFFEFFFFLL && (LeafVa > qword_140E2F3D0 || LeafVa < qword_140E2F3C0) )
      {
        return 3489660934LL;
      }
      return 192LL;
    }
    if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140E2F3C8 && LeafVa < qword_140E2F3C8 + MiHyperSpaceSize() )
      return 192LL;
    CurrentThread = KeGetCurrentThread();
    v8 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
    if ( (v8 & 0x400) == 0 )
    {
      v9 = 0;
      if ( (v8 & 0x100) == 0 || !(unsigned int)MiTransientPageListWriter(CurrentThread, *a1) )
      {
        v10 = *a1;
        if ( !dword_140E2FF44 )
          goto LABEL_10;
        v31 = ExAcquireSpinLockShared(&dword_140E2FF40);
        v34 = (_QWORD *)qword_140E2FF48;
        while ( v34 )
        {
          if ( (unsigned __int64)CurrentThread > v34[3] )
          {
            v34 = (_QWORD *)v34[1];
          }
          else
          {
            if ( (unsigned __int64)CurrentThread >= v34[3] )
              break;
            v34 = (_QWORD *)*v34;
          }
        }
        if ( v34 && v34[5] != ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
          v34 = 0LL;
        MiReleaseSpinLockShared(&dword_140E2FF40, v31, v32, v33);
        if ( !v34 )
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
          memset_0(v51, 0, 0x80uLL);
          v14 = 1;
          v52 = 1;
          SystemRegionType = MiGetSystemRegionType(v5, v15, v16);
          if ( (a1[10] & 0x40) != 0 )
          {
            if ( SystemRegionType != 5 )
              return 3221225477LL;
          }
          else
          {
            v18 = a1[2];
            if ( (v18 & 1) == 0 || *(_BYTE *)(v18 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
            {
              if ( !v13 )
                v14 = 3;
              v52 = v14;
            }
          }
          if ( MiSystemVaTypeHasWsles(SystemRegionType) )
          {
            v21 = (void *)MiSystemVaTypeToVm(v19);
            if ( !v21 )
              goto LABEL_104;
          }
          else if ( v20 == 13 )
          {
            v40 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
            if ( (a1[2] & 1) == 0 || *v40 != 4 && *v40 != 1 )
              goto LABEL_104;
            v21 = &unk_140E38380;
          }
          else
          {
            if ( v20 != 8 )
              goto LABEL_104;
            v21 = &unk_140E38240;
          }
          if ( (unsigned int)MiSynchronizeSystemVa((_DWORD)v21, *a1, v20, 0, (__int64)v51) )
          {
            v22 = MiCheckSystemPageTables(a1);
            if ( v22 != 2 )
            {
              if ( v22 != 1 )
              {
                v23 = v54;
                *(_OWORD *)(a1 + 7) = v53;
                a1[9] = v23;
                v24 = (volatile signed __int64 *)a1[3];
                v25 = *v24;
                if ( (*v24 & 1) == 0 )
                {
                  v26 = *a1;
                  if ( *a1 >= 0xFFFFF68000000000uLL && v26 <= 0xFFFFF6FFFFFFFFFFuLL )
                  {
                    if ( !v13 )
                    {
                      v30 = a1[2];
                      if ( (v30 & 1) == 0 || *(_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                        KeBugCheckEx(0x50u, v26, a1[1], v30, 9uLL);
                      goto LABEL_29;
                    }
                    goto LABEL_28;
                  }
                  v27 = 0LL;
                  if ( (v25 & 0x400) != 0 )
                  {
                    if ( (v25 & 2) != 0 )
                    {
                      v38 = a1[2];
                      if ( (v38 & 1) == 0 || *(_BYTE *)(v38 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                      {
                        v9 = MiResolveDemandZeroFault(a1, a1[3], 0LL, 0LL);
                        v39 = a1[9];
                        v53 = *(_OWORD *)(a1 + 7);
                        v54 = v39;
                      }
                      goto LABEL_29;
                    }
                    v35 = *v24;
                    if ( qword_140E2DCC0 )
                    {
                      if ( (v25 & 0x10) != 0 )
                        v35 = v25 & 0xFFFFFFFFFFFFFFEFuLL;
                      else
                        v35 = v25 & ~qword_140E2DCC0;
                    }
                    v27 = v35 >> 16;
                    goto LABEL_38;
                  }
                  v28 = *v24 & 0x3E0;
                  if ( v28 == 0 && (*v24 & 0x800) == 0 )
                  {
                    if ( (a1[10] & 0x40) != 0 )
                    {
LABEL_28:
                      v9 = -1073741819;
LABEL_29:
                      MiUnlockSystemVa((__int64)v51);
                      return v9;
                    }
                    v47 = a1[2];
                    v48 = (_BYTE *)(v47 & 0xFFFFFFFFFFFFFFFEuLL);
                    if ( (v47 & 1) != 0 )
                    {
                      if ( *v48 == 1 || *v48 == 3 || *v48 == 6 )
                        goto LABEL_28;
                    }
                    else if ( KeInvalidAccessAllowed(v47, 0) )
                    {
                      goto LABEL_28;
                    }
                    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0LL);
                    goto LABEL_28;
                  }
                  if ( v28 != 768 )
                  {
                    if ( v28 != 992 || (v41 = a1[2], (v41 & 1) != 0) && *(_BYTE *)(v41 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
                    {
LABEL_38:
                      if ( (a1[1] & 2) == 0 || v27 || (((unsigned __int8)v25 >> 5) & 4) != 0 )
                      {
                        a1[13] = v27;
                        return 3221225494LL;
                      }
                      if ( (a1[10] & 0x40) != 0 )
                        goto LABEL_28;
                      v49 = a1[2];
                      v50 = (_BYTE *)(v49 & 0xFFFFFFFFFFFFFFFEuLL);
                      if ( (v49 & 1) != 0 )
                      {
                        if ( *v50 == 1 || *v50 == 3 || *v50 == 6 )
                          goto LABEL_28;
                      }
                      else if ( KeInvalidAccessAllowed(v49, 0) )
                      {
                        goto LABEL_28;
                      }
                      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                        KeBugCheckEx(0xBEu, *a1, v25, a1[2], 0xEuLL);
                      goto LABEL_28;
                    }
                  }
                  if ( (a1[10] & 0x40) == 0 )
                  {
                    v42 = a1[2];
                    v43 = (_BYTE *)(v42 & 0xFFFFFFFFFFFFFFFEuLL);
                    if ( (v42 & 1) != 0 )
                    {
                      if ( *v43 == 1 || *v43 == 6 || *v43 == 3 )
                        goto LABEL_94;
                    }
                    else if ( KeInvalidAccessAllowed(v42, 0) )
                    {
                      goto LABEL_94;
                    }
                    if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                      KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 1uLL);
                  }
LABEL_94:
                  if ( (v25 & 0x3E0) == 0x300 )
                    goto LABEL_28;
                  v44 = a1[2];
                  if ( (v44 & 1) == 0 || *(_BYTE *)(v44 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
                    goto LABEL_28;
                  goto LABEL_38;
                }
                if ( (v25 & 0x80u) != 0LL )
                {
                  v46 = *a1;
                  if ( *a1 >= 0xFFFFF68000000000uLL && v46 <= 0xFFFFF6FFFFFFFFFFuLL )
                  {
                    if ( (v52 & 2) != 0 )
                      KeBugCheckEx(0x50u, v46, a1[1], a1[2], 8uLL);
                    goto LABEL_28;
                  }
                }
                v36 = a1[2];
                if ( (v36 & 1) != 0 )
                {
                  v45 = v36 & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( *(_BYTE *)v45 == 1 )
                  {
                    MiUpdatePfnForPrefetchByPte(a1[3], *(_DWORD *)(v45 + 80) & 7, 0LL);
                    goto LABEL_29;
                  }
                }
                if ( (a1[1] & 2) != 0 )
                {
                  if ( (v25 & 0x800) == 0 )
                  {
                    if ( (v25 & 0x200) == 0 && (a1[10] & 0x40) == 0 )
                    {
                      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
                        KeBugCheckEx(0xBEu, *a1, v25, a1[2], 0xBuLL);
                      goto LABEL_28;
                    }
                    v37 = MiCopyOnWrite(*a1, (ULONG_PTR)v24, 0LL);
                    MiUnlockSystemVa((__int64)v51);
                    if ( v37 < 0 )
                      MiCopyOnWriteCheckConditions(v21, (unsigned int)v37, 0LL);
                    return 0LL;
                  }
                }
                else
                {
                  MiCheckSystemNxFault(a1, *v24, 2LL);
                }
                MiNoFaultFound((__int64)a1, v24, *a1, a1[2], 1u, v25);
                goto LABEL_29;
              }
              MiUnlockSystemVa((__int64)v51);
              return 0LL;
            }
            MiUnlockSystemVa((__int64)v51);
          }
          LOBYTE(v14) = v52;
LABEL_104:
          if ( (v14 & 2) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 2uLL);
        }
      }
    }
  }
  return 3221225477LL;
}
