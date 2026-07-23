/*
 * XREFs of _BuildCumulativeOverlayFilePath @ 0x18007F7D8
 * Callers:
 *     GetOverlayFilePathUsingChecksum @ 0x18007EE60 (GetOverlayFilePathUsingChecksum.c)
 * Callees:
 *     _AppendCumulativeOverlayFilePath @ 0x18007F95C (_AppendCumulativeOverlayFilePath.c)
 *     _StartPathWithLongPathPrefixIfNeeded @ 0x18007FA30 (_StartPathWithLongPathPrefixIfNeeded.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall BuildCumulativeOverlayFilePath(
        rsize_t SourceSize,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int *a8,
        void *Destination)
{
  unsigned int v11; // ebp
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // r10d
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // r9
  _WORD v22[40]; // [rsp+40h] [rbp-98h] BYREF

  v11 = SourceSize;
  memset_thunk_772440563353939046(v22, 0, 0x42uLL);
  v13 = a2 + v11 + a4 + 66;
  v14 = *a8;
  v15 = v13 + 8;
  if ( v13 < 0x208 )
    v15 = a2 + v11 + a4 + 66;
  *a8 = v15;
  if ( v15 > v14 )
    return 3221225507LL;
  v16 = 0;
  while ( 1 )
  {
    v17 = 2 * v16;
    if ( v16 >= 0x10 )
      break;
    if ( 2 * (unsigned __int64)(unsigned int)(v17 + 1) >= 0x42 )
      return 3221225701LL;
    v18 = v16++;
    v19 = *(unsigned __int8 *)(v18 + a7);
    v22[v17] = a0123456789abcd[v19 >> 4];
    v22[(unsigned int)(v17 + 1)] = a0123456789abcd[v19 & 0xF];
  }
  if ( 2 * (unsigned __int64)(unsigned int)v17 >= 0x42 )
    return 3221225701LL;
  v22[(unsigned int)v17] = 0;
  result = StartPathWithLongPathPrefixIfNeeded(v11, v15, Destination);
  if ( (int)result >= 0 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( *(_WORD *)(a6 + 2 * v21) );
    return AppendCumulativeOverlayFilePath(a2, a3, a5, (unsigned int)(2 * v21), a6, v22, a8, Destination);
  }
  return result;
}
