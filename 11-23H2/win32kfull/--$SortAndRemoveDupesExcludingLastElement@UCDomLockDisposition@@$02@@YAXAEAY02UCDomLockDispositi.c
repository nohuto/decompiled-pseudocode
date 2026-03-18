/*
 * XREFs of ??$SortAndRemoveDupesExcludingLastElement@UCDomLockDisposition@@$02@@YAXAEAY02UCDomLockDisposition@@P6AHPEBX1@ZP6AXAEAU0@@Z@Z @ 0x1C011DB1C
 * Callers:
 *     NtUserScheduleDispatchNotification @ 0x1C011D650 (NtUserScheduleDispatchNotification.c)
 * Callees:
 *     vDLOrderDispositionCompare @ 0x1C0066250 (vDLOrderDispositionCompare.c)
 *     ??$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z @ 0x1C0130DCC (--$ClearCObjLock@PEAUtagObjLock@@@@YAXAEAPEAUtagObjLock@@@Z.c)
 */

__int64 __fastcall SortAndRemoveDupesExcludingLastElement<CDomLockDisposition,3>(char *a1)
{
  unsigned int i; // ebx
  __int64 result; // rax

  qsort(a1, 2uLL, 0x10uLL, (int (__cdecl *)(const void *, const void *))vDLOrderDispositionCompare);
  for ( i = 1; i < 2; ++i )
  {
    result = vDLOrderDispositionCompare((unsigned __int64 **)&a1[16 * i], (unsigned __int64 **)&a1[16 * (i - 1)]);
    if ( !(_DWORD)result )
      result = ClearCObjLock<tagObjLock *>(&a1[16 * (i - 1)]);
  }
  return result;
}
