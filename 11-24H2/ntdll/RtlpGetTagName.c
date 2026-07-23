/*
 * XREFs of RtlpGetTagName @ 0x180113834
 * Callers:
 *     RtlDebugAllocateHeap @ 0x18001F7A4 (RtlDebugAllocateHeap.c)
 *     RtlDebugFreeHeap @ 0x180022020 (RtlDebugFreeHeap.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x18011B88C (RtlStringCbPrintfW.c)
 */

void *__fastcall RtlpGetTagName(__int64 a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // dx
  __int64 v3; // r9
  const wchar_t *v4; // r8
  __int64 v6; // r8

  if ( !RtlpGlobalTagHeap || !a2 )
    return 0LL;
  if ( (a2 & 0x8000u) != 0 )
  {
    v2 = a2 & 0x7FFF;
    if ( v2 < 0x81u && *(_QWORD *)(a1 + 328) )
    {
      if ( v2 )
      {
        if ( v2 >= 0x80u )
        {
          RtlStringCbPrintfW(&unk_1801CD238, 48LL, L"VirtualAlloc", 0LL);
          return &unk_1801CD238;
        }
        v4 = L"Objects=%4u";
        v3 = 16 * (unsigned int)v2;
      }
      else
      {
        v3 = 2048LL;
        v4 = L"Objects>%4u";
      }
      RtlStringCbPrintfW(&unk_1801CD238, 48LL, v4, v3);
      return &unk_1801CD238;
    }
    return 0LL;
  }
  if ( (a2 & 0x800) != 0 )
  {
    a2 &= ~0x800u;
    if ( a2 >= *(_WORD *)(RtlpGlobalTagHeap + 224) )
      return 0LL;
    v6 = *(_QWORD *)(RtlpGlobalTagHeap + 232);
  }
  else
  {
    if ( a2 >= *(_WORD *)(a1 + 224) )
      return 0LL;
    v6 = *(_QWORD *)(a1 + 232);
  }
  if ( v6 )
    return (void *)(v6 + 20 + 72LL * a2);
  return 0LL;
}
