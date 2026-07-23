/*
 * XREFs of CcRemoveVacbArray @ 0x1404F3A38
 * Callers:
 *     CcDereferenceVacbArray @ 0x1403EF160 (CcDereferenceVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

unsigned int **__fastcall CcRemoveVacbArray(unsigned int *a1)
{
  unsigned int v1; // edx
  __int64 v3; // r9
  unsigned int v4; // ecx
  int v5; // eax
  unsigned int *v6; // r9
  __int64 v7; // rcx
  unsigned int **result; // rax

  v1 = 0;
  if ( a1[1] )
    KeBugCheckEx(0x34u, 0x244uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v3 = *a1;
  if ( *(unsigned int **)(CcVacbArrays + 8 * v3) != a1 )
    KeBugCheckEx(0x34u, 0x24AuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v4 = CcVacbArraysHighestUsedIndex;
  if ( (_DWORD)v3 == CcVacbArraysHighestUsedIndex )
  {
    while ( v4 )
    {
      if ( *(_QWORD *)(CcVacbArrays + 8LL * v4) )
      {
        CcVacbArraysHighestUsedIndex = v4;
        break;
      }
      --v4;
    }
  }
  v5 = CcVacbArraysAllocated;
  *(_QWORD *)(CcVacbArrays + 8 * v3) = 0LL;
  if ( !v5 )
    KeBugCheckEx(0x34u, 0x266uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcVacbArraysAllocated = v5 - 1;
  do
  {
    v6 = &a1[8 * v1 + 8 + 2 * v1];
    v7 = *(_QWORD *)v6;
    if ( *(unsigned int **)(*(_QWORD *)v6 + 8LL) != v6 || (result = (unsigned int **)*((_QWORD *)v6 + 1), *result != v6) )
      __fastfail(3u);
    ++v1;
    *result = (unsigned int *)v7;
    *(_QWORD *)(v7 + 8) = result;
  }
  while ( v1 < 0xCCC );
  CcNumberOfFreeVacbs -= 3276;
  return result;
}
