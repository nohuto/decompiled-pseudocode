/*
 * XREFs of MmVirtualAccessFault @ 0x1409FE0E4
 * Callers:
 *     PspIumResolveVirtualFault @ 0x1409FDD3C (PspIumResolveVirtualFault.c)
 *     VmpAccessFaultBatchResolve @ 0x1409FDE68 (VmpAccessFaultBatchResolve.c)
 * Callees:
 *     MmAccessFault @ 0x1402B5880 (MmAccessFault.c)
 *     MiDelayFaultingThread @ 0x1403BF998 (MiDelayFaultingThread.c)
 *     MiInitializeFaultVaListCore @ 0x14043A760 (MiInitializeFaultVaListCore.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MmVirtualAccessFault(signed __int64 *a1, __int64 a2, char a3)
{
  int v6; // r8d
  ULONG_PTR v7; // r10
  ULONG_PTR v8; // r11
  int v9; // edx
  __int64 result; // rax
  _BYTE v11[40]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v12; // [rsp+48h] [rbp-60h]
  __int64 v13; // [rsp+50h] [rbp-58h]
  int v14; // [rsp+58h] [rbp-50h]

  memset_0(v11, 0, 0x78uLL);
  MiInitializeFaultVaListCore((__int64)v11, (__int64)a1, 1LL, 5);
  v13 = 0LL;
  v12 = a2;
  v9 = v6 & (v7 >> 1) | (v7 >> 3) & 2;
  v14 = v9;
  if ( (a3 & 8) != 0 )
  {
    v9 |= 4u;
    v14 = v9;
  }
  if ( (a3 & 0x10) != 0 )
  {
    v9 |= 8u;
    v14 = v9;
  }
  if ( (a3 & 0x20) != 0 )
  {
    v9 |= 0x10u;
    v14 = v9;
  }
  if ( (a3 & 0x40) != 0 )
    v14 = v9 | 0x20;
  result = MmAccessFault(v7, *a1, v6, v8);
  if ( (int)result >= 0 )
  {
    if ( (v14 & 0x40) != 0 )
      MiDelayFaultingThread(0xAu);
    return 0LL;
  }
  return result;
}
