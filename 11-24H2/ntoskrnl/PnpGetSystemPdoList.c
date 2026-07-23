/*
 * XREFs of PnpGetSystemPdoList @ 0x140AA3160
 * Callers:
 *     <none>
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x140A39170 (PipForDeviceNodeSubtree.c)
 *     PiPnpFreePdoDeviceList @ 0x140A7DE18 (PiPnpFreePdoDeviceList.c)
 */

__int64 __fastcall PnpGetSystemPdoList(__int64 a1, PVOID **a2)
{
  PVOID *v2; // rbx
  PVOID v5; // rcx
  int v6; // esi
  _DWORD v7[2]; // [rsp+20h] [rbp-18h] BYREF
  PVOID *v8; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v7[1] = 0;
  if ( !a2 )
    return 3221225485LL;
  if ( a1 )
    v5 = *(PVOID *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v5 = IopRootDeviceNode;
  v8 = 0LL;
  v7[0] = 0;
  v6 = PipForDeviceNodeSubtree((__int64)v5, (__int64)PiPnpPdoDeviceListEnumCallback, (__int64)v7);
  if ( v6 < 0 )
  {
    v2 = v8;
  }
  else
  {
    *a2 = v8;
    v8 = 0LL;
  }
  PiPnpFreePdoDeviceList(v2);
  return (unsigned int)v6;
}
