/*
 * XREFs of AMLIGetNamespaceOverrideObject @ 0x14006C8CC
 * Callers:
 *     AMLIGetNamespaceOverrideObject @ 0x14006C8CC (AMLIGetNamespaceOverrideObject.c)
 *     AMLIReadNamespaceOverrideObject @ 0x14006CA3C (AMLIReadNamespaceOverrideObject.c)
 * Callees:
 *     GetNameSpaceObject @ 0x140009900 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x14000C640 (DereferenceObjectEx.c)
 *     ReferenceObjectEx @ 0x140030DA0 (ReferenceObjectEx.c)
 *     AMLIGetNamespaceOverrideObject @ 0x14006C8CC (AMLIGetNamespaceOverrideObject.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall AMLIGetNamespaceOverrideObject(__int64 a1, __int64 a2)
{
  int NameSpaceObject; // ebx
  _QWORD *v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  int Src; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+34h] [rbp-14h]

  v8 = 0LL;
  NameSpaceObject = 0;
  v7 = 0LL;
  if ( a1 == gpnsNameSpaceRoot )
  {
    if ( gpnsNameSpaceOverrideRoot )
    {
      ReferenceObjectEx(gpnsNameSpaceOverrideRoot);
      *v5 = gpnsNameSpaceOverrideRoot;
    }
    else
    {
      return (unsigned int)-1073741595;
    }
  }
  else
  {
    NameSpaceObject = GetNameSpaceObject("^", a1, (__int64)&v8, 0);
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIGetNamespaceOverrideObject(v8, &v7);
      if ( NameSpaceObject >= 0 )
      {
        Src = *(_DWORD *)(a1 + 40);
        v10 = 0;
        NameSpaceObject = GetNameSpaceObject(&Src, v7, a2, 0);
        DereferenceObjectEx(v7);
      }
      DereferenceObjectEx(v8);
    }
  }
  return (unsigned int)NameSpaceObject;
}
