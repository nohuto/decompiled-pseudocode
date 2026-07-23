/*
 * XREFs of AVrfpParseVerifierDllsString @ 0x18011AFB4
 * Callers:
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x180124750 (_wcsicmp.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 AVrfpParseVerifierDllsString()
{
  void *ProcessHeap; // rbp
  PVOID Heap; // rax
  __int64 v2; // rbx
  __int64 *v3; // rax
  bool v4; // zf
  wchar_t *i; // rbx
  wchar_t v6; // ax
  const WCHAR *v7; // rsi
  PVOID v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // rax

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
  v2 = (__int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset_thunk_772440563353939046(Heap, 0, 0x48uLL);
  *(UNICODE_STRING *)(v2 + 16) = VerifierDllString;
  v3 = (__int64 *)qword_1801D6598;
  if ( *(__int64 **)qword_1801D6598 != &AVrfpVerifierProvidersList )
LABEL_20:
    __fastfail(3u);
  v4 = UseWOW64 == 0;
  *(_QWORD *)v2 = &AVrfpVerifierProvidersList;
  *(_QWORD *)(v2 + 8) = v3;
  *v3 = v2;
  qword_1801D6598 = v2;
  if ( v4 )
  {
    for ( i = &AVrfpVerifierDllsString; ; ++i )
    {
      v6 = *i;
      if ( !*i )
        break;
      while ( v6 == 32 || v6 == 9 )
        v6 = *++i;
      v7 = i;
      if ( !v6 )
        break;
      do
      {
        if ( v6 == 32 )
          break;
        if ( v6 == 9 )
          break;
        v6 = *++i;
      }
      while ( *i );
      if ( v7 == i )
        break;
      *i = 0;
      if ( wcsicmp(v7, L"verifier.dll") )
      {
        v8 = RtlAllocateHeap(ProcessHeap, 0, 0x48uLL);
        v9 = (__int64)v8;
        if ( !v8 )
          return 3221225495LL;
        memset_thunk_772440563353939046(v8, 0, 0x48uLL);
        RtlInitUnicodeString((PUNICODE_STRING)(v9 + 16), v7);
        v10 = (__int64 *)qword_1801D6598;
        if ( *(__int64 **)qword_1801D6598 != &AVrfpVerifierProvidersList )
          goto LABEL_20;
        *(_QWORD *)v9 = &AVrfpVerifierProvidersList;
        *(_QWORD *)(v9 + 8) = v10;
        *v10 = v9;
        qword_1801D6598 = v9;
      }
    }
  }
  return 0LL;
}
