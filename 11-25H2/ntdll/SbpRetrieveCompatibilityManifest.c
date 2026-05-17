/*
 * XREFs of SbpRetrieveCompatibilityManifest @ 0x1800F3E18
 * Callers:
 *     SbpDetermineDllContext @ 0x180071D10 (SbpDetermineDllContext.c)
 * Callees:
 *     RtlQueryInformationActivationContext @ 0x1800484F0 (RtlQueryInformationActivationContext.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall SbpRetrieveCompatibilityManifest(volatile signed __int32 *a1, __int64 *a2, _QWORD *a3)
{
  struct _PEB *v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int v9; // r12d
  int v10; // ecx
  unsigned __int64 v11; // rsi
  __int64 Heap; // rdi
  __int64 v14; // r9
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v3 = NtCurrentPeb();
  v4 = 0;
  v5 = *a2;
  *a2 = 0LL;
  v15 = 0LL;
  v9 = 1073741826;
  if ( a1 == v3->ImageBaseAddress )
    v9 = 2;
  v10 = RtlQueryInformationActivationContext(v9, a1, 0LL, 6, 0LL, 0LL, &v15);
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741789 )
  {
    v11 = v15;
    if ( !v15 )
      return 1;
    if ( v15 > *a3 )
    {
      v11 = v15;
      Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, v15);
      if ( !Heap )
        return v4;
    }
    else
    {
      Heap = v5;
    }
    if ( (int)RtlQueryInformationActivationContext(v9, a1, 0LL, 6, Heap, v11, &v15) >= 0 )
    {
      *a3 = v15;
      *a2 = Heap;
      return 1;
    }
    if ( Heap && Heap != v5 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v14);
  }
  return v4;
}
