/*
 * XREFs of LdrpLoadResourceFromAlternativeModule @ 0x14044EC90
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x140A0253C (LdrpSearchResourceSection_U.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x14044EDC4 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSearchResourceSection_U @ 0x140A0253C (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x140A03160 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpLoadResourceFromAlternativeModule(int a1, __int64 a2, int a3, int a4, __int64 *a5)
{
  char v5; // si
  unsigned __int16 v7; // di
  __int64 result; // rax
  int v9; // ecx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  int v12; // edx
  unsigned int *i; // rcx
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-10h] BYREF

  v15 = 0LL;
  v5 = a4;
  if ( (unsigned int)(a3 - 3) > 1 )
    return 3221225713LL;
  if ( (a4 & 0x1000000) != 0 )
    v7 = -3346;
  else
    v7 = *(_WORD *)(a2 + 16);
  v16[0] = 0LL;
  result = LdrLoadAlternateResourceModuleEx(a1, v7, (unsigned int)&v15, (unsigned int)v16, a4);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741766 )
      return 3221946369LL;
  }
  else
  {
    v9 = v15;
    *(_QWORD *)(a2 + 16) = v7;
    result = LdrpSearchResourceSection_U(v9, a2, 3, 33554480, (__int64)a5);
    if ( (v5 & 0x40) != 0 && (int)result >= 0 )
    {
      v16[0] = 0LL;
      v10 = *(_DWORD *)(a2 + 24);
      v11 = *a5;
      if ( v15 && v11 )
      {
        result = LdrpAccessResourceDataNoMultipleLanguage(v15, v11, v16, 0LL);
        if ( (int)result >= 0 )
        {
          v12 = *(_DWORD *)v16[0];
          for ( i = (unsigned int *)(v16[0] + 4LL); v12--; i += 3 )
          {
            if ( v10 >= *i && v10 <= i[1] )
              return 0LL;
          }
          result = 3221225737LL;
        }
      }
      else
      {
        result = 3221225485LL;
      }
      *a5 = 0LL;
    }
  }
  return result;
}
