/*
 * XREFs of AMLIAddNamespaceOverride @ 0x14006C0C4
 * Callers:
 *     AMLIInitialize @ 0x1400C4F80 (AMLIInitialize.c)
 * Callees:
 *     NewNameSpaceObject @ 0x140001CFC (NewNameSpaceObject.c)
 *     FreeOwnedObjects @ 0x140005570 (FreeOwnedObjects.c)
 *     FreeObjOwner @ 0x140005670 (FreeObjOwner.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     NewObjOwner @ 0x14002FE10 (NewObjOwner.c)
 *     InsertOwnerObjList @ 0x14003E434 (InsertOwnerObjList.c)
 *     AMLIAddNextNamespaceOverride @ 0x14006C1E8 (AMLIAddNextNamespaceOverride.c)
 *     CatError @ 0x14006DA70 (CatError.c)
 *     OSOpenAMLINamespaceOverrideHandle @ 0x1400A3C50 (OSOpenAMLINamespaceOverrideHandle.c)
 *     OSCloseHandle @ 0x1400BE908 (OSCloseHandle.c)
 */

__int64 AMLIAddNamespaceOverride()
{
  int NamespaceOverride; // ebx
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  if ( (gOverrideFlags & 0x20) == 0 )
    return 0;
  v1 = OSOpenAMLINamespaceOverrideHandle(&v5);
  NamespaceOverride = v1;
  if ( v1 == -1073741772 )
  {
    return 0;
  }
  else if ( v1 >= 0 )
  {
    if ( gpnsNameSpaceOverrideRoot )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      NamespaceOverride = NewObjOwner(gpheapGlobal, (struct _EX_RUNDOWN_REF **)&gpNameSpaceOverrideOwner);
      if ( NamespaceOverride >= 0 )
      {
        v3 = NewNameSpaceObject(gpheapGlobal, v2);
        gpnsNameSpaceOverrideRoot = v3;
        if ( v3 )
        {
          *(_DWORD *)(v3 + 40) = 1600085852;
          InsertOwnerObjList((struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner, (struct _EX_RUNDOWN_REF *)v3);
          NamespaceOverride = AMLIAddNextNamespaceOverride(v5, gpnsNameSpaceOverrideRoot);
          OSCloseHandle(v5);
          DereferenceObjectEx(gpnsNameSpaceOverrideRoot);
          if ( NamespaceOverride < 0 )
          {
            *(_WORD *)(gpnsNameSpaceOverrideRoot + 64) |= 4u;
            FreeOwnedObjects((_QWORD *)gpNameSpaceOverrideOwner);
            FreeObjOwner(0LL, (struct _EX_RUNDOWN_REF *)gpNameSpaceOverrideOwner);
            gpNameSpaceOverrideOwner = 0LL;
            gpnsNameSpaceOverrideRoot = 0LL;
          }
        }
        else
        {
          NamespaceOverride = -1073741670;
          LogError(-1073741670);
          CatError("AMLIAddNamespaceOverride: fail to allocate name space object for override root");
        }
      }
    }
  }
  return (unsigned int)NamespaceOverride;
}
