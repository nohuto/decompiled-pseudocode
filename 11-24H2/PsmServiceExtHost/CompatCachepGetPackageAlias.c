/*
 * XREFs of CompatCachepGetPackageAlias @ 0x180040310
 * Callers:
 *     CompatCacheLookupPackage @ 0x18003FF3C (CompatCacheLookupPackage.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800731F0 (RtlAllocateHeap_0.c)
 *     RtlFreeHeap_0 @ 0x1800731FC (RtlFreeHeap_0.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 */

__int64 __fastcall CompatCachepGetPackageAlias(_QWORD *a1, const WCHAR *a2, __int64 a3)
{
  BYTE *Heap_0; // rax
  unsigned int v5; // r15d
  BYTE *v6; // r13
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  PVOID v17; // rax
  void *v18; // r12
  const wchar_t *v19; // rbx
  const wchar_t *v20; // rdi
  const wchar_t *v21; // rsi
  __int64 v22; // rbp
  unsigned int v23; // r14d
  const wchar_t *v24; // r8
  const wchar_t *v25; // rcx
  const wchar_t *v26; // rax
  BYTE *v28; // rax
  size_t Size; // [rsp+50h] [rbp-48h]
  UINT32 bufferLength; // [rsp+B8h] [rbp+20h] BYREF

  bufferLength = 512;
  Heap_0 = (BYTE *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
  v5 = 0;
  v6 = Heap_0;
  if ( !Heap_0 )
    return (unsigned int)-1073741801;
  if ( PackageIdFromFullName(a2, 0, &bufferLength, Heap_0) != 122 )
  {
LABEL_3:
    v7 = *((_QWORD *)v6 + 2);
    v8 = *((_QWORD *)v6 + 4);
    v9 = *((_QWORD *)v6 + 5);
    if ( v7 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( *(_WORD *)(v7 + 2 * v10) );
      v11 = 2 * v10 + 98;
    }
    else
    {
      v11 = 98LL;
    }
    v12 = 2LL;
    if ( v9 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(v9 + 2 * v13) );
      v14 = 2 * v13 + 2;
    }
    else
    {
      v14 = 2LL;
    }
    v15 = v14 + v11;
    if ( v8 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)(v8 + 2 * v16) );
      v12 = 2 * v16 + 2;
    }
    Size = v12 + v15;
    v17 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, v12 + v15);
    v18 = v17;
    if ( v17 )
    {
      v19 = (const wchar_t *)*((_QWORD *)v6 + 4);
      v20 = (const wchar_t *)*((_QWORD *)v6 + 5);
      v21 = (const wchar_t *)*((_QWORD *)v6 + 2);
      v22 = *((_QWORD *)v6 + 1);
      v23 = *((_DWORD *)v6 + 1);
      memset_0(v17, 0, Size);
      v24 = &word_1800C1FFC;
      v25 = &word_1800C1FFC;
      v26 = &word_1800C1FFC;
      if ( v19 )
        v25 = v19;
      if ( v20 )
        v26 = v20;
      if ( v21 )
        v24 = v21;
      if ( swprintf_s(
             (wchar_t *const)v18,
             Size >> 1,
             L"%08I32x\t%016I64x\t%016I64x\t%04hx\t%ls\t%ls\t%ls",
             v23,
             v22,
             a3,
             34404,
             v24,
             v26,
             v25) == -1 )
      {
        v5 = -1073741595;
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v18);
      }
      else
      {
        *a1 = v18;
      }
    }
    else
    {
      v5 = -1073741801;
    }
    goto LABEL_24;
  }
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
  v28 = (BYTE *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, bufferLength);
  v6 = v28;
  if ( !v28 )
    return (unsigned int)-1073741801;
  if ( !PackageIdFromFullName(a2, 0, &bufferLength, v28) )
    goto LABEL_3;
  v5 = -1073741595;
LABEL_24:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
  return v5;
}
