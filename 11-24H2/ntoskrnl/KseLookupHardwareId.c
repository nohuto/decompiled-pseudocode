/*
 * XREFs of KseLookupHardwareId @ 0x14073FD4C
 * Callers:
 *     AhcCacheQueryHwId @ 0x140828F30 (AhcCacheQueryHwId.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KsepCacheLock @ 0x1408BB520 (KsepCacheLock.c)
 *     KsepCacheLookup @ 0x14095B438 (KsepCacheLookup.c)
 *     KsepCacheUnlock @ 0x14095B51C (KsepCacheUnlock.c)
 *     AslStringPatternMatchExW @ 0x140960540 (AslStringPatternMatchExW.c)
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
  v3 = qword_140E66B30;
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
      KsepCacheLock(qword_140E66B30);
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
