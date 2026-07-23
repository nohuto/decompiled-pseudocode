/*
 * XREFs of RtlUnicodeStringToAnsiString @ 0x1409051E0
 * Callers:
 *     DbgUnicodeStringToAnsiString @ 0x14049EE30 (DbgUnicodeStringToAnsiString.c)
 *     DifRtlUnicodeStringToAnsiStringWrapper @ 0x140638B80 (DifRtlUnicodeStringToAnsiStringWrapper.c)
 *     KsepGetModuleInfoByName @ 0x14073E054 (KsepGetModuleInfoByName.c)
 *     NtQuerySystemEnvironmentValue @ 0x1407BEA00 (NtQuerySystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValue @ 0x1407BF0A0 (NtSetSystemEnvironmentValue.c)
 *     CmpLoadLayerVersion @ 0x1407D7094 (CmpLoadLayerVersion.c)
 *     EtwpBuildProcessEvent @ 0x1408EFB30 (EtwpBuildProcessEvent.c)
 *     MmGetSystemRoutineAddress @ 0x140906FD0 (MmGetSystemRoutineAddress.c)
 *     ExpQueryModuleInformationImage @ 0x140A183D0 (ExpQueryModuleInformationImage.c)
 *     CmpQueryDowncastString @ 0x140A41174 (CmpQueryDowncastString.c)
 *     ExpConvertLdrEntryToModuleInfo @ 0x140A8F6A4 (ExpConvertLdrEntryToModuleInfo.c)
 *     ObCreateObjectTypeEx @ 0x140A99090 (ObCreateObjectTypeEx.c)
 *     ExpSystemErrorHandler2 @ 0x140B63540 (ExpSystemErrorHandler2.c)
 *     ViThunkHookExportAddress @ 0x140B998F8 (ViThunkHookExportAddress.c)
 *     HdlspProcessDumpCommand @ 0x140BAFFDC (HdlspProcessDumpCommand.c)
 *     IopReassignSystemRoot @ 0x140C1EFE0 (IopReassignSystemRoot.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x140905B50 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x140905BE0 (RtlUnicodeToUTF8N.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS v6; // r12d
  ULONG v7; // esi
  ULONG Length; // ebx
  wchar_t *Buffer; // rdi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  ULONG v11; // ebx
  ULONG v12; // esi
  ULONG MaximumLength; // eax
  ULONG UnicodeStringByteCount; // esi
  wchar_t *v15; // r14
  unsigned int v16; // edi
  char *v17; // rbx
  _CPTABLEINFO *p_Blink; // rax
  ULONG v19; // esi
  int v20; // r9d
  _WORD *v21; // r8
  __int16 v22; // cx
  unsigned int v23; // eax
  _BYTE *WideCharTable; // r9
  unsigned int v25; // r8d
  char *Pool2; // rax
  __int16 v28; // cx
  signed __int32 v29[8]; // [rsp+0h] [rbp-98h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v31; // [rsp+34h] [rbp-64h]
  unsigned int v32; // [rsp+38h] [rbp-60h]
  ULONG v33; // [rsp+40h] [rbp-58h]
  int v34; // [rsp+44h] [rbp-54h]
  int v35; // [rsp+48h] [rbp-50h]
  char *v36; // [rsp+50h] [rbp-48h]
  wchar_t *v37; // [rsp+58h] [rbp-40h]
  char v38; // [rsp+A8h] [rbp+10h]
  ULONG v39; // [rsp+B8h] [rbp+20h] BYREF

  v38 = 0;
  v6 = 0;
  v7 = 0;
  v39 = 0;
  Length = SourceString->Length;
  Buffer = SourceString->Buffer;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    if ( Length )
    {
      RtlUnicodeToUTF8N(0LL, 0, &v39, Buffer, Length);
      v7 = v39;
    }
  }
  else
  {
    _InterlockedOr(v29, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v11 = Length >> 1;
    if ( WORD2(CurrentServerSiloGlobals[65].Flink) )
    {
      for ( ; v11; --v11 )
      {
        v28 = *((_WORD *)&CurrentServerSiloGlobals[67].Flink->Flink + *Buffer++);
        v7 += (HIBYTE(v28) != 0) + 1;
      }
      v39 = v7;
    }
    else
    {
      v7 = v11;
      v39 = v11;
    }
  }
  v12 = v7 + 1;
  UTF8StringActualByteCount = v12;
  if ( v12 > 0xFFFF )
    return -1073741584;
  if ( AllocateDestinationString )
  {
    Pool2 = (char *)ExAllocatePool2(0x100uLL, v12, 0x67727453u);
    DestinationString->Buffer = Pool2;
    if ( !Pool2 )
      return -1073741801;
    DestinationString->MaximumLength = v12;
    LOWORD(MaximumLength) = v12;
  }
  else
  {
    MaximumLength = DestinationString->MaximumLength;
    if ( v12 > MaximumLength )
    {
      if ( !(_WORD)MaximumLength )
        return -2147483643;
      v38 = 1;
    }
  }
  v34 = 0;
  UnicodeStringByteCount = SourceString->Length;
  v15 = SourceString->Buffer;
  v16 = (unsigned __int16)MaximumLength - 1;
  v17 = DestinationString->Buffer;
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    p_Blink = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v29, 0);
    p_Blink = (_CPTABLEINFO *)&PsGetCurrentServerSiloGlobals()[64].Blink;
  }
  v37 = v15;
  v32 = v16;
  v36 = v17;
  v31 = 0;
  v33 = 0;
  if ( !p_Blink || p_Blink->CodePage == 0xFDE9 )
  {
    v35 = 0;
    if ( !UnicodeStringByteCount )
    {
      v16 = 0;
      UTF8StringActualByteCount = 0;
      goto LABEL_30;
    }
    RtlUnicodeToUTF8N(v17, v16, &UTF8StringActualByteCount, v15, UnicodeStringByteCount);
  }
  else
  {
    v19 = UnicodeStringByteCount >> 1;
    v33 = v19;
    if ( !p_Blink->DBCSCodePage )
    {
      if ( v19 < v16 )
        v16 = v19;
      UTF8StringActualByteCount = v16;
      WideCharTable = p_Blink->WideCharTable;
      v25 = 0;
      v31 = 0;
      while ( v25 < v16 )
      {
        v17[v25] = WideCharTable[v15[v25]];
        v31 = ++v25;
      }
      goto LABEL_30;
    }
    LOWORD(v39) = 0;
    v20 = (int)v17;
    v21 = p_Blink->WideCharTable;
    while ( v19 && v16 )
    {
      v22 = v21[*v15];
      LOWORD(v39) = v22;
      v37 = ++v15;
      if ( HIBYTE(v22) )
      {
        v23 = v16--;
        v32 = v16;
        if ( v23 < 2 )
          break;
        *v17++ = HIBYTE(v22);
        v36 = v17;
      }
      *v17++ = v22;
      v36 = v17;
      v32 = --v16;
      v33 = --v19;
    }
    UTF8StringActualByteCount = (_DWORD)v17 - v20;
  }
  v16 = UTF8StringActualByteCount;
LABEL_30:
  v34 = 0;
  DestinationString->Buffer[v16] = 0;
  DestinationString->Length = v16;
  if ( v38 )
    return -2147483643;
  return v6;
}
