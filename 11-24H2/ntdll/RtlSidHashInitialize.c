/*
 * XREFs of RtlSidHashInitialize @ 0x1800F4630
 * Callers:
 *     <none>
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlSidHashInitialize(
        PSID_AND_ATTRIBUTES SidAttr,
        ULONG SidCount,
        PSID_AND_ATTRIBUTES_HASH SidAttrHash)
{
  ULONG v3; // ebx
  ULONG v7; // r9d
  unsigned __int8 *Sid; // rcx
  unsigned int v9; // edx
  __int64 v10; // r8

  v3 = 0;
  if ( !SidAttrHash )
    return -1073741811;
  memset_thunk_772440563353939046(SidAttrHash, 0, 0x110uLL);
  if ( SidAttr && SidCount )
  {
    v7 = 64;
    SidAttrHash->SidAttr = SidAttr;
    SidAttrHash->SidCount = SidCount;
    if ( SidCount <= 0x40 )
      v7 = SidCount;
    do
    {
      Sid = (unsigned __int8 *)SidAttr->Sid;
      ++SidAttr;
      v9 = Sid[4 * Sid[1] + 4];
      v10 = 1LL << v3++;
      SidAttrHash->Hash[v9 & 0xF] |= v10;
      SidAttrHash->Hash[((unsigned __int64)v9 >> 4) + 16] |= v10;
    }
    while ( v3 < v7 );
  }
  return 0;
}
