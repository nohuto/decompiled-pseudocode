/*
 * XREFs of _CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::_AUTO_USING_PM_MapIndex2373 @ 0x140268A6C
 * Callers:
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x140341394 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCD_TOPOLOGY::GetModalitySetId_::_2_::_AUTO_USING_PM_MapIndex2373::_AUTO_USING_PM_MapIndex2373(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rcx

  *(_QWORD *)a1 = a2 + 56;
  v3 = *(unsigned __int16 *)(a2 + 20);
  v4 = 0;
  for ( *(_DWORD *)(a1 + 8) = v3; v4 < *(_DWORD *)(a1 + 8); *(_DWORD *)(v6 + *(_QWORD *)a1 + 264) = 0 )
  {
    v5 = v4++;
    v6 = 296 * v5;
    *(_DWORD *)(v6 + *(_QWORD *)a1 + 256) |= 2u;
  }
  return a1;
}
