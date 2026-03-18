/*
 * XREFs of PsSetCpuQuotaInformation @ 0x1405D8FB8
 * Callers:
 *     NtSetSystemInformation @ 0x1408E97E0 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeSetSchedulingGroupWeights @ 0x1402F68E8 (KeSetSchedulingGroupWeights.c)
 *     PsGetSessionSchedulingGroup @ 0x1406EFF50 (PsGetSessionSchedulingGroup.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsSetCpuQuotaInformation(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  __int64 v7; // rdi
  char *Pool2; // rax
  _QWORD *v9; // r14
  char *v10; // r13
  char *v11; // r12
  __int64 i; // r8
  int v13; // eax
  NTSTATUS v14; // esi
  __int64 j; // rbx
  void *v16; // rcx
  __int64 SessionSchedulingGroup; // rax
  PVOID *v18; // rdi
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  if ( !PsCpuFairShareEnabled )
    return 3221225473LL;
  if ( a2 < 0x10 || (a2 & 0xF) != 0 )
    return 3221225476LL;
  if ( a3 )
  {
    if ( !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a3) )
      return 3221225569LL;
    if ( a3 && (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  v7 = a2 >> 4;
  if ( (unsigned __int64)(24 * v7) > 0xFFFFFFFF )
    return 3221225621LL;
  Pool2 = (char *)ExAllocatePool2(0x41uLL);
  v9 = Pool2;
  Object = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v10 = &Pool2[8 * v7];
  v11 = &v10[8 * v7];
  for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
  {
    v9[i] = *(_QWORD *)(a1 + 16LL * (unsigned int)i);
    *(_DWORD *)&v11[8 * i + 4] = 0;
    v13 = *(_DWORD *)(a1 + 16LL * (unsigned int)i + 8);
    *(_DWORD *)&v11[8 * i] = v13;
    if ( (unsigned __int16)(v13 - 1) > 8u )
    {
      v14 = -1073740712;
      goto LABEL_30;
    }
  }
  v14 = 0;
  for ( j = 0LL; (unsigned int)j < (unsigned int)v7; j = (unsigned int)(j + 1) )
  {
    v16 = (void *)v9[j];
    Object = 0LL;
    v14 = ObReferenceObjectByHandle(v16, 2u, MmSessionObjectType, a3, &Object, 0LL);
    v9[j] = Object;
    if ( v14 < 0 )
      goto LABEL_27;
    SessionSchedulingGroup = PsGetSessionSchedulingGroup();
    *(_QWORD *)&v10[8 * j] = SessionSchedulingGroup;
    if ( !SessionSchedulingGroup )
    {
      v14 = -1073740715;
      goto LABEL_27;
    }
  }
  KeSetSchedulingGroupWeights(v7, v10, (__int64)&v10[8 * v7]);
LABEL_27:
  if ( (_DWORD)j )
  {
    v18 = (PVOID *)&v9[(unsigned int)j];
    do
    {
      ObfDereferenceObjectWithTag(*--v18, 0x746C6644u);
      LODWORD(j) = j - 1;
    }
    while ( (_DWORD)j );
  }
LABEL_30:
  ExFreePoolWithTag(v9, 0x63537350u);
  return (unsigned int)v14;
}
