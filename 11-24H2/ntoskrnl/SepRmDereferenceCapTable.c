/*
 * XREFs of SepRmDereferenceCapTable @ 0x1404F5488
 * Callers:
 *     SeAccessCheckWithHint @ 0x14035A620 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140360470 (SepCommonAccessCheckEx.c)
 *     SepRmReferenceFindCap @ 0x140454FA4 (SepRmReferenceFindCap.c)
 *     SepRmCapUpdateWrkr @ 0x140796050 (SepRmCapUpdateWrkr.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14091DB90 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepRmDestroyCapTable @ 0x140796214 (SepRmDestroyCapTable.c)
 */

__int64 __fastcall SepRmDereferenceCapTable(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 5, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return SepRmDestroyCapTable((PVOID)a1);
  }
  return result;
}
