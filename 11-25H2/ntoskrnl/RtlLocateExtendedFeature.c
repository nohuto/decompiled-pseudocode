/*
 * XREFs of RtlLocateExtendedFeature @ 0x140406510
 * Callers:
 *     PspAllocateThread @ 0x1408F2828 (PspAllocateThread.c)
 *     PspSetupUserShadowStack @ 0x140A14F44 (PspSetupUserShadowStack.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlLocateExtendedFeature(PCONTEXT_EX ContextEx, ULONG FeatureId, PULONG Length)
{
  __int64 v3; // rsi
  __int64 Offset; // rdi
  char *v5; // rdi
  __int64 v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // rax
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // rax
  ULONG v13; // eax

  if ( FeatureId - 2 > 0x3D )
    return 0LL;
  v3 = 1LL << FeatureId;
  if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & (1LL << FeatureId)) == 0
    || (MEMORY[0xFFFFF780000003EC] & 0xFFFFFFF8) != 0 )
  {
    return 0LL;
  }
  Offset = ContextEx->XState.Offset;
  if ( ContextEx->All.Offset <= (int)Offset
    && (signed int)(ContextEx->All.Length + ContextEx->All.Offset) >= (signed int)(Offset + ContextEx->XState.Length) )
  {
    v5 = (char *)ContextEx + Offset;
    if ( v5 )
    {
      if ( Length )
      {
        if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
          v13 = *(_DWORD *)(4LL * FeatureId - 0x87FFFFFF9FCLL);
        else
          v13 = *(_DWORD *)(8LL * FeatureId - 0x87FFFFFFC0CLL);
        *Length = v13;
      }
      if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
      {
        v11 = *(unsigned int *)(8LL * FeatureId - 0x87FFFFFFC10LL);
        return &v5[v11 - 512];
      }
      v6 = *((_QWORD *)v5 + 1);
      if ( (v3 & v6) != 0 )
      {
        v7 = 576;
        if ( FeatureId > 2 )
        {
          v8 = 4LL;
          v9 = FeatureId - 2;
          v10 = (_DWORD *)0xFFFFF7800000060CLL;
          do
          {
            if ( (v8 & v6) != 0 )
            {
              if ( (v8 & MEMORY[0xFFFFF780000005F8]) != 0 )
                v7 = (v7 + 63) & 0xFFFFFFC0;
              v7 += *v10;
            }
            v8 = __ROL8__(v8, 1);
            ++v10;
            --v9;
          }
          while ( v9 );
        }
        if ( (v3 & MEMORY[0xFFFFF780000005F8]) != 0 )
          v7 = (v7 + 63) & 0xFFFFFFC0;
        v11 = v7;
        return &v5[v11 - 512];
      }
    }
  }
  return 0LL;
}
