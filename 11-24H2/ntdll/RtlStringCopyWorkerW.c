/*
 * XREFs of RtlStringCopyWorkerW @ 0x1800D7640
 * Callers:
 *     RtlStringCchCatW @ 0x18013D25C (RtlStringCchCatW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCopyWorkerW(_WORD *a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // r9
  __int16 v8; // dx
  _WORD *v9; // rdx
  __int64 result; // rax
  __int64 v11; // rcx

  v4 = a2;
  v5 = 0LL;
  if ( a2 )
  {
    v6 = 2147483646LL;
    v7 = a4 - (_QWORD)a1;
    do
    {
      if ( !v6 )
        break;
      v8 = *(_WORD *)((char *)a1 + v7);
      if ( !v8 )
        break;
      *a1 = v8;
      --v6;
      ++a1;
      ++v5;
      --v4;
    }
    while ( v4 );
  }
  v9 = a1 - 1;
  result = 2147483653LL;
  if ( v4 )
  {
    v9 = a1;
    result = 0LL;
  }
  *v9 = 0;
  if ( a3 )
  {
    v11 = v5 - 1;
    if ( v4 )
      v11 = v5;
    *a3 = v11;
  }
  return result;
}
