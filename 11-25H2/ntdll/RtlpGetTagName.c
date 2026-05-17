/*
 * XREFs of RtlpGetTagName @ 0x18011B880
 * Callers:
 *     RtlDebugAllocateHeap @ 0x180025BE0 (RtlDebugAllocateHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x18009517C (RtlDebugFreeHeap.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x18011EF2C (RtlStringCbPrintfW.c)
 */

void *__fastcall RtlpGetTagName(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  __int64 v4; // r8

  if ( !RtlpGlobalTagHeap || !a2 )
    return 0LL;
  if ( (a2 & 0x8000u) == 0 )
  {
    if ( (a2 & 0x800) != 0 )
    {
      a2 &= ~0x800u;
      if ( a2 < *(_WORD *)(RtlpGlobalTagHeap + 224) )
      {
        v4 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
        goto LABEL_16;
      }
    }
    else if ( a2 < *(_WORD *)(a1 + 224) )
    {
      v4 = *(_QWORD *)(a1 + 232);
LABEL_16:
      if ( v4 )
        return (void *)(v4 + 20 + 72LL * a2);
    }
    return 0LL;
  }
  v2 = a2 & 0x7FFF;
  if ( v2 >= 0x81u || !*(_QWORD *)(a1 + 328) )
    return 0LL;
  if ( v2 )
  {
    if ( v2 >= 0x80u )
      RtlStringCbPrintfW(&unk_1801D0238, 48LL, L"VirtualAlloc", 0LL);
    else
      RtlStringCbPrintfW(&unk_1801D0238, 48LL, L"Objects=%4u", 16 * (unsigned int)v2);
  }
  else
  {
    RtlStringCbPrintfW(&unk_1801D0238, 48LL, L"Objects>%4u", 2048LL);
  }
  return &unk_1801D0238;
}
