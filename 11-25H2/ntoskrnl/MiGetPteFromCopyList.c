/*
 * XREFs of MiGetPteFromCopyList @ 0x1402C7490
 * Callers:
 *     MiCopyPage @ 0x1402C6FA0 (MiCopyPage.c)
 *     MiCopyFilePage @ 0x14066EE80 (MiCopyFilePage.c)
 *     MiCopyPagesIntoEnclave @ 0x1409CB268 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 *     MiVaToFlushVm @ 0x140327844 (MiVaToFlushVm.c)
 *     MiInsertTbFlushEntry @ 0x1403278B0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiInitializeTbFlushList @ 0x140388790 (MiInitializeTbFlushList.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

unsigned __int64 __fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edx
  __int64 v7; // r12
  int v8; // r14d
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  ULONG_PTR v15; // rbx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rbx
  ULONG_PTR *v20; // rdi
  ULONG_PTR v21; // rbx
  __int64 v23; // rbx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  _BYTE v27[208]; // [rsp+30h] [rbp-118h] BYREF

  memset_0(v27, 0, 0xC8uLL);
  v6 = *a1;
  v7 = 1LL;
  v8 = (a3 != -1) + 1;
  if ( *a1 + v8 > a1[1] )
  {
    v23 = (__int64)(*((_QWORD *)a1 + 2) << 25) >> 16;
    v24 = MiVaToFlushVm(v23);
    MiInitializeTbFlushList((unsigned int)v27, v24, 20, 8, 1);
    MiInsertTbFlushEntry(v27, v23, *a1, 0LL);
    MiFlushTbList(v27, v25, v26);
    v6 = 0;
  }
  v9 = *((_QWORD *)a1 + 2) + 8LL * v6;
  *a1 = v8 + v6;
  v10 = 48 * a2 - 0x220000000000LL;
  if ( BYTE2(*(_DWORD *)(v10 + 32)) < 0x40u )
  {
    v11 = 12LL;
  }
  else
  {
    v11 = 4LL;
    if ( (HIWORD(*(_DWORD *)(v10 + 32)) & 0xC0) == 0x80 )
      v11 = 28LL;
  }
  v12 = ((a2 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v11] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
    goto LABEL_30;
  if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
  {
    if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
      v12 |= 0x8000000000000000uLL;
    else
      v12 &= ~0x8000000000000000uLL;
    if ( (unsigned int)MiUserPdeOrAbove(v9) )
      v12 |= 4uLL;
  }
  v13 = (__int64)(v9 << 25) >> 16;
  if ( v13 > 0xFFFF7FFFFFFFFFFFuLL )
  {
    if ( (v13 < 0xFFFFF68000000000uLL || v13 > 0xFFFFF6FFFFFFFFFFuLL)
      && (v13 < qword_140E2F040 || v13 > qword_140E2F050) )
    {
      v14 = v12;
      goto LABEL_12;
    }
LABEL_30:
    v14 = v12;
    goto LABEL_12;
  }
  v14 = v12 | 4;
  if ( v13 > 0x7FFFFFFEFFFFLL )
    v14 = v12;
LABEL_12:
  v15 = (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ ((v14 | 0x42) ^ ((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8)) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( _bittest64(&MiFlags, 0x24u) && (v14 & 0x20) == 0 && v9 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(v9, v15);
  *(_QWORD *)v9 = v15;
  if ( a3 != -1 )
  {
    v16 = 48 * a3 - 0x220000000000LL;
    if ( BYTE2(*(_DWORD *)(v16 + 32)) < 0x40u )
    {
      v7 = 9LL;
    }
    else if ( (HIWORD(*(_DWORD *)(v16 + 32)) & 0xC0) == 0x80 )
    {
      v7 = 25LL;
    }
    v17 = ((a3 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v7] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_26;
    if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v17 = v9 == 0xFFFFF6FB7DBEDF68uLL
          ? ((a3 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v7] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
          : ((a3 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v7] & 0x7FF0000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(v9) )
        v17 |= 4uLL;
    }
    v18 = (__int64)(v9 << 25) >> 16;
    if ( v18 > 0xFFFF7FFFFFFFFFFFuLL )
    {
LABEL_26:
      v19 = v17;
    }
    else
    {
      v19 = v17 | 4;
      if ( v18 > 0x7FFFFFFEFFFFLL )
        v19 = v17;
    }
    v20 = (ULONG_PTR *)(v9 + 8);
    v21 = (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ v19) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    if ( _bittest64(&MiFlags, 0x24u) && (v21 & 0x20) == 0 && (unsigned __int64)v20 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v9 + 8, v21);
    *v20 = v21;
  }
  return v9;
}
