/*
 * XREFs of MapPhysMem @ 0x140031068
 * Callers:
 *     MapUnmapPhysMem @ 0x140030F40 (MapUnmapPhysMem.c)
 * Callees:
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 */

__int64 __fastcall MapPhysMem(__int64 BugCheckParameter3, ULONG_PTR BugCheckParameter4, __int64 *a3)
{
  ULONG_PTR v3; // r14
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 i; // rsi
  __int64 v9; // rcx
  unsigned int v10; // esi
  int MemoryCachingRequirements; // ebx
  int v12; // eax
  __int64 v13; // rax
  int v15; // [rsp+64h] [rbp+Ch]
  int v16; // [rsp+68h] [rbp+10h] BYREF

  v15 = HIDWORD(BugCheckParameter3);
  v16 = 0;
  v3 = (unsigned int)BugCheckParameter4;
  v6 = (unsigned int)BugCheckParameter4 + BugCheckParameter3;
  if ( v6 > 4096 )
  {
    v7 = 4096LL;
    if ( BugCheckParameter3 >= 4096 )
      v7 = BugCheckParameter3;
    for ( i = 0LL; (unsigned __int64)(unsigned int)i < *(_QWORD *)(MemoryInfo + 8); i = (unsigned int)(i + 1) )
    {
      v9 = *(_QWORD *)(MemoryInfo + 24 * i + 16);
      if ( v6 > v9 && v7 < *(_QWORD *)(MemoryInfo + 24 * i + 24) + v9 )
      {
        if ( *(_DWORD *)(MemoryInfo + 24 * i + 32) == 1 )
          KeBugCheckEx(0xA5u, 0x1000uLL, v15, (unsigned int)BugCheckParameter3, v3);
        if ( *(_DWORD *)(MemoryInfo + 24 * i + 32) == 3 )
        {
          if ( gAllowInvalidReclaimMemoryMap )
          {
            LogError(-1072431088);
            AcpiDiagTraceAmlError(0LL, -1072431088);
            PrintDebugMessage(0x67u, (const void *)BugCheckParameter3, (const void *)v6, 0LL, 0LL);
          }
        }
      }
    }
  }
  v10 = 516;
  MemoryCachingRequirements = HalGetMemoryCachingRequirements(BugCheckParameter3, v3, &v16);
  if ( MemoryCachingRequirements >= 0 )
  {
    v12 = v16;
  }
  else
  {
    v12 = 0;
    v16 = 0;
    MemoryCachingRequirements = 0;
  }
  if ( v12 == 1 )
    v10 = 4;
  v13 = MmMapIoSpaceEx(BugCheckParameter3, v3, v10);
  if ( v13 )
    *a3 = v13;
  else
    return (unsigned int)-1073741670;
  return (unsigned int)MemoryCachingRequirements;
}
