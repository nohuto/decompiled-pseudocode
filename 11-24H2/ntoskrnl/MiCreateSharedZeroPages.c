/*
 * XREFs of MiCreateSharedZeroPages @ 0x140342A48
 * Callers:
 *     MiResolveDemandZeroFault @ 0x140342E30 (MiResolveDemandZeroFault.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiLockAndDecrementShareCount @ 0x14021D444 (MiLockAndDecrementShareCount.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInitializePfn @ 0x14024B260 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x140253A30 (MiProtectionToCacheAttribute.c)
 *     MiSharedVaToPartition @ 0x140307460 (MiSharedVaToPartition.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiAdvanceFaultList @ 0x140342110 (MiAdvanceFaultList.c)
 *     MiInitializePageColorBase @ 0x140342940 (MiInitializePageColorBase.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     MiGetClusterPage @ 0x1404CBFA4 (MiGetClusterPage.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiCreateSharedZeroPages(__int64 a1, __int64 *a2)
{
  _KPROCESS *v2; // r12
  __int64 v4; // rcx
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r9
  ULONG *v10; // rax
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // rdx
  bool v18; // zf
  __int16 v19; // di
  unsigned __int64 i; // r15
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rbx
  ULONG_PTR ValidPte; // rax
  __int64 v25; // r8
  __int64 v26; // r9
  ULONG_PTR v27; // rbx
  unsigned __int64 v29; // rax
  int ClusterPage; // eax
  unsigned int v31; // eax
  __int128 v32; // [rsp+40h] [rbp-69h] BYREF
  __int64 v33; // [rsp+50h] [rbp-59h]
  ULONG *v34; // [rsp+60h] [rbp-49h] BYREF
  __int64 v35; // [rsp+68h] [rbp-41h]
  unsigned __int64 v36; // [rsp+70h] [rbp-39h]
  int v37; // [rsp+78h] [rbp-31h]
  unsigned int v38; // [rsp+7Ch] [rbp-2Dh]
  int v39; // [rsp+80h] [rbp-29h]
  _BYTE v40[8]; // [rsp+88h] [rbp-21h] BYREF
  unsigned int v41; // [rsp+90h] [rbp-19h]
  __int64 v42; // [rsp+98h] [rbp-11h]
  __int64 v43; // [rsp+A0h] [rbp-9h]
  __int64 v44; // [rsp+A8h] [rbp-1h]
  __int64 v45; // [rsp+B0h] [rbp+7h]
  __int128 v46; // [rsp+B8h] [rbp+Fh]
  __int64 v47; // [rsp+C8h] [rbp+1Fh]
  __int64 v48; // [rsp+110h] [rbp+67h]
  unsigned int v49; // [rsp+110h] [rbp+67h]
  ULONG_PTR BugCheckParameter2; // [rsp+120h] [rbp+77h]
  _QWORD *v51; // [rsp+128h] [rbp+7Fh]

  v2 = *(_KPROCESS **)(a1 + 24);
  v4 = 0LL;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = (*(_QWORD *)&v2->Header.Lock >> 5) & 0x1FLL;
  v33 = 0LL;
  v48 = v6;
  v32 = 0LL;
  if ( v6 )
  {
    v29 = *(unsigned int *)(v6 + 48);
    if ( (v29 & 0x200000) == 0 && MiVadPageSizes[(v29 >> 19) & 3] == 16 )
    {
      ClusterPage = MiGetClusterPage(
                      v6,
                      v7,
                      *(_BYTE *)(*(_QWORD *)(a1 + 8) + 69LL) & 1,
                      *a2,
                      *(_DWORD *)(a1 + 32),
                      *(_DWORD *)(a1 + 36),
                      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL),
                      (__int64)&v32);
      v4 = v33;
      if ( v33 )
      {
        if ( v33 == 1 )
        {
          *a2 = 1LL;
          if ( ClusterPage )
            *(_DWORD *)a1 |= 0x10u;
          goto LABEL_8;
        }
        *a2 = 16LL;
        v31 = (unsigned int)v7 >> 12;
        v7 &= 0xFFFFFFFFFFFF0000uLL;
        *(_QWORD *)(a1 + 16) = v7;
        v2 = (_KPROCESS *)((char *)v2 - 8 * (v31 & 0xF));
      }
      else
      {
        *a2 = 1LL;
      }
    }
  }
  if ( !v4 )
  {
    memset_0(&v34, 0, 0x70uLL);
    MI_READ_PTE_LOCK_FREE(*(_QWORD *)(a1 + 24));
    v10 = MiSharedVaToPartition(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL), v7, *(__int64 **)(a1 + 24), v9);
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_DWORD *)(a1 + 48);
    v13 = *a2;
    v34 = v10;
    v14 = *(_BYTE *)(v11 + 69) & 1;
    v15 = *(_QWORD *)(v11 + 96);
    v35 = *(_QWORD *)(v11 + 56);
    v38 = v38 & 0xFFFFFFCF | (16 * v14);
    v36 = v7;
    v37 = v12;
    MiInitializePageColorBase(v35, 3, v12, (__int64)v40);
    v16 = MiProtectionToCacheAttribute(v8);
    v42 = -1LL;
    v44 = 0LL;
    v39 = 57;
    v41 = v41 & 0xFFF3FFFF | ((v16 & 3) << 18);
    v43 = v15;
    v45 = v13;
    v38 = v38 & 0xFFFFFFF0 | 9;
    v47 = 0LL;
    v46 = 0LL;
    MiGetPageChain(&v34);
    v17 = v47;
    if ( !v47 )
      return 3221225495LL;
    v18 = (_QWORD)v32 == 0LL;
    *a2 = v47;
    if ( v18 )
    {
      v33 = v47;
      v17 = v47;
      v32 = v46;
    }
    else
    {
      v33 = v17;
      **((_QWORD **)&v32 + 1) = v46;
      *((_QWORD *)&v32 + 1) = *((_QWORD *)&v46 + 1);
    }
    if ( !v17 )
      return 3221225495LL;
    v6 = v48;
  }
LABEL_8:
  v19 = 8466;
  v51 = *(_QWORD **)(a1 + 56);
  if ( v6 && (*(unsigned int *)(v6 + 52) | ((unsigned __int64)*(unsigned __int8 *)(v6 + 34) << 32)) == 0x7FFFFFFFELL )
    v19 = 8530;
  v49 = 0;
  for ( i = v7 & 0xFFFFFFFFFFFFF000uLL; v49 < (unsigned __int64)*a2; ++v49 )
  {
    v21 = v32;
    BugCheckParameter2 = v32;
    if ( (_QWORD)v32 )
    {
      *(_QWORD *)&v32 = *(_QWORD *)v32;
      *((_QWORD *)&v32 + 1) &= -(__int64)(--v33 != 0);
    }
    v22 = 0xAAAAAAAAAAAAAAABuLL * ((v21 + 0x220000000000LL) >> 4);
    if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
    {
      MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((v21 + 0x220000000000LL) >> 4));
      v21 = BugCheckParameter2;
    }
    v23 = (*(_QWORD *)&v2->Header.Lock >> 5) & 0x1FLL;
    if ( (_DWORD)v23 == 24 )
      LODWORD(v23) = 1;
    if ( (*(_DWORD *)a1 & 2) != 0 || (((_DWORD)v23 - 4) & 0xFFFFFFFD) != 0 )
      v19 |= 0x20u;
    MiInitializePfn(v21, v2, (unsigned int)v23, v19);
    ValidPte = MiMakeValidPte((unsigned __int64)v2, v22, (unsigned int)v23 | 0x20000000);
    v27 = ValidPte;
    if ( _bittest64(&MiFlags, 0x24u) && (ValidPte & 0x20) == 0 && (unsigned __int64)v2 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v2, ValidPte, 128LL);
    *(_QWORD *)&v2->Header.Lock = v27;
    if ( (*(_DWORD *)a1 & 0x10) != 0 )
      MiLockAndDecrementShareCount(BugCheckParameter2, 2LL, v25, v26);
    if ( v51 && (*(_DWORD *)a1 & 0x20) == 0 && i == *(_QWORD *)(v51[1] + 16LL * v51[3]) + (v51[4] << 12) )
      MiAdvanceFaultList(v51);
    i += 4096LL;
    v2 = (_KPROCESS *)((char *)v2 + 8);
  }
  return 273LL;
}
