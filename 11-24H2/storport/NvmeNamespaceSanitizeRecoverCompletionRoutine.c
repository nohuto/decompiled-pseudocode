/*
 * XREFs of NvmeNamespaceSanitizeRecoverCompletionRoutine @ 0x14010D700
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeNamespaceSanitizeRecoverCompletionRoutine(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r9
  unsigned int v5; // edx
  __int64 result; // rax

  v3 = *a2;
  if ( a3 )
  {
    *(_WORD *)(v3 + 4260) = *(_WORD *)(a3 + 14);
  }
  else
  {
    *(_WORD *)(v3 + 4260) = 0;
    *(_WORD *)(*a2 + 4260) &= 0xF1FFu;
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(*a2 + 4260) & 0xFE01 | 0xC;
  }
  v5 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0
    || (unsigned __int8)(v5 >> 1) > 6u
    || (unsigned __int8)(v5 >> 1) )
  {
    StorEtwNvmeControllerEvent(
      a1,
      1,
      2,
      (__int64)L"Sanitize recover failed.",
      L"NVMeStatus",
      v5,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      &word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0,
      (void *)&word_140150F48,
      0);
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
