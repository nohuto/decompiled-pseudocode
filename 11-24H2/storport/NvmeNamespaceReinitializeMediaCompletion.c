/*
 * XREFs of NvmeNamespaceReinitializeMediaCompletion @ 0x14010AF50
 * Callers:
 *     <none>
 * Callees:
 *     StorEtwNvmeControllerEvent @ 0x1400A9028 (StorEtwNvmeControllerEvent.c)
 */

__int64 __fastcall NvmeNamespaceReinitializeMediaCompletion(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  unsigned int v6; // edx
  __int64 result; // rax

  v3 = *a2;
  v5 = *(_QWORD *)(*a2 + 4216);
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
  v6 = *(unsigned __int16 *)(*a2 + 4260);
  if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) != 0
    || (unsigned __int8)(v6 >> 1) > 6u
    || (unsigned __int8)(v6 >> 1) )
  {
    if ( (unsigned __int8)*(_DWORD *)(*a2 + 4096) == 0x80 )
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        2,
        (__int64)L"Failed to format the nvme device.",
        L"NVMeStatus",
        v6,
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
    else
    {
      StorEtwNvmeControllerEvent(
        a1,
        1,
        2,
        (__int64)L"Failed to sanitize the nvme device.",
        L"NVMeStatus",
        v6,
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
      if ( (*(_WORD *)(*a2 + 4260) & 0x1FE) == 0x38 )
        *(_BYTE *)(v5 + 642) = 1;
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
