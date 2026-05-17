/*
 * XREFs of RtlpGetDefaultsSubjectContext @ 0x1800C8C40
 * Callers:
 *     RtlpNewSecurityObject @ 0x1800C9280 (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x1800C90B0 (RtlpGetDefaultTrustSubjectContext.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x1801642E0 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlpGetDefaultsSubjectContext(
        __int64 a1,
        char a2,
        unsigned __int64 *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9)
{
  unsigned __int64 *v10; // r15
  unsigned __int64 *v11; // r13
  struct _PEB *v14; // rax
  __int64 ProcessHeap; // rsi
  __int64 Heap; // rax
  int DefaultTrustSubjectContext; // ebx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 *v22; // rdi
  unsigned __int64 *v23; // rdi
  unsigned __int64 *v24; // rdi
  __int64 v25; // rax
  unsigned __int64 *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-24h] BYREF
  unsigned int v30; // [rsp+38h] [rbp-20h] BYREF
  unsigned int v31; // [rsp+3Ch] [rbp-1Ch] BYREF
  HANDLE Handle[3]; // [rsp+40h] [rbp-18h] BYREF
  char v33; // [rsp+A0h] [rbp+48h]
  unsigned int v35; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v36; // [rsp+B8h] [rbp+60h] BYREF

  v10 = a5;
  v11 = a7;
  Handle[0] = 0LL;
  *a6 = 0LL;
  v28 = 0;
  v31 = 0;
  v36 = 0;
  v35 = 0;
  v29 = 0;
  v30 = 0;
  *a9 = 0LL;
  v14 = NtCurrentPeb();
  v33 = 0;
  *a3 = 0LL;
  *a4 = 0LL;
  ProcessHeap = (__int64)v14->ProcessHeap;
  *v10 = 0LL;
  *v11 = 0LL;
  if ( a1 )
  {
    v29 = 76;
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
    *a3 = Heap;
    if ( !Heap )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 4LL, Heap, v29, &v29);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    v30 = 84;
    v18 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x54uLL);
    *v11 = v18;
    if ( !v18 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 25LL, v18, v30, &v30);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 5LL, *a4, 0LL, &v35);
    if ( DefaultTrustSubjectContext != -1073741789 )
      goto LABEL_16;
    v19 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v35);
    *a4 = v19;
    if ( !v19 )
      goto LABEL_15;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 5LL, v19, v35, &v35);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 6LL, *v10, 0LL, &v36);
    if ( DefaultTrustSubjectContext != -1073741789 )
      goto LABEL_16;
    v20 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v36);
    *v10 = v20;
    if ( !v20 )
    {
LABEL_15:
      DefaultTrustSubjectContext = -1073741801;
      goto LABEL_16;
    }
    DefaultTrustSubjectContext = NtQueryInformationToken(a1, 6LL, v20, v36, &v36);
    if ( DefaultTrustSubjectContext < 0 )
      goto LABEL_16;
  }
  DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(a1, a8);
  if ( DefaultTrustSubjectContext < 0 )
    goto LABEL_16;
  if ( !a2 )
    return 0LL;
  DefaultTrustSubjectContext = NtOpenProcessToken(-1LL, 8LL, Handle);
  if ( DefaultTrustSubjectContext < 0 )
  {
    v33 = 0;
    goto LABEL_16;
  }
  v33 = 1;
  v31 = 76;
  v25 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, 0x4CuLL);
  *a6 = v25;
  if ( !v25 )
    goto LABEL_15;
  DefaultTrustSubjectContext = NtQueryInformationToken(Handle[0], 4LL, v25, v31, &v31);
  if ( DefaultTrustSubjectContext >= 0 )
  {
    v26 = a9;
    DefaultTrustSubjectContext = NtQueryInformationToken(Handle[0], 5LL, *a9, 0LL, &v28);
    if ( DefaultTrustSubjectContext == -1073741789 )
    {
      v27 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v28);
      *v26 = v27;
      if ( v27 )
      {
        DefaultTrustSubjectContext = NtQueryInformationToken(Handle[0], 5LL, v27, v28, &v28);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          NtClose(Handle[0]);
          return 0LL;
        }
      }
    }
  }
LABEL_16:
  if ( *a3 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a3);
    *a3 = 0LL;
  }
  if ( *v11 )
  {
    RtlFreeHeap(ProcessHeap, 0, *v11);
    *v11 = 0LL;
  }
  if ( *a4 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a4);
    *a4 = 0LL;
  }
  if ( *v10 )
  {
    RtlFreeHeap(ProcessHeap, 0, *v10);
    *v10 = 0LL;
  }
  v22 = a8;
  if ( *a8 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a8);
    *v22 = 0LL;
  }
  v23 = a6;
  if ( *a6 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a6);
    *v23 = 0LL;
  }
  v24 = a9;
  if ( *a9 )
  {
    RtlFreeHeap(ProcessHeap, 0, *a9);
    *v24 = 0LL;
  }
  if ( v33 == 1 )
    NtClose(Handle[0]);
  return (unsigned int)DefaultTrustSubjectContext;
}
