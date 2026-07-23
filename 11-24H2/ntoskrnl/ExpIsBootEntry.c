/*
 * XREFs of ExpIsBootEntry @ 0x14094E360
 * Callers:
 *     HalpEnumerateEnvironmentVariablesWithFilter @ 0x140439A00 (HalpEnumerateEnvironmentVariablesWithFilter.c)
 * Callees:
 *     ExpTranslateBootEntryNameToId @ 0x14094E3A8 (ExpTranslateBootEntryNameToId.c)
 */

bool __fastcall ExpIsBootEntry(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  char v4; // [rsp+40h] [rbp+18h] BYREF

  v2 = *a1 - EfiBootVariablesGuid;
  if ( *a1 == EfiBootVariablesGuid )
    v2 = a1[1] + 0x73D4FC671FFFF256LL;
  return !v2 && (unsigned int)ExpTranslateBootEntryNameToId(a2, &v4) != 0;
}
