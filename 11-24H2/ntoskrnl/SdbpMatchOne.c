/*
 * XREFs of SdbpMatchOne @ 0x140805C30
 * Callers:
 *     <none>
 * Callees:
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     SdbpMatchList @ 0x140AEB320 (SdbpMatchList.c)
 */

__int64 __fastcall SdbpMatchOne(_DWORD *a1, int a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // r14d
  int v9; // ebx
  unsigned int matched; // edi
  int v12; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF

  v7 = a5;
  v9 = 0;
  v12 = 0;
  v13 = 0;
  matched = SdbpMatchList((unsigned int)&v12, (unsigned int)&v13, a2, a3, a5, a6, 1);
  if ( !matched || v13 )
    v9 = v12;
  else
    LOBYTE(v9) = (unsigned int)SdbFindFirstTag(a3, v7, 4099LL) == 0;
  *a1 = v9;
  return matched;
}
