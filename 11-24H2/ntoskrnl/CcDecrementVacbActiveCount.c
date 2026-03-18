/*
 * XREFs of CcDecrementVacbActiveCount @ 0x140272550
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1404DD240 (CcMapAndCopyInToCache.c)
 *     CcPinMappedData @ 0x1409B7760 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x140AC2F00 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140AC3350 (CcMdlRead.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 */

LONG __fastcall CcDecrementVacbActiveCount(__int64 a1)
{
  __int64 v1; // rbx
  LONG result; // eax
  struct _KEVENT *v3; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 16));
  if ( !(_WORD)result )
  {
    v3 = *(struct _KEVENT **)(v1 + 192);
    if ( v3 )
      result = KeSetEvent(v3, 0, 0);
    _InterlockedDecrement((volatile signed __int32 *)(v1 + 552));
  }
  return result;
}
