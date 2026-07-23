/*
 * XREFs of IopQueryReconfiguration @ 0x140731CB0
 * Callers:
 *     PnpCancelStopDeviceNode @ 0x140732D28 (PnpCancelStopDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x14073315C (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14073358C (PnpStopDeviceSubtree.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 */

__int64 __fastcall IopQueryReconfiguration(char a1, __int64 a2)
{
  int v2; // ebx
  __int64 v4; // r9
  _BYTE v6[88]; // [rsp+30h] [rbp-58h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( a1 == 4 )
  {
    if ( *(_DWORD *)(v4 + 300) != 779 )
      return 3221225473LL;
    goto LABEL_5;
  }
  if ( a1 == 5 )
  {
    if ( *(_DWORD *)(v4 + 300) != 778 )
      return 3221225473LL;
LABEL_5:
    memset_0(v6, 0, 0x48uLL);
    v6[0] = 27;
    v6[1] = a1;
    return IopSynchronousCall(v2, (unsigned int)v6, -1073741637, 0, 0LL);
  }
  if ( a1 == 6 && (unsigned int)(*(_DWORD *)(v4 + 300) - 778) <= 1 )
    goto LABEL_5;
  return 3221225473LL;
}
