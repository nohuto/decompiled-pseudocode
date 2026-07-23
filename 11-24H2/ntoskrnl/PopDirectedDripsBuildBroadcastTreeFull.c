/*
 * XREFs of PopDirectedDripsBuildBroadcastTreeFull @ 0x140764520
 * Callers:
 *     PopDirectedDripsBuildBroadcastTreePartial @ 0x140764740 (PopDirectedDripsBuildBroadcastTreePartial.c)
 * Callees:
 *     PopFxIsDirectedPowerTransitionSupported @ 0x1405CED58 (PopFxIsDirectedPowerTransitionSupported.c)
 *     PopDirectedDripsVisitDevice @ 0x1406F760C (PopDirectedDripsVisitDevice.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x14074A99C (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 *     PopDirectedDripsDiagTraceProblemDevice @ 0x140763F0C (PopDirectedDripsDiagTraceProblemDevice.c)
 *     PopDirectedDripsBuildPs4BroadcastTree @ 0x140764840 (PopDirectedDripsBuildPs4BroadcastTree.c)
 *     PopDirectedDripsFlushDeviceQueue @ 0x1407649B4 (PopDirectedDripsFlushDeviceQueue.c)
 *     PopDirectedDripsInsertQueueDevice @ 0x1407649D8 (PopDirectedDripsInsertQueueDevice.c)
 *     PopDirectedDripsIsLikelySpecialDevice @ 0x140764A18 (PopDirectedDripsIsLikelySpecialDevice.c)
 *     PopDirectedDripsRemoveQueueDevice @ 0x140764A60 (PopDirectedDripsRemoveQueueDevice.c)
 *     PopDirectedDripsMarkDfxDevice @ 0x140A913C4 (PopDirectedDripsMarkDfxDevice.c)
 */

__int64 __fastcall PopDirectedDripsBuildBroadcastTreeFull(__int64 a1, __int64 a2, char a3, _DWORD *a4)
{
  int v5; // esi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rax
  unsigned int v18; // r8d
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v25[3]; // [rsp+38h] [rbp-18h] BYREF
  int v26; // [rsp+80h] [rbp+30h] BYREF

  v23 = 0;
  v26 = 0;
  v25[1] = v25;
  v5 = 0;
  v25[0] = v25;
  v24[1] = v24;
  v24[0] = v24;
  if ( (*(_DWORD *)(a1 + 760) & 0x30000) == 0 )
  {
    PopDirectedDripsInsertQueueDevice(v25);
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( (_QWORD *)v25[0] == v25 )
            goto LABEL_22;
          v8 = PopDirectedDripsRemoveQueueDevice(v25);
          v9 = v8 - 728;
          v10 = *(_QWORD *)(v8 - 728 + 80);
        }
        while ( (*(_DWORD *)(v8 + 32) & 0x30000) != 0 );
        PopDirectedDripsVisitDevice((__int64)v24, v8, a2, 0);
        if ( (unsigned __int8)PopDirectedDripsIsLikelySpecialDevice(v9, &v23) )
        {
          v18 = v23;
          *(_DWORD *)(v8 + 32) |= 0x40000u;
          PopDirectedDripsDiagTraceProblemDevice(v11, a2, v18);
LABEL_20:
          v16 = 3221225659LL;
LABEL_21:
          PopDirectedDripsFlushDeviceQueue(v25, v13, v14, v16);
          goto LABEL_23;
        }
        if ( (a3 & 1) != 0 )
          break;
        v12 = 8;
LABEL_15:
        PopDirectedDripsDiagTraceProblemDevice(v9, a2, v12);
        if ( (a3 & 2) == 0 )
          goto LABEL_20;
        v15 = PopDirectedDripsBuildPs4BroadcastTree(v9, v24, a2);
        v16 = (unsigned int)v15;
        if ( v15 < 0 )
          goto LABEL_21;
        v17 = *(_QWORD *)(v9 + 776);
        v5 |= 2u;
        if ( v17 )
          *(_DWORD *)(v17 + 152) |= 0x10000u;
      }
      v26 = 0;
      if ( !PopDirectedDripsIsPnpSoftwareDeviceNode(v11) )
      {
        if ( !v10 )
          goto LABEL_12;
        if ( !PopFxIsDirectedPowerTransitionSupported(v10, &v26) )
          break;
      }
      PopDirectedDripsMarkDfxDevice(v25, v24, v8, a2);
      v5 |= 1u;
    }
    if ( v26 == 2 )
    {
      v12 = 4;
      goto LABEL_15;
    }
LABEL_12:
    v12 = (4 * (*(_DWORD *)(v8 + 32) & 2)) | 1;
    goto LABEL_15;
  }
LABEL_22:
  v19 = 0;
LABEL_23:
  while ( 1 )
  {
    v20 = v24[0];
    if ( (_QWORD *)v24[0] == v24 )
      break;
    if ( *(_QWORD **)(v24[0] + 8LL) != v24 || (v21 = *(_QWORD *)v24[0], *(_QWORD *)(*(_QWORD *)v24[0] + 8LL) != v24[0]) )
      __fastfail(3u);
    v24[0] = *(_QWORD *)v24[0];
    *(_QWORD *)(v21 + 8) = v24;
    if ( v19 < 0 )
      *(_DWORD *)(v20 + 16) = *(_DWORD *)(v20 + 20);
    *(_QWORD *)(v20 + 8) = v20;
    *(_QWORD *)v20 = v20;
    *(_DWORD *)(v20 + 20) = 0;
  }
  if ( v19 >= 0 )
    *a4 |= v5;
  return (unsigned int)v19;
}
