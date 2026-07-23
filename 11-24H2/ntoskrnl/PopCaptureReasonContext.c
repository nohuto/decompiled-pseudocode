/*
 * XREFs of PopCaptureReasonContext @ 0x14041069C
 * Callers:
 *     PoCaptureReasonContext @ 0x1402BC6B8 (PoCaptureReasonContext.c)
 * Callees:
 *     PopSafeCopyUnicodeString @ 0x14041093C (PopSafeCopyUnicodeString.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, __int64 *a4)
{
  __int64 *v5; // rsi
  ULONG_PTR v7; // rbx
  __int64 v8; // r12
  int v9; // r15d
  __int64 Pool2; // rax
  void *v11; // r14
  unsigned __int64 v12; // rsi
  int v13; // eax
  int v14; // ebx
  unsigned __int64 v16; // rax
  unsigned int j; // esi
  unsigned __int64 v18; // rcx
  unsigned int i; // ecx
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-28h]
  __int128 v22; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+48h]

  v5 = a4;
  *a4 = 0LL;
  v7 = 56LL;
  v22 = 0LL;
  if ( a3 )
    *a3 = 0;
  v23 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    if ( !*(_DWORD *)a1 )
    {
      v9 = *(_DWORD *)(a1 + 4);
      if ( (v9 & 1) != 0 )
      {
        if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) == 0 )
        {
          v7 = *(unsigned __int16 *)(a1 + 8) + 90LL;
          goto LABEL_5;
        }
      }
      else if ( (v9 & 2) != 0 )
      {
        if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) == 0 )
        {
          v7 = *(unsigned __int16 *)(a1 + 8) + 90LL;
          v23 = *(_DWORD *)(a1 + 28);
          v16 = 16LL * v23;
          if ( v16 <= 0xFFFFFFFF )
          {
            v8 = *(_QWORD *)(a1 + 32);
            if ( a2 && (_DWORD)v16 && (v8 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            for ( i = 0; i < v23; ++i )
            {
              if ( v7 + *(unsigned __int16 *)(v8 + 16LL * i) + 2LL < v7 )
                return 3221225485LL;
              v7 += *(unsigned __int16 *)(v8 + 16LL * i) + 2LL;
            }
            v5 = a4;
            goto LABEL_5;
          }
        }
      }
      else if ( v9 < 0 )
      {
        goto LABEL_5;
      }
    }
    return 3221225485LL;
  }
  v9 = 0x80000000;
LABEL_5:
  Pool2 = ExAllocatePool2((a2 != 0) + 256LL, v7, 0x78435250u);
  v11 = (void *)Pool2;
  if ( Pool2 )
  {
    *v5 = Pool2;
    if ( v9 < 0 )
    {
      *(_QWORD *)(Pool2 + 48) = 0LL;
      return 0;
    }
    v12 = (Pool2 + 63) & 0xFFFFFFFFFFFFFFF8uLL;
    *(_QWORD *)(Pool2 + 48) = v7 + Pool2 - v12;
    *(_DWORD *)v12 = v9;
    *(_QWORD *)(v12 + 8) = 32LL;
    v13 = PopSafeCopyUnicodeString((PCUNICODE_STRING)(a1 + 8));
    v14 = v13;
    if ( (v9 & 1) != 0 )
    {
      if ( v13 >= 0 )
      {
LABEL_9:
        if ( a3 )
          *a3 = (*(_DWORD *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else if ( v13 >= 0 )
    {
      *(_WORD *)(v12 + 16) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v12 + 20) = v23;
      *(_QWORD *)(v12 + 24) = 32LL;
      for ( j = 0; j < v23; ++j )
      {
        v18 = v8 + 16LL * j;
        if ( a2 )
        {
          DWORD1(v21) = 0;
          if ( v18 >= 0x7FFFFFFF0000LL )
            v18 = 0x7FFFFFFF0000LL;
          LODWORD(v21) = *(_DWORD *)v18;
          v20 = *(_QWORD *)(v18 + 8);
          v18 = (unsigned __int64)&v22;
          *((_QWORD *)&v21 + 1) = v20;
          v22 = v21;
        }
        v14 = PopSafeCopyUnicodeString((PCUNICODE_STRING)v18);
        if ( v14 < 0 )
          goto LABEL_34;
      }
      goto LABEL_9;
    }
LABEL_34:
    ExFreePoolWithTag(v11, 0x78435250u);
    *a4 = 0LL;
    return (unsigned int)v14;
  }
  return 3221225626LL;
}
