/*
 * XREFs of CsrCaptureMessageString @ 0x180023F80
 * Callers:
 *     CsrCaptureMessageMultiUnicodeStringsInPlace @ 0x180023E50 (CsrCaptureMessageMultiUnicodeStringsInPlace.c)
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 */

void __fastcall CsrCaptureMessageString(__int64 a1, const void *a2, int a3, unsigned int a4, unsigned __int16 *a5)
{
  unsigned __int16 *v5; // rsi
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rdx

  if ( LdrpIsSecureProcess )
    return;
  if ( !a2 )
  {
    a5[1] = a4;
    *a5 = 0;
    v8 = a5 + 4;
    if ( a4 )
    {
      *((_QWORD *)a5 + 1) = *(_QWORD *)(a1 + 24);
      if ( a4 >= 0x7FFFFFFF )
        goto LABEL_16;
      *(_QWORD *)(a1 + 24) += (a4 + 3) & 0xFFFFFFFC;
    }
    else
    {
      *((_QWORD *)a5 + 1) = 0LL;
      v8 = 0LL;
    }
    *(_QWORD *)(a1 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 16))++ + 32) = v8;
    if ( !a4 )
      return;
LABEL_16:
    **((_BYTE **)a5 + 1) = 0;
    return;
  }
  v5 = a5 + 4;
  *a5 = a3;
  v6 = a4;
  if ( a4 )
  {
    *((_QWORD *)a5 + 1) = *(_QWORD *)(a1 + 24);
    if ( a4 >= 0x7FFFFFFF )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v6 = (a4 + 3) & 0xFFFC;
    *(_QWORD *)(a1 + 24) += (a4 + 3) & 0xFFFFFFFC;
  }
  else
  {
    *((_QWORD *)a5 + 1) = 0LL;
    v5 = 0LL;
  }
  *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 16) + 32) = v5;
  v7 = v6;
  ++*(_DWORD *)(a1 + 16);
LABEL_7:
  a5[1] = v7;
  if ( a3 )
    memmove(*((void **)a5 + 1), a2, a4);
  if ( *a5 < a5[1] )
    *(_BYTE *)(*a5 + *((_QWORD *)a5 + 1)) = 0;
}
