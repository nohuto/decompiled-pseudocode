/*
 * XREFs of ACPIGpeInstallRemoveIndex @ 0x140060F98
 * Callers:
 *     ACPIGpeBuildEventMasks @ 0x140040B24 (ACPIGpeBuildEventMasks.c)
 *     ACPIVectorBuildVectorMasks @ 0x140056420 (ACPIVectorBuildVectorMasks.c)
 *     ACPIVectorConnect @ 0x140069660 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x140069890 (ACPIVectorDisconnect.c)
 * Callees:
 *     ACPIGpeValidIndex @ 0x1400198C8 (ACPIGpeValidIndex.c)
 *     ACPIGpeIndexToGpeRegister @ 0x14001A728 (ACPIGpeIndexToGpeRegister.c)
 *     WPP_RECORDER_SF_dDD @ 0x14006127C (WPP_RECORDER_SF_dDD.c)
 */

char __fastcall ACPIGpeInstallRemoveIndex(ULONG_PTR BugCheckParameter2, int a2, int a3, char *a4)
{
  char v4; // di
  unsigned int v8; // esi
  __int64 Pool2; // rax
  int v11; // ebx
  unsigned int v12; // eax
  unsigned int v13; // edx
  char v14; // bl
  int v15; // r9d
  char v16; // cl

  v4 = 0;
  v8 = BugCheckParameter2;
  if ( !*((_BYTE *)AcpiInformation + 85) )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1299211073LL);
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 32) = v8;
      *(_QWORD *)(Pool2 + 16) = ACPIGpeInstallRemoveIndexErrorWorker;
      *(_QWORD *)(Pool2 + 24) = Pool2;
      *(_QWORD *)Pool2 = 0LL;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)Pool2, DelayedWorkQueue);
    }
    return 0;
  }
  if ( !ACPIGpeValidIndex(BugCheckParameter2) )
    return 0;
  v11 = 1 << (v8 & 7);
  v12 = ACPIGpeIndexToGpeRegister(v8);
  v13 = *((unsigned __int16 *)AcpiInformation + 51);
  if ( v12 >= v13 )
    return 0;
  if ( a2 == 2 )
  {
    if ( *a4 )
    {
      *((_BYTE *)GpeHandlerRegistered + v12) |= v11;
      *((_BYTE *)GpeEnable + v12) |= v11;
      *((_BYTE *)GpeCurEnable + v12) |= v11;
      *((_BYTE *)GpeHandlerType + v12) |= v11;
    }
    else
    {
      v14 = ~(_BYTE)v11;
      *((_BYTE *)GpeHandlerRegistered + v12) &= v14;
      *((_BYTE *)GpeEnable + v12) &= v14;
      *((_BYTE *)GpeCurEnable + v12) &= v14;
      *((_BYTE *)GpeHandlerType + v12) &= v14;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1;
    v15 = 11;
    goto LABEL_24;
  }
  if ( ((unsigned __int8)v11 & *((_BYTE *)GpeHandlerRegistered + v12)) != 0 )
  {
    if ( ((unsigned __int8)v11 & *((_BYTE *)GpeHandlerType + v12)) == 0 )
      return 0;
    v4 = 1;
  }
  *a4 = v4;
  v16 = ~(_BYTE)v11;
  *((_BYTE *)GpeHandlerRegistered + v12) |= v11;
  *((_BYTE *)GpeEnable + v12) |= v11;
  *((_BYTE *)GpeCurEnable + v12) |= v11;
  if ( a2 == 1 )
    *((_BYTE *)GpeIsLevel + v12) |= v11;
  else
    *((_BYTE *)GpeIsLevel + v12) &= v16;
  if ( a3 == 1 )
    *((_BYTE *)GpeHandlerType + v12) |= v11;
  else
    *((_BYTE *)GpeHandlerType + v12) &= v16;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 12;
LABEL_24:
    WPP_RECORDER_SF_dDD(WPP_GLOBAL_Control->DeviceExtension, v13, v12, v15);
  }
  return 1;
}
