/*
 * XREFs of ValidateProcessorLpiStates @ 0x14002F9E4
 * Callers:
 *     InitAcpiLpiStates @ 0x140046F90 (InitAcpiLpiStates.c)
 * Callees:
 *     ValidateLpiState @ 0x14002EFB4 (ValidateLpiState.c)
 */

__int64 __fastcall ValidateProcessorLpiStates(__int64 a1, const wchar_t *a2)
{
  __int64 result; // rax
  __int64 i; // rbx

  if ( !a1 )
    return 3221225473LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
  {
    result = ValidateLpiState(a1 + 80 * i + 24, 0LL, a2);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}
