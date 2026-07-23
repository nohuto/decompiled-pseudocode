/*
 * XREFs of SbpDetermineDllContext @ 0x18008D9F0
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x18008D6B0 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800ECF28 (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(PACTIVATION_CONTEXT ActivationContext, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned int MajorSubsystemVersion; // ebp
  unsigned int MinorSubsystemVersion; // r14d
  char *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  _WORD *v10; // rax
  __int64 *v11; // r8
  __int64 v12; // r10
  unsigned int i; // ecx
  __int64 v14; // r9
  __int64 v15; // rax
  PIMAGE_NT_HEADERS OutHeaders[3]; // [rsp+28h] [rbp-240h] BYREF
  unsigned int v17; // [rsp+40h] [rbp-228h] BYREF
  __int64 v18; // [rsp+48h] [rbp-220h] BYREF

  v2 = 0LL;
  OutHeaders[1] = (PIMAGE_NT_HEADERS)512;
  if ( !a2 || !ActivationContext )
    return 0LL;
  OutHeaders[0] = 0LL;
  RtlImageNtHeaderEx(1u, ActivationContext, 0LL, OutHeaders);
  MajorSubsystemVersion = OutHeaders[0]->OptionalHeader.MajorSubsystemVersion;
  MinorSubsystemVersion = OutHeaders[0]->OptionalHeader.MinorSubsystemVersion;
  if ( MajorSubsystemVersion > 9 )
  {
    v7 = (char *)&unk_1801729F0;
    goto LABEL_5;
  }
  if ( (unsigned int)SbpRetrieveCompatibilityManifest(ActivationContext) && &v17 )
  {
    MinorSubsystemVersion += MajorSubsystemVersion << 16;
    if ( v17 )
    {
      v11 = &v18;
      v12 = v17;
      do
      {
        if ( *((_DWORD *)v11 + 4) == 1 )
        {
          for ( i = 0; i < 5; ++i )
          {
            v14 = 32LL * i;
            v15 = *v11 - *(_QWORD *)((char *)&SbSupportedOsList + v14 + 4);
            if ( *v11 == *(_QWORD *)((char *)&SbSupportedOsList + v14 + 4) )
              v15 = v11[1] - *(_QWORD *)((char *)&SbSupportedOsList + v14 + 12);
            if ( !v15 )
            {
              if ( *(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 22)
                 + (*(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 20) << 16) >= MinorSubsystemVersion )
                MinorSubsystemVersion = *(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 22)
                                      + (*(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 20) << 16);
              break;
            }
          }
        }
        v11 += 4;
        --v12;
      }
      while ( v12 );
    }
    MajorSubsystemVersion = HIWORD(MinorSubsystemVersion);
  }
  v9 = -1LL;
  v10 = &unk_180172986;
  while ( (unsigned __int16)MajorSubsystemVersion > *(v10 - 1) )
  {
LABEL_11:
    v9 = v2;
LABEL_12:
    ++v2;
    v10 += 16;
    if ( v2 >= 5 )
      goto LABEL_13;
  }
  if ( (_WORD)MajorSubsystemVersion == *(v10 - 1) )
  {
    if ( (unsigned __int16)MinorSubsystemVersion < *v10 )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( (unsigned __int16)MajorSubsystemVersion >= *(v10 - 1) )
    goto LABEL_12;
LABEL_13:
  if ( v9 == -1 )
    v7 = (char *)&SbSupportedOsList;
  else
    v7 = (char *)&SbSupportedOsList + 32 * v9;
LABEL_5:
  result = 1LL;
  *a2 = v7;
  return result;
}
