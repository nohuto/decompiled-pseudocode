/*
 * XREFs of EtwEventWriteString @ 0x1800EA8B0
 * Callers:
 *     <none>
 * Callees:
 *     ProviderHandleLookup @ 0x180046040 (ProviderHandleLookup.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     EtwpWriteToPrivateBuffers @ 0x18008EE70 (EtwpWriteToPrivateBuffers.c)
 *     EtwpReleasePrivateBuffers @ 0x1800EAB4C (EtwpReleasePrivateBuffers.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

ULONG __cdecl EtwEventWriteString(REGHANDLE RegHandle, UCHAR Level, ULONGLONG Keyword, PCWSTR String)
{
  ULONG v8; // r13d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  UCHAR v12; // al
  bool v13; // r12
  UCHAR v14; // al
  bool v15; // di
  _GUID ActivityId; // xmm0
  __int64 v18; // rax
  NTSTATUS v20; // eax
  __int128 v21; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE Fields[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+64h] [rbp-9Ch]
  __int128 v24; // [rsp+88h] [rbp-78h] BYREF
  _GUID v25; // [rsp+A0h] [rbp-60h] BYREF
  char v26; // [rsp+B0h] [rbp-50h]
  __int16 v27; // [rsp+B2h] [rbp-4Eh]
  int v28; // [rsp+B4h] [rbp-4Ch]
  __int128 *v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+D0h] [rbp-30h]
  _BYTE v31[144]; // [rsp+E0h] [rbp-20h] BYREF

  memset_thunk_772440563353939046(Fields, 0, 0x78uLL);
  memset_thunk_772440563353939046(v31, 0, 0x88uLL);
  v8 = 0;
  v21 = 0LL;
  v10 = ProviderHandleLookup(v9, RegHandle);
  v11 = v10;
  if ( !v10 || WORD2(RegHandle) != *(_WORD *)(v10 + 84) )
    return 6;
  if ( !String )
    return 87;
  v13 = *(_BYTE *)(v10 + 116)
     && ((v12 = *(_BYTE *)(v10 + 117), Level <= v12) || !v12)
     && ((*(_BYTE *)(v11 + 112) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v11 + 104)) != 0 && (Keyword & *(_QWORD *)(v11 + 96)) == *(_QWORD *)(v11 + 96));
  v15 = *(_BYTE *)(v11 + 236)
     && ((v14 = *(_BYTE *)(v11 + 237), Level <= v14) || !v14)
     && ((*(_BYTE *)(v11 + 232) & 0x40) != 0 && !Keyword
      || (Keyword & *(_QWORD *)(v11 + 224)) != 0 && (Keyword & *(_QWORD *)(v11 + 216)) == *(_QWORD *)(v11 + 216));
  if ( v13 || v15 )
  {
    *(_QWORD *)&v24 = 0LL;
    BYTE4(v24) = Level;
    *((_QWORD *)&v24 + 1) = Keyword;
    v29 = &v21;
    v23 = 4;
    v28 = 1;
    ActivityId = NtCurrentTeb()->ActivityId;
    v26 = 0;
    v18 = -1LL;
    v27 = 0;
    v25 = ActivityId;
    v30 = 0;
    *(_QWORD *)&v21 = String;
    while ( String[++v18] != 0 )
      ;
    *((_QWORD *)&v21 + 1) = (unsigned int)(2 * v18 + 2);
    if ( v15 )
    {
      v8 = EtwpWriteToPrivateBuffers(v11, &v24, 0, 0, 4, &v25, 0LL, 1u, (__int64)&v21, (__int64)v31);
      if ( v8 )
        goto LABEL_31;
    }
    if ( v13 )
    {
      v20 = NtTraceEvent(*(HANDLE *)(v11 + 88), 0x300u, 0x78u, Fields);
      if ( v20 )
        v8 = RtlNtStatusToDosError(v20);
      else
        v8 = 0;
    }
    if ( v15 )
LABEL_31:
      EtwpReleasePrivateBuffers(v8, v31);
  }
  return v8;
}
