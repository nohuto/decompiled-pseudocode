/*
 * XREFs of DefSetText @ 0x140073730
 * Callers:
 *     NtUserDefSetText @ 0x1401E9520 (NtUserDefSetText.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     DesktopAlloc @ 0x140072EC0 (DesktopAlloc.c)
 *     IsToplevelWindowDesktopComposed @ 0x140073A04 (IsToplevelWindowDesktopComposed.c)
 *     DwmAsyncTextChange @ 0x140073A54 (DwmAsyncTextChange.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x140073AE8 (DesktopVerifyHeapLargeUnicodeString.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall DefSetText(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  ULONG v5; // ecx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 *v10; // r14
  __int64 v11; // rcx
  void *v12; // r8
  __int64 v13; // rax
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  void *v18; // rax
  BOOL v20; // [rsp+30h] [rbp-48h]
  int v21; // [rsp+40h] [rbp-38h] BYREF
  int v22; // [rsp+44h] [rbp-34h]
  __int64 v23; // [rsp+48h] [rbp-30h]
  ULONG MaxBytesInUnicodeString; // [rsp+90h] [rbp+18h] BYREF
  CHAR *MultiByteString; // [rsp+98h] [rbp+20h]

  MaxBytesInUnicodeString = 0;
  if ( *(_QWORD *)(a1 + 24) && a2 && *((_QWORD *)a2 + 1) )
  {
    if ( *a2 < 0x3FFFFFFE )
    {
      v5 = *a2;
      if ( (a2[1] & 0x80000000) == 0 )
        v6 = v5 & 0xFFFFFFFE;
      else
        v6 = 2 * v5;
      v7 = v6 + 2;
      MaxBytesInUnicodeString = v6 + 2;
      v8 = *(_QWORD *)(a1 + 24);
      v9 = *(_QWORD *)(a1 + 184);
      v10 = (__int64 *)(a1 + 40);
      if ( v9 )
      {
        v22 = 0;
        v23 = v9;
        v11 = *v10;
        v21 = *(_DWORD *)(*v10 + 184);
        v22 = *(_DWORD *)(v11 + 188);
        DesktopVerifyHeapLargeUnicodeString(v8, &v21);
        v7 = MaxBytesInUnicodeString;
      }
      if ( (*(_DWORD *)(*v10 + 188) & 0x7FFFFFFFu) < (unsigned int)v7 )
      {
        v12 = *(void **)(a1 + 184);
        if ( v12 )
        {
          RtlFreeHeap(*(PVOID *)(v8 + 136), 0, v12);
          v7 = MaxBytesInUnicodeString;
        }
        v13 = DesktopAlloc(v8, v7, 4LL, a4);
        if ( v13 )
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 192LL) = v13 - (*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 48));
        else
          *(_QWORD *)(*(_QWORD *)(a1 + 40) + 192LL) = 0LL;
        *(_QWORD *)(a1 + 184) = v13;
        *(_DWORD *)(*v10 + 184) = 0;
        if ( !*(_QWORD *)(a1 + 184) )
        {
          *(_DWORD *)(*v10 + 188) &= 0x80000000;
LABEL_28:
          v14 = 0;
          goto LABEL_22;
        }
        *(_DWORD *)(*v10 + 188) = MaxBytesInUnicodeString & 0x7FFFFFFF | *(_DWORD *)(*v10 + 188) & 0x80000000;
      }
      v14 = 1;
      v20 = 1;
      if ( *a2 )
      {
        if ( (a2[1] & 0x80000000) != 0 )
        {
          MultiByteString = (CHAR *)*((_QWORD *)a2 + 1);
          v20 = RtlMultiByteToUnicodeN(
                  *(PWCH *)(a1 + 184),
                  MaxBytesInUnicodeString,
                  &MaxBytesInUnicodeString,
                  MultiByteString,
                  *a2) >= 0;
          MaxBytesInUnicodeString += 2;
        }
        else
        {
          memmove(*(void **)(a1 + 184), *((const void **)a2 + 1), *a2);
        }
      }
      v15 = *v10;
      if ( v20 )
      {
        *(_DWORD *)(v15 + 184) = MaxBytesInUnicodeString - 2;
        *(_WORD *)(*(_QWORD *)(a1 + 184) + 2 * ((unsigned __int64)*(unsigned int *)(*v10 + 184) >> 1)) = 0;
        goto LABEL_22;
      }
      *(_DWORD *)(v15 + 184) = 0;
      goto LABEL_28;
    }
    v14 = 0;
  }
  else
  {
    v14 = 1;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 184LL) = 0;
LABEL_22:
  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v18 = (void *)ReferenceDwmApiPort(v17, v16);
    DwmAsyncTextChange(v18);
  }
  return v14;
}
