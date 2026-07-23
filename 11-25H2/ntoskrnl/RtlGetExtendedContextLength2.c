/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x14025D850
 * Callers:
 *     RtlDispatchException @ 0x14025CE90 (RtlDispatchException.c)
 *     RtlUnwind @ 0x14025DB00 (RtlUnwind.c)
 *     RtlRaiseException @ 0x1405DC840 (RtlRaiseException.c)
 *     PspWow64GetContextThread_BeforeFix @ 0x14076CC9C (PspWow64GetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread_BeforeFix @ 0x14076D0C0 (PspWow64SetContextThread_BeforeFix.c)
 *     PspWow64SetContextThread @ 0x1408B96E4 (PspWow64SetContextThread.c)
 *     NtCreateThreadEx @ 0x1408EFF10 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x14090A9A0 (PspInitializeThunkContext.c)
 *     NtCreateUserProcess @ 0x1409BC1D0 (NtCreateUserProcess.c)
 *     PspWow64GetContextThread @ 0x1409C4730 (PspWow64GetContextThread.c)
 *     PspWow64SetupCpuArea @ 0x1409EB8A0 (PspWow64SetupCpuArea.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1409EBEDC (RtlWow64GetCpuAreaInfo.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlGetExtendedContextLength2(
        ULONG ContextFlags,
        PULONG ContextLength,
        ULONG64 EnabledExtendedFeatures)
{
  char v6; // di
  bool v7; // cl
  int v8; // edx
  int v9; // ebx
  __int64 v10; // rcx
  ULONG v11; // r8d
  int v12; // edx
  int v13; // eax
  ULONG64 v15; // r10
  __int64 v16; // r10
  unsigned int v17; // r9d
  unsigned int i; // r8d
  __int64 v19; // rax

  if ( (ContextFlags & 0x27FFFF80) != 0x10000
    && (ContextFlags & 0x7FFFF20) != 0x100000
    && ((ContextFlags & 0x200000) == 0 || (ContextFlags & 0x7DFFFF0) != 0)
    && (ContextFlags & 0x7FFFFC0) != 0x400000 )
  {
    return -1073741811;
  }
  v6 = 1;
  v7 = 0;
  if ( (ContextFlags & 0x400020) != 0x400020 )
    v7 = (ContextFlags & 0x10040) != 65600 && (ContextFlags & 0x100040) != 1048640;
  if ( !v7 )
  {
    if ( !MEMORY[0xFFFFF780000003D8] )
      return -1073741637;
    v6 = 3;
  }
  if ( (ContextFlags & 0x100080) != 0x100080 )
    goto LABEL_13;
  if ( !(_BYTE)KiKernelCetEnabled )
    return -1073741637;
  v6 |= 4u;
LABEL_13:
  v8 = 0;
  v9 = 0;
  v10 = 4LL;
  if ( (ContextFlags & 0x10000) != 0 )
  {
    v8 = 716;
    v9 = 4;
    v11 = ContextFlags & 0x100000;
  }
  else
  {
    v11 = ContextFlags & 0x100000;
    if ( (ContextFlags & 0x100000) != 0 )
    {
      v8 = 1232;
    }
    else
    {
      if ( (ContextFlags & 0x200000) != 0 )
      {
        v8 = 416;
        v9 = 8;
        goto LABEL_17;
      }
      if ( (ContextFlags & 0x400000) == 0 )
        goto LABEL_17;
      v8 = 912;
    }
    v9 = 16;
  }
LABEL_17:
  v12 = v8 + 32;
  if ( (v6 & 2) != 0 )
  {
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      v15 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708]) & EnabledExtendedFeatures;
      if ( (ContextFlags & 0x10000) != 0 )
      {
        v16 = v15 & 0x40000000000009FFLL;
      }
      else if ( v11 )
      {
        v16 = v15 & 0x4000000000060DFFLL;
      }
      else if ( (ContextFlags & 0x400000) != 0 )
      {
        v16 = v15 & 4;
      }
      else
      {
        v16 = 0LL;
      }
      v17 = 576;
      for ( i = 2; i < 0x40; i += 2 )
      {
        if ( (v10 & v16) != 0 )
        {
          if ( (v10 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v17 = (v17 + 63) & 0xFFFFFFC0;
          v17 += *(_DWORD *)(4LL * i - 0x87FFFFFF9FCLL);
        }
        v19 = __ROL8__(v10, 1);
        if ( (v19 & v16) != 0 )
        {
          if ( (v19 & MEMORY[0xFFFFF780000005F8]) != 0 )
            v17 = (v17 + 63) & 0xFFFFFFC0;
          v17 += *(_DWORD *)(4LL * (i + 1) - 0x87FFFFFF9FCLL);
        }
        v10 = __ROL8__(v10, 2);
      }
    }
    else
    {
      v17 = MEMORY[0xFFFFF780000003E8];
    }
    v12 = v17 - v9 + (-v9 & (v12 + v9 - 1)) - 448;
  }
  v13 = v12 + 32;
  if ( (v6 & 4) == 0 )
    v13 = v12;
  *ContextLength = v9 - 1 + v13;
  return 0;
}
