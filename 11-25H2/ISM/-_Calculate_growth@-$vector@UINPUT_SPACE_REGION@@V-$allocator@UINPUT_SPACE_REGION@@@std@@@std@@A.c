/*
 * XREFs of ?_Calculate_growth@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEBA_K_K@Z @ 0x1800965C0
 * Callers:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAPEAUINPUT_SPACE_REGION@@QEAU2@AEAU2@@Z @ 0x18018345C (--$_Emplace_reallocate@AEAUINPUT_SPACE_REGION@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPU.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Calculate_growth(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x147AE147AE147AELL;
  v3 = (0x8F5C28F5C28F5C29uLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0x8F5C28F5C28F5C29uLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x147AE147AE147AELL - v3 )
  {
    result = v3 - 0x70A3D70A3D70A3D7LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
