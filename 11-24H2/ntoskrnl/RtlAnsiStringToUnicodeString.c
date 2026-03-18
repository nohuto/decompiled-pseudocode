/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1408ADC70
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x140582420 (HvlDebuggerSupportInitialize.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140595B8C (IopCreateUnicodeFromAnsiBuffer.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D8C80 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405DB750 (PopEmUpdateDeviceConstraintCallback.c)
 *     DifRtlAnsiStringToUnicodeStringWrapper @ 0x1406391F0 (DifRtlAnsiStringToUnicodeStringWrapper.c)
 *     CmpInitializeLoadOptions @ 0x1406676C8 (CmpInitializeLoadOptions.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x14069D260 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x140712428 (IopInitializeBootLogging.c)
 *     KsepStringAnsiToUnicode @ 0x14074021C (KsepStringAnsiToUnicode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14077E300 (RtlCreateUnicodeStringFromAsciiz.c)
 *     SepInitializationPhase1 @ 0x14078EEE0 (SepInitializationPhase1.c)
 *     WmipCheckSMBiosSysInfoString @ 0x1407A40CC (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x1407A4560 (WmipGetSMBiosString.c)
 *     WmipQueryWmiRegInfo @ 0x1407A6270 (WmipQueryWmiRegInfo.c)
 *     EtwWmitraceWorker @ 0x1407AC83C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BE5B0 (NtQuerySystemEnvironmentValue.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407D3860 (CmpCreateHwProfileFriendlyName.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407D4D18 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407D7920 (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x1407DEA4C (CmpInitializeRegistryNode.c)
 *     CmpFindControlSet @ 0x1407E16C4 (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407E639C (CmpAddRemoveContainerToCLFSLog.c)
 *     AslStringAnsiToUnicode @ 0x140808394 (AslStringAnsiToUnicode.c)
 *     RtlInt64ToUnicodeString @ 0x14085B170 (RtlInt64ToUnicodeString.c)
 *     ExpWnfWriteStateData @ 0x1408AD580 (ExpWnfWriteStateData.c)
 *     RtlIntegerToUnicodeString @ 0x1408EF170 (RtlIntegerToUnicodeString.c)
 *     PiGetDefaultMessageString @ 0x1409C8444 (PiGetDefaultMessageString.c)
 *     MiResolveImageReferences @ 0x140A17C94 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A180B4 (MiSnapThunk.c)
 *     MiLogFailedDriverLoad @ 0x140A18B7C (MiLogFailedDriverLoad.c)
 *     ObCheckRefTraceProcess @ 0x140A53078 (ObCheckRefTraceProcess.c)
 *     PopAnsiStringToUnicodeString @ 0x140A63150 (PopAnsiStringToUnicodeString.c)
 *     PiUEventHandleVetoEvent @ 0x140A8B24C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140A9F1B4 (PnpLogVetoInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140B61470 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     EmpInfParseGetGuidFromName @ 0x140C16244 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140C16644 (EmpParseEntryTypes.c)
 *     IopCreateArcNames @ 0x140C1BCEC (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140C1BE30 (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140C1CD70 (IopMarkBootPartition.c)
 *     IopGetBootDiskInformation @ 0x140C1D87C (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140C1E168 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140C20670 (PipCriticalDeviceWaitCallback.c)
 *     PipSmBiosGetString @ 0x140C2237C (PipSmBiosGetString.c)
 *     WmipDriverEntry @ 0x140C3C9C0 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140C471E0 (CmpInitializeDriverStores.c)
 *     CmpSetSystemBiosInformation @ 0x140C49AE0 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C49E80 (CmpSetVideoBiosInformation.c)
 *     RamdiskCreateSymbolicLink @ 0x140C5E4D8 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140430E00 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlpIsUtf8Process @ 0x1408AF8F0 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x1408AFDF0 (RtlUTF8ToUnicodeN.c)
 *     ExFreePool @ 0x140B72CB0 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlAnsiStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCANSI_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  int v6; // ebx
  ULONG Length; // edi
  char *Buffer; // rsi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  struct _LIST_ENTRY *Blink; // rdx
  wchar_t **p_Buffer; // r12
  NTSTATUS result; // eax
  ULONG UTF8StringByteCount; // edi
  char *v14; // r14
  ULONG MaximumLength; // esi
  WCHAR *v16; // rbx
  struct _CPTABLEINFO *p_Blink; // rdx
  ULONG v18; // esi
  ULONG v19; // r8d
  unsigned __int16 *MultiByteTable; // r10
  ULONG v21; // r9d
  int v22; // r9d
  unsigned __int16 *DBCSOffsets; // r10
  __int64 v24; // rcx
  WCHAR *v25; // r8
  __int64 v26; // rcx
  char *v27; // r14
  __int64 v29; // rax
  signed __int32 v30[8]; // [rsp+0h] [rbp-98h] BYREF
  ULONG v31; // [rsp+30h] [rbp-68h]
  ULONG v32; // [rsp+34h] [rbp-64h]
  ULONG v33; // [rsp+38h] [rbp-60h]
  NTSTATUS v34; // [rsp+40h] [rbp-58h]
  int v35; // [rsp+44h] [rbp-54h]
  WCHAR *v36; // [rsp+48h] [rbp-50h]
  char *v37; // [rsp+50h] [rbp-48h]
  ULONG UnicodeStringActualByteCount; // [rsp+A8h] [rbp+10h] BYREF
  BOOLEAN v39; // [rsp+B0h] [rbp+18h]
  ULONG v40; // [rsp+B8h] [rbp+20h] BYREF

  v39 = AllocateDestinationString;
  v6 = 0;
  v40 = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( Length )
    {
      RtlUTF8ToUnicodeN(0LL, 0, &v40, Buffer, Length);
      v6 = v40;
    }
  }
  else
  {
    _InterlockedOr(v30, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    Blink = CurrentServerSiloGlobals[73].Blink;
    if ( WORD2(CurrentServerSiloGlobals[65].Flink) )
    {
      while ( Length-- )
      {
        v29 = (unsigned __int8)*Buffer++;
        if ( *((_WORD *)&Blink->Flink + v29) )
        {
          if ( !Length )
          {
            v6 += 2;
            break;
          }
          --Length;
          ++Buffer;
        }
        v6 += 2;
      }
    }
    else
    {
      v6 = 2 * Length;
    }
    v40 = v6;
  }
  UnicodeStringActualByteCount = v6 + 2;
  if ( (unsigned int)(v6 + 2) > 0xFFFE )
    return -1073741584;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateUnicodeStringBuffer(
             AllocateDestinationString,
             v6 + 2,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  v34 = result;
  if ( result >= 0 )
  {
    UTF8StringByteCount = SourceString->Length;
    v14 = SourceString->Buffer;
    MaximumLength = DestinationString->MaximumLength;
    v16 = *p_Buffer;
    if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
    {
      p_Blink = &Utf8TableInfo;
    }
    else
    {
      _InterlockedOr(v30, 0);
      p_Blink = (struct _CPTABLEINFO *)&PsGetCurrentServerSiloGlobals()[64].Blink;
    }
    v33 = UTF8StringByteCount;
    v37 = v14;
    v36 = v16;
    v31 = 0;
    v32 = 0;
    if ( !p_Blink || p_Blink->CodePage == 0xFDE9 )
    {
      v35 = 0;
      if ( !UTF8StringByteCount )
      {
        v19 = 0;
        UnicodeStringActualByteCount = 0;
        goto LABEL_32;
      }
      RtlUTF8ToUnicodeN(v16, MaximumLength, &UnicodeStringActualByteCount, v14, UTF8StringByteCount);
    }
    else
    {
      v18 = MaximumLength >> 1;
      v32 = v18;
      if ( !p_Blink->DBCSCodePage )
      {
        if ( v18 < UTF8StringByteCount )
          UTF8StringByteCount = v18;
        v19 = 2 * UTF8StringByteCount;
        UnicodeStringActualByteCount = 2 * UTF8StringByteCount;
        MultiByteTable = p_Blink->MultiByteTable;
        v21 = 0;
        v31 = 0;
        while ( v21 < UTF8StringByteCount )
        {
          v16[v21] = MultiByteTable[(unsigned __int8)v14[v21]];
          v31 = ++v21;
        }
        goto LABEL_32;
      }
      v22 = (int)v16;
      DBCSOffsets = p_Blink->DBCSOffsets;
      while ( v18 && UTF8StringByteCount )
      {
        v32 = --v18;
        v33 = --UTF8StringByteCount;
        v24 = (unsigned __int8)*v14;
        v25 = v16 + 1;
        if ( DBCSOffsets[v24] )
        {
          if ( !UTF8StringByteCount )
          {
            *v16 = 0;
            LODWORD(v16) = (_DWORD)v16 + 2;
            v36 = v25;
            break;
          }
          v26 = DBCSOffsets[v24];
          v27 = v14 + 1;
          v37 = v27;
          *v16 = DBCSOffsets[v26 + (unsigned __int8)*v27];
          v14 = v27 + 1;
          v33 = --UTF8StringByteCount;
        }
        else
        {
          *v16 = p_Blink->MultiByteTable[v24];
          ++v14;
        }
        ++v16;
        v37 = v14;
        v36 = v25;
      }
      UnicodeStringActualByteCount = (_DWORD)v16 - v22;
    }
    v19 = UnicodeStringActualByteCount;
LABEL_32:
    v34 = 0;
    DestinationString->Length = v19;
    (*p_Buffer)[(unsigned __int64)v19 >> 1] = 0;
    return 0;
  }
  return result;
}
