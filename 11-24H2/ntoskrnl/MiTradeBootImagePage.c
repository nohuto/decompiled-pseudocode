/*
 * XREFs of MiTradeBootImagePage @ 0x140C5BB90
 * Callers:
 *     MiHandleBootImage @ 0x140C5AE90 (MiHandleBootImage.c)
 * Callees:
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiCopyPfnEntryEx @ 0x1402247E0 (MiCopyPfnEntryEx.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     MiLockPageInline @ 0x140291550 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402915F0 (MiUnlockPage.c)
 *     MiClearPfnImageVerified @ 0x14036C0C0 (MiClearPfnImageVerified.c)
 *     MiTransformValidPteUsingAccessedBit @ 0x1403940AC (MiTransformValidPteUsingAccessedBit.c)
 *     KeYieldProcessorEx @ 0x1403F9C60 (KeYieldProcessorEx.c)
 *     KeCopyPrivilegedPage @ 0x14048BE3C (KeCopyPrivilegedPage.c)
 */

__int64 __fastcall MiTradeBootImagePage(volatile unsigned __int64 *a1, ULONG_PTR a2)
{
  volatile unsigned __int64 v2; // rdi
  unsigned __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int8 v8; // al
  int v9; // r14d
  int valid; // edi
  _OWORD v12[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 v14; // [rsp+88h] [rbp+10h]
  unsigned int v15; // [rsp+90h] [rbp+18h] BYREF

  v2 = *a1;
  v12[0] = 0LL;
  v4 = (__int64)((_QWORD)a1 << 25) >> 16;
  v5 = (v2 >> 12) & 0xFFFFFFFFFFLL;
  v6 = 48 * v5 - 0x220000000000LL;
  v7 = 48 * a2 - 0x220000000000LL;
  v8 = MiLockPageInline(v6);
  v15 = 0;
  v14 = v8;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v15);
    while ( *(__int64 *)(v7 + 24) < 0 );
  }
  MiCopyPfnEntryEx(v7, 48 * v5 - 0x220000000000LL);
  v9 = 0;
  if ( (((unsigned __int64)MiFlags >> 14) & 1) == 0 || ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 3 )
  {
    v9 = (((unsigned __int64)MiFlags >> 14) & 1) != 0 ? 38 : 4;
    MiCopyPage(a2, (v2 >> 12) & 0xFFFFFFFFFFLL, (((unsigned __int64)MiFlags >> 14) & 1) != 0 ? 38 : 4);
    if ( (v9 & 0x20) != 0 )
    {
      valid = 1;
      goto LABEL_12;
    }
  }
  else
  {
    *(_QWORD *)&v12[0] = v4;
    KeCopyPrivilegedPage(a2, (int)v12, v2 >> 12, (int)v12, 0LL, 1);
  }
  valid = MiTransformValidPteUsingAccessedBit(
            (volatile signed __int64 *)a1,
            (unsigned __int64)a1,
            (a2 << 12) ^ (v2 ^ (a2 << 12)) & 0xFFF0000000000FFFuLL,
            0x40u,
            0);
  if ( !valid )
  {
    if ( !v9 )
    {
      v12[0] = v4;
      KeCopyPrivilegedPage(v5, (int)v12, a2, (int)v12, 0LL, 1);
    }
    v6 = v7;
    v7 = 48 * v5 - 0x220000000000LL;
  }
LABEL_12:
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  if ( valid )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiFlushSingleTbEntry(v4, -1, 64);
    if ( (MiFlags & 0x4000) == 0 && ((*(_QWORD *)(v6 + 40) >> 60) & 7) == 3 )
      MiClearPfnImageVerified(v6, 12);
  }
  else
  {
    if ( v9 )
      MiCopyPage(v5, a2, v9);
    _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  *(_BYTE *)(v6 + 35) &= ~8u;
  MiDecrementShareCountEx(v6, 0LL);
  return MiUnlockPage(v6, v14);
}
