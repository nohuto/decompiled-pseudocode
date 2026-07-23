/*
 * XREFs of bsearch @ 0x1404FC020
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x1404ABF0C (DownLevelLangIDToLanguageName.c)
 *     LdrpGetParentLangId @ 0x1404AE270 (LdrpGetParentLangId.c)
 *     DownLevelLanguageNameToLangID @ 0x1404B3408 (DownLevelLanguageNameToLangID.c)
 *     RtlCompareExchangePropertyStore @ 0x1405E7220 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x1405E7510 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x1405E7690 (RtlRemovePropertyStore.c)
 *     DownLevelGetParentLanguageName @ 0x14065E124 (DownLevelGetParentLanguageName.c)
 *     sub_1407B98D8 @ 0x1407B98D8 (sub_1407B98D8.c)
 *     EtwpIsGuidAllowed @ 0x140833108 (EtwpIsGuidAllowed.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 *     _guard_check_icall_no_overrides @ 0x1406B4D40 (_guard_check_icall_no_overrides.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  size_t v6; // rsi
  char *v7; // rdi
  char *v8; // rbx
  size_t v10; // rbp
  bool v11; // zf
  char *v12; // r14
  int v13; // eax

  v6 = NumOfElements;
  v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v8 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    guard_check_icall_no_overrides(PtFuncCompare);
    while ( v8 <= v7 )
    {
      v10 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v8) )
          return 0LL;
        return v8;
      }
      v11 = (v6 & 1) == 0;
      v6 = v10 - 1;
      if ( !v11 )
        v6 = v10;
      v12 = &v8[SizeOfElements * v6];
      v13 = ((__int64 (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v12);
      if ( !v13 )
        return &v8[SizeOfElements * v6];
      if ( v13 >= 0 )
      {
        v8 = &v12[SizeOfElements];
        v6 = v10;
      }
      else
      {
        v7 = &v12[-SizeOfElements];
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
  return 0LL;
}
