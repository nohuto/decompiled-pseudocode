/*
 * XREFs of MiCreateSharedZeroPages @ 0x1402EED80
 * Callers:
 *     MiResolveDemandZeroFault @ 0x1402FC600 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiSharedVaToPartition @ 0x140214100 (MiSharedVaToPartition.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021A250 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializePfn @ 0x14021E510 (MiInitializePfn.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140232A20 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x1402383C0 (MiMakeValidPte.c)
 *     MiAdvanceFaultList @ 0x1402E5FE0 (MiAdvanceFaultList.c)
 *     MiProtectionToCacheAttribute @ 0x1402EF870 (MiProtectionToCacheAttribute.c)
 *     MiInitializePageColorBase @ 0x1402EF8B0 (MiInitializePageColorBase.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiLockAndDecrementShareCount @ 0x14039EFA4 (MiLockAndDecrementShareCount.c)
 *     MiArePageContentsZero @ 0x1404CA060 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x1404D2DE4 (MiGetClusterPage.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(__int64 a1, __int64 *a2)
{
  __int64 *v2; // r12
  __int64 v4; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  ULONG *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  int v13; // r9d
  __int64 v14; // rdi
  char v15; // al
  __int64 v16; // rdx
  bool v17; // zf
  __int16 v18; // di
  unsigned __int64 i; // r15
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rbx
  ULONG_PTR ValidPte; // rax
  ULONG_PTR v24; // rbx
  unsigned __int64 v26; // rax
  int ClusterPage; // eax
  unsigned int v28; // eax
  __int128 v29; // [rsp+40h] [rbp-69h] BYREF
  __int64 v30; // [rsp+50h] [rbp-59h]
  ULONG *v31; // [rsp+60h] [rbp-49h] BYREF
  __int64 v32; // [rsp+68h] [rbp-41h]
  unsigned __int64 v33; // [rsp+70h] [rbp-39h]
  int v34; // [rsp+78h] [rbp-31h]
  unsigned int v35; // [rsp+7Ch] [rbp-2Dh]
  int v36; // [rsp+80h] [rbp-29h]
  _BYTE v37[8]; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v38; // [rsp+90h] [rbp-19h]
  __int64 v39; // [rsp+98h] [rbp-11h]
  __int64 v40; // [rsp+A0h] [rbp-9h]
  __int64 v41; // [rsp+A8h] [rbp-1h]
  __int64 v42; // [rsp+B0h] [rbp+7h]
  __int128 v43; // [rsp+B8h] [rbp+Fh]
  __int64 v44; // [rsp+C8h] [rbp+1Fh]
  __int64 v45; // [rsp+110h] [rbp+67h]
  unsigned int v46; // [rsp+110h] [rbp+67h]
  ULONG_PTR BugCheckParameter2; // [rsp+120h] [rbp+77h]
  _QWORD *v48; // [rsp+128h] [rbp+7Fh]

  v2 = *(__int64 **)(a1 + 24);
  v4 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = ((unsigned __int64)*v2 >> 5) & 0x1F;
  v30 = 0LL;
  v45 = v6;
  v29 = 0LL;
  if ( v6 )
  {
    v26 = *(unsigned int *)(v6 + 48);
    if ( (v26 & 0x200000) == 0 && MiVadPageSizes[(v26 >> 19) & 3] == 16 )
    {
      ClusterPage = MiGetClusterPage(
                      v6,
                      v7,
                      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 69LL) & 1,
                      *a2,
                      *(_DWORD *)(a1 + 32),
                      *(_DWORD *)(a1 + 36),
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
                      (__int64)&v29);
      v4 = v30;
      if ( v30 )
      {
        if ( v30 == 1 )
        {
          *a2 = 1LL;
          if ( ClusterPage )
            *(_DWORD *)a1 |= 0x10u;
          goto LABEL_8;
        }
        *a2 = 16LL;
        v28 = (unsigned int)v7 >> 12;
        v7 &= 0xFFFFFFFFFFFF0000uLL;
        *(_QWORD *)(a1 + 16) = v7;
        v2 -= v28 & 0xF;
      }
      else
      {
        *a2 = 1LL;
      }
    }
  }
  if ( !v4 )
  {
    memset_0(&v31, 0, 0x70uLL);
    MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 24));
    v9 = MiSharedVaToPartition(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), v7, *(__int64 **)(a1 + 24));
    v10 = *(_QWORD *)(a1 + 8);
    v11 = *(unsigned int *)(a1 + 48);
    v12 = *a2;
    v31 = v9;
    v13 = *(_BYTE *)(v10 + 69) & 1;
    v14 = *(_QWORD *)(v10 + 96);
    v32 = *(_QWORD *)(v10 + 56);
    v35 = v35 & 0xFFFFFFCF | (16 * v13);
    v33 = v7;
    v34 = v11;
    MiInitializePageColorBase(v32, 3LL, v11, v37);
    v15 = MiProtectionToCacheAttribute((unsigned int)v8);
    v39 = -1LL;
    v41 = 0LL;
    v36 = 57;
    v38 = v38 & 0xFFF3FFFF | ((v15 & 3) << 18);
    v40 = v14;
    v42 = v12;
    v35 = v35 & 0xFFFFFFF0 | 9;
    v44 = 0LL;
    v43 = 0LL;
    MiGetPageChain(&v31);
    v16 = v44;
    if ( !v44 )
      return 3221225495LL;
    v17 = (_QWORD)v29 == 0LL;
    *a2 = v44;
    if ( v17 )
    {
      v30 = v44;
      v16 = v44;
      v29 = v43;
    }
    else
    {
      v30 = v16;
      **((_QWORD **)&v29 + 1) = v43;
      *((_QWORD *)&v29 + 1) = *((_QWORD *)&v43 + 1);
    }
    if ( !v16 )
      return 3221225495LL;
    v6 = v45;
  }
LABEL_8:
  v18 = 8466;
  v48 = *(_QWORD **)(a1 + 56);
  if ( v6 && (*(unsigned int *)(v6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32)) == 0x7FFFFFFFELL )
    v18 = 8530;
  v46 = 0;
  for ( i = v7 & 0xFFFFFFFFFFFFF000uLL; v46 < (unsigned __int64)*a2; ++v46 )
  {
    v20 = v29;
    BugCheckParameter2 = v29;
    if ( (_QWORD)v29 )
    {
      *(_QWORD *)&v29 = *(_QWORD *)v29;
      *((_QWORD *)&v29 + 1) &= -(__int64)(--v30 != 0);
    }
    v21 = 0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4);
    if ( (MiFlags & 0x80u) != 0LL && (++dword_140E30170 & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((v20 + 0x220000000000LL) >> 4));
      v20 = BugCheckParameter2;
    }
    v22 = ((unsigned __int64)*v2 >> 5) & 0x1F;
    if ( (_DWORD)v22 == 24 )
      LODWORD(v22) = 1;
    if ( (*(_DWORD *)a1 & 2) != 0 || (((_DWORD)v22 - 4) & 0xFFFFFFFD) != 0 )
      v18 |= 0x20u;
    MiInitializePfn(v20, v2, v22, v18);
    ValidPte = MiMakeValidPte((unsigned __int64)v2, v21, (unsigned int)v22 | 0x20000000);
    v24 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v2 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v2, ValidPte, 128);
    *v2 = v24;
    if ( (*(_DWORD *)a1 & 0x10) != 0 )
      MiLockAndDecrementShareCount(BugCheckParameter2);
    if ( v48 && (*(_DWORD *)a1 & 0x20) == 0 && i == *(_QWORD *)(v48[1] + 16LL * v48[3]) + (v48[4] << 12) )
      MiAdvanceFaultList(v48);
    i += 4096LL;
    ++v2;
  }
  return 273LL;
}
