/*
 * XREFs of ApiSetEditionCreateWindowStationEntryPoint @ 0x140149470
 * Callers:
 *     NtUserCreateWindowStation @ 0x140149430 (NtUserCreateWindowStation.c)
 * Callees:
 *     IsEditionGetProcessWindowStationEntryPointSupported @ 0x140114448 (IsEditionGetProcessWindowStationEntryPointSupported.c)
 *     EditionCreateWindowStationEntryPoint @ 0x140155CF4 (EditionCreateWindowStationEntryPoint.c)
 */

__int64 __fastcall ApiSetEditionCreateWindowStationEntryPoint(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  int v10; // ebp
  int v11; // r14d
  __int64 v12; // rbx

  v10 = a2;
  v11 = a1;
  v12 = 0LL;
  if ( (int)IsEditionGetProcessWindowStationEntryPointSupported(a1, a2) >= 0 )
    return EditionCreateWindowStationEntryPoint(v11, v10, a3, a4, a5, a6, a7, a8);
  return v12;
}
