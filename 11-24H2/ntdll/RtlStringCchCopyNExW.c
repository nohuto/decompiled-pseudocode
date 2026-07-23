/*
 * XREFs of RtlStringCchCopyNExW @ 0x1800B5FEC
 * Callers:
 *     punycode_encode @ 0x1800B5968 (punycode_encode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyNExW(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  _WORD *v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int16 v10; // ax
  _WORD *v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ecx

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    v13 = -1073741811;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v6 = a1;
    v7 = 4 - a2;
    v8 = 0LL;
    v9 = a3 - (_QWORD)v6;
    do
    {
      if ( !(v7 + a2) )
        break;
      v10 = *(_WORD *)((char *)v6 + v9);
      if ( !v10 )
        break;
      *v6 = v10;
      ++v8;
      ++v6;
      --a2;
    }
    while ( a2 );
    v11 = v6 - 1;
    if ( a2 )
      v11 = v6;
    *v11 = 0;
    v12 = v8 - 1;
    if ( a2 )
      v12 = v8;
    v13 = a2 == 0 ? 0x80000005 : 0;
    if ( a5 )
      *a5 = &a1[v12];
  }
  return v13;
}
