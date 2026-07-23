/*
 * XREFs of HalpInterruptSetRemappedDestination @ 0x1403744F0
 * Callers:
 *     HalpInterruptSetDestination @ 0x140373710 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpInterruptDestinationToTarget @ 0x140370DAC (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptGetRemappedLineState @ 0x14037463C (HalpInterruptGetRemappedLineState.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x1403746F4 (HalpIommuUpdateRemappingTableEntry.c)
 */

__int64 __fastcall HalpInterruptSetRemappedDestination(__int64 a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  _DWORD v10[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  _DWORD *v12; // [rsp+30h] [rbp-40h]
  _OWORD v13[3]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v14; // [rsp+68h] [rbp-8h]
  __int64 v15; // [rsp+98h] [rbp+28h] BYREF

  v3 = 0;
  v15 = 0LL;
  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  v10[1] = 0;
  LODWORD(v12) = 0;
  if ( (int)HalpInterruptGetRemappedLineState(a1, a2, &v15, v13) < 0 )
  {
    HalpInterruptLastProblemController = 0LL;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblem = 18;
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemLine = 844;
    return (unsigned int)-1073741275;
  }
  v11 = a3;
  v10[0] = 1;
  v12 = a2 + 10;
  if ( (int)HalpInterruptDestinationToTarget(v6, (__int64)v10, (_DWORD *)&v13[1] + 2) < 0 )
  {
    v9 = v15;
    HalpInterruptLastProblemController = v15;
    HalpInterruptLastProblem = 22;
    HalpInterruptLastProblemStatus = 0;
    HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
    HalpInterruptLastProblemLine = 866;
    if ( v15 )
    {
      *(_QWORD *)(v15 + 316) = 22LL;
      *(_QWORD *)(v9 + 328) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      *(_DWORD *)(v9 + 336) = 866;
    }
    return (unsigned int)-1073741275;
  }
  if ( a2[1] != 209 && (unsigned int)(DWORD2(v13[1]) - 5) <= 1 )
    HIDWORD(v13[0]) |= 2u;
  LOBYTE(v7) = *a2 == 3;
  HalpIommuUpdateRemappingTableEntry(v7, a2[10] & 0x3FFFFFFF, v13);
  return v3;
}
