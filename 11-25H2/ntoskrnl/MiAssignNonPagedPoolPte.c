/*
 * XREFs of MiAssignNonPagedPoolPte @ 0x1402C3250
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x1402C2F60 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiUserPdeOrAbove @ 0x14020F170 (MiUserPdeOrAbove.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiGetContainingPageTable @ 0x1402C3750 (MiGetContainingPageTable.c)
 *     MiIsAddressGlobal @ 0x1402C3B60 (MiIsAddressGlobal.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCheckLinearProtectedPteAccessedBit @ 0x14037CB60 (MiCheckLinearProtectedPteAccessedBit.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r8
  __int64 ContainingPageTable; // r9
  __int64 v7; // rdi
  __int64 v8; // r15
  unsigned __int64 v9; // rbx
  __int64 v10; // r10
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  unsigned int v20; // r15d
  __int64 v21; // rax
  bool v22; // zf
  unsigned __int64 v23; // rbp
  signed __int64 v24; // rdx
  volatile signed __int64 *v25; // rdi
  unsigned __int64 v26; // rcx
  signed __int64 v27; // r8
  unsigned int v28; // esi
  ULONG_PTR v29; // rsi
  __int64 v30; // rbx
  int v32; // eax
  unsigned int v33; // [rsp+60h] [rbp+8h]
  unsigned __int64 v34; // [rsp+68h] [rbp+10h]
  int v35; // [rsp+68h] [rbp+10h]
  int v36; // [rsp+68h] [rbp+10h]
  __int64 v37; // [rsp+70h] [rbp+18h]

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ContainingPageTable = MiGetContainingPageTable(v4);
  v37 = ContainingPageTable;
  v7 = 128LL;
  if ( qword_140E2D940 )
  {
    if ( (qword_140E2D940 & 0x80) != 0 )
      v7 = 144LL;
    else
      v7 = qword_140E2D940 | 0x80;
  }
  v8 = (*(unsigned __int16 *)(a1 + 100) >> 3) & 0x1F;
  v9 = MmProtectToPteMask[v8] & 0xFFF0000000000E5EuLL | 0x21;
  v10 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v15 = 256LL;
    v16 = MmProtectToPteMask[v8] & 0xFFF0000000000E5EuLL | 0x121;
  }
  else
  {
    if ( v4 >= 0xFFFFF6FB40000000uLL && v4 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v9 = MmProtectToPteMask[v8] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
      if ( v4 != 0xFFFFF6FB7DBEDF68uLL )
        v9 = MmProtectToPteMask[v8] & 0x7FF0000000000E5ELL | 0x21;
      v32 = MiUserPdeOrAbove(v4);
      ContainingPageTable = v37;
      if ( v32 )
        v9 |= 4uLL;
    }
    v11 = v9 | 4;
    v12 = (__int64)(v4 << 25) >> 16;
    if ( v12 > 0x7FFFFFFEFFFFLL )
      v11 = v9;
    IsAddressGlobal = MiIsAddressGlobal(v12, v11, v5, ContainingPageTable);
    v15 = 256LL;
    v16 = v14 | 0x100;
    if ( !IsAddressGlobal )
      v16 = v14;
  }
  v17 = v16 | 0x42;
  if ( (v8 & 5) != 4 )
    v17 = v16;
  v18 = (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EB44 << 8) ^ v17) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  v34 = v18;
  if ( (*(_WORD *)(a1 + 100) & 0x100) != 0 )
  {
    v33 = 1;
    v20 = 0;
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * ((a2 - *(_QWORD *)a1) >> 12));
  }
  else
  {
    v19 = *(_QWORD *)(a1 + 16);
    v20 = 0;
    if ( v19 )
    {
      v21 = *(_QWORD *)v19;
      v22 = (*(_QWORD *)(a1 + 32))-- == 1LL;
      *(_QWORD *)(a1 + 16) = v21;
      if ( v22 )
        *(_QWORD *)(a1 + 24) = 0LL;
    }
    v23 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v19 + 0x220000000000LL) >> 4);
    if ( (*(_BYTE *)(v19 + 35) & 0x10) != 0 )
    {
      v33 = 0;
    }
    else
    {
      *(_QWORD *)(v19 + 16) = v7;
      v33 = 1;
      *(_QWORD *)(v19 + 40) &= v10;
    }
    v24 = *(_QWORD *)(v19 + 40);
    v25 = (volatile signed __int64 *)(v19 + 40);
    v26 = ContainingPageTable ^ (ContainingPageTable ^ v24) & 0xFFFFFF0000000000uLL;
    v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 40), v26, v24);
    if ( v24 != v27 )
    {
      do
      {
        v26 = v27;
        v27 = _InterlockedCompareExchange64(
                v25,
                ContainingPageTable ^ (ContainingPageTable ^ v27) & 0xFFFFFF0000000000uLL,
                v27);
      }
      while ( v26 != v27 );
    }
    v28 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v28 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26) )
        {
          HvlNotifyLongSpinWait(v28);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v19 + 24) < 0 );
    }
    v18 = v34;
    *(_QWORD *)(v19 + 40) = *v25 & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v19 = 0LL;
    if ( (HIWORD(*(_DWORD *)(v19 + 32)) & 0xC0) != 0x40 )
      MiChangePageAttribute(v19, 1);
    v15 = 0xC000000000000001uLL;
    *(_QWORD *)(v19 + 24) = *(_QWORD *)(v19 + 24) & 0xC000000000000000uLL | 1;
    HIWORD(v35) = HIWORD(*(_DWORD *)(v19 + 32));
    LOWORD(v35) = 1;
    *(_DWORD *)(v19 + 32) = v35;
    *(_QWORD *)(v19 + 8) = v4;
    v36 = *(_DWORD *)(v19 + 32);
    BYTE2(v36) = BYTE2(v36) & 0xF8 | 6;
    *(_DWORD *)(v19 + 32) = v36;
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ContainingPageTable = v37;
  }
  v29 = (v23 << 12) ^ ((v23 << 12) ^ v18) & 0xFFF0000000000FFFuLL;
  if ( _bittest64(&MiFlags, 0x24u) )
  {
    if ( (v29 & 0x20) == 0 )
    {
      v15 = 0x4000000000LL;
      if ( v4 >= 0xFFFFF6C000000000uLL )
      {
        MiCheckLinearProtectedPteAccessedBit(v4, v29);
        ContainingPageTable = v37;
      }
    }
  }
  *(_QWORD *)v4 = v29;
  v30 = 48 * ContainingPageTable - 0x220000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v30 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v20 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
      {
        HvlNotifyLongSpinWait(v20);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v30 + 24) < 0 );
  }
  *(_QWORD *)(v30 + 24) = (*(_QWORD *)(v30 + 24) + 1LL) ^ (*(_QWORD *)(v30 + 24) ^ (*(_QWORD *)(v30 + 24) + 1LL)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v30 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v33;
}
