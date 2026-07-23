/*
 * XREFs of MiCommitVadMetadataBits @ 0x14091D290
 * Callers:
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140916A48 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1409173D0 (MiMapViewOfDataSection.c)
 *     MiCommitInitialVadMetadataBits @ 0x14091C25C (MiCommitInitialVadMetadataBits.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0BD00 (MiMapViewOfPhysicalSection.c)
 *     MiMapViewOfImageSection @ 0x140AE8594 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiCommitVadCfgBits @ 0x14091C360 (MiCommitVadCfgBits.c)
 *     PsWow64GetProcessMachine @ 0x14091D9C0 (PsWow64GetProcessMachine.c)
 */

__int64 __fastcall MiCommitVadMetadataBits(__int64 a1, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rdi
  unsigned int v6; // ebp
  __int64 v7; // r8
  _KPROCESS *Process; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rsi
  int v14; // r12d
  __int64 v15; // r13
  int v16; // eax
  __int64 result; // rax
  __int64 v18; // [rsp+40h] [rbp-68h]
  __int64 v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+50h] [rbp-58h]
  _KPROCESS *v21; // [rsp+B8h] [rbp+10h]
  __int16 v22; // [rsp+C0h] [rbp+18h]

  v4 = *(unsigned __int8 *)(a1 + 32);
  v6 = 0;
  v7 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
  v19 = *(unsigned int *)(a1 + 24);
  v10 = (v19 | (v4 << 32)) << 12;
  v11 = ((*(unsigned int *)(a1 + 28) | v9) << 12) | 0xFFF;
  v21 = Process;
  if ( a2 )
  {
    v16 = 3;
    v10 = *a2;
    v11 = a2[1] | 0xFFF;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(a1 + 48) & 0x200000) != 0
    || (v12 = *(__int64 **)(a1 + 72), v13 = *v12, v14 = *(_DWORD *)(*v12 + 56), (v14 & 0x20) == 0) )
  {
    v16 = 3;
    goto LABEL_12;
  }
  v20 = *(_QWORD *)v13;
  v18 = *(_QWORD *)(*(_QWORD *)v13 + 56LL);
  v15 = (__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(v13 + 136)) >> 3;
  v22 = *(_WORD *)(v18 + 48);
  if ( v22 == (unsigned __int16)PsWow64GetProcessMachine(Process) || v22 == -31132 )
  {
    if ( (*(_BYTE *)(v18 + 51) & 4) != 0 )
    {
      if ( (v19 | (v4 << 32)) - v15 != *(_QWORD *)(v20 + 32) >> 12
        || (v14 & 0x20000000) != 0
        || (v16 = 1, *(_DWORD *)(v13 + 88) == -1) )
      {
        v16 = 2;
      }
      v7 = v13;
      goto LABEL_11;
    }
  }
  else
  {
    a3 |= 2u;
  }
  v16 = 3;
  v7 = 0LL;
LABEL_11:
  v10 = (v19 | (v4 << 32)) << 12;
  Process = v21;
LABEL_12:
  if ( (a3 & 1) == 0 )
    return v6;
  result = MiCommitVadCfgBits((__int64)Process, a1, v10, v11 + 1, v7, v16, a3);
  v6 = result;
  if ( (int)result >= 0 )
    return v6;
  return result;
}
