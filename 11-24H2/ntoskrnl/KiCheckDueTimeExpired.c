/*
 * XREFs of KiCheckDueTimeExpired @ 0x14032DBC0
 * Callers:
 *     KiWaitForAllObjects @ 0x14032D1E0 (KiWaitForAllObjects.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KiCheckDueTimeExpired(__int64 a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax

  if ( a2 == 2 )
  {
    v4 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 248) - MEMORY[0xFFFFF780000003B0];
    v5 = *(unsigned int *)(a1 + 952);
    if ( *(_BYTE *)(a1 + 391) && !*(_DWORD *)(a1 + 484) && !*(_BYTE *)(a1 + 390) && !*(_BYTE *)(a1 + 192) )
    {
      if ( (_DWORD)v5 )
        a3 += v5;
    }
  }
  else
  {
    if ( !a2 )
      return 0LL;
    if ( !a3 )
      return 1LL;
    v4 = MEMORY[0xFFFFF78000000014];
  }
  return v4 > a3;
}
