/*
 * XREFs of KseLookupHardwareId @ 0x14073DC7C
 * Callers:
 *     AhcCacheQueryHwId @ 0x14082976C (AhcCacheQueryHwId.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     KsepCacheLock @ 0x1408B8ED0 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x140942EF8 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x140942FDC (KsepCacheUnlock.c)
 *     AslStringPatternMatchExW @ 0x140948000 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall KseLookupHardwareId(PCWSTR SourceString)
{
  WCHAR v1; // r15
  PCWSTR v2; // rbp
  ULONG_PTR v3; // rdi
  unsigned int v5; // esi
  _WORD *v6; // rcx
  __int16 v7; // ax
  _QWORD *i; // rbx
  _WORD *v9; // rdx
  UNICODE_STRING v11[2]; // [rsp+20h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  int v13; // [rsp+50h] [rbp-28h]

  v1 = *SourceString;
  v2 = SourceString + 1;
  v3 = qword_140E66C60;
  v13 = 0;
  v5 = -1073741275;
  if ( v1 != 42 )
    v2 = SourceString;
  v6 = v2;
  memset(v11, 0, sizeof(v11));
  DestinationString = 0LL;
  while ( 1 )
  {
    v7 = *v6;
    if ( !*v6 )
      break;
    if ( v7 == 42 || v7 == 63 )
    {
      KsepCacheLock(qword_140E66C60);
      for ( i = *(_QWORD **)(v3 + 32); ; i = (_QWORD *)*i )
      {
        if ( i == (_QWORD *)(v3 + 32) )
          goto LABEL_17;
        v9 = (_WORD *)i[3];
        if ( v1 == 42 )
        {
          if ( *v9 != 42 )
            continue;
          ++v9;
        }
        if ( (unsigned int)AslStringPatternMatchExW(v2, v9) )
        {
          v5 = 0;
          goto LABEL_17;
        }
      }
    }
    ++v6;
  }
  RtlInitUnicodeString((PUNICODE_STRING)&DestinationString.Buffer, SourceString);
  KsepCacheLock(v3);
  v5 = KsepCacheLookup(v3, v11) == 0 ? 0xC0000225 : 0;
LABEL_17:
  KsepCacheUnlock(v3);
  return v5;
}
