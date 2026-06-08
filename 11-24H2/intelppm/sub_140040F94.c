/*
 * XREFs of sub_140040F94 @ 0x140040F94
 * Callers:
 *     sub_140004DF0 @ 0x140004DF0 (sub_140004DF0.c)
 *     sub_14000F960 @ 0x14000F960 (sub_14000F960.c)
 *     sub_140033CF0 @ 0x140033CF0 (sub_140033CF0.c)
 *     sub_1400359D0 @ 0x1400359D0 (sub_1400359D0.c)
 *     sub_14003BFC0 @ 0x14003BFC0 (sub_14003BFC0.c)
 *     WorkerRoutine @ 0x140040AD0 (WorkerRoutine.c)
 *     sub_140041578 @ 0x140041578 (sub_140041578.c)
 *     sub_140047274 @ 0x140047274 (sub_140047274.c)
 * Callees:
 *     sub_140028340 @ 0x140028340 (sub_140028340.c)
 */

BOOLEAN __fastcall sub_140040F94(__int64 a1, int a2, int a3, unsigned int a4)
{
  BOOLEAN result; // al
  __int64 v9; // rcx
  bool v10; // zf

  result = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 744);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      result = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 752) += MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 744) = 0LL;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 924) == 0;
    *(_QWORD *)(a1 + 744) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
      result = sub_140028340(a1 + 776, 300);
    if ( !*(_BYTE *)(a1 + 1076) )
      result = sub_140028340(a1 + 928, 86400);
  }
  if ( a2 != *(_DWORD *)(a1 + 464) )
  {
    ++*(_DWORD *)(a1 + 760);
    *(_DWORD *)(a1 + 464) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 512) )
  {
    ++*(_DWORD *)(a1 + 764);
    *(_DWORD *)(a1 + 512) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 740) )
  {
    ++*(_DWORD *)(a1 + 768);
    *(_DWORD *)(a1 + 740) = a4;
  }
  return result;
}
