/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x180074C40
 * Callers:
 *     RtlRaiseException @ 0x180075020 (RtlRaiseException.c)
 *     RtlDispatchException @ 0x180075F60 (RtlDispatchException.c)
 *     RtlUnwindEx @ 0x180077090 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  char v5; // bl
  bool v6; // cl
  int v7; // ecx
  int v8; // r11d
  __int64 v9; // rax
  ULONG v10; // edx
  int v11; // ecx
  int v12; // edi
  ULONG64 v13; // r9
  __int64 v14; // r9
  unsigned int v15; // r10d
  unsigned int i; // r8d
  __int64 v17; // rcx

  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && (ContextFlags & 0x7FFFFF0) != 0x200000
    && (ContextFlags & 0x7FFFFC0) != 0x400000 )
  {
    return -1073741811;
  }
  v5 = 1;
  v6 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v6 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v6 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return -1073741637;
    v5 = 3;
  }
  if ( (ContextFlags & 0x100080) == 0x100080 )
    return -1073741637;
  v7 = 0;
  v8 = 0;
  v9 = 4LL;
  if ( (ContextFlags & 0x10000) != 0 )
  {
    v7 = 716;
    v8 = 4;
    v10 = ContextFlags & 0x100000;
  }
  else
  {
    v10 = ContextFlags & 0x100000;
    if ( (ContextFlags & 0x100000) != 0 )
    {
      v7 = 1232;
    }
    else
    {
      if ( (ContextFlags & 0x200000) != 0 )
      {
        v7 = 416;
        v8 = 8;
        goto LABEL_13;
      }
      if ( (ContextFlags & 0x400000) == 0 )
        goto LABEL_13;
      v7 = 912;
    }
    v8 = 16;
  }
LABEL_13:
  v11 = v7 + 32;
  if ( (v5 & 2) != 0 )
  {
    v12 = -v8 & (v8 + v11 - 1);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v13 = (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & EnabledExtendedFeatures;
      if ( (ContextFlags & 0x10000) != 0 )
      {
        v14 = v13 & 0x40000000000009FFLL;
      }
      else if ( v10 )
      {
        v14 = v13 & 0x4000000000060DFFLL;
      }
      else if ( (ContextFlags & 0x400000) != 0 )
      {
        v14 = v13 & 4;
      }
      else
      {
        v14 = 0LL;
      }
      v15 = 576;
      for ( i = 2; i < 0x40; i += 2 )
      {
        if ( (v9 & v14) != 0 )
        {
          if ( (v9 & MEMORY[0x7FFE05F8]) != 0 )
            v15 = (v15 + 63) & 0xFFFFFFC0;
          v15 += *(_DWORD *)(4LL * i + 0x7FFE0604);
        }
        v17 = __ROL8__(v9, 1);
        if ( (v17 & v14) != 0 )
        {
          if ( (v17 & MEMORY[0x7FFE05F8]) != 0 )
            v15 = (v15 + 63) & 0xFFFFFFC0;
          v15 += *(_DWORD *)(4LL * (i + 1) + 0x7FFE0604);
        }
        v9 = __ROL8__(v9, 2);
      }
    }
    else
    {
      v15 = MEMORY[0x7FFE03E8];
    }
    v11 = v15 - v8 + v12 - 448;
  }
  *ContextLength = v8 + v11 - 1;
  return 0;
}
