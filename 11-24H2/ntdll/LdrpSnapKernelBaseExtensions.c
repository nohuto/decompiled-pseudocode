/*
 * XREFs of LdrpSnapKernelBaseExtensions @ 0x180070920
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800032B8 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     RtlImageDirectoryEntryToData @ 0x180008A00 (RtlImageDirectoryEntryToData.c)
 *     RtlUTF8ToUnicodeN @ 0x18000C3F0 (RtlUTF8ToUnicodeN.c)
 *     RtlAnsiStringToUnicodeString @ 0x18000CF60 (RtlAnsiStringToUnicodeString.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     ApiSetResolveToHost @ 0x18005B040 (ApiSetResolveToHost.c)
 *     RtlpIsUtf8Process @ 0x180070CD0 (RtlpIsUtf8Process.c)
 *     LdrpLogDllState @ 0x180070D00 (LdrpLogDllState.c)
 *     RtlCompareUnicodeStrings @ 0x180072550 (RtlCompareUnicodeStrings.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     LdrpResolveDelayLoadDescriptor @ 0x1800EBDB0 (LdrpResolveDelayLoadDescriptor.c)
 *     LdrGetDllHandleByName @ 0x1800EDDB0 (LdrGetDllHandleByName.c)
 *     _strnicmp @ 0x1801226C0 (_strnicmp.c)
 *     strlen @ 0x180167CE0 (strlen.c)
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
  size_t v7; // rax
  unsigned int v8; // edx
  _WORD *v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  char v13; // bl
  __int64 v14; // r8
  wchar_t *Atom; // rax
  __int64 v17; // rax
  char *v18; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-49h] BYREF
  __int64 v20; // [rsp+20h] [rbp-29h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-9h] BYREF
  __int128 v23; // [rsp+50h] [rbp+7h] BYREF
  char v24; // [rsp+B0h] [rbp+67h] BYREF
  unsigned int v25; // [rsp+B8h] [rbp+6Fh] BYREF
  int v26; // [rsp+C0h] [rbp+77h] BYREF
  unsigned __int64 v27; // [rsp+C8h] [rbp+7Fh] BYREF

  v27 = 0LL;
  SourceString = 0LL;
  v25 = 0;
  v23 = 0LL;
  v24 = 0;
  LdrGetDllHandleByName(&LdrpKernelbaseDllName, 0LL, &v27);
  result = RtlImageDirectoryEntryToData(v27, 1, 0xDu, &v25);
  v1 = result;
  if ( result )
  {
    v25 >>= 5;
    v2 = 0;
    Descriptor = 0;
    ApiSetMap = NtCurrentPeb()->ApiSetMap;
    DestinationString = 0LL;
    while ( v2 < v25 )
    {
      v5 = *(_DWORD *)(v1 + 32LL * v2 + 4);
      if ( !v5 )
        break;
      v6 = (char *)(v27 + v5);
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
        else
        {
          LOWORD(v7) = SourceString.Length;
        }
        v26 = 0;
        if ( (unsigned __int8)RtlpIsUtf8Process(0LL, (unsigned __int16)v7) )
        {
          if ( v8 )
          {
            RtlUTF8ToUnicodeN(v9, 0, &v26, v6, v8);
            LODWORD(v9) = v26;
          }
        }
        else
        {
          _InterlockedOr(v19, (unsigned int)v9);
          if ( word_1801CCF9C == (_WORD)v9 )
          {
            LODWORD(v9) = 2 * v8;
          }
          else
          {
            while ( v8-- )
            {
              v17 = (unsigned __int8)*v6++;
              if ( *(_WORD *)(qword_1801CD020 + 2 * v17) )
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
            RtlpSysVolFree((__int64)DestinationString.Buffer);
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
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v11 = (__int64)NtCurrentPeb()->SharedData + 554;
        else
          v11 = 2147353476LL;
        if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v18 = (unsigned int)RtlGetCurrentServiceSessionId()
              ? (char *)NtCurrentPeb()->SharedData + 555
              : (char *)2147353477;
          if ( (*v18 & 0x20) != 0 )
            LdrpLogEtwEvent(5328, 0, 0, 0, (__int64)&DestinationString, 0LL);
        }
        v12 = ApiSetResolveToHost((__int64)ApiSetMap, &DestinationString.Length, 0LL, &v24, (__int64)&v23);
        v13 = v24;
        Descriptor = v12;
        if ( v12 >= 0 && v24 )
        {
          if ( (_WORD)v23 )
            v14 = 5329LL;
          else
            v14 = 5330LL;
        }
        else
        {
          v14 = 5331LL;
        }
        LdrpLogDllState(0LL, &DestinationString, v14);
        if ( v13 )
        {
          LOBYTE(v20) = 1;
          if ( !(unsigned int)RtlCompareUnicodeStrings(
                                L"KERNEL32.DLL",
                                12LL,
                                *((_QWORD *)&v23 + 1),
                                (unsigned __int64)(unsigned __int16)v23 >> 1,
                                v20) )
          {
            Descriptor = LdrpResolveDelayLoadDescriptor(v27);
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
