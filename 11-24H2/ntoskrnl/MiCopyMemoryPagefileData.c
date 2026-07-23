/*
 * XREFs of MiCopyMemoryPagefileData @ 0x14068F450
 * Callers:
 *     MiTransferMemoryPagefileData @ 0x1404CAFB0 (MiTransferMemoryPagefileData.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiMakeValidPte @ 0x140212550 (MiMakeValidPte.c)
 *     MiReturnPteMappingSet @ 0x1402532A0 (MiReturnPteMappingSet.c)
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiGetPteMappingSet @ 0x140335DF0 (MiGetPteMappingSet.c)
 *     MiMakeProtectionPfnCompatible @ 0x1403F26B0 (MiMakeProtectionPfnCompatible.c)
 *     KeCopyPage @ 0x1406B43B0 (KeCopyPage.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

struct _KPRCB *__fastcall MiCopyMemoryPagefileData(struct _KPRCB *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v7; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  ULONG_PTR ValidPte; // rbx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  struct _KPRCB *result; // rax
  int v15; // ebx
  __int64 v16; // rbp
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  int v19; // ecx
  int ProtectionPfnCompatible; // eax
  __int64 v21; // r9
  ULONG_PTR v22; // rax
  ULONG_PTR v23; // rbx
  unsigned __int64 v24; // rdi
  int v25; // eax
  ULONG_PTR v26; // rax
  ULONG_PTR v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  char v31; // [rsp+20h] [rbp-68h]
  struct _KPRCB *v32; // [rsp+30h] [rbp-58h]
  __int128 v33; // [rsp+48h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-30h]
  unsigned int v36; // [rsp+98h] [rbp+10h]

  v7 = a2;
  v33 = 0LL;
  BugCheckParameter2 = 0LL;
  if ( a2 && (v9 = MiReservePtes((__int64)&qword_140E376A8, a4), (v10 = v9) != 0) )
  {
    ValidPte = MiMakeValidPte(v9, -1LL, (a5 != 0 ? 1 : 4) | 0xA0000000);
    v12 = (_QWORD *)v10;
    if ( v10 < v10 + 8 * a4 )
    {
      do
      {
        ValidPte = (a3 << 12) ^ ((a3 << 12) ^ ValidPte) & 0xFFF0000000000FFFuLL;
        if ( (MiFlags & 0x1000000000LL) != 0 && (ValidPte & 0x20) == 0 && (unsigned __int64)v12 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v12, ValidPte, 128LL);
        *v12 = ValidPte;
        ++a3;
        ++v12;
      }
      while ( (unsigned __int64)v12 < v10 + 8 * a4 );
      v7 = a2;
    }
    if ( a5 )
    {
      v13 = (__int64)(v10 << 25) >> 16;
    }
    else
    {
      v13 = v7;
      v7 = (__int64)(v10 << 25) >> 16;
    }
    memmove((void *)v7, (const void *)v13, a4 << 12);
    return (struct _KPRCB *)MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)v10, a4);
  }
  else
  {
    result = (struct _KPRCB *)((char *)a1 + 8 * a4);
    v32 = result;
    if ( a1 < result )
    {
      v15 = a5 != 0 ? 4 : 1;
      v31 = v15;
      v16 = 48 * a3 - 0x220000000000LL;
      do
      {
        MiGetPteMappingSet(0, 2LL, (__int64)&v33);
        v17 = (_QWORD *)BugCheckParameter2;
        v18 = 48LL * *(_QWORD *)&a1->MxCsr - 0x220000000000LL;
        v19 = 1;
        if ( (HIWORD(*(_DWORD *)(v18 + 32)) & 0xC0) != 0x40 )
          v19 = -1;
        v36 = v19;
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v15, v18);
        v22 = MiMakeValidPte((unsigned __int64)v17, v21, ProtectionPfnCompatible | 0xA0000000);
        v23 = v22;
        if ( _bittest64(&MiFlags, 0x24u) && (v22 & 0x20) == 0 && (unsigned __int64)v17 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit((ULONG_PTR)v17, v22, 128LL);
        *v17 = v23;
        v24 = (unsigned __int64)(v17 + 1);
        v25 = MiMakeProtectionPfnCompatible(a5 != 0 ? 1 : 4, v16);
        v26 = MiMakeValidPte(v24, a3, v25 | 0xA0000000);
        v27 = v26;
        if ( _bittest64(&MiFlags, 0x24u) && (v26 & 0x20) == 0 && v24 >= 0xFFFFF6C000000000uLL )
          MiCheckLinearProtectedPteAccessedBit(v24, v26, 128LL);
        *(_QWORD *)v24 = v27;
        v28 = (__int64)((v24 - 8) << 25) >> 16;
        v29 = (__int64)(v24 << 25) >> 16;
        v30 = v29;
        if ( !a5 )
        {
          v30 = v28;
          v28 = v29;
        }
        KeCopyPage(v28, v30, v36);
        *(_QWORD *)BugCheckParameter2 = CLFS_LSN_NULL_EXT;
        *(_QWORD *)(BugCheckParameter2 + 8) = CLFS_LSN_NULL_EXT;
        result = MiReturnPteMappingSet((__int64)&v33);
        LOBYTE(v15) = v31;
        a1 = (struct _KPRCB *)((char *)a1 + 8);
        ++a3;
        v16 += 48LL;
      }
      while ( a1 < v32 );
    }
  }
  return result;
}
