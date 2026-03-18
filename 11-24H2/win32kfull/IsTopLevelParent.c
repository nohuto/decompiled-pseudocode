/*
 * XREFs of IsTopLevelParent @ 0x140089594
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     IsParentBandValid @ 0x140089390 (IsParentBandValid.c)
 *     ValidateNewParent @ 0x1400893F4 (ValidateNewParent.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsTopLevelParent(__int64 a1)
{
  __int64 v1; // rdx
  bool result; // al

  result = !a1
        || (v1 = *(_QWORD *)(a1 + 24), a1 == *(_QWORD *)(v1 + 112))
        || a1 == *(_QWORD *)(*(_QWORD *)(v1 + 8) + 24LL);
  return result;
}
