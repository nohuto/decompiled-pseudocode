/*
 * XREFs of CcDecrementVacbActiveCount @ 0x1402500B0
 * Callers:
 *     CcMapAndCopyInToCache @ 0x1404DDB50 (CcMapAndCopyInToCache.c)
 *     CcPinMappedData @ 0x1409CD7E0 (CcPinMappedData.c)
 *     CcMapAndCopyFromCache @ 0x140ABF7A0 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140ABFBF0 (CcMdlRead.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
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
