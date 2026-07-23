/*
 * XREFs of MiAssignNonPagedPoolPte @ 0x14034CC00
 * Callers:
 *     MiFillPoolCommitPageTable @ 0x14034C910 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiCheckLinearProtectedPteAccessedBit @ 0x140203550 (MiCheckLinearProtectedPteAccessedBit.c)
 *     MiUserPdeOrAbove @ 0x1402127C8 (MiUserPdeOrAbove.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetContainingPageTable @ 0x14034E470 (MiGetContainingPageTable.c)
 *     MiIsAddressGlobal @ 0x14034E540 (MiIsAddressGlobal.c)
 */

__int64 __fastcall MiAssignNonPagedPoolPte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r8
  __int64 ContainingPageTable; // r9
  __int64 v7; // rdi
  __int64 v8; // rsi
  signed int v9; // r15d
  unsigned __int64 v10; // rbx
  __int64 v11; // r10
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  int IsAddressGlobal; // eax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbx
  bool v17; // cl
  __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  unsigned int v21; // r15d
  __int64 v22; // rax
  bool v23; // zf
  unsigned __int64 v24; // rbp
  volatile signed __int64 *v25; // rdi
  signed __int64 v26; // rcx
  signed __int64 v27; // rax
  signed __int64 v28; // rcx
  unsigned int v29; // r12d
  unsigned __int64 v30; // rbp
  __int64 v31; // rbx
  int v33; // eax
  unsigned int v34; // [rsp+60h] [rbp+8h]
  int v35; // [rsp+68h] [rbp+10h]
  int v36; // [rsp+68h] [rbp+10h]
  __int64 v37; // [rsp+70h] [rbp+18h]

  v4 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  ContainingPageTable = MiGetContainingPageTable(v4);
  v37 = ContainingPageTable;
  v7 = 128LL;
  if ( qword_140E2DCC0 )
  {
    if ( (qword_140E2DCC0 & 0x80) != 0 )
      v7 = 144LL;
    else
      v7 = qword_140E2DCC0 | 0x80;
  }
  v8 = (*(unsigned __int16 *)(a1 + 100) >> 3) & 0x1F;
  v9 = (*(unsigned __int16 *)(a1 + 100) >> 3) & 0x1F | 0xA0000000;
  v10 = MmProtectToPteMask[v8] & 0xFFF0000000000E5EuLL | 0x21;
  v11 = 0x7FFFFFFFFFFFFFFFLL;
  if ( v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v16 = MmProtectToPteMask[v8] & 0xFFF0000000000E5EuLL | 0x121;
  }
  else
  {
    if ( v4 >= 0xFFFFF6FB40000000uLL && v4 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      v10 = MmProtectToPteMask[v8] & 0x7FF0000000000E5ELL | 0x8000000000000021uLL;
      if ( v4 != 0xFFFFF6FB7DBEDF68uLL )
        v10 = MmProtectToPteMask[v8] & 0x7FF0000000000E5ELL | 0x21;
      v33 = MiUserPdeOrAbove(v4);
      ContainingPageTable = v37;
      if ( v33 )
        v10 |= 4uLL;
    }
    v12 = v10 | 4;
    v13 = (__int64)(v4 << 25) >> 16;
    if ( v13 > 0x7FFFFFFEFFFFLL )
      v12 = v10;
    IsAddressGlobal = MiIsAddressGlobal(v13, v12, v5, ContainingPageTable);
    v16 = v15 | 0x100;
    if ( !IsAddressGlobal )
      v16 = v15;
  }
  v17 = (v8 & 5) == 4;
  v18 = v16 | 0x42;
  if ( !v17 || v9 >= 0 )
    v18 = v16;
  v19 = (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ (((unsigned __int64)(unsigned __int8)word_140E2EEC4 << 8) ^ v18) & 0xFFFFFFFFFFFFFEFFuLL) & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( (*(_WORD *)(a1 + 100) & 0x100) != 0 )
  {
    v34 = 1;
    v21 = 0;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * ((a2 - *(_QWORD *)a1) >> 12));
  }
  else
  {
    v20 = *(_QWORD *)(a1 + 16);
    v21 = 0;
    if ( v20 )
    {
      v22 = *(_QWORD *)v20;
      v23 = (*(_QWORD *)(a1 + 32))-- == 1LL;
      *(_QWORD *)(a1 + 16) = v22;
      if ( v23 )
        *(_QWORD *)(a1 + 24) = 0LL;
    }
    v24 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v20 + 0x220000000000LL) >> 4);
    if ( (*(_BYTE *)(v20 + 35) & 0x10) != 0 )
    {
      v34 = 0;
    }
    else
    {
      *(_QWORD *)(v20 + 16) = v7;
      v34 = 1;
      *(_QWORD *)(v20 + 40) &= v11;
    }
    v25 = (volatile signed __int64 *)(v20 + 40);
    v26 = *(_QWORD *)(v20 + 40);
    v27 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)(v20 + 40),
            ContainingPageTable ^ (ContainingPageTable ^ v26) & 0xFFFFFF0000000000uLL,
            v26);
    if ( v26 != v27 )
    {
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange64(
                v25,
                ContainingPageTable ^ (ContainingPageTable ^ v27) & 0xFFFFFF0000000000uLL,
                v27);
      }
      while ( v28 != v27 );
    }
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v29 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v29);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v20 + 24) < 0 );
    }
    *(_QWORD *)(v20 + 40) = *v25 & 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)v20 = 0LL;
    if ( (HIWORD(*(_DWORD *)(v20 + 32)) & 0xC0) != 0x40 )
      MiChangePageAttribute(v20, 1u);
    *(_QWORD *)(v20 + 24) = *(_QWORD *)(v20 + 24) & 0xC000000000000000uLL | 1;
    HIWORD(v35) = HIWORD(*(_DWORD *)(v20 + 32));
    LOWORD(v35) = 1;
    *(_DWORD *)(v20 + 32) = v35;
    *(_QWORD *)(v20 + 8) = v4;
    v36 = *(_DWORD *)(v20 + 32);
    BYTE2(v36) = BYTE2(v36) & 0xF8 | 6;
    *(_DWORD *)(v20 + 32) = v36;
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ContainingPageTable = v37;
  }
  v30 = v24 << 12;
  if ( _bittest64(&MiFlags, 0x24u) && (v19 & 0x20) == 0 && v4 >= 0xFFFFF6C000000000uLL )
  {
    MiCheckLinearProtectedPteAccessedBit(v4, v30 ^ (v19 ^ v30) & 0xFFF0000000000FFFuLL, 128LL);
    ContainingPageTable = v37;
  }
  *(_QWORD *)v4 = v30 ^ (v19 ^ v30) & 0xFFF0000000000FFFuLL;
  v31 = 48 * ContainingPageTable - 0x220000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v31 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v21 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v21);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v31 + 24) < 0 );
  }
  *(_QWORD *)(v31 + 24) = (*(_QWORD *)(v31 + 24) + 1LL) ^ ((*(_QWORD *)(v31 + 24) + 1LL) ^ *(_QWORD *)(v31 + 24)) & 0xC000000000000000uLL;
  _InterlockedAnd64((volatile signed __int64 *)(v31 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v34;
}
