/*
 * XREFs of PspPrepareSystemDllInitBlock @ 0x1409084EC
 * Callers:
 *     PspSetupUserProcessAddressSpace @ 0x140907EE0 (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     PspGetScpCfgFunctions @ 0x140906938 (PspGetScpCfgFunctions.c)
 *     PsWow64GetProcessNtdllType @ 0x140908828 (PsWow64GetProcessNtdllType.c)
 *     PspWow64GetSharedInformation @ 0x140908844 (PspWow64GetSharedInformation.c)
 */

__int64 __fastcall PspPrepareSystemDllInitBlock(int a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  _KPROCESS *Process; // r15
  unsigned int ProcessNtdllType; // eax
  __int64 v8; // rcx
  __int64 SharedInformation; // rax
  int v10; // ecx
  unsigned __int8 i; // r8
  __int64 *ScpCfgFunctions; // rax
  volatile _KAFFINITY_EX *v14; // rax
  __int16 v15; // ax
  volatile _KAFFINITY_EX *v17; // rax
  volatile _KAFFINITY_EX *ActiveProcessors; // rax
  __int128 v19; // [rsp+28h] [rbp-70h]
  __int64 v20; // [rsp+38h] [rbp-60h]
  __int128 v21; // [rsp+40h] [rbp-58h]
  __int64 v22; // [rsp+50h] [rbp-48h]
  unsigned __int64 v23; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v24; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v25; // [rsp+B8h] [rbp+20h]

  v4 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = *(_QWORD *)(PspWow64GetSharedInformation(1LL) + 56);
      ActiveProcessors = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
      v5 = ActiveProcessors[4].StaticBitmap[19];
      v23 = ActiveProcessors[4].StaticBitmap[20];
    }
  }
  else
  {
    v4 = PsNtdllExports;
    v14 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
    v5 = v14[4].StaticBitmap[15];
    v23 = v14[4].StaticBitmap[16];
    if ( Process[1].ReadyTime )
    {
      v15 = WORD2(Process[3].PerProcessorCycleTimes);
      if ( v15 == 332 || v15 == 452 )
      {
        v17 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors;
        v24 = v17[4].StaticBitmap[19];
        v25 = v17[4].StaticBitmap[20];
      }
    }
  }
  if ( a2 )
  {
    v19 = *(_OWORD *)(a2 + 336);
    v20 = *(_QWORD *)(a2 + 352);
    v21 = *(_OWORD *)(a2 + 448);
    v22 = *(_QWORD *)(a2 + 464);
  }
  else
  {
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
  }
  if ( *(_DWORD *)v4 != 296 )
    return 3221225561LL;
  *(_QWORD *)(v4 + 16) = PspSystemDlls[0][7];
  ProcessNtdllType = PsWow64GetProcessNtdllType(Process);
  v8 = ProcessNtdllType;
  if ( !ProcessNtdllType )
    v8 = 1LL;
  SharedInformation = PspWow64GetSharedInformation(v8);
  *(_QWORD *)(v4 + 8) = PspSystemDlls[v10][7];
  for ( i = 0; i < 0x10u; ++i )
    *(_QWORD *)(v4 + 8LL * i + 24) = *(_QWORD *)(SharedInformation + 8LL * i);
  *(_DWORD *)(v4 + 152) = ExGenRandom(1);
  *(_DWORD *)(v4 + 156) = 0;
  if ( a2 && (*(_BYTE *)(a2 + 17) & 2) != 0 )
    *(_DWORD *)(v4 + 156) |= 1u;
  *(_OWORD *)(v4 + 160) = v19;
  *(_QWORD *)(v4 + 176) = v20;
  *(_OWORD *)(v4 + 216) = v21;
  *(_QWORD *)(v4 + 232) = v22;
  *(_QWORD *)(v4 + 184) = v5;
  *(_QWORD *)(v4 + 192) = v23;
  *(_QWORD *)(v4 + 200) = v24;
  *(_QWORD *)(v4 + 208) = v25;
  if ( !a1 )
  {
    ScpCfgFunctions = PspGetScpCfgFunctions((__int64)Process);
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
