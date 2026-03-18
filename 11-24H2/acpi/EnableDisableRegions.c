/*
 * XREFs of EnableDisableRegions @ 0x1400B46CC
 * Callers:
 *     ACPIDetectFilterDevices @ 0x140016708 (ACPIDetectFilterDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x14003C610 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x14003D09C (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIBusIrpRemoveDevice @ 0x140050130 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x140050500 (ACPIBusIrpSurpriseRemoval.c)
 *     ACPIBusIrpStopDevice @ 0x14009BC90 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x14009E910 (ACPIFilterIrpStopDevice.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1400C0DF0 (ACPIBusIrpStartDeviceWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     AMLIGetNSObjectType @ 0x14003FE50 (AMLIGetNSObjectType.c)
 *     AMLIIterateSiblingsNext @ 0x140040EE4 (AMLIIterateSiblingsNext.c)
 *     AMLIGetFirstChild @ 0x140040FA0 (AMLIGetFirstChild.c)
 *     memset @ 0x140070F40 (memset.c)
 *     EnableDisableRegions @ 0x1400B46CC (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1400B47D0 (IsNsobjPciBus.c)
 */

__int64 __fastcall EnableDisableRegions(__int64 *a1, char a2, char a3)
{
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 i; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  _QWORD v14[10]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  v7 = AMLIGetNamedChild(a1, 1195725407);
  if ( v7 )
  {
    memset(v14, 0, sizeof(v14));
    WORD1(v14[0]) = 1;
    WORD1(v14[5]) = 1;
    v14[2] = 2LL;
    v14[7] = a2 != 0;
    v6 = AMLIEvalNameSpaceObject(v7, 0LL, 2, (__int64)v14);
    AMLIDereferenceHandleEx((__int64)v7);
  }
  if ( (unsigned __int8)IsNsobjPciBus(a1) || a3 )
  {
    for ( i = AMLIGetFirstChild((__int64)a1); ; i = AMLIIterateSiblingsNext(v9) )
    {
      v9 = i;
      if ( !i )
        break;
      if ( (unsigned int)AMLIGetNSObjectType(i) == 6 && !(unsigned __int8)IsNsobjPciBus(v10) )
      {
        LOBYTE(v11) = a2;
        v12 = EnableDisableRegions(v9, v11, 0LL);
        if ( v12 < 0 )
          v6 = v12;
      }
    }
  }
  return v6;
}
