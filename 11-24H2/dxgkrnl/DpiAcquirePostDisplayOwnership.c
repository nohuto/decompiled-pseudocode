/*
 * XREFs of DpiAcquirePostDisplayOwnership @ 0x1402391CC
 * Callers:
 *     DpAcquirePostDisplayOwnership @ 0x1402349C0 (DpAcquirePostDisplayOwnership.c)
 *     DpAcquirePostDisplayOwnership2 @ 0x1402349E0 (DpAcquirePostDisplayOwnership2.c)
 * Callees:
 *     DpiFdoIsPostDevice @ 0x14004D4F0 (DpiFdoIsPostDevice.c)
 */

__int64 __fastcall DpiAcquirePostDisplayOwnership(__int64 a1, __int64 a2, unsigned int *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rdx
  __int128 v10; // xmm1

  v6 = 0;
  if ( KeGetCurrentIrql() > 1u )
  {
    v6 = -1073741811;
    WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    WdLogGlobalForLineNumber = 155;
    return v6;
  }
  if ( !a1 || !a2 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 172;
    return v6;
  }
  if ( KeGetCurrentThread() != (struct _KTHREAD *)qword_140161118 || a1 != qword_140161120 )
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 193;
    return v6;
  }
  v7 = *(_QWORD *)(a1 + 64);
  if ( v7 )
  {
    if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
    {
      v8 = *(_DWORD *)(v7 + 236);
      if ( v8 != 2 && (*(_DWORD *)(v7 + 240) != 2 || ((v8 - 3) & 0xFFFFFFFC) != 0 || v8 == 4) )
        *(_BYTE *)(v7 + 4040) |= 4u;
    }
  }
  if ( !DpiFdoIsPostDevice(a1) )
  {
    if ( !*(_BYTE *)(v9 + 1153) )
    {
      WdLogSingleEntry1(4LL, 0LL);
      WdLogGlobalForLineNumber = 235;
      *(_OWORD *)a2 = 0LL;
      *(_OWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = -1;
      if ( a3 )
        *a3 &= 0xFFFFFFF0;
      return v6;
    }
    goto LABEL_20;
  }
  if ( *(_BYTE *)(v9 + 1153) )
  {
LABEL_20:
    *(_OWORD *)a2 = xmmword_140161070;
    v10 = xmmword_140161080;
    goto LABEL_22;
  }
  *(_OWORD *)a2 = xmmword_140160FC8;
  v10 = xmmword_140160FD8;
LABEL_22:
  *(_OWORD *)(a2 + 16) = v10;
  if ( a3 )
    *a3 = dword_14016115C & 0xF | *a3 & 0xFFFFFFF0;
  return v6;
}
