/*
 * XREFs of LdrpAppCompatRedirect @ 0x18006F444
 * Callers:
 *     LdrpMapDllFullPath @ 0x1800702A8 (LdrpMapDllFullPath.c)
 * Callees:
 *     LdrpFreeUnicodeString @ 0x18006F7E0 (LdrpFreeUnicodeString.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpAppCompatRedirect(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned int v8; // ebx
  __int64 v10; // r8
  _WORD *v11; // rax
  _BYTE v12[8]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF

  v13 = 0LL;
  if ( g_ShimsEnabled || g_ShimsLoading )
  {
    v8 = a5;
    v10 = a2;
    v12[0] = 0;
    if ( a5 < 0 )
      v10 = a1;
    ((void (__fastcall *)(__int128 *, _BYTE *, __int64))(__ROR8__(
                                                           g_pfnSE_LdrResolveDllName,
                                                           64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
      &v13,
      v12,
      v10);
    if ( v12[0] )
    {
      *(_DWORD *)(a1 + 32) |= 0x10000u;
      LdrpFreeUnicodeString(a2);
      v11 = *(_WORD **)(a4 + 8);
      *(_WORD *)a4 = 0;
      *v11 = 0;
      return (unsigned int)LdrpResolveDllName((char)&v13, *(_DWORD *)(a1 + 32));
    }
  }
  else
  {
    return (unsigned int)a5;
  }
  return v8;
}
