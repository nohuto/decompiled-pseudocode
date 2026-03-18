/*
 * XREFs of KeUninitThread @ 0x1408F42C0
 * Callers:
 *     KiFreeProcessorStateInitializationParameters @ 0x1405B3168 (KiFreeProcessorStateInitializationParameters.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 * Callees:
 *     MmDeleteKernelStack @ 0x140346FC0 (MmDeleteKernelStack.c)
 *     KiDeleteXStateStack @ 0x1405B4084 (KiDeleteXStateStack.c)
 *     KiDeleteKernelShadowStack @ 0x140A14AE8 (KiDeleteKernelShadowStack.c)
 */

__int64 __fastcall KeUninitThread(__int64 a1)
{
  __int64 v2; // rax
  __int64 result; // rax
  _DWORD v4[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-30h]
  __int64 v6; // [rsp+40h] [rbp-28h]
  __int64 v7; // [rsp+48h] [rbp-20h]
  __int128 v8; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v8 = 0LL;
  v4[0] = 2;
  v4[1] = 5;
  v2 = *(_QWORD *)(a1 + 56);
  v6 = a1;
  v7 = v2;
  MmDeleteKernelStack((__int64)v4);
  *(_QWORD *)(a1 + 40) = 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800000) != 0 )
    KiDeleteXStateStack(a1);
  result = *(_QWORD *)(a1 + 1032);
  if ( result )
  {
    result = KiDeleteKernelShadowStack(
               a1,
               *(_QWORD *)(a1 + 1048),
               *(_DWORD *)(a1 + 1056) & 7,
               0,
               *(_QWORD *)(a1 + 1032));
    *(_QWORD *)(a1 + 1032) = 0LL;
  }
  return result;
}
