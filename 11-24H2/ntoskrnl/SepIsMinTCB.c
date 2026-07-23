/*
 * XREFs of SepIsMinTCB @ 0x1409FA28C
 * Callers:
 *     SeQuerySigningPolicy @ 0x1409FA0B0 (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1403C2DC0 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x1403C3490 (PsGetCurrentServerSilo.c)
 *     SepSetSystemPaths @ 0x14078E970 (SepSetSystemPaths.c)
 *     RtlPrefixUnicodeString @ 0x1408726F0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     SepIsImageInMinTcbList @ 0x1409F9F4C (SepIsImageInMinTcbList.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x1409FA668 (SepCheckAndSetAuditModeForProcess.c)
 *     SeCompareSigningLevels @ 0x1409FA8D0 (SeCompareSigningLevels.c)
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
  int v25; // eax
  char v26; // al
  unsigned __int8 v27; // di
  char *v28; // r14
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // bl
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
  if ( !RtlPrefixUnicodeString(&stru_140002F08, String2, 1u) && !RtlPrefixUnicodeString(&stru_14000B7E0, String2, 1u) )
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
      v25 = dword_140B43154[6 * v21];
      if ( !v25 || v25 == dword_140EFEE10 )
      {
        _mm_lfence();
        v26 = byte_140B43152[24 * v21];
        if ( v26 || !a3 )
        {
          a3 = byte_140B43152[24 * v21];
          v27 = a3;
          if ( v26 )
            goto LABEL_24;
          v28 = a5;
          *a5 = byte_140B43150[8 * v22];
          v29 = byte_140B43151[8 * v22];
        }
        else
        {
          v27 = a3;
LABEL_24:
          v28 = a5;
          v24 = (unsigned __int64)a3 >> 4;
          *a5 = SeProtectedMapping[2 * v24];
          v29 = byte_140B3CEB9[2 * v24];
        }
        LOBYTE(v23) = a4;
        *a6 = v29;
        LOBYTE(v24) = *v28;
        if ( !(unsigned int)SeCompareSigningLevels(v24, v23) )
          *v28 = a4;
        LOBYTE(v31) = *a6;
        LOBYTE(v30) = a4;
        if ( !(unsigned int)SeCompareSigningLevels(v31, v30) )
          *a6 = a4;
        v32 = a3 & 7;
        if ( v32 != 1 && ((a2 & 1) != 0 || v32 == 2) )
        {
          if ( (*a6 & 0xFu) < 4 )
            *a6 = *v28;
          v27 = *a7 & 8 ^ v27 & 0xF2 | 2;
        }
        *a7 = v27;
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
