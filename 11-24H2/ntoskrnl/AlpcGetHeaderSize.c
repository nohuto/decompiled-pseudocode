/*
 * XREFs of AlpcGetHeaderSize @ 0x140440F30
 * Callers:
 *     AlpcGetMessageAttribute @ 0x140440E90 (AlpcGetMessageAttribute.c)
 *     AlpcInitializeMessageAttribute @ 0x140440ED0 (AlpcInitializeMessageAttribute.c)
 *     AlpcpInitializeCompletionList @ 0x140A07184 (AlpcpInitializeCompletionList.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl AlpcGetHeaderSize(ULONG Flags)
{
  int v2; // eax
  bool v3; // cf
  int v4; // ecx
  ULONG v5; // eax
  ULONG v6; // ecx
  ULONG v7; // edx
  ULONG result; // eax

  v2 = (((int)Flags >> 31) & 0x18) + 40;
  if ( (Flags & 0x40000000) == 0 )
    v2 = (((int)Flags >> 31) & 0x18) + 8;
  v3 = (Flags & 0x20000000) != 0;
  v4 = v2 + 32;
  if ( !v3 )
    v4 = v2;
  v5 = v4 + 24;
  if ( (Flags & 0x10000000) == 0 )
    v5 = v4;
  v6 = v5 + 24;
  if ( (Flags & 0x8000000) == 0 )
    v6 = v5;
  v7 = v6 + 8;
  if ( (Flags & 0x4000000) == 0 )
    v7 = v6;
  result = v7 + 8;
  if ( (Flags & 0x2000000) == 0 )
    return v7;
  return result;
}
