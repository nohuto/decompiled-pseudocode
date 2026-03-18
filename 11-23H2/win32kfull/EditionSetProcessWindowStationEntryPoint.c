/*
 * XREFs of EditionSetProcessWindowStationEntryPoint @ 0x1C0073D90
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetProcessWindowStation @ 0x1C0073E60 (xxxSetProcessWindowStation.c)
 */

__int64 __fastcall EditionSetProcessWindowStationEntryPoint(HANDLE SourceHandle)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax

  v2 = 1;
  EnterCrit(1LL, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v5 = *(_QWORD *)(CurrentProcessWin32Process + 672);
  if ( (int)xxxSetProcessWindowStation(SourceHandle) < 0 )
  {
    v2 = 0;
  }
  else
  {
    v10 = PsGetCurrentProcessWin32Process(v7);
    if ( v10 )
    {
      v7 = -*(_QWORD *)v10;
      v6 = -(__int64)(*(_QWORD *)v10 != 0LL);
      v10 &= v6;
    }
    if ( v5 != *(_QWORD *)(v10 + 672) )
    {
      v11 = PsGetCurrentProcessWin32Process(v7);
      if ( v11 )
      {
        v7 = -*(_QWORD *)v11;
        v6 = -(__int64)(*(_QWORD *)v11 != 0LL);
        v11 &= v6;
      }
      *(_DWORD *)(v11 + 824) |= 0x4000000u;
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v2;
}
