/*
 * XREFs of MiDereferenceIoPageRuns @ 0x14038E6E8
 * Callers:
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x14038E15C (MiReplaceRotateWithDemandZeroNoCopy.c)
 * Callees:
 *     MiDereferenceIoPages @ 0x14038E760 (MiDereferenceIoPages.c)
 */

__int64 __fastcall MiDereferenceIoPageRuns(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rsi
  __int64 result; // rax

  v2 = *(unsigned int *)(a2 + 28);
  if ( (_DWORD)v2 )
  {
    v4 = (_QWORD *)(a2 + 40 + 8 * v2);
    do
    {
      --v4;
      result = MiDereferenceIoPages(1LL, *v4 >> 12, (*v4 & 0x3FFLL) + 1);
      LODWORD(v2) = v2 - 1;
    }
    while ( (_DWORD)v2 );
    *(_WORD *)(a2 + 25) = 0;
    *(_DWORD *)(a2 + 28) = 0;
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_DWORD *)(a2 + 16) &= 0xFFFFFFDB;
  }
  return result;
}
