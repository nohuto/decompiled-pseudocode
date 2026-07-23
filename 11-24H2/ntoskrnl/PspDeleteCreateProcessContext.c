/*
 * XREFs of PspDeleteCreateProcessContext @ 0x1408FAD80
 * Callers:
 *     PsCreateMinimalProcess @ 0x1407798C4 (PsCreateMinimalProcess.c)
 *     NtCreateThreadEx @ 0x1408F8F00 (NtCreateThreadEx.c)
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     NtCreateUserProcess @ 0x140AC9930 (NtCreateUserProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140985BF8 (SeReleaseLuidAndAttributesArray.c)
 *     PspDestroyProcessParameterOverrides @ 0x140A3564C (PspDestroyProcessParameterOverrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned __int64 i; // rdi
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  __int64 v15; // rax
  void *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rax
  void *v19; // rcx
  __int64 v20; // rcx
  struct _KTHREAD *CurrentThread; // rdx
  void *v22; // rcx

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
      v12 = *(void **)(*(_QWORD *)(a1 + 368) + 8 * i);
      if ( v12 )
        ObfDereferenceObjectWithTag(v12, 0x6C4A7350u);
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 368), 0x6C4A7350u);
  }
  v13 = *(void **)(a1 + 360);
  if ( v13 )
  {
    memset_0(v13, 0, *(unsigned int *)(a1 + 376));
    ExFreePoolWithTag(*(PVOID *)(a1 + 360), 0);
  }
  v14 = *(void **)(a1 + 400);
  if ( v14 )
  {
    memset_0(v14, 0, *(unsigned int *)(a1 + 396));
    ExFreePoolWithTag(*(PVOID *)(a1 + 400), 0);
  }
  v15 = *(_QWORD *)(a1 + 408);
  if ( v15 )
  {
    v16 = *(void **)(v15 + 8);
    if ( v16 || (v16 = *(void **)(v15 + 24)) != 0LL )
      ExFreePoolWithTag(v16, 0);
    ExFreePoolWithTag(*(PVOID *)(a1 + 408), 0);
  }
  v17 = *(void **)(a1 + 432);
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0);
    *(_QWORD *)(a1 + 432) = 0LL;
  }
  if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline() )
  {
    v18 = *(_QWORD *)(a1 + 504);
    if ( v18 )
    {
      v19 = *(void **)(v18 + 16);
      if ( v19 )
        ExFreePoolWithTag(v19, 0);
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 504) + 24LL);
      if ( v20 )
      {
        CurrentThread = KeGetCurrentThread();
        LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
        SeReleaseLuidAndAttributesArray(v20, CurrentThread);
      }
      v22 = *(void **)(a1 + 512);
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      ExFreePoolWithTag(*(PVOID *)(a1 + 504), 0);
    }
  }
  RtlFreeAnsiString((PUNICODE_STRING)(a1 + 240));
  return PspDestroyProcessParameterOverrides(*(_QWORD *)(a1 + 472));
}
