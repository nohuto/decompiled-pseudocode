/*
 * XREFs of NtQueryCompositionInputSinkViewId @ 0x140130E60
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14004A450 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     RtlCopyToUser @ 0x1402C3008 (RtlCopyToUser.c)
 */

__int64 __fastcall NtQueryCompositionInputSinkViewId(void *a1, void *a2)
{
  int v3; // ebx
  int Src; // [rsp+40h] [rbp+18h] BYREF
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  Src = 0;
  Object = 0LL;
  v3 = CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object);
  if ( v3 >= 0 )
  {
    Src = *((_DWORD *)Object + 44);
    ObfDereferenceObject(Object);
    RtlCopyToUser(a2, &Src, 4uLL);
  }
  return (unsigned int)v3;
}
