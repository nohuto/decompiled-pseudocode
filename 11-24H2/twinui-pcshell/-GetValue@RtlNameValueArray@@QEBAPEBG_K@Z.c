/*
 * XREFs of ?GetValue@RtlNameValueArray@@QEBAPEBG_K@Z @ 0x180675CC8
 * Callers:
 *     PiiFilterEmbeddedPathsExecute @ 0x180675E34 (PiiFilterEmbeddedPathsExecute.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180148D24 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

const unsigned __int16 *__fastcall RtlNameValueArray::GetValue(RtlNameValueArray *this, unsigned __int64 a2)
{
  __int64 *v2; // r11
  __int64 *v3; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  LOWORD(v2) = 0;
  v3 = 0LL;
  if ( a2 < *((_QWORD *)this + 2) )
  {
    v4 = *((_QWORD *)this + 1);
    v9 = 0LL;
    if ( (int)ULongLongMult(v4, a2, &v9) < 0
      || (v3 = (__int64 *)(*(_QWORD *)(v5 + 40) + v9), (unsigned __int64)v3 < *(_QWORD *)(v5 + 40)) )
    {
      v3 = v2;
    }
  }
  v6 = *v3;
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(v6 + 2 * v7) != (_WORD)v2 );
  return (const unsigned __int16 *)(v6 + 2 * (v7 + 1));
}
