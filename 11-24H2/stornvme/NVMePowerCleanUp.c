/*
 * XREFs of NVMePowerCleanUp @ 0x140017000
 * Callers:
 *     NVMeHwAdapterControl @ 0x14000DBA0 (NVMeHwAdapterControl.c)
 *     NVMeControllerRemove @ 0x140010BF0 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerCleanUp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // r9
  __int64 v8; // r8

  *(_DWORD *)(a1 + 1600) &= 0xFFFFFFF8;
  v5 = *(_QWORD *)(a1 + 1592);
  *(_WORD *)(a1 + 1606) = 0;
  if ( v5 )
  {
    StorPortExtendedFunction(1LL, a1, v5, a4);
    *(_QWORD *)(a1 + 1592) = 0LL;
  }
  result = StorPortExtendedFunction(34LL, a1, *(_QWORD *)(a1 + 1640), a4);
  v8 = *(_QWORD *)(a1 + 1584);
  if ( v8 )
  {
    result = StorPortExtendedFunction(1LL, a1, v8, v7);
    *(_QWORD *)(a1 + 1584) = 0LL;
  }
  return result;
}
