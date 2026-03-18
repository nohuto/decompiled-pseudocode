/*
 * XREFs of SepIsMinTCB @ 0x1409BB9B4
 * Callers:
 *     SeQuerySigningPolicy @ 0x1409BD120 (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403D6D00 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403D73D0 (PsGetCurrentServerSilo.c)
 *     SepSetSystemPaths @ 0x14077F780 (SepSetSystemPaths.c)
 *     RtlPrefixUnicodeString @ 0x140871070 (RtlPrefixUnicodeString.c)
 *     SeCompareSigningLevels @ 0x14091E260 (SeCompareSigningLevels.c)
 *     RtlEqualUnicodeString @ 0x1409329B0 (RtlEqualUnicodeString.c)
 *     SepIsImageInMinTcbList @ 0x1409BB558 (SepIsImageInMinTcbList.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x1409BB8F4 (SepCheckAndSetAuditModeForProcess.c)
 */

__int64 __fastcall SepIsMinTCB(
        PCUNICODE_STRING String2,
        char a2,
        unsigned __int8 a3,
        char a4,
        char *a5,
        char *a6,
        unsigned __int8 *a7)
{
  unsigned __int64 CurrentServerSilo; // rax
  volatile signed __int64 *ServerSiloGlobals; // rax
  __int64 v13; // rsi
  __int16 v14; // bp
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 v18; // rcx
  wchar_t *Buffer; // rax
  unsigned __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  int v24; // eax
  char v25; // al
  unsigned __int8 v26; // di
  char *v27; // r14
  char v28; // al
  __int64 v29; // rcx
  char v30; // bl
  UNICODE_STRING String1; // [rsp+50h] [rbp-38h] BYREF

  String1 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(CurrentServerSilo);
  v13 = (__int64)(ServerSiloGlobals + 92);
  if ( !_InterlockedCompareExchange64(ServerSiloGlobals + 96, 0LL, 0LL) )
  {
    v16 = SepSetSystemPaths(v13);
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  if ( !String2 )
    return (unsigned int)-1073741275;
  v14 = 42;
  v15 = **(unsigned __int16 **)(v13 + 32);
  if ( (unsigned __int16)v15 >= 0x2Au )
    v15 = 42;
  if ( String2->Length <= v15 )
    return (unsigned int)-1073741275;
  if ( String2->Buffer[1] == 63 )
  {
    if ( RtlPrefixUnicodeString(*(PCUNICODE_STRING *)(v13 + 32), String2, 1u)
      || RtlPrefixUnicodeString((PCUNICODE_STRING)(*(_QWORD *)(v13 + 32) + 16LL), String2, 1u) )
    {
      v14 = **(_WORD **)(v13 + 32);
      goto LABEL_13;
    }
    return (unsigned int)-1073741275;
  }
  if ( !RtlPrefixUnicodeString(&stru_1400029E8, String2, 1u) && !RtlPrefixUnicodeString(&stru_14000B3A0, String2, 1u) )
    return (unsigned int)-1073741275;
LABEL_13:
  v18 = (unsigned __int16)(String2->Length - v14);
  Buffer = String2->Buffer;
  v20 = ((unsigned __int64)String2->Length - v18) >> 1;
  v21 = 0;
  String1.Length = v18;
  String1.MaximumLength = v18;
  String1.Buffer = &Buffer[v20];
  while ( v21 < 0x11 )
  {
    v22 = 3LL * v21;
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&SeMsMinTCBList[3 * v21], 1u) )
    {
      v24 = dword_140B32084[6 * v21];
      if ( !v24 || v24 == dword_140EFE810 )
      {
        _mm_lfence();
        v25 = byte_140B32082[24 * v21];
        if ( v25 || !a3 )
        {
          a3 = byte_140B32082[24 * v21];
          v26 = a3;
          if ( v25 )
            goto LABEL_24;
          v27 = a5;
          *a5 = byte_140B32080[8 * v22];
          v28 = byte_140B32081[8 * v22];
        }
        else
        {
          v26 = a3;
LABEL_24:
          v27 = a5;
          v23 = (unsigned __int64)a3 >> 4;
          *a5 = SeProtectedMapping[2 * v23];
          v28 = byte_140B2BE39[2 * v23];
        }
        *a6 = v28;
        LOBYTE(v23) = *v27;
        if ( !(unsigned int)SeCompareSigningLevels(v23) )
          *v27 = a4;
        LOBYTE(v29) = *a6;
        if ( !(unsigned int)SeCompareSigningLevels(v29) )
          *a6 = a4;
        v30 = a3 & 7;
        if ( v30 != 1 && ((a2 & 1) != 0 || v30 == 2) )
        {
          if ( (*a6 & 0xFu) < 4 )
            *a6 = *v27;
          v26 = *a7 & 8 ^ v26 & 0xF2 | 2;
        }
        *a7 = v26;
        SepCheckAndSetAuditModeForProcess((__int64)&String1, a6, a7);
        return 0;
      }
    }
    ++v21;
  }
  v16 = -1073741275;
  if ( (SeCiDebugOptions & 1) == 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    return (unsigned int)SepIsImageInMinTcbList((__int64)L" \"", 9u, &String1, a2, a3, a4, a5, a6, a7);
  return (unsigned int)v16;
}
