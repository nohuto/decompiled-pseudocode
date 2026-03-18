/*
 * XREFs of CmpKeyEnumStackEntryInitialize @ 0x140975C8C
 * Callers:
 *     CmpKeyEnumStackStart @ 0x140974128 (CmpKeyEnumStackStart.c)
 *     CmpKeyEnumStackReset @ 0x140975390 (CmpKeyEnumStackReset.c)
 *     CmpKeyEnumStackInitialize @ 0x140975C3C (CmpKeyEnumStackInitialize.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryInitialize(_QWORD *a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  _DWORD *v4; // rdx
  __int64 v5; // r8

  memset_0(a1, 0, 0x80uLL);
  HvpGetCellContextInitialize(a1 + 2);
  v2 = a1 + 12;
  do
  {
    HvpGetCellContextInitialize(v2 - 5);
    result = HvpGetCellContextInitialize(v2);
    *v4 = -1;
    ++v2;
  }
  while ( v5 != 1 );
  return result;
}
