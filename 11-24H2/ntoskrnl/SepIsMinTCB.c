/*
 * XREFs of SepIsMinTCB @ 0x140A1BD1C
 * Callers:
 *     SeQuerySigningPolicy @ 0x140A1BB40 (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140349380 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x140349A50 (PsGetCurrentServerSilo.c)
 *     SepSetSystemPaths @ 0x14078EA40 (SepSetSystemPaths.c)
 *     RtlPrefixUnicodeString @ 0x14086E3C0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140927050 (RtlEqualUnicodeString.c)
 *     SeCompareSigningLevels @ 0x1409354F0 (SeCompareSigningLevels.c)
 *     SepIsImageInMinTcbList @ 0x140A1B9DC (SepIsImageInMinTcbList.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x140A1C0F8 (SepCheckAndSetAuditModeForProcess.c)
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
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // eax
  char v28; // al
  unsigned __int8 v29; // di
  char *v30; // r14
  char v31; // al
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // bl
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
  if ( !RtlPrefixUnicodeString(&stru_140002F20, String2, 1u) && !RtlPrefixUnicodeString(&stru_14000B530, String2, 1u) )
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
      v27 = dword_140B41354[6 * v21];
      if ( !v27 || v27 == dword_140EFEAF0 )
      {
        _mm_lfence();
        v28 = byte_140B41352[24 * v21];
        if ( v28 || !a3 )
        {
          a3 = byte_140B41352[24 * v21];
          v29 = a3;
          if ( v28 )
            goto LABEL_24;
          v30 = a5;
          *a5 = byte_140B41350[8 * v22];
          v31 = byte_140B41351[8 * v22];
        }
        else
        {
          v29 = a3;
LABEL_24:
          v30 = a5;
          v24 = (unsigned __int64)a3 >> 4;
          *a5 = SeProtectedMapping[2 * v24];
          v31 = byte_140B3B109[2 * v24];
        }
        LOBYTE(v23) = a4;
        *a6 = v31;
        LOBYTE(v24) = *v30;
        if ( !(unsigned int)SeCompareSigningLevels(v24, v23, v25, v26) )
          *v30 = a4;
        LOBYTE(v33) = *a6;
        LOBYTE(v32) = a4;
        if ( !(unsigned int)SeCompareSigningLevels(v33, v32, v34, v35) )
          *a6 = a4;
        v36 = a3 & 7;
        if ( v36 != 1 && ((a2 & 1) != 0 || v36 == 2) )
        {
          if ( (*a6 & 0xFu) < 4 )
            *a6 = *v30;
          v29 = *a7 & 8 ^ v29 & 0xF2 | 2;
        }
        *a7 = v29;
        SepCheckAndSetAuditModeForProcess(&String1, a6);
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
