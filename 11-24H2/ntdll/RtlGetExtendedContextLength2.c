/*
 * XREFs of RtlGetExtendedContextLength2 @ 0x1800D7C70
 * Callers:
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 *     RtlpWalkFrameChain @ 0x180016100 (RtlpWalkFrameChain.c)
 *     RtlDispatchException @ 0x180019060 (RtlDispatchException.c)
 *     RtlRaiseException @ 0x180070510 (RtlRaiseException.c)
 *     RtlGetExtendedContextLength @ 0x1800C3600 (RtlGetExtendedContextLength.c)
 *     RtlUnwind @ 0x1800D75E0 (RtlUnwind.c)
 *     RtlWow64GetCpuAreaInfo @ 0x1800D79C0 (RtlWow64GetCpuAreaInfo.c)
 *     RtlWow64GetCurrentCpuArea @ 0x1800D7B30 (RtlWow64GetCurrentCpuArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetExtendedContextLength2(int a1, _DWORD *a2, __int64 a3)
{
  char v6; // r10
  bool v7; // cl
  int v8; // eax
  int v9; // ebx
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  __int64 v14; // r10
  __int64 v15; // r10
  unsigned int v16; // eax
  unsigned int i; // r9d
  __int64 v18; // rcx

  if ( (a1 & 0x27FFFF80) != 0x10000
    && (a1 & 0x7FFFF20) != 0x100000
    && (a1 & 0x7FFFFF0) != 0x200000
    && (a1 & 0x7FFFF00) != 0x400000 )
  {
    return 3221225485LL;
  }
  v6 = 1;
  v7 = 0;
  if ( (a1 & 0x400020) != 0x400020 )
    v7 = (a1 & 0x10040) != 65600 && (a1 & 0x100040) != 1048640;
  if ( !v7 )
  {
    if ( !MEMORY[0x7FFE03D8] )
      return 3221225659LL;
    v6 = 3;
  }
  if ( (a1 & 0x100080) == 0x100080 )
    return 3221225659LL;
  v8 = 0;
  v9 = 0;
  v10 = 4LL;
  if ( (a1 & 0x10000) == 0 )
  {
    v11 = a1 & 0x100000;
    if ( (a1 & 0x100000) != 0 )
    {
      v8 = 1232;
    }
    else
    {
      if ( (a1 & 0x200000) != 0 )
      {
        v8 = 416;
        v9 = 8;
        goto LABEL_22;
      }
      if ( (a1 & 0x400000) == 0 )
        goto LABEL_22;
      v8 = 912;
    }
    v9 = 16;
    goto LABEL_22;
  }
  v8 = 716;
  v9 = 4;
  v11 = a1 & 0x100000;
LABEL_22:
  v12 = v8 + 32;
  if ( (v6 & 2) != 0 )
  {
    v13 = -v9 & (v9 + v12 - 1);
    if ( (MEMORY[0x7FFE03EC] & 2) != 0 )
    {
      v14 = a3 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]);
      if ( (a1 & 0x10000) != 0 )
      {
        v15 = v14 & 0x40000000000009FFLL;
      }
      else if ( v11 )
      {
        v15 = v14 & 0x4000000000060DFFLL;
      }
      else if ( (a1 & 0x400000) != 0 )
      {
        v15 = v14 & 4;
      }
      else
      {
        v15 = 0LL;
      }
      v16 = 576;
      for ( i = 2; i < 0x40; i += 2 )
      {
        if ( (v10 & v15) != 0 )
        {
          if ( (v10 & MEMORY[0x7FFE05F8]) != 0 )
            v16 = (v16 + 63) & 0xFFFFFFC0;
          v16 += *(_DWORD *)(4LL * i + 0x7FFE0604);
        }
        v18 = __ROL8__(v10, 1);
        if ( (v18 & v15) != 0 )
        {
          if ( (v18 & MEMORY[0x7FFE05F8]) != 0 )
            v16 = (v16 + 63) & 0xFFFFFFC0;
          v16 += *(_DWORD *)(4LL * (i + 1) + 0x7FFE0604);
        }
        v10 = __ROL8__(v10, 2);
      }
    }
    else
    {
      v16 = MEMORY[0x7FFE03E8];
    }
    v12 = v13 - 448 + v16 - v9;
  }
  *a2 = v9 + v12 - 1;
  return 0LL;
}
