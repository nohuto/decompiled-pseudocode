/*
 * XREFs of RtlLocateExtendedFeature @ 0x1800DB0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  __int64 v3; // r11
  ULONG v4; // esi
  __int64 v5; // r9
  __int64 Offset; // r10
  char *v7; // rdx
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // r10
  ULONG v14; // eax

  v3 = FeatureId;
  v4 = FeatureId - 2;
  if ( FeatureId - 2 > 0x3D )
    return 0LL;
  v5 = 1LL << FeatureId;
  if ( ((MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & (1LL << FeatureId)) == 0 )
    return 0LL;
  if ( (MEMORY[0x7FFE03EC] & 0xFFFFFFF8) != 0 )
    return 0LL;
  Offset = ContextEx->XState.Offset;
  if ( ContextEx->All.Offset > (int)Offset )
    return 0LL;
  if ( (signed int)(ContextEx->All.Length + ContextEx->All.Offset) < (signed int)(Offset + ContextEx->XState.Length) )
    return 0LL;
  v7 = (char *)ContextEx + Offset;
  if ( !(PCONTEXT_EX)((char *)ContextEx + Offset) )
    return 0LL;
  if ( Length )
  {
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
      v14 = *(_DWORD *)(4 * v3 + 0x7FFE0604);
    else
      v14 = *(_DWORD *)(8 * v3 + 0x7FFE03F4);
    *Length = v14;
  }
  if ( (MEMORY[0x7FFE03EC] & 2) == 0 )
    return &v7[*(unsigned int *)(8 * v3 + 0x7FFE03F0) - 512];
  v8 = *((_QWORD *)v7 + 1);
  if ( (v5 & v8) == 0 )
    return 0LL;
  v9 = 576;
  if ( (unsigned int)v3 > 2 )
  {
    v11 = 4LL;
    v12 = v4;
    v13 = 2147354124LL;
    do
    {
      if ( (v11 & v8) != 0 )
      {
        if ( (v11 & MEMORY[0x7FFE05F8]) != 0 )
          v9 = (v9 + 63) & 0xFFFFFFC0;
        v9 += *(_DWORD *)v13;
      }
      v11 = __ROL8__(v11, 1);
      v13 += 4LL;
      --v12;
    }
    while ( v12 );
  }
  if ( (v5 & MEMORY[0x7FFE05F8]) != 0 )
    v9 = (v9 + 63) & 0xFFFFFFC0;
  return &v7[v9 - 512];
}
