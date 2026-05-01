/*
 * XREFs of _lambda_e153033c267a3414dd193f619d51719c_::operator() @ 0x1806BD964
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_e153033c267a3414dd193f619d51719c___ @ 0x1806BD6B0 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_e153033c267a3414dd193f619d51719c___.c)
 * Callees:
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

bool __fastcall lambda_e153033c267a3414dd193f619d51719c_::operator()(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  _DWORD *v5; // rdx
  _DWORD *i; // rdi
  _DWORD *j; // rax
  size_t v8; // rbx

  v2 = *(_QWORD **)a1;
  v5 = *(_DWORD **)(*(_QWORD *)a1 + 8LL);
  for ( i = **(_DWORD ***)a1; i != v5 && *i != (_DWORD)a2; ++i )
    ;
  if ( i != v5 )
  {
    for ( j = i + 1; j != v5; ++j )
    {
      if ( *j != (_DWORD)a2 )
        *i++ = *j;
    }
    if ( i != v5 )
    {
      v8 = v2[1] - (_QWORD)v5;
      memmove_0(i, v5, v8);
      v2[1] = (char *)i + v8;
    }
  }
  return *v2 != v2[1] && a2 != **(_QWORD **)(a1 + 8);
}
