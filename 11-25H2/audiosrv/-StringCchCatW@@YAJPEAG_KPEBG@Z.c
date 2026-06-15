/*
 * XREFs of ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180051620
 * Callers:
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x1800AC774 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x1800ADAF8 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCatW(unsigned __int16 *a1, __int64 a2, char *a3)
{
  __int64 v5; // r9
  unsigned __int16 *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  unsigned __int16 *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  char *v12; // r10
  unsigned __int16 v13; // dx
  unsigned __int16 *v14; // rcx

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    return 2147942487LL;
  v5 = a2;
  v6 = a1;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = 2147942487LL;
  if ( v5 )
    result = 0LL;
  v8 = a2 - v5;
  if ( v5 )
  {
    v9 = &a1[v8];
    v10 = v5;
    if ( a2 != v8 )
    {
      v11 = 2147483646LL;
      v12 = (char *)(a3 - (char *)v9);
      do
      {
        if ( !v11 )
          break;
        v13 = *(unsigned __int16 *)((char *)v9 + (_QWORD)v12);
        if ( !v13 )
          break;
        *v9 = v13;
        --v11;
        ++v9;
        --v10;
      }
      while ( v10 );
    }
    v14 = v9 - 1;
    if ( v10 )
      v14 = v9;
    result = 2147942522LL;
    if ( v10 )
      result = 0LL;
    *v14 = 0;
  }
  return result;
}
