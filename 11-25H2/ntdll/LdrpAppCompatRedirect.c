/*
 * XREFs of LdrpAppCompatRedirect @ 0x18006F444
 * Callers:
 *     LdrpMapDllFullPath @ 0x1800702A8 (LdrpMapDllFullPath.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpAppCompatRedirect(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  unsigned int v9; // ebx
  __int64 v11; // r8
  _WORD *v12; // rax
  _BYTE v13[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-30h] BYREF

  v14 = 0LL;
  if ( g_ShimsEnabled || g_ShimsLoading )
  {
    v9 = a5;
    v11 = a2;
    v13[0] = 0;
    if ( a5 < 0 )
      v11 = a1;
    ((void (__fastcall *)(__int128 *, _BYTE *, __int64))(__ROR8__(
                                                           g_pfnSE_LdrResolveDllName,
                                                           64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
      &v14,
      v13,
      v11);
    if ( v13[0] )
    {
      *(_DWORD *)(a1 + 32) |= 0x10000u;
      LdrpFreeUnicodeString(a2);
      v12 = *(_WORD **)(a4 + 8);
      *(_WORD *)a4 = 0;
      *v12 = 0;
      return (unsigned int)LdrpResolveDllName((unsigned int)&v14, a4, a3, a2, *(_DWORD *)(a1 + 32));
    }
  }
  else
  {
    return (unsigned int)a5;
  }
  return v9;
}
