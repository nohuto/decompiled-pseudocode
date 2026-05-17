/*
 * XREFs of RtlpLookupSafeCurDirList @ 0x1801146A8
 * Callers:
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlQueryEnvironmentVariable_U @ 0x180084F00 (RtlQueryEnvironmentVariable_U.c)
 *     RtlExpandEnvironmentStrings_U @ 0x180084F70 (RtlExpandEnvironmentStrings_U.c)
 *     RtlpEnsureTailingSlashAndAddToList @ 0x18015E4D4 (RtlpEnsureTailingSlashAndAddToList.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtOpenKey @ 0x180161ED0 (NtOpenKey.c)
 *     ZwEnumerateValueKey @ 0x180161EF0 (ZwEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x180161F70 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 RtlpLookupSafeCurDirList()
{
  __int64 result; // rax
  _QWORD *Heap; // rax
  _QWORD **v2; // rbx
  HANDLE v3; // rdi
  int v4; // edx
  signed __int64 v5; // rcx
  HANDLE v6; // rcx
  unsigned int v7; // edi
  __int64 i; // rdx
  __int64 *v9; // rdx
  int v10; // eax
  signed __int64 v11; // rdi
  _QWORD *v12; // r8
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  char *v18; // [rsp+50h] [rbp-B8h]
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  char *v20; // [rsp+60h] [rbp-A8h]
  __int64 v21; // [rsp+68h] [rbp-A0h] BYREF
  char *v22; // [rsp+70h] [rbp-98h]
  __int128 v23; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v24[4]; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+8Ch] [rbp-7Ch]
  int v26; // [rsp+90h] [rbp-78h]
  char v27; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v28[4]; // [rsp+298h] [rbp+190h] BYREF
  int v29; // [rsp+29Ch] [rbp+194h]
  char v30; // [rsp+2A4h] [rbp+19Ch] BYREF
  char v31; // [rsp+4B8h] [rbp+3B0h] BYREF

  v23 = 0LL;
  memset_thunk_772440563353939046(v28, 0, 0x214uLL);
  memset_thunk_772440563353939046(v24, 0, 0x20CuLL);
  v21 = 34078720LL;
  v22 = 0LL;
  v18 = 0LL;
  v20 = 0LL;
  result = qword_1801CD7B8;
  Handle = 0LL;
  LODWORD(v15) = 0;
  v17 = 34078720LL;
  v19 = 0x2000000LL;
  if ( qword_1801CD7B8 == -1 )
  {
    v20 = &v27;
    v18 = &v30;
    v22 = &v31;
    Heap = (_QWORD *)RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, 0x10uLL);
    v2 = (_QWORD **)Heap;
    if ( Heap )
    {
      Heap[1] = Heap;
      *Heap = Heap;
      v3 = (HANDLE)qword_1801D2368;
      Handle = (HANDLE)qword_1801D2368;
      if ( !qword_1801D2368 )
      {
        v4 = NtOpenKey(&Handle, 1LL, &unk_180174D00);
        if ( v4 >= 0 )
        {
          v5 = (signed __int64)Handle;
        }
        else
        {
          v5 = -1LL;
          Handle = (HANDLE)-1LL;
        }
        v3 = (HANDLE)_InterlockedCompareExchange64(&qword_1801D2368, v5, 0LL);
        if ( v3 )
        {
          if ( v4 >= 0 )
            NtClose(Handle);
          Handle = v3;
        }
        else
        {
          v3 = Handle;
        }
      }
      if ( v3 != (HANDLE)-1LL
        && (int)NtQueryValueKey(v3, L".0", 2LL, &v23, 16, &v15) >= 0
        && (_DWORD)v15 == 16
        && HIDWORD(v23) == 1
        || (int)RtlQueryEnvironmentVariable_U(0LL, word_180174CF0, (__int64)&v17) >= 0
        && (int)RtlpEnsureTailingSlashAndAddToList(v2, &v17) >= 0 )
      {
        v6 = Handle;
        if ( Handle != (HANDLE)-1LL )
        {
          v7 = 0;
          for ( i = 0LL; ; i = v7 )
          {
            v10 = ZwEnumerateValueKey(v6, i, 0LL, v24, 524, &v15);
            if ( v10 == -2147483622 )
              break;
            if ( v10 != -2147483643 )
            {
              if ( v10 < 0 )
                break;
              if ( v26 )
              {
                if ( (unsigned int)(v25 - 1) <= 1 )
                {
                  LOWORD(v19) = v26;
                  if ( (int)NtQueryValueKey(Handle, &v19, 2LL, v28, 532, &v15) >= 0 && (unsigned int)(v25 - 1) <= 1 )
                  {
                    v9 = &v17;
                    LOWORD(v17) = 2 * ((unsigned int)(v15 - 12) >> 1) - 2;
                    if ( v29 == 2 )
                    {
                      if ( (int)RtlExpandEnvironmentStrings_U(0, (unsigned __int16 *)&v17, (__int64)&v21, 0LL) < 0 )
                        goto LABEL_30;
                      v9 = &v21;
                    }
                    RtlpEnsureTailingSlashAndAddToList(v2, v9);
                  }
                }
              }
            }
LABEL_30:
            v6 = Handle;
            ++v7;
          }
        }
      }
    }
    v11 = _InterlockedCompareExchange64(&qword_1801CD7B8, (signed __int64)v2, -1LL);
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
          v12 = *v2;
          if ( *v2 == v2 )
            break;
          if ( (_QWORD **)v12[1] != v2 || (v13 = (_QWORD *)*v12, *(_QWORD **)(*v12 + 8LL) != v12) )
            __fastfail(3u);
          v14 = LdrpHeap;
          *v2 = v13;
          v13[1] = v2;
          RtlFreeHeap(v14, 0, (unsigned __int64)v12);
        }
        RtlFreeHeap(LdrpHeap, 0, (unsigned __int64)v2);
      }
      return v11;
    }
  }
  return result;
}
