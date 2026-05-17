/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x1800B2AE0
 * Callers:
 *     LdrpMinimalMapModule @ 0x18006D7B0 (LdrpMinimalMapModule.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800B05CC (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800B0728 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpInitializeExecutionOptions @ 0x1800B1738 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800B2490 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800B270C (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlQueryApplicationKeyOption @ 0x1800B2918 (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x1800B2A40 (RtlQueryImageFileExecutionOptions.c)
 *     WerpGlobalFlagsForProcess @ 0x1800CFC84 (WerpGlobalFlagsForProcess.c)
 *     RtlpQueryEafPlusModuleList @ 0x180116138 (RtlpQueryEafPlusModuleList.c)
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 *     RtlpHpQueryGCTimerInterval @ 0x180143F4C (RtlpHpQueryGCTimerInterval.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlUnicodeStringToInteger @ 0x18005BFF0 (RtlUnicodeStringToInteger.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryImageFileKeyOption(__int64 a1, const wchar_t *a2, int a3, int *a4, unsigned int a5, int *a6)
{
  size_t v10; // rax
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  __int64 result; // rax
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // r12
  int *v17; // rcx
  int v18; // edx
  unsigned int v19; // ebx
  char *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v22; // eax
  unsigned int v23; // eax
  size_t v24; // r8
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  const wchar_t *v27; // [rsp+40h] [rbp-C0h]
  int *v28; // [rsp+48h] [rbp-B8h]
  _BYTE v29[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v28 = a6;
  memset_thunk_772440563353939046(v29, 0, 0x400uLL);
  v25 = 0;
  v26 = 0LL;
  v27 = a2;
  if ( a2 )
  {
    v10 = wcslen(a2);
    if ( v10 > 0x7FFE )
      return 3221225734LL;
    LOWORD(v26) = 2 * v10;
    WORD1(v26) = 2 * v10 + 2;
  }
  v11 = a5;
  if ( a5 >= 0x3F4 )
  {
    v19 = a5 + 12;
    goto LABEL_31;
  }
  v12 = v29;
  result = NtQueryValueKey(a1, &v26, 2LL, v29, 1024, &v25);
  v15 = result;
  if ( (int)result >= 0 )
  {
    v16 = 0LL;
LABEL_9:
    v17 = v12 + 2;
    if ( !a3 )
    {
      if ( *v17 > a5 )
      {
        v25 = *v17;
        goto LABEL_40;
      }
      a3 = v12[1];
      v11 = *v17;
    }
    v18 = v12[1];
    if ( ((v18 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( v18 )
      {
        case 4:
          if ( a3 == 4 )
          {
            if ( v11 == 4 && v12[2] == 4 )
            {
              v25 = 4;
              if ( a4 )
              {
                *a4 = v12[3];
                goto LABEL_24;
              }
LABEL_40:
              v15 = -2147483643;
              goto LABEL_24;
            }
            goto LABEL_61;
          }
          break;
        case 11:
          if ( a3 == 11 )
          {
            if ( v11 == 8 && v12[2] == 8 )
            {
              v25 = 8;
              if ( a4 )
              {
                *(_QWORD *)a4 = *(_QWORD *)(v12 + 3);
                goto LABEL_24;
              }
              goto LABEL_40;
            }
            goto LABEL_61;
          }
          break;
        case 1:
          if ( a3 == 4 )
          {
            if ( v11 == 4 )
            {
              if ( ((unsigned __int8)a4 & 3) == 0 )
              {
                v25 = 4;
                if ( a4 )
                {
                  v27 = (const wchar_t *)(v12 + 3);
                  LOWORD(v26) = *((_WORD *)v12 + 4);
                  WORD1(v26) = *((_WORD *)v12 + 4);
                  v15 = RtlUnicodeStringToInteger((unsigned __int16 *)&v26, 0, a4);
LABEL_24:
                  if ( v28 && ((int)(v15 + 0x80000000) < 0 || v15 == -2147483643) )
                    *v28 = v25;
                  goto LABEL_25;
                }
                goto LABEL_40;
              }
              v15 = -2147483646;
LABEL_25:
              if ( v16 )
LABEL_26:
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16, v14);
              return v15;
            }
LABEL_61:
            v15 = -1073741820;
            goto LABEL_25;
          }
          v23 = v12[2];
          v25 = v23;
          if ( v23 > v11 )
            goto LABEL_40;
          v24 = v23;
LABEL_37:
          memmove(a4, v12 + 3, v24);
          goto LABEL_24;
        default:
          v15 = -1073741788;
          goto LABEL_24;
      }
    }
    else if ( a3 == v18 )
    {
      v25 = *v17;
      if ( !a4 || *v17 > v11 )
        goto LABEL_40;
      v24 = (unsigned int)*v17;
      goto LABEL_37;
    }
    v15 = -1073741788;
    goto LABEL_25;
  }
  if ( (_DWORD)result == -2147483643 )
  {
    while ( 1 )
    {
      v19 = v25;
LABEL_31:
      ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return 3221225495LL;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v19);
      v16 = Heap;
      if ( !Heap )
        return 3221225495LL;
      v12 = (_DWORD *)Heap;
      v22 = NtQueryValueKey(a1, &v26, 2LL, Heap, v19, &v25);
      v15 = v22;
      if ( v22 >= 0 )
        goto LABEL_9;
      if ( v22 != -2147483643 )
        goto LABEL_26;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v16, v14);
    }
  }
  return result;
}
