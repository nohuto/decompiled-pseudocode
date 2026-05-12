/*
 * XREFs of ScsiModeSelectRequest @ 0x140115AE8
 * Callers:
 *     ScsiToNVMeCommand2 @ 0x140116A7C (ScsiToNVMeCommand2.c)
 * Callees:
 *     RaidNtStatusToSrbStatus @ 0x1400059F0 (RaidNtStatusToSrbStatus.c)
 *     NvmeControllerSetCurrentWriteCacheState @ 0x1400C95A0 (NvmeControllerSetCurrentWriteCacheState.c)
 *     SetSrbSenseData @ 0x140117490 (SetSrbSenseData.c)
 */

__int64 __fastcall ScsiModeSelectRequest(__int64 a1, __int64 a2, char *a3)
{
  __int64 v3; // r10
  __int64 v7; // rdx
  unsigned int v8; // r9d
  char v9; // cl
  bool v10; // zf
  unsigned int v11; // r8d
  unsigned int v12; // ecx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // eax
  unsigned __int16 v19; // [rsp+58h] [rbp+20h]

  v3 = 0LL;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v7 = *(_QWORD *)(a2 + 64);
    v8 = *(_DWORD *)(a2 + 60);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v8 = *(_DWORD *)(a2 + 16);
  }
  v9 = *a3;
  v10 = *a3 == 21;
  v11 = 4;
  if ( !v10 )
    v11 = 8;
  if ( (a3[1] & 0x10) != 0 )
  {
    if ( !v7 || v8 < v11 )
      goto LABEL_20;
    if ( v9 == 21 )
    {
      v13 = *(unsigned __int8 *)(v7 + 3);
      v3 = v7;
    }
    else
    {
      HIBYTE(v19) = *(_BYTE *)MEMORY[3];
      LOBYTE(v19) = *(_BYTE *)(MEMORY[3] + 1LL);
      v13 = v19;
    }
    v14 = v11 + v13;
    v8 -= v14;
    v7 = (unsigned int)v14;
    if ( v8 >= 0xC
      && (*(_BYTE *)(v14 + v3) & 0x3F) == 8
      && *(_BYTE *)((unsigned int)v14 + v3 + 1) == 10
      && ((v15 = *(_QWORD *)(a1 + 16), (v16 = *(_QWORD *)(v15 + 592)) == 0) || (*(_BYTE *)(v16 + 525) & 1) != 0) )
    {
      v17 = NvmeControllerSetCurrentWriteCacheState(v15, (*(_BYTE *)(v7 + v3 + 2) & 4) != 0);
      *(_BYTE *)(a2 + 3) = RaidNtStatusToSrbStatus(v17);
    }
    else
    {
LABEL_20:
      LOBYTE(v8) = 36;
      LOBYTE(v11) = 5;
      LOBYTE(v7) = 6;
      SetSrbSenseData(a2, v7, v11, v8, 0);
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    LOBYTE(v8) = 36;
    LOBYTE(v11) = 5;
    LOBYTE(v7) = 6;
    SetSrbSenseData(a2, v7, v11, v8, 0);
    return (unsigned int)-1073741808;
  }
  return v12;
}
