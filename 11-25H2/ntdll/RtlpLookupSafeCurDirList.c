/*
 * XREFs of RtlpLookupSafeCurDirList @ 0x1801175A0
 * Callers:
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x1800AD290 (RtlQueryEnvironmentVariable_U.c)
 *     RtlExpandEnvironmentStrings_U @ 0x1800AD300 (RtlExpandEnvironmentStrings_U.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18015F994 (RtlpEnsureTailingSlashAndAddToList.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x180163480 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpLookupSafeCurDirList()
{
  __int64 result; // rax
  _QWORD *Heap; // rax
  __int64 v2; // r9
  _QWORD *v3; // rbx
  HANDLE v4; // rdi
  int v5; // edx
  signed __int64 v6; // rcx
  HANDLE v7; // rcx
  unsigned int v8; // edi
  __int64 i; // rdx
  __int64 *v10; // rdx
  int v11; // eax
  signed __int64 v12; // rdi
  _QWORD *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-C0h] BYREF
  char *v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  char *v21; // [rsp+60h] [rbp-A8h]
  __int64 v22; // [rsp+68h] [rbp-A0h] BYREF
  char *v23; // [rsp+70h] [rbp-98h]
  __int128 v24; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v25[4]; // [rsp+88h] [rbp-80h] BYREF
  int v26; // [rsp+8Ch] [rbp-7Ch]
  int v27; // [rsp+90h] [rbp-78h]
  char v28; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v29[4]; // [rsp+298h] [rbp+190h] BYREF
  int v30; // [rsp+29Ch] [rbp+194h]
  char v31; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v32; // [rsp+4B8h] [rbp+3B0h] BYREF

  v24 = 0LL;
  memset_thunk_772440563353939046(v29, 0, 0x214uLL);
  memset_thunk_772440563353939046(v25, 0, 0x20CuLL);
  v22 = 34078720LL;
  v23 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  result = qword_1801CF7B8;
  Handle = 0LL;
  LODWORD(v16) = 0;
  v18 = 34078720LL;
  v20 = 0x2000000LL;
  if ( qword_1801CF7B8 == -1 )
  {
    v21 = &v28;
    v19 = &v31;
    v23 = &v32;
    Heap = (_QWORD *)RtlAllocateHeap((char *)LdrpHeap, NtdllBaseTag + 0x40000, 0x10uLL);
    v3 = Heap;
    if ( Heap )
    {
      Heap[1] = Heap;
      *Heap = Heap;
      v4 = (HANDLE)qword_1801D43C0;
      Handle = (HANDLE)qword_1801D43C0;
      if ( !qword_1801D43C0 )
      {
        v5 = NtOpenKey(&Handle, 1LL, &unk_180176D80);
        if ( v5 >= 0 )
        {
          v6 = (signed __int64)Handle;
        }
        else
        {
          v6 = -1LL;
          Handle = (HANDLE)-1LL;
        }
        v4 = (HANDLE)_InterlockedCompareExchange64(&qword_1801D43C0, v6, 0LL);
        if ( v4 )
        {
          if ( v5 >= 0 )
            NtClose(Handle);
          Handle = v4;
        }
        else
        {
          v4 = Handle;
        }
      }
      if ( v4 != (HANDLE)-1LL
        && (int)NtQueryValueKey(v4, L".0", 2LL, &v24, 16, &v16) >= 0
        && (_DWORD)v16 == 16
        && HIDWORD(v24) == 1
        || (int)RtlQueryEnvironmentVariable_U(0LL, word_180176D60, (__int64)&v18) >= 0
        && (int)RtlpEnsureTailingSlashAndAddToList(v3, &v18) >= 0 )
      {
        v7 = Handle;
        if ( Handle != (HANDLE)-1LL )
        {
          v8 = 0;
          for ( i = 0LL; ; i = v8 )
          {
            v11 = ZwEnumerateValueKey(v7, i, 0LL, v25, 524, &v16);
            if ( v11 == -2147483622 )
              break;
            if ( v11 != -2147483643 )
            {
              if ( v11 < 0 )
                break;
              if ( v27 )
              {
                if ( (unsigned int)(v26 - 1) <= 1 )
                {
                  LOWORD(v20) = v27;
                  if ( (int)NtQueryValueKey(Handle, &v20, 2LL, v29, 532, &v16) >= 0 && (unsigned int)(v26 - 1) <= 1 )
                  {
                    v10 = &v18;
                    LOWORD(v18) = 2 * ((unsigned int)(v16 - 12) >> 1) - 2;
                    if ( v30 == 2 )
                    {
                      if ( (int)RtlExpandEnvironmentStrings_U(0, (unsigned __int16 *)&v18, (__int64)&v22, 0LL) < 0 )
                        goto LABEL_30;
                      v10 = &v22;
                    }
                    RtlpEnsureTailingSlashAndAddToList(v3, v10);
                  }
                }
              }
            }
LABEL_30:
            v7 = Handle;
            ++v8;
          }
        }
      }
    }
    v12 = _InterlockedCompareExchange64(&qword_1801CF7B8, (signed __int64)v3, -1LL);
    if ( v12 == -1 )
    {
      return (__int64)v3;
    }
    else
    {
      if ( v3 )
      {
        while ( 1 )
        {
          v13 = (_QWORD *)*v3;
          if ( (_QWORD *)*v3 == v3 )
            break;
          if ( (_QWORD *)v13[1] != v3 || (v14 = *v13, *(_QWORD **)(*v13 + 8LL) != v13) )
            __fastfail(3u);
          v15 = LdrpHeap;
          *v3 = v14;
          *(_QWORD *)(v14 + 8) = v3;
          RtlFreeHeap(v15, 0, (__int64)v13, v2);
        }
        RtlFreeHeap(LdrpHeap, 0, (__int64)v3, v2);
      }
      return v12;
    }
  }
  return result;
}
