/*
 * XREFs of MiReducePteUseCount @ 0x140305C80
 * Callers:
 *     MiDecommitPagesTail @ 0x14023D754 (MiDecommitPagesTail.c)
 *     MiClearDriverTablePtes @ 0x1404F0310 (MiClearDriverTablePtes.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiPteHasShadow @ 0x140307500 (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiReducePteUseCount(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  ULONG_PTR BugCheckParameter4; // rbp
  unsigned __int64 *v4; // r10
  unsigned __int64 v5; // r9
  ULONG_PTR v6; // rbx
  unsigned int v7; // esi
  unsigned int v8; // edi
  __int64 v9; // r8
  unsigned int v10; // r8d
  unsigned int v11; // r8d
  __int64 HasShadow; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // rax
  __int64 v17; // rax

  BugCheckParameter4 = (unsigned int)a3;
  v4 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *v4;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL && (v5 & 1) != 0 )
  {
    LOBYTE(a1) = (v5 & 0x42) != 0;
    if ( ((unsigned __int8)a1 & ((v5 & 0x20) != 0)) == 0 )
    {
      HasShadow = MiPteHasShadow(a1, *v4, a3, v5);
      if ( HasShadow )
      {
        v16 = *(_QWORD *)(HasShadow + 1288);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 8 * ((v15 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v14 |= 0x20uLL;
          v5 = v14 | 0x42;
          if ( (v17 & 0x42) == 0 )
            v5 = v14;
        }
      }
    }
  }
  v6 = 48 * ((v5 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v7 = 0;
  v8 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v8 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v8);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( *(__int64 *)(v6 + 24) < 0 );
  }
  if ( (*(_DWORD *)(v6 + 36) & 0x4000000) != 0 )
    v9 = HIDWORD(*(_QWORD *)v6);
  else
    v9 = *(_QWORD *)(v6 + 16) >> 16;
  v10 = v9 & 0x3FF;
  if ( v10 < (unsigned int)BugCheckParameter4 )
    KeBugCheckEx(0x1Au, 0x41790uLL, v6, v10, BugCheckParameter4);
  v11 = v10 - BugCheckParameter4;
  if ( (*(_DWORD *)(v6 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v6 = ((unsigned __int64)v11 << 32) ^ (*(_QWORD *)v6 ^ ((unsigned __int64)v11 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  else
    *(_QWORD *)(v6 + 16) = ((unsigned __int64)v11 << 16) ^ (*(_QWORD *)(v6 + 16) ^ ((unsigned __int64)v11 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v7) = v11 == 0;
  return v7;
}
