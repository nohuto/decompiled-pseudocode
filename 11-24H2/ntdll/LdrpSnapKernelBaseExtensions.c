/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x18008D200
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800C6FD8 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpLogEtwEvent @ 0x180030140 (LdrpLogEtwEvent.c)
 *     RtlImageDirectoryEntryToData @ 0x180035400 (RtlImageDirectoryEntryToData.c)
 *     RtlUTF8ToUnicodeN @ 0x180038DF0 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x180039960 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     ApiSetResolveToHost @ 0x180070C20 (ApiSetResolveToHost.c)
 *     RtlpIsUtf8Process @ 0x18008D5B0 (RtlpIsUtf8Process.c)
 *     LdrpLogDllState @ 0x18008D5E0 (LdrpLogDllState.c)
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x1800E70C0 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrGetDllHandleByName @ 0x1800E8F90 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x1801208F0 (_strnicmp.c)
 *     strlen @ 0x1801660A0 (strlen.c)
 */

const IMAGE_DELAYLOAD_DESCRIPTOR *LdrpSnapKernelBaseExtensions()
{
  const IMAGE_DELAYLOAD_DESCRIPTOR *result; // rax
  const IMAGE_DELAYLOAD_DESCRIPTOR *v1; // r15
  ULONG v2; // esi
  int Descriptor; // edi
  void *ApiSetMap; // r12
  DWORD DllNameRVA; // eax
  char *v6; // rbx
  size_t v7; // rax
  ULONG v8; // edx
  WCHAR *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  char v13; // bl
  __int64 v14; // r8
  wchar_t *Atom; // rax
  __int64 v17; // rax
  char *v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-49h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  ANSI_STRING SourceString; // [rsp+40h] [rbp-9h] BYREF
  PCWCH String2[2]; // [rsp+50h] [rbp+7h] BYREF
  char v23; // [rsp+B0h] [rbp+67h] BYREF
  ULONG Size; // [rsp+B8h] [rbp+6Fh] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+C0h] [rbp+77h] BYREF
  PVOID DllHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  DllHandle = 0LL;
  SourceString = 0LL;
  Size = 0;
  *(_OWORD *)String2 = 0LL;
  v23 = 0;
  LdrGetDllHandleByName((PUNICODE_STRING)&LdrpKernelbaseDllName, 0LL, &DllHandle);
  result = (const IMAGE_DELAYLOAD_DESCRIPTOR *)RtlImageDirectoryEntryToData(DllHandle, 1u, 0xDu, &Size);
  v1 = result;
  if ( result )
  {
    Size >>= 5;
    v2 = 0;
    Descriptor = 0;
    ApiSetMap = NtCurrentPeb()->ApiSetMap;
    DestinationString = 0LL;
    while ( v2 < Size )
    {
      DllNameRVA = v1[v2].DllNameRVA;
      if ( !DllNameRVA )
        break;
      v6 = (char *)DllHandle + DllNameRVA;
      if ( !strnicmp(v6, "EXT-", 4uLL) )
      {
        *(_QWORD *)&SourceString.Length = 0LL;
        SourceString.Buffer = v6;
        if ( v6 )
        {
          v7 = strlen(v6);
          if ( v7 >= 0xFFFF )
            LOWORD(v7) = -2;
          SourceString.Length = v7;
          SourceString.MaximumLength = v7 + 1;
        }
        UnicodeStringActualByteCount = 0;
        if ( (unsigned __int8)RtlpIsUtf8Process(0) )
        {
          if ( v8 )
          {
            RtlUTF8ToUnicodeN(v9, 0, &UnicodeStringActualByteCount, v6, v8);
            LODWORD(v9) = UnicodeStringActualByteCount;
          }
        }
        else
        {
          _InterlockedOr(v19, (unsigned int)v9);
          if ( GlobalRtlNlsState.DBCSCodePage == (_WORD)v9 )
          {
            LODWORD(v9) = 2 * v8;
          }
          else
          {
            while ( v8-- )
            {
              v17 = (unsigned __int8)*v6++;
              if ( *(_WORD *)(qword_1801CC020 + 2 * v17) )
              {
                if ( !v8 )
                {
                  LODWORD(v9) = (_DWORD)v9 + 2;
                  break;
                }
                --v8;
                ++v6;
              }
              LODWORD(v9) = (_DWORD)v9 + 2;
            }
          }
        }
        v10 = (_DWORD)v9 + 2;
        if ( (int)v9 + 2 > (unsigned int)DestinationString.MaximumLength )
        {
          if ( v10 >= 0xFFFE )
          {
            Descriptor = -1073741675;
            break;
          }
          if ( DestinationString.Buffer )
          {
            RtlpSysVolFree(DestinationString.Buffer);
            *(_QWORD *)&DestinationString.Length = 0LL;
          }
          Atom = (wchar_t *)RtlpAllocateAtom(v10);
          DestinationString.Buffer = Atom;
          if ( !Atom )
          {
            Descriptor = -1073741670;
            goto LABEL_38;
          }
          DestinationString.MaximumLength = v10;
        }
        else
        {
          DestinationString.Length = 0;
        }
        RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
        if ( RtlGetCurrentServiceSessionId() )
          v11 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v11 = 2147353476LL;
        if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v18 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
          if ( (*v18 & 0x20) != 0 )
            LdrpLogEtwEvent(5328, 0LL, 0, 0, &DestinationString.Length, 0LL);
        }
        v12 = ApiSetResolveToHost((__int64)ApiSetMap, &DestinationString.Length, 0LL, &v23, (__int64)String2);
        v13 = v23;
        Descriptor = v12;
        if ( v12 >= 0 && v23 )
        {
          if ( LOWORD(String2[0]) )
            v14 = 5329LL;
          else
            v14 = 5330LL;
        }
        else
        {
          v14 = 5331LL;
        }
        LdrpLogDllState(0LL, &DestinationString, v14);
        if ( v13
          && !RtlCompareUnicodeStrings(
                LdrpKernel32DllName.Buffer,
                0xCuLL,
                String2[1],
                (unsigned __int64)LOWORD(String2[0]) >> 1,
                1u) )
        {
          Descriptor = LdrpResolveDelayLoadDescriptor(DllHandle, &v1[v2]);
          if ( Descriptor < 0 )
            break;
          Descriptor = 0;
        }
      }
      ++v2;
    }
    Atom = DestinationString.Buffer;
LABEL_38:
    if ( Atom )
      RtlpSysVolFree(Atom);
    return (const IMAGE_DELAYLOAD_DESCRIPTOR *)(unsigned int)Descriptor;
  }
  return result;
}
