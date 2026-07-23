/*
 * XREFs of RtlpNlsGetNameIndex @ 0x1800143C0
 * Callers:
 *     RtlGetParentLocaleName @ 0x180012850 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x180012B40 (RtlGetNeutralFallback.c)
 *     LdrpLangFallbackListAppendNode @ 0x180012EE0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180013360 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLocaleNameToLcid @ 0x180014040 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x1800141A0 (RtlCultureNameToLCID.c)
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x1800C7BDC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x1800CBF00 (RtlIsValidLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x18011CF8C (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpNlsGetNameIndex(__int64 a1)
{
  int v1; // ebx
  int v3; // r10d
  __int64 v4; // r11
  unsigned __int16 *v5; // r9
  __int64 v6; // r8
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  int v9; // edx

  v1 = 0;
  v3 = *(unsigned __int16 *)(pTblPtrs + 2) - 1;
LABEL_2:
  if ( v1 > v3 )
    return 0xFFFFFFFFLL;
  v4 = (v3 + v1) / 2;
  v5 = (unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 32)
                          + 2LL
                          + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8 * v4));
  v6 = a1 - (_QWORD)v5;
  while ( 1 )
  {
    v7 = *(unsigned __int16 *)((char *)v5 + v6);
    if ( !v7 )
      break;
    v8 = *v5;
    if ( !*v5 )
      goto LABEL_19;
    if ( (unsigned __int16)(v7 - 65) <= 0x19u )
      v7 |= 0x20u;
    if ( (unsigned __int16)(v8 - 65) <= 0x19u )
      v8 |= 0x20u;
    if ( v7 == 95 )
      v7 = 45;
    if ( v8 == 95 )
      v8 = 45;
    v9 = v7 - v8;
    if ( v9 )
    {
      if ( v9 >= 0 )
      {
LABEL_19:
        v1 = v4 + 1;
        goto LABEL_2;
      }
LABEL_17:
      v3 = v4 - 1;
      goto LABEL_2;
    }
    ++v5;
  }
  if ( *v5 )
    goto LABEL_17;
  return (unsigned int)v4;
}
