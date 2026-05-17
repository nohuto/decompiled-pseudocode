/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x180071520
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800CB874 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     ApiSetResolveToHost @ 0x180016CA0 (ApiSetResolveToHost.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x180020F60 (LdrpResolveDelayLoadDescriptor.c)
 *     RtlImageDirectoryEntryToData @ 0x180022220 (RtlImageDirectoryEntryToData.c)
 *     RtlUTF8ToUnicodeN @ 0x18004B290 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     LdrGetDllHandleByName @ 0x1800711A0 (LdrGetDllHandleByName.c)
 *     RtlpIsUtf8Process @ 0x1800718D0 (RtlpIsUtf8Process.c)
 *     LdrpLogDllState @ 0x180071900 (LdrpLogDllState.c)
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     _strnicmp @ 0x1801241A0 (_strnicmp.c)
 *     strlen @ 0x180169260 (strlen.c)
 */

__int64 LdrpSnapKernelBaseExtensions()
{
  __int64 result; // rax
  __int64 v1; // r15
  unsigned int v2; // esi
  int Descriptor; // edi
  void *ApiSetMap; // r12
  unsigned int v5; // eax
  char *v6; // rbx
  __int64 v7; // r8
  size_t v8; // rax
  unsigned int v9; // edx
  _WORD *v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  char v14; // bl
  __int64 v15; // r8
  wchar_t *Atom; // rax
  __int64 v18; // rax
  char *v19; // rcx
  signed __int32 v20[8]; // [rsp+0h] [rbp-49h] BYREF
  __int64 v21; // [rsp+20h] [rbp-29h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-9h] BYREF
  __int128 v24; // [rsp+50h] [rbp+7h] BYREF
  char v25; // [rsp+B0h] [rbp+67h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+6Fh] BYREF
  int v27; // [rsp+C0h] [rbp+77h] BYREF
  unsigned __int64 v28; // [rsp+C8h] [rbp+7Fh] BYREF

  v28 = 0LL;
  SourceString = 0LL;
  v26 = 0;
  v24 = 0LL;
  v25 = 0;
  LdrGetDllHandleByName((int)&LdrpKernelbaseDllName, 0, &v28);
  result = RtlImageDirectoryEntryToData(v28, 1, 0xDu, &v26);
  v1 = result;
  if ( result )
  {
    v26 >>= 5;
    v2 = 0;
    Descriptor = 0;
    ApiSetMap = NtCurrentPeb()->ApiSetMap;
    DestinationString = 0LL;
    while ( v2 < v26 )
    {
      v5 = *(_DWORD *)(v1 + 32LL * v2 + 4);
      if ( !v5 )
        break;
      v6 = (char *)(v28 + v5);
      if ( !strnicmp(v6, "EXT-", 4uLL) )
      {
        *(_QWORD *)&SourceString.Length = 0LL;
        SourceString.Buffer = v6;
        if ( v6 )
        {
          v8 = strlen(v6);
          if ( v8 >= 0xFFFF )
            LOWORD(v8) = -2;
          SourceString.Length = v8;
          SourceString.MaximumLength = v8 + 1;
        }
        else
        {
          LOWORD(v8) = SourceString.Length;
        }
        v27 = 0;
        if ( (unsigned __int8)RtlpIsUtf8Process(0LL, (unsigned __int16)v8, v7) )
        {
          if ( v9 )
          {
            RtlUTF8ToUnicodeN(v10, 0, &v27, v6, v9);
            LODWORD(v10) = v27;
          }
        }
        else
        {
          _InterlockedOr(v20, (unsigned int)v10);
          if ( word_1801CEF9C == (_WORD)v10 )
          {
            LODWORD(v10) = 2 * v9;
          }
          else
          {
            while ( v9-- )
            {
              v18 = (unsigned __int8)*v6++;
              if ( *(_WORD *)(qword_1801CF020 + 2 * v18) )
              {
                if ( !v9 )
                {
                  LODWORD(v10) = (_DWORD)v10 + 2;
                  break;
                }
                --v9;
                ++v6;
              }
              LODWORD(v10) = (_DWORD)v10 + 2;
            }
          }
        }
        v11 = (_DWORD)v10 + 2;
        if ( (int)v10 + 2 > (unsigned int)DestinationString.MaximumLength )
        {
          if ( v11 >= 0xFFFE )
          {
            Descriptor = -1073741675;
            break;
          }
          if ( DestinationString.Buffer )
          {
            RtlpSysVolFree((__int64)DestinationString.Buffer);
            *(_QWORD *)&DestinationString.Length = 0LL;
          }
          Atom = (wchar_t *)RtlpAllocateAtom();
          DestinationString.Buffer = Atom;
          if ( !Atom )
          {
            Descriptor = -1073741670;
            goto LABEL_38;
          }
          DestinationString.MaximumLength = v11;
        }
        else
        {
          DestinationString.Length = 0;
        }
        RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v12 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v12 = 2147353476LL;
        if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v19 = (unsigned int)RtlGetCurrentServiceSessionId()
              ? (char *)NtCurrentPeb()->SharedData + 555
              : (char *)2147353477;
          if ( (*v19 & 0x20) != 0 )
            LdrpLogEtwEvent(5328, 0LL, 0, 0, &DestinationString.Length, 0LL);
        }
        v13 = ApiSetResolveToHost((__int64)ApiSetMap, &DestinationString.Length, 0LL, &v25, (__int64)&v24);
        v14 = v25;
        Descriptor = v13;
        if ( v13 >= 0 && v25 )
        {
          if ( (_WORD)v24 )
            v15 = 5329LL;
          else
            v15 = 5330LL;
        }
        else
        {
          v15 = 5331LL;
        }
        LdrpLogDllState(0LL, &DestinationString, v15);
        if ( v14 )
        {
          LOBYTE(v21) = 1;
          if ( !(unsigned int)RtlCompareUnicodeStrings(
                                L"KERNEL32.DLL",
                                12LL,
                                *((_QWORD *)&v24 + 1),
                                (unsigned __int64)(unsigned __int16)v24 >> 1,
                                v21) )
          {
            Descriptor = LdrpResolveDelayLoadDescriptor(v28, v1 + 32LL * v2);
            if ( Descriptor < 0 )
              break;
            Descriptor = 0;
          }
        }
      }
      ++v2;
    }
    Atom = DestinationString.Buffer;
LABEL_38:
    if ( Atom )
      RtlpSysVolFree((__int64)Atom);
    return (unsigned int)Descriptor;
  }
  return result;
}
