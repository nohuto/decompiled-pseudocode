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

NTSTATUS __fastcall RtlQueryImageFileKeyOption(
        HANDLE KeyHandle,
        wchar_t *String,
        int a3,
        ULONG *a4,
        unsigned int a5,
        ULONG *a6)
{
  size_t v10; // rax
  unsigned int v11; // esi
  _BYTE *v12; // rdi
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  void *v15; // r12
  ULONG *v16; // rcx
  int v17; // edx
  ULONG Length; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v21; // eax
  ULONG v22; // eax
  size_t v23; // r8
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  ULONG *v26; // [rsp+48h] [rbp-B8h]
  _BYTE KeyValueInformation[1024]; // [rsp+50h] [rbp-B0h] BYREF

  v26 = a6;
  memset_thunk_772440563353939046(KeyValueInformation, 0, 0x400uLL);
  ResultLength = 0;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = String;
  if ( String )
  {
    v10 = wcslen(String);
    if ( v10 > 0x7FFE )
      return -1073741562;
    ValueName.Length = 2 * v10;
    ValueName.MaximumLength = 2 * v10 + 2;
  }
  v11 = a5;
  if ( a5 >= 0x3F4 )
  {
    Length = a5 + 12;
    goto LABEL_31;
  }
  v12 = KeyValueInformation;
  result = NtQueryValueKey(
             KeyHandle,
             &ValueName,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x400u,
             &ResultLength);
  v14 = result;
  if ( result >= 0 )
  {
    v15 = 0LL;
LABEL_9:
    v16 = (ULONG *)(v12 + 8);
    if ( !a3 )
    {
      if ( *v16 > a5 )
      {
        ResultLength = *v16;
        goto LABEL_40;
      }
      a3 = *((_DWORD *)v12 + 1);
      v11 = *v16;
    }
    v17 = *((_DWORD *)v12 + 1);
    if ( ((v17 - 3) & 0xFFFFFFFB) != 0 )
    {
      switch ( v17 )
      {
        case 4:
          if ( a3 == 4 )
          {
            if ( v11 == 4 && *((_DWORD *)v12 + 2) == 4 )
            {
              ResultLength = 4;
              if ( a4 )
              {
                *a4 = *((_DWORD *)v12 + 3);
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
            if ( v11 == 8 && *((_DWORD *)v12 + 2) == 8 )
            {
              ResultLength = 8;
              if ( a4 )
              {
                *(_QWORD *)a4 = *(_QWORD *)(v12 + 12);
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
                ResultLength = 4;
                if ( a4 )
                {
                  ValueName.Buffer = (wchar_t *)(v12 + 12);
                  ValueName.Length = *((_WORD *)v12 + 4);
                  ValueName.MaximumLength = *((_WORD *)v12 + 4);
                  v14 = RtlUnicodeStringToInteger(&ValueName, 0, a4);
LABEL_24:
                  if ( v26 && ((int)(v14 + 0x80000000) < 0 || v14 == -2147483643) )
                    *v26 = ResultLength;
                  goto LABEL_25;
                }
                goto LABEL_40;
              }
              v14 = -2147483646;
LABEL_25:
              if ( v15 )
LABEL_26:
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
              return v14;
            }
LABEL_61:
            v14 = -1073741820;
            goto LABEL_25;
          }
          v22 = *((_DWORD *)v12 + 2);
          ResultLength = v22;
          if ( v22 > v11 )
            goto LABEL_40;
          v23 = v22;
LABEL_37:
          memmove(a4, v12 + 12, v23);
          goto LABEL_24;
        default:
          v14 = -1073741788;
          goto LABEL_24;
      }
    }
    else if ( a3 == v17 )
    {
      ResultLength = *v16;
      if ( !a4 || *v16 > v11 )
        goto LABEL_40;
      v23 = *v16;
      goto LABEL_37;
    }
    v14 = -1073741788;
    goto LABEL_25;
  }
  if ( result == -2147483643 )
  {
    while ( 1 )
    {
      Length = ResultLength;
LABEL_31:
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        return -1073741801;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, Length);
      v15 = Heap;
      if ( !Heap )
        return -1073741801;
      v12 = Heap;
      v21 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Length, &ResultLength);
      v14 = v21;
      if ( v21 >= 0 )
        goto LABEL_9;
      if ( v21 != -2147483643 )
        goto LABEL_26;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
    }
  }
  return result;
}
