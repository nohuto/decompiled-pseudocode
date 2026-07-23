/*
 * XREFs of MiUnlinkTransitionSlabPages @ 0x14043C5B4
 * Callers:
 *     MiDemoteSlabEntry @ 0x14043BE9C (MiDemoteSlabEntry.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x140688670 (MiDeleteSlabEntriesForIdentity.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiUnlinkPageFromListEx @ 0x14033B030 (MiUnlinkPageFromListEx.c)
 */

unsigned __int64 __fastcall MiUnlinkTransitionSlabPages(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  unsigned int v3; // r14d
  unsigned __int64 v4; // r15
  unsigned int v5; // r11d
  __int64 v6; // rdi
  unsigned int v7; // r10d
  unsigned __int64 v8; // rbx
  unsigned int *v9; // r8
  unsigned int v10; // edx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r9d
  int v14; // edx
  unsigned int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // r10d
  unsigned __int64 *v18; // rdi
  unsigned __int64 *v19; // rbp
  volatile signed __int32 *v20; // rbx
  unsigned int v21; // esi

  v2 = a2;
  v3 = 0;
  v4 = 0x3FFFFFFFFFLL;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v2 + 64);
    if ( v5 <= v3 )
      return v4;
    v6 = *(_QWORD *)(v2 + 72);
    v7 = 0;
    v8 = v6 + 4 * ((unsigned __int64)(v5 - 1) >> 5);
    v9 = (unsigned int *)(v6 + 4 * ((unsigned __int64)v3 >> 5));
    v10 = (-1 << (v3 & 0x1F)) & *v9;
    v11 = v9 + 1;
    while ( !v10 )
    {
      if ( (unsigned __int64)v11 > v8 )
        goto LABEL_8;
      ++v9;
      ++v11;
      v10 = *v9;
    }
    _BitScanForward64((unsigned __int64 *)&v12, v10);
    v13 = v12 + 32 * (((__int64)v9 - v6) >> 2);
    if ( v13 > v5 )
    {
LABEL_8:
      v13 = *(_DWORD *)(v2 + 64);
      goto LABEL_18;
    }
    v14 = ((1 << v12) - 1) | v10;
    while ( 1 )
    {
      v15 = ~v14;
      if ( v15 )
        break;
      if ( (unsigned __int64)(v9 + 1) > v8 )
      {
        LODWORD(v16) = 32;
        goto LABEL_15;
      }
      v14 = v9[1];
      ++v9;
    }
    _BitScanForward64((unsigned __int64 *)&v16, v15);
LABEL_15:
    v17 = v16 + 32 * (((__int64)v9 - v6) >> 2);
    if ( v17 > v5 )
      v17 = *(_DWORD *)(v2 + 64);
    v7 = v17 - v13;
LABEL_18:
    if ( !v7 )
      return v4;
    v3 = v7 + v13;
    v18 = (unsigned __int64 *)(48 * (*(_QWORD *)(v2 + 40) + v13) - 0x220000000000LL);
    v19 = &v18[6 * v7];
    if ( v18 < v19 )
    {
      v20 = (volatile signed __int32 *)(v18 + 3);
      do
      {
        v21 = 0;
        if ( v4 == 0x3FFFFFFFFFLL )
        {
          while ( _interlockedbittestandset64(v20, 0x3FuLL) )
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
            while ( *(__int64 *)v20 < 0 );
          }
        }
        else
        {
          while ( _interlockedbittestandset64(v20, 0x3FuLL) )
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
            while ( *(__int64 *)v20 < 0 );
          }
        }
        if ( (unsigned __int16)*((_DWORD *)v20 + 2) || (*((_BYTE *)v20 + 10) & 7u) > 4 )
        {
          _InterlockedAnd64((volatile signed __int64 *)v20, 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          if ( (MiUnlinkPageFromListEx((ULONG_PTR)v18, 0) & 1) != 0 )
            *(_QWORD *)v20 |= 0x4000000000000000uLL;
          *v18 = v4 ^ (v4 ^ *v18) & 0xFFFFFF0000000000uLL;
          v4 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v20 + 0x87FFFFFFFFALL) >> 4);
        }
        v18 += 6;
        v20 += 12;
      }
      while ( v18 < v19 );
      v2 = a2;
    }
  }
}
