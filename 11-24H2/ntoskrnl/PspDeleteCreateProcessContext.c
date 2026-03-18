/*
 * XREFs of PspDeleteCreateProcessContext @ 0x1408A4758
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407797C4 (PsCreateMinimalProcess.c)
 *     NtCreateThreadEx @ 0x1408A2B60 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x1408A2E70 (PspBuildCreateProcessContext.c)
 *     NtCreateUserProcess @ 0x140ACBA80 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PspDestroyProcessParameterOverrides @ 0x1408A496C (PspDestroyProcessParameterOverrides.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspDeleteCreateProcessContext(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rax
  void *v14; // rcx
  unsigned __int64 i; // rdi
  void *v17; // rcx
  void *v18; // rcx

  v2 = *(void **)(a1 + 176);
  if ( v2 )
    ObCloseHandle(v2, 0);
  v3 = *(void **)(a1 + 184);
  if ( v3 )
    ObfDereferenceObject(v3);
  v4 = *(void **)(a1 + 160);
  if ( v4 )
    ObfDereferenceObject(v4);
  v5 = *(void **)(a1 + 136);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x72437350u);
  v6 = *(void **)(a1 + 192);
  if ( v6 )
    ObCloseHandle(v6, 0);
  v7 = *(void **)(a1 + 200);
  if ( v7 )
    ObCloseHandle(v7, 0);
  v8 = *(void **)(a1 + 208);
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( (*(_BYTE *)(a1 + 16) & 4) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 216), 0);
  v9 = *(void **)(a1 + 280);
  if ( v9 && v9 != (void *)(a1 + 264) )
    ExFreePoolWithTag(v9, 0);
  v10 = *(void **)(a1 + 296);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  if ( *(_QWORD *)(a1 + 368) )
  {
    for ( i = 0LL; i < *(unsigned int *)(a1 + 380); ++i )
    {
      v17 = *(void **)(*(_QWORD *)(a1 + 368) + 8 * i);
      if ( v17 )
        ObfDereferenceObjectWithTag(v17, 0x6C4A7350u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 368), 0x6C4A7350u);
  }
  v11 = *(void **)(a1 + 360);
  if ( v11 )
  {
    memset_0(v11, 0, *(unsigned int *)(a1 + 376));
    ExFreePoolWithTag(*(PVOID *)(a1 + 360), 0);
  }
  v12 = *(void **)(a1 + 400);
  if ( v12 )
  {
    memset_0(v12, 0, *(unsigned int *)(a1 + 396));
    ExFreePoolWithTag(*(PVOID *)(a1 + 400), 0);
  }
  v13 = *(_QWORD *)(a1 + 408);
  if ( v13 )
  {
    v18 = *(void **)(v13 + 8);
    if ( v18 || (v18 = *(void **)(v13 + 24)) != 0LL )
      ExFreePoolWithTag(v18, 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 408), 0);
  }
  v14 = *(void **)(a1 + 432);
  if ( v14 )
  {
    ExFreePoolWithTag(v14, 0);
    *(_QWORD *)(a1 + 432) = 0LL;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 240));
  return PspDestroyProcessParameterOverrides(*(_QWORD *)(a1 + 472));
}
