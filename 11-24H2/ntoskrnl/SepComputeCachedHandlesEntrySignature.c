/*
 * XREFs of SepComputeCachedHandlesEntrySignature @ 0x14091435C
 * Callers:
 *     SepGetCachedHandlesEntry @ 0x140913D04 (SepGetCachedHandlesEntry.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x14096EAB0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall SepComputeCachedHandlesEntrySignature(int *a1)
{
  int v1; // edx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  ULONG HashValue; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = 0LL;
  HashValue = 0;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      RtlHashUnicodeString((PCUNICODE_STRING)(a1 + 2), 1u, 0, &HashValue);
      return HashValue;
    }
  }
  else
  {
    v3 = *((_QWORD *)a1 + 1);
    v4 = (unsigned int)*(unsigned __int8 *)(v3 + 1) - 1;
    v5 = *(unsigned int *)(v3 + 4 * v4 + 8);
    v2 = v5 + 1;
    if ( (_DWORD)v5 )
      return *(unsigned int *)(v3 + 4 * v4 + 8);
  }
  return v2;
}
