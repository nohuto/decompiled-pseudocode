/*
 * XREFs of LdrVerifyImageMatchesChecksum @ 0x18015FE90
 * Callers:
 *     <none>
 * Callees:
 *     LdrVerifyImageMatchesChecksumEx @ 0x180113590 (LdrVerifyImageMatchesChecksumEx.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrVerifyImageMatchesChecksum(__int64 a1, __int64 a2, __int64 a3, _WORD *a4)
{
  int v8; // eax
  __int64 result; // rax
  _QWORD v10[7]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+58h] [rbp-10h]

  memset_thunk_772440563353939046(v10, 0, 0x40uLL);
  v8 = 0;
  v10[0] = 64LL;
  if ( a2 )
  {
    v8 = 1;
    v10[1] = a2;
    HIDWORD(v10[0]) = 1;
    v10[2] = a3;
  }
  if ( a4 )
    HIDWORD(v10[0]) = v8 | 4;
  result = LdrVerifyImageMatchesChecksumEx(a1, (unsigned __int64)v10);
  if ( (int)result >= 0 )
  {
    if ( a4 )
      *a4 = v11;
  }
  return result;
}
