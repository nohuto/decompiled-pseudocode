/*
 * XREFs of RtlAnsiStringToUnicodeString @ 0x1408E5A80
 * Callers:
 *     HvlDebuggerSupportInitialize @ 0x14057EC70 (HvlDebuggerSupportInitialize.c)
 *     IopCreateUnicodeFromAnsiBuffer @ 0x140592434 (IopCreateUnicodeFromAnsiBuffer.c)
 *     PopEmModuleAddressMatchCallback @ 0x1405D4230 (PopEmModuleAddressMatchCallback.c)
 *     PopEmUpdateDeviceConstraintCallback @ 0x1405D6570 (PopEmUpdateDeviceConstraintCallback.c)
 *     DifRtlAnsiStringToUnicodeStringWrapper @ 0x14062D230 (DifRtlAnsiStringToUnicodeStringWrapper.c)
 *     CmpInitializeLoadOptions @ 0x14065BBE8 (CmpInitializeLoadOptions.c)
 *     ?ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z @ 0x140691EC0 (-ScAnsiToUnicodeString@@YAJPEADPEAU_UNICODE_STRING@@@Z.c)
 *     IopCopyBootLogRegistryToFile @ 0x140705D7C (IopCopyBootLogRegistryToFile.c)
 *     IopInitializeBootLogging @ 0x140706328 (IopInitializeBootLogging.c)
 *     KsepStringAnsiToUnicode @ 0x1407341FC (KsepStringAnsiToUnicode.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14076F0B0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     RtlIsApiSetImplemented @ 0x140776130 (RtlIsApiSetImplemented.c)
 *     SepInitializationPhase1 @ 0x14077FC20 (SepInitializationPhase1.c)
 *     WmipCheckSMBiosSysInfoString @ 0x140794CFC (WmipCheckSMBiosSysInfoString.c)
 *     WmipGetSMBiosString @ 0x140795190 (WmipGetSMBiosString.c)
 *     WmipQueryWmiRegInfo @ 0x140796EA0 (WmipQueryWmiRegInfo.c)
 *     EtwWmitraceWorker @ 0x14079D46C (EtwWmitraceWorker.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407AEDE0 (NtQuerySystemEnvironmentValue.c)
 *     CmpCreateHwProfileFriendlyName @ 0x1407C411C (CmpCreateHwProfileFriendlyName.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407C55D4 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetVersionData @ 0x1407C8190 (CmpSetVersionData.c)
 *     CmpInitializeRegistryNode @ 0x1407CF174 (CmpInitializeRegistryNode.c)
 *     CmpFindControlSet @ 0x1407D1DE4 (CmpFindControlSet.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1407D6518 (CmpAddRemoveContainerToCLFSLog.c)
 *     AslStringAnsiToUnicode @ 0x1407F8824 (AslStringAnsiToUnicode.c)
 *     RtlIntegerToUnicodeString @ 0x1408DFD70 (RtlIntegerToUnicodeString.c)
 *     ExpWnfWriteStateData @ 0x1408E5390 (ExpWnfWriteStateData.c)
 *     RtlInt64ToUnicodeString @ 0x14091C0F0 (RtlInt64ToUnicodeString.c)
 *     PiGetDefaultMessageString @ 0x1409B00D4 (PiGetDefaultMessageString.c)
 *     MiResolveImageReferences @ 0x140A1286C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140A12C8C (MiSnapThunk.c)
 *     MiLogFailedDriverLoad @ 0x140A1375C (MiLogFailedDriverLoad.c)
 *     ObCheckRefTraceProcess @ 0x140A4FAF4 (ObCheckRefTraceProcess.c)
 *     PopAnsiStringToUnicodeString @ 0x140A61620 (PopAnsiStringToUnicodeString.c)
 *     PiUEventHandleVetoEvent @ 0x140A8679C (PiUEventHandleVetoEvent.c)
 *     PnpLogVetoInformation @ 0x140A99FDC (PnpLogVetoInformation.c)
 *     ExpSystemErrorHandler2 @ 0x140B51340 (ExpSystemErrorHandler2.c)
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     EmpInfParseGetGuidFromName @ 0x140C051A4 (EmpInfParseGetGuidFromName.c)
 *     EmpParseEntryTypes @ 0x140C055A4 (EmpParseEntryTypes.c)
 *     IopCreateArcNames @ 0x140C0AB18 (IopCreateArcNames.c)
 *     IopCreateArcNamesCd @ 0x140C0AC5C (IopCreateArcNamesCd.c)
 *     IopMarkBootPartition @ 0x140C0BBA0 (IopMarkBootPartition.c)
 *     IopGetBootDiskInformation @ 0x140C0C6AC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x140C0D000 (IopApplySystemPartitionProt.c)
 *     PipCriticalDeviceWaitCallback @ 0x140C0F510 (PipCriticalDeviceWaitCallback.c)
 *     PipSmBiosGetString @ 0x140C1121C (PipSmBiosGetString.c)
 *     WmipDriverEntry @ 0x140C2B6E0 (WmipDriverEntry.c)
 *     CmpInitializeDriverStores @ 0x140C35F30 (CmpInitializeDriverStores.c)
 *     CmpSetSystemBiosInformation @ 0x140C387E4 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C38B84 (CmpSetVideoBiosInformation.c)
 *     RamdiskCreateSymbolicLink @ 0x140C4D158 (RamdiskCreateSymbolicLink.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140434530 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlpIsUtf8Process @ 0x1408E7140 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x1408E7640 (RtlUTF8ToUnicodeN.c)
 *     ExFreePool @ 0x140B62CB0 (ExFreePool.c)
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
  _CPTABLEINFO *p_Blink; // rdx
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
      p_Blink = (_CPTABLEINFO *)&PsGetCurrentServerSiloGlobals()[64].Blink;
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
