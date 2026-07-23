/*
 * XREFs of MiGetPteFromCopyList @ 0x140252D60
 * Callers:
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiCopyFilePage @ 0x14067B820 (MiCopyFilePage.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall MiGetPteFromCopyList(unsigned int *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edx
  int v7; // r12d
  int v8; // r15d
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  char v12; // bp
  __int64 v13; // rdi
  unsigned __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  ULONG_PTR v17; // rdi
  __int64 v18; // rcx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  ULONG_PTR *v22; // rdi
  ULONG_PTR v23; // rbx
  unsigned __int64 v25; // rbx
  __int64 v26; // rax
  _BYTE v27[208]; // [rsp+30h] [rbp-118h] BYREF

  memset_0(v27, 0, 0xC8uLL);
  v6 = *a1;
  v7 = 0;
  v8 = (a3 != -1) + 1;
  v9 = 1LL;
  if ( *a1 + v8 > a1[1] )
  {
    v25 = (__int64)(*((_QWORD *)a1 + 2) << 25) >> 16;
    v26 = MiVaToFlushVm(v25);
    MiInitializeTbFlushList((__int64)v27, v26, 20, 8, 1);
    MiInsertTbFlushEntry((__int64)v27, v25, *a1, 0);
    MiFlushTbList(v27);
    v6 = 0;
  }
  v10 = *((_QWORD *)a1 + 2) + 8LL * v6;
  *a1 = v8 + v6;
  v11 = 48 * a2 - 0x220000000000LL;
  v12 = 4;
  if ( BYTE2(*(_DWORD *)(v11 + 32)) < 0x40u )
  {
    v12 = 12;
  }
  else if ( (HIWORD(*(_DWORD *)(v11 + 32)) & 0xC0) == 0x80 )
  {
    v12 = 28;
  }
  v13 = (a2 & 0xFFFFFFFFFFLL) << 12;
  v14 = v13 | MmProtectToPteMask[v12 & 0x1F] & 0xFFF0000000000E7FuLL | 0x21;
  if ( v10 >= 0xFFFFF68000000000uLL && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( v10 >= 0xFFFFF6FB40000000uLL && v10 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v14 = v10 == 0xFFFFF6FB7DBEDF68uLL
          ? v13 | MmProtectToPteMask[v12 & 0x1F] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
          : v13 & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v12 & 0x1F] & 0x7FF0000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(v10) )
        v14 |= 4uLL;
    }
    v15 = v14 | 4;
    v16 = (__int64)(v10 << 25) >> 16;
    if ( v16 > 0x7FFFFFFEFFFFLL )
      v15 = v14;
    if ( v16 < 0xFFFF800000000000uLL )
    {
      v7 = HIBYTE(word_140E2EEC4);
    }
    else if ( v16 < 0xFFFFF68000000000uLL || v16 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      if ( v16 < qword_140E2F3C0 || v16 > qword_140E2F3D0 )
        v7 = (unsigned __int8)word_140E2EEC4;
      else
        v7 = HIBYTE(word_140E2EEC4);
    }
    v14 = v15 | 0x100;
    if ( !v7 )
      v14 = v15;
  }
  v17 = (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (v14 | 0x42)) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( _bittest64(&MiFlags, 0x24u) && (v14 & 0x20) == 0 && v10 >= 0xFFFFF6C000000000uLL )
    MiCheckLinearProtectedPteAccessedBit(v10, v17, 128LL);
  *(_QWORD *)v10 = v17;
  if ( a3 != -1 )
  {
    v18 = 48 * a3 - 0x220000000000LL;
    if ( BYTE2(*(_DWORD *)(v18 + 32)) < 0x40u )
    {
      v9 = 9LL;
    }
    else if ( (HIWORD(*(_DWORD *)(v18 + 32)) & 0xC0) == 0x80 )
    {
      v9 = 25LL;
    }
    v19 = ((a3 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v9] & 0xFFF0000000000E7FuLL | 0x21;
    if ( v10 < 0xFFFFF68000000000uLL || v10 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_33;
    if ( v10 >= 0xFFFFF6FB40000000uLL && v10 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v19 = v10 == 0xFFFFF6FB7DBEDF68uLL
          ? ((a3 & 0xFFFFFFFFFFLL) << 12) | MmProtectToPteMask[v9] & 0xFFF0000000000E7FuLL | 0x8000000000000021uLL
          : ((a3 & 0xFFFFFFFFFFLL) << 12) & 0x7FFFFFFFFFFFFFFFLL | MmProtectToPteMask[v9] & 0x7FF0000000000E7FLL | 0x21;
      if ( (unsigned int)MiUserPdeOrAbove(v10) )
        v19 |= 4uLL;
    }
    v20 = (__int64)(v10 << 25) >> 16;
    if ( v20 <= 0xFFFF7FFFFFFFFFFFuLL )
    {
      v21 = v19 | 4;
      if ( v20 > 0x7FFFFFFEFFFFLL )
        v21 = v19;
      goto LABEL_28;
    }
    if ( v20 >= 0xFFFFF68000000000uLL && v20 <= 0xFFFFF6FFFFFFFFFFuLL || v20 < qword_140E2F3C0 || v20 > qword_140E2F3D0 )
LABEL_33:
      v21 = v19;
    else
      v21 = v19;
LABEL_28:
    v22 = (ULONG_PTR *)(v10 + 8);
    v23 = (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v21) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
    if ( _bittest64(&MiFlags, 0x24u) && (v23 & 0x20) == 0 && (unsigned __int64)v22 >= 0xFFFFF6C000000000uLL )
      MiCheckLinearProtectedPteAccessedBit(v10 + 8, v23, 128LL);
    *v22 = v23;
  }
  return v10;
}
