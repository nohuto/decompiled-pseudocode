/*
 * XREFs of SbpDetermineDllContext @ 0x180071D10
 * Callers:
 *     SbUpdateSwitchContextBasedOnDll @ 0x1800719D0 (SbUpdateSwitchContextBasedOnDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     SbpRetrieveCompatibilityManifest @ 0x1800F3E18 (SbpRetrieveCompatibilityManifest.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall SbpDetermineDllContext(unsigned __int64 a1, _QWORD *a2)
{
  unsigned __int64 v2; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // r14d
  char *v7; // rcx
  __int64 result; // rax
  __int64 v9; // rcx
  _WORD *v10; // rax
  _BYTE *v11; // r8
  __int64 v12; // r10
  unsigned int i; // ecx
  __int64 v14; // r9
  __int64 v15; // rax
  _BYTE *v16; // [rsp+20h] [rbp-248h] BYREF
  __int64 v17; // [rsp+28h] [rbp-240h] BYREF
  __int64 v18; // [rsp+30h] [rbp-238h] BYREF
  _BYTE v19[512]; // [rsp+40h] [rbp-228h] BYREF

  v2 = 0LL;
  v18 = 512LL;
  v16 = v19;
  if ( !a2 || !a1 )
    return 0LL;
  v17 = 0LL;
  RtlImageNtHeaderEx(1, a1, 0LL, &v17);
  v5 = *(unsigned __int16 *)(v17 + 72);
  v6 = *(unsigned __int16 *)(v17 + 74);
  if ( v5 > 9 )
  {
    v7 = (char *)&unk_180175370;
    goto LABEL_5;
  }
  if ( (unsigned int)SbpRetrieveCompatibilityManifest(a1, &v16, &v18) && v16 )
  {
    v6 += v5 << 16;
    if ( *(_DWORD *)v16 )
    {
      v11 = v16 + 8;
      v12 = *(unsigned int *)v16;
      do
      {
        if ( *((_DWORD *)v11 + 4) == 1 )
        {
          for ( i = 0; i < 5; ++i )
          {
            v14 = 32LL * i;
            v15 = *(_QWORD *)v11 - *(_QWORD *)((char *)&SbSupportedOsList + v14 + 4);
            if ( *(_QWORD *)v11 == *(_QWORD *)((char *)&SbSupportedOsList + v14 + 4) )
              v15 = *((_QWORD *)v11 + 1) - *(_QWORD *)((char *)&SbSupportedOsList + v14 + 12);
            if ( !v15 )
            {
              if ( *(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 22)
                 + (*(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 20) << 16) >= v6 )
                v6 = *(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 22)
                   + (*(unsigned __int16 *)((char *)&SbSupportedOsList + v14 + 20) << 16);
              break;
            }
          }
        }
        v11 += 32;
        --v12;
      }
      while ( v12 );
    }
    if ( v16 != v19 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v16);
    v5 = HIWORD(v6);
  }
  v9 = -1LL;
  v10 = &unk_180175306;
  while ( (unsigned __int16)v5 > *(v10 - 1) )
  {
LABEL_11:
    v9 = v2;
LABEL_12:
    ++v2;
    v10 += 16;
    if ( v2 >= 5 )
      goto LABEL_13;
  }
  if ( (_WORD)v5 == *(v10 - 1) )
  {
    if ( (unsigned __int16)v6 < *v10 )
      goto LABEL_13;
    goto LABEL_11;
  }
  if ( (unsigned __int16)v5 >= *(v10 - 1) )
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
