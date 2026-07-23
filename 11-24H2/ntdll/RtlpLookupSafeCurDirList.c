/*
 * XREFs of RtlpLookupSafeCurDirList @ 0x18010F9B4
 * Callers:
 *     LdrpSearchPath @ 0x180091DD0 (LdrpSearchPath.c)
 * Callees:
 *     RtlQueryEnvironmentVariable_U @ 0x180006DB0 (RtlQueryEnvironmentVariable_U.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180006E20 (RtlExpandEnvironmentStrings_U.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18015C894 (RtlpEnsureTailingSlashAndAddToList.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x1801602B0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpLookupSafeCurDirList()
{
  __int64 result; // rax
  _QWORD *Heap; // rax
  _QWORD *v2; // rbx
  HANDLE v3; // rdi
  NTSTATUS v4; // edx
  signed __int64 v5; // rcx
  HANDLE v6; // rcx
  ULONG v7; // edi
  ULONG i; // edx
  _UNICODE_STRING *p_Value; // rdx
  NTSTATUS v10; // eax
  signed __int64 v11; // rdi
  _QWORD *v12; // r8
  __int64 v13; // rax
  PVOID v14; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING Value; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v20; // [rsp+78h] [rbp-90h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp-80h] BYREF
  int v22; // [rsp+8Ch] [rbp-7Ch]
  int v23; // [rsp+90h] [rbp-78h]
  char v24; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v25[4]; // [rsp+298h] [rbp+190h] BYREF
  int v26; // [rsp+29Ch] [rbp+194h]
  char v27; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v28; // [rsp+4B8h] [rbp+3B0h] BYREF

  v20 = 0LL;
  memset_thunk_772440563353939046(v25, 0, 0x214uLL);
  memset_thunk_772440563353939046(KeyValueInformation, 0, 0x20CuLL);
  *(_QWORD *)&Destination.Length = 34078720LL;
  Destination.Buffer = 0LL;
  Value.Buffer = 0LL;
  ValueName.Buffer = 0LL;
  result = qword_1801CC7B8;
  KeyHandle = 0LL;
  ResultLength[0] = 0;
  *(_QWORD *)&Value.Length = 34078720LL;
  *(_QWORD *)&ValueName.Length = 0x2000000LL;
  if ( qword_1801CC7B8 == -1 )
  {
    ValueName.Buffer = (wchar_t *)&v24;
    Value.Buffer = (wchar_t *)&v27;
    Destination.Buffer = (wchar_t *)&v28;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 0x10uLL);
    v2 = Heap;
    if ( Heap )
    {
      Heap[1] = Heap;
      *Heap = Heap;
      v3 = qword_1801D1378;
      KeyHandle = qword_1801D1378;
      if ( !qword_1801D1378 )
      {
        v4 = NtOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_180173D10);
        if ( v4 >= 0 )
        {
          v5 = (signed __int64)KeyHandle;
        }
        else
        {
          v5 = -1LL;
          KeyHandle = (HANDLE)-1LL;
        }
        v3 = (HANDLE)_InterlockedCompareExchange64((volatile signed __int64 *)&qword_1801D1378, v5, 0LL);
        if ( v3 )
        {
          if ( v4 >= 0 )
            NtClose(KeyHandle);
          KeyHandle = v3;
        }
        else
        {
          v3 = KeyHandle;
        }
      }
      if ( v3 != (HANDLE)-1LL
        && NtQueryValueKey(v3, (PUNICODE_STRING)&stru_180173CD0, KeyValuePartialInformation, &v20, 0x10u, ResultLength) >= 0
        && ResultLength[0] == 16
        && HIDWORD(v20) == 1
        || RtlQueryEnvironmentVariable_U(0LL, (PUNICODE_STRING)&stru_180173CF0, &Value) >= 0
        && (int)RtlpEnsureTailingSlashAndAddToList(v2, &Value) >= 0 )
      {
        v6 = KeyHandle;
        if ( KeyHandle != (HANDLE)-1LL )
        {
          v7 = 0;
          for ( i = 0; ; i = v7 )
          {
            v10 = ZwEnumerateValueKey(v6, i, KeyValueBasicInformation, KeyValueInformation, 0x20Cu, ResultLength);
            if ( v10 == -2147483622 )
              break;
            if ( v10 != -2147483643 )
            {
              if ( v10 < 0 )
                break;
              if ( v23 )
              {
                if ( (unsigned int)(v22 - 1) <= 1 )
                {
                  ValueName.Length = v23;
                  if ( NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v25, 0x214u, ResultLength) >= 0
                    && (unsigned int)(v22 - 1) <= 1 )
                  {
                    p_Value = &Value;
                    Value.Length = 2 * ((ResultLength[0] - 12) >> 1) - 2;
                    if ( v26 == 2 )
                    {
                      if ( RtlExpandEnvironmentStrings_U(0LL, &Value, &Destination, 0LL) < 0 )
                        goto LABEL_30;
                      p_Value = &Destination;
                    }
                    RtlpEnsureTailingSlashAndAddToList(v2, p_Value);
                  }
                }
              }
            }
LABEL_30:
            v6 = KeyHandle;
            ++v7;
          }
        }
      }
    }
    v11 = _InterlockedCompareExchange64(&qword_1801CC7B8, (signed __int64)v2, -1LL);
    if ( v11 == -1 )
    {
      return (__int64)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v12 = (_QWORD *)*v2;
          if ( (_QWORD *)*v2 == v2 )
            break;
          if ( (_QWORD *)v12[1] != v2 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
            __fastfail(3u);
          v14 = LdrpHeap;
          *v2 = v13;
          *(_QWORD *)(v13 + 8) = v2;
          RtlFreeHeap(v14, 0, v12);
        }
        RtlFreeHeap(LdrpHeap, 0, v2);
      }
      return v11;
    }
  }
  return result;
}
