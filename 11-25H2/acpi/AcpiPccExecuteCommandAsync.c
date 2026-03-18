/*
 * XREFs of AcpiPccExecuteCommandAsync @ 0x140051170
 * Callers:
 *     AcpiPccExecuteCommand @ 0x14009FB90 (AcpiPccExecuteCommand.c)
 * Callees:
 *     AcpiPccRingDoorbell @ 0x140051340 (AcpiPccRingDoorbell.c)
 *     AcpiPccLockSubspace @ 0x140051700 (AcpiPccLockSubspace.c)
 *     AcpiDiagTracePccExecuteCommand @ 0x140051754 (AcpiDiagTracePccExecuteCommand.c)
 *     AcpiPccUnlockSubspace @ 0x140051A9C (AcpiPccUnlockSubspace.c)
 *     AcpiPccSetCommand @ 0x1400642C8 (AcpiPccSetCommand.c)
 */

__int64 __fastcall AcpiPccExecuteCommandAsync(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  bool v5; // zf
  __int64 v6; // r14
  char v9; // bl
  char v10; // r15
  unsigned __int64 v11; // rsi
  unsigned int v12; // ebp
  __int64 v13; // rdx
  LARGE_INTEGER v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-38h] BYREF
  char v22; // [rsp+70h] [rbp+8h] BYREF

  v4 = a4;
  v5 = *(_DWORD *)(a1 + 16) == 2;
  v6 = a3;
  v22 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  if ( v5 )
  {
    v12 = -1073741637;
  }
  else
  {
    AcpiPccLockSubspace(a1, &v22);
    if ( *(_QWORD *)(a1 + 424) )
    {
      v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v15 = *(_QWORD *)(a1 + 424) + *(_QWORD *)(a1 + 416);
      if ( v15 > v14.QuadPart )
      {
        v16 = v15 - v14.QuadPart;
        if ( is_mul_ok(v16, 0x989680uLL) )
        {
          v17 = v16 * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
          v13 = v16 * (unsigned __int128)0x989680uLL % (unsigned __int64)PerformanceFrequency.QuadPart;
        }
        else
        {
          v17 = -10000000 / PerformanceFrequency.QuadPart;
          v13 = -10000000 % PerformanceFrequency.QuadPart;
        }
        v11 = v17;
      }
    }
    v18 = *(_DWORD *)(a1 + 8);
    v12 = -1073741823;
    v10 = (v18 >> 1) & 0xF;
    if ( v10 == 5 )
    {
      if ( v6 )
      {
        *(_QWORD *)(a1 + 376) = v6;
        v18 = v18 & 0xFFFFFFE1 | 0xC;
      }
      else
      {
        v18 = v18 & 0xFFFFFFE1 | 0x10;
      }
      *(_DWORD *)(a1 + 8) = v18;
      *(_QWORD *)(a1 + 384) = v4;
      if ( v11 )
      {
        v18 ^= ((unsigned __int8)v18 ^ (unsigned __int8)(v18 + 2)) & 0x1E;
        *(_DWORD *)(a1 + 8) = v18;
      }
      v12 = 259;
    }
    LOBYTE(v13) = v22;
    v9 = (v18 >> 1) & 0xF;
    AcpiPccUnlockSubspace(a1, v13);
    if ( v12 == 259 )
    {
      LOBYTE(v19) = a2;
      AcpiPccSetCommand(a1, v19);
      if ( v11 <= 0x1F4 )
      {
        if ( v11 )
          KeStallExecutionProcessor((v11 + 5) / 0xA);
        AcpiPccRingDoorbell(0LL, a1, 0LL, 0LL);
      }
      else
      {
        KeSetTimer((PKTIMER)(a1 + 432), (LARGE_INTEGER)-(__int64)v11, (PKDPC)(a1 + 496));
      }
    }
  }
  LOBYTE(a4) = v9;
  LOBYTE(a3) = v10;
  AcpiDiagTracePccExecuteCommand(*(_DWORD *)(a1 + 4), a2, a3, a4, v11, v12);
  return v12;
}
