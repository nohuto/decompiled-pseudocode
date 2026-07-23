/*
 * XREFs of NtPrivilegeCheck @ 0x140984C80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x1408BEAA0 (ExRaiseAccessViolation.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140984EB8 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140985BF8 (SeReleaseLuidAndAttributesArray.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  PVOID v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rcx
  PPRIVILEGE_SET v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  ULONG Control; // r14d
  NTSTATUS v14; // ebx
  void *v15; // rbx
  BOOLEAN v16; // r14
  int Object; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+28h] [rbp-80h]
  int v19; // [rsp+30h] [rbp-78h]
  ULONG PrivilegeCount; // [rsp+50h] [rbp-58h]
  _DWORD Size[3]; // [rsp+5Ch] [rbp-4Ch] BYREF
  PVOID v22; // [rsp+68h] [rbp-40h] BYREF
  void *Src; // [rsp+70h] [rbp-38h] BYREF

  Src = 0LL;
  Size[0] = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v22 = 0LL;
  result = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &v22, 0LL);
  if ( result < 0 )
    return result;
  v7 = v22;
  if ( *((_DWORD *)v22 + 48) == 2 && *((int *)v22 + 49) < 1 )
  {
    v14 = -1073741659;
    goto LABEL_25;
  }
  if ( ((unsigned __int8)RequiredPrivileges & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = 0x7FFFFFFF0000LL;
  v9 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)RequiredPrivileges < 0x7FFFFFFF0000LL )
    v9 = (__int64)RequiredPrivileges;
  *(_BYTE *)v9 = *(_BYTE *)v9;
  *(_BYTE *)(v9 + 19) = *(_BYTE *)(v9 + 19);
  PrivilegeCount = RequiredPrivileges->PrivilegeCount;
  Size[1] = 12 * (RequiredPrivileges->PrivilegeCount - 1) + 20;
  if ( 12 * (PrivilegeCount - 1) != -20 )
  {
    v10 = RequiredPrivileges;
    v11 = (unsigned __int64)&RequiredPrivileges->Privilege[PrivilegeCount - 1].Attributes + 3;
    if ( (unsigned __int64)RequiredPrivileges > v11 || v11 >= 0x7FFFFFFF0000LL )
      ExRaiseAccessViolation();
    v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      LOBYTE(v10->PrivilegeCount) = v10->PrivilegeCount;
      v10 = (PPRIVILEGE_SET)(((unsigned __int64)v10 & 0xFFFFFFFFFFFFF000uLL) + 4096);
    }
    while ( v10 != (PPRIVILEGE_SET)v12 );
  }
  if ( (unsigned __int64)Result < 0x7FFFFFFF0000LL )
    v8 = (__int64)Result;
  *(_BYTE *)v8 = *(_BYTE *)v8;
  Control = RequiredPrivileges->Control;
  v14 = SeCaptureLuidAndAttributesArray(RequiredPrivileges->Privilege, Object, v18, v19, (__int64)&Src, (__int64)Size);
  if ( v14 < 0 )
  {
    v7 = v22;
LABEL_25:
    ObfDereferenceObject(v7);
    return v14;
  }
  v15 = Src;
  v16 = SepPrivilegeCheck((__int64)v22, (__int64)Src, PrivilegeCount, Control, PreviousMode);
  ObfDereferenceObject(v22);
  memmove(RequiredPrivileges->Privilege, v15, Size[0]);
  *Result = v16;
  if ( (unsigned __int8)PreviousMode <= 1u )
  {
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
  }
  return 0;
}
