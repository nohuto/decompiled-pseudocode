/*
 * XREFs of HalpRegisterUsbController @ 0x14055FD58
 * Callers:
 *     HalpUsbLegacyDeviceHandoff @ 0x14055FDE4 (HalpUsbLegacyDeviceHandoff.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 */

__int64 __fastcall HalpRegisterUsbController(__int64 a1, int a2, char a3, char a4)
{
  int v7; // ebp
  __int64 result; // rax
  __int64 *v9; // rcx

  v7 = a1;
  result = HalpMmAllocCtxAlloc(a1, 32LL);
  if ( result )
  {
    *(_OWORD *)result = 0LL;
    *(_OWORD *)(result + 16) = 0LL;
    *(_DWORD *)(result + 16) = v7;
    *(_DWORD *)(result + 20) = a2;
    *(_BYTE *)(result + 26) = a3;
    *(_BYTE *)(result + 25) = a4;
    v9 = (__int64 *)qword_140F8EFA8;
    if ( *(__int64 **)qword_140F8EFA8 != &HalpUsbControllerList )
      __fastfail(3u);
    *(_QWORD *)result = &HalpUsbControllerList;
    *(_QWORD *)(result + 8) = v9;
    *v9 = result;
    qword_140F8EFA8 = result;
  }
  return result;
}
