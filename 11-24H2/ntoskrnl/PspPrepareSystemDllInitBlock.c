/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x1408DFC08
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x1408DF5FC (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     PsWow64GetProcessNtdllType @ 0x1408DFF44 (PsWow64GetProcessNtdllType.c)
 *     PspWow64GetSharedInformation @ 0x1408DFF60 (PspWow64GetSharedInformation.c)
 *     PspGetScpCfgFunctions @ 0x140A26450 (PspGetScpCfgFunctions.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(int a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  _KPROCESS *Process; // r15
  unsigned int ProcessNtdllType; // eax
  __int64 v8; // rcx
  __int64 SharedInformation; // rax
  __int64 v10; // r9
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  _QWORD *ScpCfgFunctions; // rax
  volatile _KAFFINITY_EX *v16; // rax
  __int16 v17; // ax
  volatile _KAFFINITY_EX *v19; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  __int128 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+38h] [rbp-60h]
  __int128 v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+50h] [rbp-48h]
  unsigned __int64 v25; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v26; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v27; // [rsp+B8h] [rbp+20h]

  v4 = 0LL;
  v5 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = *(_QWORD *)(PspWow64GetSharedInformation(1LL) + 56);
      ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
      v5 = ActiveProcessors[4].StaticBitmap[19];
      v25 = ActiveProcessors[4].StaticBitmap[20];
    }
  }
  else
  {
    v4 = PsNtdllExports;
    v16 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    v5 = v16[4].StaticBitmap[15];
    v25 = v16[4].StaticBitmap[16];
    if ( Process[1].ReadyTime )
    {
      v17 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v17 == 332 || v17 == 452 )
      {
        v19 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
        v26 = v19[4].StaticBitmap[19];
        v27 = v19[4].StaticBitmap[20];
      }
    }
  }
  if ( a2 )
  {
    v21 = *(_OWORD *)(a2 + 336);
    v22 = *(_QWORD *)(a2 + 352);
    v23 = *(_OWORD *)(a2 + 448);
    v24 = *(_QWORD *)(a2 + 464);
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
  }
  if ( *(_DWORD *)v4 != 296 )
    return 3221225561LL;
  *(_QWORD *)(v4 + 16) = PspSystemDlls[0][7];
  ProcessNtdllType = PsWow64GetProcessNtdllType(Process);
  v8 = ProcessNtdllType;
  if ( !ProcessNtdllType )
    v8 = 1LL;
  SharedInformation = PspWow64GetSharedInformation(v8);
  v12 = (__int64)PspSystemDlls[v11][7];
  *(_QWORD *)(v4 + 8) = v12;
  LOBYTE(v13) = 0;
  while ( (unsigned __int8)v13 < 0x10u )
  {
    v12 = (unsigned __int8)v13;
    *(_QWORD *)(v4 + 8LL * (unsigned __int8)v13 + 24) = *(_QWORD *)(SharedInformation + 8LL * (unsigned __int8)v13);
    LOBYTE(v13) = v13 + 1;
  }
  *(_DWORD *)(v4 + 152) = ExGenRandom(1, v12, v13, v10);
  *(_DWORD *)(v4 + 156) = 0;
  if ( a2 && (*(_BYTE *)(a2 + 17) & 2) != 0 )
    *(_DWORD *)(v4 + 156) |= 1u;
  *(_OWORD *)(v4 + 160) = v21;
  *(_QWORD *)(v4 + 176) = v22;
  *(_OWORD *)(v4 + 216) = v23;
  *(_QWORD *)(v4 + 232) = v24;
  *(_QWORD *)(v4 + 184) = v5;
  *(_QWORD *)(v4 + 192) = v25;
  *(_QWORD *)(v4 + 200) = v26;
  *(_QWORD *)(v4 + 208) = v27;
  if ( !a1 )
  {
    ScpCfgFunctions = (_QWORD *)PspGetScpCfgFunctions(Process);
    if ( ScpCfgFunctions )
    {
      *(_QWORD *)(v4 + 240) = *ScpCfgFunctions;
      *(_QWORD *)(v4 + 248) = ScpCfgFunctions[1];
      *(_QWORD *)(v4 + 256) = ScpCfgFunctions[2];
      *(_QWORD *)(v4 + 264) = ScpCfgFunctions[3];
      *(_QWORD *)(v4 + 272) = ScpCfgFunctions[6];
      *(_QWORD *)(v4 + 280) = ScpCfgFunctions[4];
      *(_QWORD *)(v4 + 288) = ScpCfgFunctions[5];
    }
  }
  return 0LL;
}
