/*
 * XREFs of SdbResolveDatabaseEx @ 0x140806D04
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x1408069BC (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140403FC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140806800 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbGetPathCustomSdb @ 0x140806C0C (SdbGetPathCustomSdb.c)
 *     SdbGetPathSystemSdb @ 0x140806CDC (SdbGetPathSystemSdb.c)
 *     AslGuidToString_UStr @ 0x14080898C (AslGuidToString_UStr.c)
 *     AslUnicodeStringFree @ 0x140808D68 (AslUnicodeStringFree.c)
 *     AslRegistryGetUInt32_UStr @ 0x140809558 (AslRegistryGetUInt32_UStr.c)
 *     AslRegistryOpenKey_UStr @ 0x140809648 (AslRegistryOpenKey_UStr.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbResolveDatabaseEx(__int64 a1, _QWORD *a2, int *a3, int *a4, _WORD *a5, int a6)
{
  __int64 v11; // rbx
  wchar_t *v12; // r12
  GUID **v13; // r8
  int i; // edx
  __int64 v15; // rcx
  int v16; // esi
  int v17; // ecx
  int v18; // eax
  __int64 v20; // rcx
  unsigned __int16 v21; // si
  wchar_t *v22; // rax
  __int64 v23; // rdx
  HANDLE v24; // rcx
  int v25; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-10h] BYREF
  int v30; // [rsp+B0h] [rbp+50h]

  a6 = 0;
  v25 = 0;
  Handle = 0LL;
  LODWORD(v11) = 0;
  v12 = 0LL;
  Destination = 0LL;
  Source = 0LL;
  if ( !a5 )
    return 0LL;
  *a5 = 0;
  v13 = &off_140E0A0F0;
  for ( i = 0; (unsigned __int64)i < 6; ++i )
  {
    v15 = *(_QWORD *)&(*v13)->Data1 - *a2;
    if ( !v15 )
      v15 = *(_QWORD *)(*v13)->Data4 - a2[1];
    if ( !v15 )
    {
      v16 = *((_DWORD *)&off_140E0A0F0 + 6 * i + 2);
      v13 = (GUID **)*((unsigned int *)&off_140E0A0F0 + 6 * i + 4);
      v30 = *((_DWORD *)&off_140E0A0F0 + 6 * i + 3);
      a6 = v16;
      if ( (_DWORD)v13 )
      {
        if ( SdbGetPathSystemSdb((int)a5, i, (int)v13, a1 + 584) )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( a5[v11] );
        }
        else
        {
          AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabaseEx", 2353, (unsigned int)"SdbGetPathSystemSdb failed.");
        }
        if ( a3 )
          *a3 = v16;
        if ( a4 )
        {
          v18 = SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(v17);
          *a4 = v18;
          if ( v30 )
            *a4 = v18 & 0x1B;
        }
        return (unsigned int)v11;
      }
      break;
    }
    v13 += 3;
  }
  if ( (int)AslGuidToString_UStr(&Source, a2, v13) < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbResolveDatabaseEx",
      2376,
      (unsigned int)"Failed to convert guid to string [%x]");
    goto LABEL_38;
  }
  v21 = Source.Length + 184;
  v22 = (wchar_t *)AslAlloc(v20, (unsigned int)Source.Length + 184);
  v12 = v22;
  if ( !v22 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbResolveDatabaseEx",
      2397,
      (unsigned int)"Failed to allocate %ld bytes for key path");
    goto LABEL_38;
  }
  Destination.MaximumLength = v21;
  Destination.Buffer = v22;
  Destination.Length = 0;
  RtlAppendUnicodeToString(
    &Destination,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\InstalledSDB");
  RtlAppendUnicodeToString(&Destination, L"\\");
  RtlAppendUnicodeStringToString(&Destination, &Source);
  if ( (int)AslRegistryOpenKey_UStr(&Handle, &Destination) < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabaseEx", 2413, (unsigned int)"Failed to open Key \"%ws\" [%x]");
    goto LABEL_38;
  }
  if ( a3 )
  {
    if ( (int)AslRegistryGetUInt32_UStr(&a6, Handle, &g_ustrDatabaseType) < 0 )
    {
      AslLogCallPrintf(1, (unsigned int)"SdbResolveDatabaseEx", 2425, (unsigned int)"Failed to get database type [%x]");
      *a3 = 0;
      goto LABEL_38;
    }
    *a3 = a6 & 0x7FFFFFFF;
  }
  if ( a4 )
  {
    if ( (int)AslRegistryGetUInt32_UStr(&v25, Handle, L".0") < 0 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbResolveDatabaseEx",
        2441,
        (unsigned int)"Failed to get runtime platform [%x]");
      *a4 = 0;
      goto LABEL_38;
    }
    *a4 = v25;
  }
  if ( SdbGetPathCustomSdb((int)a5, v23, (__int64)a2, a1 + 584) )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a5[v11] );
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbResolveDatabaseEx",
      2450,
      (unsigned int)"SdbGetPathCustomSdb failed to get the database path.");
  }
LABEL_38:
  v24 = Handle;
  if ( Handle )
    ZwClose(Handle);
  if ( v12 )
    AslFree(v24);
  if ( Source.Buffer )
    AslUnicodeStringFree(&Source);
  return (unsigned int)v11;
}
