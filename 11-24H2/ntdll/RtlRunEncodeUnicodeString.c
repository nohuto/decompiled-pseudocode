/*
 * XREFs of RtlRunEncodeUnicodeString @ 0x18010B380
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemTime @ 0x180160B90 (ZwQuerySystemTime.c)
 */

void __cdecl RtlRunEncodeUnicodeString(PUCHAR Seed, PUNICODE_STRING String)
{
  UCHAR v3; // r8
  unsigned int j; // r9d
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int i; // ecx
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  SystemTime.QuadPart = 0LL;
  v3 = *Seed;
  if ( !*Seed )
  {
    ZwQuerySystemTime(&SystemTime);
    v3 = BYTE1(SystemTime.LowPart);
    for ( i = 1; ; ++i )
    {
      *Seed = v3;
      if ( v3 || i >= 8 )
        break;
      v3 = *((_BYTE *)&SystemTime.LowPart + i);
    }
    if ( !v3 )
    {
      *Seed = 1;
      v3 = 1;
    }
  }
  if ( String->Length )
    *(_BYTE *)String->Buffer ^= v3 | 0x43;
  for ( j = 1; j < String->Length; *((_BYTE *)String->Buffer + v7) ^= *Seed ^ *((_BYTE *)String->Buffer + v6) )
  {
    v6 = j - 1;
    v7 = j++;
  }
}
