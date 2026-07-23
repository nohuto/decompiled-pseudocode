/*
 * XREFs of IopAddBugcheckTriageDataFromParameters @ 0x14058FF74
 * Callers:
 *     IopUpdateMinidumpContext @ 0x140592430 (IopUpdateMinidumpContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1404A6F64 (IopIsAddressRangeValid.c)
 *     Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline @ 0x14058DAEC (Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline.c)
 *     IopAddBugcheckDirectedTransitionTriageData @ 0x14059C3D8 (IopAddBugcheckDirectedTransitionTriageData.c)
 *     IopAddBugcheckPnpTriageData @ 0x14059C4C8 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPnpWatchdogTriageData @ 0x14059C540 (IopAddBugcheckPnpWatchdogTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x14059C600 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x14059C854 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x14059CC30 (IopAddBugcheckTriageThread.c)
 *     PnpInitializeTriageBlock @ 0x1405A2308 (PnpInitializeTriageBlock.c)
 *     PnpSaveGlobalsToMinidump @ 0x1405A2380 (PnpSaveGlobalsToMinidump.c)
 *     PopInternalAddToDumpFile @ 0x1405CA610 (PopInternalAddToDumpFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

char __fastcall IopAddBugcheckTriageDataFromParameters(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 MaxDataSize)
{
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  ULONG v12; // ecx
  ULONG *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  ULONG v19[20]; // [rsp+20h] [rbp-68h] BYREF

  IoAddTriageDumpDataBlock(a2 & 0xFFFFF000, (PVOID)0x1000);
  IoAddTriageDumpDataBlock(a3 & 0xFFFFF000, (PVOID)0x1000);
  IoAddTriageDumpDataBlock(a4 & 0xFFFFF000, (PVOID)0x1000);
  IoAddTriageDumpDataBlock(MaxDataSize & 0xFFFFF000, (PVOID)0x1000);
  if ( a1 == 205 || a1 == 214 )
    IoAddTriageDumpDataBlock((a2 - 4096) & 0xFFFFF000, (PVOID)0x1000);
  IsEnabledDeviceUsageNoInline = Feature_14FBugcheckMinidumpDiagnostics__private_IsEnabledDeviceUsageNoInline();
  if ( !IsEnabledDeviceUsageNoInline && (a1 == 335 || a1 == 348) )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = IopIsAddressRangeValid(MaxDataSize, 40LL);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      LOBYTE(IsEnabledDeviceUsageNoInline) = IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x28);
      v10 = *(_QWORD *)(MaxDataSize + 8);
      if ( v10 )
        LOBYTE(IsEnabledDeviceUsageNoInline) = IopAddBugcheckTriageThread(v10);
    }
  }
  if ( a1 != 412 )
  {
    switch ( a1 )
    {
      case 159:
        switch ( a2 )
        {
          case 4LL:
            LOBYTE(IsEnabledDeviceUsageNoInline) = PnpSaveGlobalsToMinidump();
            if ( a4 )
              LOBYTE(IsEnabledDeviceUsageNoInline) = IopAddBugcheckPnpTriageData(a4, MaxDataSize);
            break;
          case 3LL:
            LOBYTE(IsEnabledDeviceUsageNoInline) = IopAddBugcheckPowerTriageData(a3, a4, MaxDataSize);
            break;
          case 5LL:
            LOBYTE(IsEnabledDeviceUsageNoInline) = IopAddBugcheckDirectedTransitionTriageData(a3, MaxDataSize);
            break;
        }
        return IsEnabledDeviceUsageNoInline;
      case 469:
        PnpSaveGlobalsToMinidump();
        LODWORD(v13) = a3;
        break;
      case 160:
        if ( a2 == 1560 )
        {
          v12 = a4;
          goto LABEL_28;
        }
        if ( a2 == 1561 )
        {
          LOBYTE(IsEnabledDeviceUsageNoInline) = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(a3 + 48));
          if ( MaxDataSize )
            LOBYTE(IsEnabledDeviceUsageNoInline) = IopAddBugcheckTriageDeviceNode(MaxDataSize);
          return IsEnabledDeviceUsageNoInline;
        }
        if ( a2 != 15 )
        {
          LOBYTE(IsEnabledDeviceUsageNoInline) = a2 + 16;
          if ( (unsigned __int64)(a2 - 240) > 1 )
            return IsEnabledDeviceUsageNoInline;
        }
        memset_0(v19, 0, sizeof(v19));
        PnpSaveGlobalsToMinidump();
        PnpInitializeTriageBlock(v19);
        v13 = v19;
        break;
      default:
        switch ( a1 )
        {
          case 257:
            if ( a3 )
              return IsEnabledDeviceUsageNoInline;
            LOBYTE(IsEnabledDeviceUsageNoInline) = IopIsAddressRangeValid(a4, 52992LL);
            if ( !(_BYTE)IsEnabledDeviceUsageNoInline )
              return IsEnabledDeviceUsageNoInline;
            IoAddTriageDumpDataBlock(a4, (PVOID)0xCF00);
            IoAddTriageDumpDataBlock(*(_QWORD *)(a4 + 36800), (PVOID)0x4D0);
            v14 = *(_QWORD *)(a4 + 8);
            if ( IopIsAddressRangeValid(v14, 1944LL) )
              IopAddBugcheckTriageThread(v14);
            v15 = 0x2000LL;
            v16 = (*(_QWORD *)(*(_QWORD *)(a4 + 36800) + 152LL) - 4096LL) & 0xFFFFFFFFFFFFF000uLL;
            break;
          case 416:
            IopAddBugcheckTriageThread(a4);
            LOBYTE(IsEnabledDeviceUsageNoInline) = PopInternalAddToDumpFile(0LL, 0LL, 0LL);
            return IsEnabledDeviceUsageNoInline;
          case 292:
            LOBYTE(IsEnabledDeviceUsageNoInline) = IopIsAddressRangeValid(a3, 128LL);
            if ( !(_BYTE)IsEnabledDeviceUsageNoInline )
              return IsEnabledDeviceUsageNoInline;
            v17 = *(_DWORD *)(a3 + 20);
            v15 = 72 * (unsigned int)*(unsigned __int16 *)(a3 + 10) + 128;
            LODWORD(v16) = a3;
            if ( v17 >= (unsigned int)v15 )
              v15 = v17;
            break;
          default:
            return IsEnabledDeviceUsageNoInline;
        }
        LOBYTE(IsEnabledDeviceUsageNoInline) = IoAddTriageDumpDataBlock(v16, (PVOID)v15);
        return IsEnabledDeviceUsageNoInline;
    }
    LOBYTE(IsEnabledDeviceUsageNoInline) = IopAddBugcheckPnpWatchdogTriageData((ULONG)v13);
    return IsEnabledDeviceUsageNoInline;
  }
  if ( a3 )
  {
    v11 = a2 - 16;
    if ( v11 <= 0x40 && (v11 & 0xF) == 0 )
    {
      v12 = a3;
LABEL_28:
      LOBYTE(IsEnabledDeviceUsageNoInline) = IopAddBugcheckTriageThread(v12);
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
