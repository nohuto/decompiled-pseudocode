/*
 * XREFs of NtSetInformationSymbolicLink @ 0x140744030
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtSetInformationSymbolicLink(void *a1, int a2, int *a3, int a4)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS v8; // ebx
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // rax
  int v12; // ecx
  _DWORD *v13; // rdx
  int v14; // eax
  PVOID Object; // [rsp+38h] [rbp-10h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(a1, 2u, (POBJECT_TYPE)ObpSymbolicLinkObjectType, PreviousMode, &Object, 0LL);
  if ( v8 >= 0 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741821;
LABEL_26:
        ObfDereferenceObject(Object);
        return (unsigned int)v8;
      }
      if ( a4 == 4 )
      {
        if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
        {
          if ( PreviousMode )
          {
            if ( ((unsigned __int8)a3 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v10 = *a3;
          }
          else
          {
            v10 = *a3;
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
    else if ( a4 == 4 )
    {
      if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) && !PsIsCurrentThreadInServerSilo() )
      {
        if ( PreviousMode )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v12 = *a3;
        }
        else
        {
          v12 = *a3;
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
  return (unsigned int)v8;
}
