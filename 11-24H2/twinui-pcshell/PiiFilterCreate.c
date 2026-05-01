/*
 * XREFs of PiiFilterCreate @ 0x180136DFC
 * Callers:
 *     ?Initialize@PiiFilter@@QEAAJXZ @ 0x1802CB9AC (-Initialize@PiiFilter@@QEAAJXZ.c)
 * Callees:
 *     ?Free@RtlNameValueArray@@QEAAXXZ @ 0x180136D10 (-Free@RtlNameValueArray@@QEAAXXZ.c)
 *     ?PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z @ 0x18013875C (-PiiFilterpAddEnvironment@@YAJPEAU_PII_FILTER@@@Z.c)
 *     ?PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z @ 0x18013892C (-PiiFilterpAddProfiles@@YAJPEAU_PII_FILTER@@@Z.c)
 *     PiiFilterDelete @ 0x1802CD4EC (PiiFilterDelete.c)
 */

__int64 __fastcall PiiFilterCreate(RtlNameValueArray **a1)
{
  RtlNameValueArray *Heap; // rax
  RtlNameValueArray *v3; // rbx
  int v4; // edi
  void *v5; // r8
  HANDLE *v6; // rdi
  void *v7; // r8
  PVOID ProcessHeap; // rcx

  Heap = (RtlNameValueArray *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x60uLL);
  v3 = Heap;
  if ( Heap )
  {
    RtlNameValueArray::Free(Heap);
    v5 = (void *)*((_QWORD *)v3 + 5);
    if ( v5 )
      RtlFreeHeap(*(HANDLE *)v3, 0, v5);
    v6 = (HANDLE *)((char *)v3 + 48);
    *(_OWORD *)v3 = 0LL;
    *((_OWORD *)v3 + 1) = 0LL;
    *((_OWORD *)v3 + 2) = 0LL;
    *(_QWORD *)v3 = NtCurrentPeb()->ProcessHeap;
    *((_QWORD *)v3 + 4) = 16LL;
    *((_QWORD *)v3 + 1) = 8LL;
    RtlNameValueArray::Free((RtlNameValueArray *)((char *)v3 + 48));
    v7 = (void *)*((_QWORD *)v3 + 11);
    if ( v7 )
      RtlFreeHeap(*v6, 0, v7);
    *(_OWORD *)v6 = 0LL;
    *((_OWORD *)v3 + 4) = 0LL;
    *((_OWORD *)v3 + 5) = 0LL;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 0LL;
    *((_QWORD *)v3 + 11) = 0LL;
    *v6 = ProcessHeap;
    *((_QWORD *)v3 + 10) = 16LL;
    *((_QWORD *)v3 + 7) = 8LL;
    v4 = PiiFilterpAddProfiles(v3);
    if ( v4 < 0 || (v4 = PiiFilterpAddEnvironment(v3), v4 < 0) )
    {
      PiiFilterDelete(v3);
    }
    else
    {
      *a1 = v3;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
