/*
 * XREFs of NtSetInformationSymbolicLink @ 0x140738010
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  KPROCESSOR_MODE PreviousMode; // r14
  int v8; // ebx
  __int32 v9; // esi
  int v10; // ecx
  _DWORD *v11; // rax
  int v12; // ecx
  _DWORD *v13; // rdx
  int v14; // eax
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(LinkHandle, 2u, (POBJECT_TYPE)ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = SymbolicLinkInformationClass - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_26:
        ObfDereferenceObject(Object);
        return v8;
      }
      if ( SymbolicLinkInformationLength == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
        {
          if ( PreviousMode )
          {
            if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v10 = *(_DWORD *)SymbolicLinkInformation;
          }
          else
          {
            v10 = *(_DWORD *)SymbolicLinkInformation;
          }
          v11 = Object;
          *((_DWORD *)Object + 7) |= 8u;
          v11[8] = v10;
          v8 = 0;
          goto LABEL_26;
        }
        goto LABEL_25;
      }
    }
    else if ( SymbolicLinkInformationLength == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
      {
        if ( PreviousMode )
        {
          if ( ((unsigned __int8)SymbolicLinkInformation & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = *(_DWORD *)SymbolicLinkInformation;
        }
        else
        {
          v12 = *(_DWORD *)SymbolicLinkInformation;
        }
        v13 = Object;
        v14 = *((_DWORD *)Object + 7) | 1;
        *((_DWORD *)Object + 7) = v14;
        if ( v12 )
          v13[7] = v14 | 4;
        goto LABEL_26;
      }
LABEL_25:
      v8 = -1073741727;
      goto LABEL_26;
    }
    v8 = -1073741820;
    goto LABEL_26;
  }
  return v8;
}
