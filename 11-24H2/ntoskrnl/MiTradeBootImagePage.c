/*
 * XREFs of MiTradeBootImagePage @ 0x140C5DD20
 * Callers:
 *     MiHandleBootImage @ 0x140C5D020 (MiHandleBootImage.c)
 * Callees:
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiCopyPfnEntryEx @ 0x140251B90 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 *     MiClearPfnImageVerified @ 0x1402EAB40 (MiClearPfnImageVerified.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     MiTransformValidPteUsingAccessedBit @ 0x14038D6C8 (MiTransformValidPteUsingAccessedBit.c)
 *     KeYieldProcessorEx @ 0x1403EFB70 (KeYieldProcessorEx.c)
 *     KeCopyPrivilegedPage @ 0x140486C0C (KeCopyPrivilegedPage.c)
 */

__int64 __fastcall MiTradeBootImagePage(volatile unsigned __int64 *a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  volatile unsigned __int64 v4; // rdi
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned __int8 v10; // al
  int v11; // r14d
  int valid; // edi
  __int64 v13; // r8
  __int64 v14; // r9
  _OWORD v16[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v18; // [rsp+88h] [rbp+10h]
  unsigned int v19; // [rsp+90h] [rbp+18h] BYREF

  v4 = *a1;
  v16[0] = 0LL;
  v6 = (__int64)((_QWORD)a1 << 25) >> 16;
  v7 = (v4 >> 12) & 0xFFFFFFFFFFLL;
  v8 = 48 * v7 - 0x220000000000LL;
  v9 = 48 * a2 - 0x220000000000LL;
  v10 = MiLockPageInline(v8, a2, a3, a4);
  v19 = 0;
  v18 = v10;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v19);
    while ( *(__int64 *)(v9 + 24) < 0 );
  }
  MiCopyPfnEntryEx(v9, 48 * v7 - 0x220000000000LL);
  v11 = 0;
  if ( (((unsigned __int64)MiFlags >> 14) & 1) == 0 || ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 3 )
  {
    v11 = (((unsigned __int64)MiFlags >> 14) & 1) != 0 ? 38 : 4;
    MiCopyPage(a2, (v4 >> 12) & 0xFFFFFFFFFFLL, (((unsigned __int64)MiFlags >> 14) & 1) != 0 ? 38 : 4);
    if ( (v11 & 0x20) != 0 )
    {
      valid = 1;
      goto LABEL_12;
    }
  }
  else
  {
    *(_QWORD *)&v16[0] = v6;
    KeCopyPrivilegedPage(a2, (int)v16, v4 >> 12, (int)v16, 0LL, 1);
  }
  valid = MiTransformValidPteUsingAccessedBit(
            (volatile signed __int64 *)a1,
            (unsigned __int64)a1,
            (a2 << 12) ^ (v4 ^ (a2 << 12)) & 0xFFF0000000000FFFuLL,
            0x40u,
            0);
  if ( !valid )
  {
    if ( !v11 )
    {
      v16[0] = v6;
      KeCopyPrivilegedPage(v7, (int)v16, a2, (int)v16, 0LL, 1);
    }
    v8 = v9;
    v9 = 48 * v7 - 0x220000000000LL;
  }
LABEL_12:
  *(_QWORD *)(v8 + 24) |= 0x4000000000000000uLL;
  if ( valid )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiFlushSingleTbEntry(v6, -1, 64);
    if ( (MiFlags & 0x4000) == 0 && ((*(_QWORD *)(v8 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v8, 12LL, v13, v14);
  }
  else
  {
    if ( v11 )
      MiCopyPage(v7, a2, v11);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  *(_BYTE *)(v8 + 35) &= ~8u;
  MiDecrementShareCountEx(v8, 0LL, v13, v14);
  return MiUnlockPage(v8, v18);
}
