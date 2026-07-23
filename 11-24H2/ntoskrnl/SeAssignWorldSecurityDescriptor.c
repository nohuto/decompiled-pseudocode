/*
 * XREFs of SeAssignWorldSecurityDescriptor @ 0x140A51424
 * Callers:
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall SeAssignWorldSecurityDescriptor(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  PSID v6; // r14
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  size_t v10; // rbp
  char *v11; // rsi
  __int16 v12; // cx

  if ( !a3 )
    return 3221225506LL;
  v6 = SeWorldSid;
  v7 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 8;
  v8 = *a2;
  v9 = 2 * v7 + 20;
  *a2 = v9;
  if ( v8 < v9 )
    return 3221225507LL;
  v10 = v7;
  v11 = (char *)(a1 + 20);
  *(_OWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)a1 = 1;
  if ( (*a3 & 1) != 0 )
  {
    memmove((void *)(a1 + 20), v6, v7);
    *(_DWORD *)(a1 + 4) = 20;
    v11 += v10;
  }
  if ( (*a3 & 2) != 0 )
  {
    memmove(v11, v6, v10);
    *(_DWORD *)(a1 + 8) = (_DWORD)v11 - a1;
  }
  if ( (*a3 & 4) != 0 )
    *(_WORD *)(a1 + 2) |= 4u;
  v12 = *(_WORD *)(a1 + 2);
  if ( (*a3 & 8) != 0 )
  {
    *(_WORD *)(a1 + 2) |= 0x10u;
    v12 = *(_WORD *)(a1 + 2);
  }
  *(_WORD *)(a1 + 2) = v12 | 0x8000;
  return 0LL;
}
