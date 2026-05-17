/*
 * XREFs of RtlQueryImageFileKeyOption @ 0x180089B50
 * Callers:
 *     WerpGlobalFlagsForProcess @ 0x1800020A0 (WerpGlobalFlagsForProcess.c)
 *     LdrpMinimalMapModule @ 0x180072F40 (LdrpMinimalMapModule.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x180087634 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x180087790 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpInitializeExecutionOptions @ 0x1800887A8 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x180089500 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x18008977C (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlQueryApplicationKeyOption @ 0x180089988 (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileExecutionOptions @ 0x180089AB0 (RtlQueryImageFileExecutionOptions.c)
 *     RtlpQueryEafPlusModuleList @ 0x1801131A8 (RtlpQueryEafPlusModuleList.c)
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 *     RtlpHpQueryGCTimerInterval @ 0x18014285C (RtlpHpQueryGCTimerInterval.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlUnicodeStringToInteger @ 0x180032D60 (RtlUnicodeStringToInteger.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryImageFileKeyOption(__int64 a1, const wchar_t *a2, int a3, int *a4, unsigned int a5, int *a6)
{
  size_t v10; // rax
  unsigned int v11; // esi
  _DWORD *v12; // rdi
  __int64 result; // rax
  unsigned int v14; // ebx
  unsigned __int64 v15; // r12
  int *v16; // rcx
  int v17; // edx
  unsigned int v18; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  int v21; // eax
  unsigned int v22; // eax
  size_t v23; // r8
  int v24; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+38h] [rbp-C8h] BYREF
  const wchar_t *v26; // [rsp+40h] [rbp-C0h]
  int *v27; // [rsp+48h] [rbp-B8h]
  _BYTE v28[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v27 = a6;
  memset_thunk_772440563353939046(v28, 0, 0x400uLL);
  v24 = 0;
  v25 = 0LL;
  v26 = a2;
  if ( a2 )
  {
    v10 = wcslen(a2);
    if ( v10 > 0x7FFE )
      return 3221225734LL;
    LOWORD(v25) = 2 * v10;
    WORD1(v25) = 2 * v10 + 2;
  }
  v11 = a5;
  if ( a5 >= 0x3F4 )
  {
    v18 = a5 + 12;
    goto LABEL_31;
  }
  v12 = v28;
  result = NtQueryValueKey(a1, &v25, 2LL, v28, 1024, &v24);
  v14 = result;
  if ( (int)result >= 0 )
  {
    v15 = 0LL;
LABEL_9:
    v16 = v12 + 2;
    if ( !a3 )
    {
      if ( *v16 > a5 )
      {
        v24 = *v16;
        goto LABEL_40;
      }
      a3 = v12[1];
      v11 = *v16;
    }
    v17 = v12[1];
    if ( ((v17 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( v17 )
      {
        case 4:
          if ( a3 == 4 )
          {
            if ( v11 == 4 && v12[2] == 4 )
            {
              v24 = 4;
              if ( a4 )
              {
                *a4 = v12[3];
                goto LABEL_24;
              }
LABEL_40:
              v14 = -2147483643;
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
              v24 = 8;
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
                v24 = 4;
                if ( a4 )
                {
                  v26 = (const wchar_t *)(v12 + 3);
                  LOWORD(v25) = *((_WORD *)v12 + 4);
                  WORD1(v25) = *((_WORD *)v12 + 4);
                  v14 = RtlUnicodeStringToInteger((unsigned __int16 *)&v25, 0, a4);
LABEL_24:
                  if ( v27 && ((int)(v14 + 0x80000000) < 0 || v14 == -2147483643) )
                    *v27 = v24;
                  goto LABEL_25;
                }
                goto LABEL_40;
              }
              v14 = -2147483646;
LABEL_25:
              if ( v15 )
LABEL_26:
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
              return v14;
            }
LABEL_61:
            v14 = -1073741820;
            goto LABEL_25;
          }
          v22 = v12[2];
          v24 = v22;
          if ( v22 > v11 )
            goto LABEL_40;
          v23 = v22;
LABEL_37:
          memmove(a4, v12 + 3, v23);
          goto LABEL_24;
        default:
          v14 = -1073741788;
          goto LABEL_24;
      }
    }
    else if ( a3 == v17 )
    {
      v24 = *v16;
      if ( !a4 || *v16 > v11 )
        goto LABEL_40;
      v23 = (unsigned int)*v16;
      goto LABEL_37;
    }
    v14 = -1073741788;
    goto LABEL_25;
  }
  if ( (_DWORD)result == -2147483643 )
  {
    while ( 1 )
    {
      v18 = v24;
LABEL_31:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return 3221225495LL;
      Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v18);
      v15 = Heap;
      if ( !Heap )
        return 3221225495LL;
      v12 = (_DWORD *)Heap;
      v21 = NtQueryValueKey(a1, &v25, 2LL, Heap, v18, &v24);
      v14 = v21;
      if ( v21 >= 0 )
        goto LABEL_9;
      if ( v21 != -2147483643 )
        goto LABEL_26;
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v15);
    }
  }
  return result;
}
