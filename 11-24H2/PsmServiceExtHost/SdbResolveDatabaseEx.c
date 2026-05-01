/*
 * XREFs of SdbResolveDatabaseEx @ 0x18009602C
 * Callers:
 *     SdbpOpenLocalDatabaseEx @ 0x180094F04 (SdbpOpenLocalDatabaseEx.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x1800948C0 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbGetPathCustomSdb @ 0x180095F08 (SdbGetPathCustomSdb.c)
 *     SdbGetPathSystemSdb @ 0x180096004 (SdbGetPathSystemSdb.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslRegistryGetUInt32_UStr @ 0x18009DF64 (AslRegistryGetUInt32_UStr.c)
 *     AslRegistryOpenKey_UStr @ 0x18009E058 (AslRegistryOpenKey_UStr.c)
 *     AslGuidToString_UStr @ 0x18009E24C (AslGuidToString_UStr.c)
 *     AslUnicodeStringFree @ 0x18009ECB4 (AslUnicodeStringFree.c)
 */

__int64 __fastcall SdbResolveDatabaseEx(__int64 a1, _QWORD *a2, int *a3, int *a4, _WORD *a5, int a6)
{
  __int64 v11; // rbx
  WCHAR *v12; // r12
  GUID **v13; // rdx
  int i; // ecx
  __int64 v15; // rax
  int v16; // r15d
  int v17; // r8d
  int v18; // ecx
  int v19; // eax
  USHORT v21; // r15
  WCHAR *Heap; // rax
  __int64 v23; // rdx
  int v24; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-10h] BYREF
  int v29; // [rsp+B0h] [rbp+50h]

  a6 = 0;
  v24 = 0;
  Handle = 0LL;
  LODWORD(v11) = 0;
  v12 = 0LL;
  Destination = 0LL;
  Source = 0LL;
  if ( !a5 )
    return 0LL;
  *a5 = 0;
  v13 = &off_1800E83B0;
  for ( i = 0; (unsigned __int64)i < 6; ++i )
  {
    v15 = *(_QWORD *)&(*v13)->Data1 - *a2;
    if ( !v15 )
      v15 = *(_QWORD *)(*v13)->Data4 - a2[1];
    if ( !v15 )
    {
      v16 = *((_DWORD *)&off_1800E83B0 + 6 * i + 2);
      v17 = *((_DWORD *)&off_1800E83B0 + 6 * i + 4);
      v29 = *((_DWORD *)&off_1800E83B0 + 6 * i + 3);
      a6 = v16;
      if ( v17 )
      {
        if ( SdbGetPathSystemSdb((int)a5, (int)v13, v17, a1 + 584) )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( a5[v11] );
        }
        else
        {
          AslLogCallPrintf(1LL);
        }
        if ( a3 )
          *a3 = v16;
        if ( a4 )
        {
          v19 = SdbGuestTargetPlatformFlagsToRuntimePlatformFlags(v18);
          *a4 = v19;
          if ( v29 )
            *a4 = v19 & 0x1B;
        }
        return (unsigned int)v11;
      }
      break;
    }
    v13 += 3;
  }
  if ( (int)AslGuidToString_UStr(&Source, a2) < 0
    || (v21 = Source.Length + 184,
        Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Source.Length + 184),
        (v12 = Heap) == 0LL) )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_37;
  }
  Destination.MaximumLength = v21;
  Destination.Buffer = Heap;
  Destination.Length = 0;
  RtlAppendUnicodeToString(
    &Destination,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\AppCompatFlags\\InstalledSDB");
  RtlAppendUnicodeToString(&Destination, L"\\");
  RtlAppendUnicodeStringToString(&Destination, &Source);
  if ( (int)AslRegistryOpenKey_UStr(&Handle, &Destination) < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_37;
  }
  if ( a3 )
  {
    if ( (int)AslRegistryGetUInt32_UStr(&a6, Handle, &g_ustrDatabaseType) < 0 )
    {
      AslLogCallPrintf(1LL);
      *a3 = 0;
      goto LABEL_37;
    }
    *a3 = a6 & 0x7FFFFFFF;
  }
  if ( a4 )
  {
    if ( (int)AslRegistryGetUInt32_UStr(&v24, Handle, L".0") < 0 )
    {
      AslLogCallPrintf(1LL);
      *a4 = 0;
      goto LABEL_37;
    }
    *a4 = v24;
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
    AslLogCallPrintf(1LL);
  }
LABEL_37:
  if ( Handle )
    ZwClose(Handle);
  if ( v12 )
    AslFree(NtCurrentPeb()->ProcessHeap, v12);
  if ( Source.Buffer )
    AslUnicodeStringFree(&Source);
  return (unsigned int)v11;
}
