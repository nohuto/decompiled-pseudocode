/*
 * XREFs of NVMeEnableThrottling @ 0x14000CB70
 * Callers:
 *     NVMeControllerInitPart3 @ 0x14000FB50 (NVMeControllerInitPart3.c)
 * Callees:
 *     <none>
 */

void __fastcall NVMeEnableThrottling(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  if ( !*(_BYTE *)(a1 + 20) )
  {
    v2 = *(unsigned int *)(a1 + 132);
    if ( !*(_QWORD *)(a1 + 3824) && !(unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL) )
    {
      MEMORY[0] = 0;
      MEMORY[8] = 0LL;
      MEMORY[0x10] = 10 * v2;
      MEMORY[0x18] = 0;
      *(_QWORD *)(a1 + 3824) = 0LL;
    }
    v3 = *(unsigned int *)(a1 + 132);
    if ( !*(_QWORD *)(a1 + 3832) && !(unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL) )
    {
      MEMORY[0] = 1;
      MEMORY[8] = 0LL;
      MEMORY[0x10] = 10 * v3;
      MEMORY[0x18] = 0;
      *(_QWORD *)(a1 + 3832) = 0LL;
    }
    v4 = *(unsigned int *)(a1 + 132);
    if ( !*(_QWORD *)(a1 + 3840) && !(unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL) )
    {
      MEMORY[0] = 2;
      MEMORY[8] = 0LL;
      MEMORY[0x10] = 10 * v4;
      MEMORY[0x18] = 0;
      *(_QWORD *)(a1 + 3840) = 0LL;
    }
    v5 = *(unsigned int *)(a1 + 132);
    if ( !*(_QWORD *)(a1 + 3848) && !(unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL) )
    {
      MEMORY[0] = 3;
      MEMORY[8] = 0LL;
      MEMORY[0x10] = 10 * v5;
      MEMORY[0x18] = 0;
      *(_QWORD *)(a1 + 3848) = 0LL;
    }
    v6 = *(unsigned int *)(a1 + 132);
    if ( !*(_QWORD *)(a1 + 3856) && !(unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL) )
    {
      MEMORY[0] = 4;
      MEMORY[8] = 0LL;
      MEMORY[0x10] = 10 * v6;
      MEMORY[0x18] = 0;
      *(_QWORD *)(a1 + 3856) = 0LL;
    }
    v7 = *(unsigned int *)(a1 + 132);
    if ( !*(_QWORD *)(a1 + 3872) && !(unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL) )
    {
      MEMORY[0] = 6;
      MEMORY[8] = 0LL;
      MEMORY[0x10] = 10 * v7;
      MEMORY[0x18] = 0;
      *(_QWORD *)(a1 + 3872) = 0LL;
    }
    v8 = *(unsigned int *)(a1 + 132);
    if ( !*(_QWORD *)(a1 + 3880) && !(unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL) )
    {
      MEMORY[0] = 7;
      MEMORY[8] = 0LL;
      MEMORY[0x10] = 10 * v8;
      MEMORY[0x18] = 0;
      *(_QWORD *)(a1 + 3880) = 0LL;
    }
    if ( (*(_DWORD *)(a1 + 24) & 0x80u) == 0 )
    {
      v9 = *(unsigned int *)(a1 + 136);
      if ( !*(_QWORD *)(a1 + 3864) && !(unsigned int)StorPortExtendedFunction(0LL, a1, 32LL, 1701672526LL) )
      {
        MEMORY[0] = 5;
        MEMORY[8] = 0LL;
        MEMORY[0x10] = 10 * v9;
        MEMORY[0x18] = 0;
        *(_QWORD *)(a1 + 3864) = 0LL;
      }
    }
  }
}
