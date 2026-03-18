/*
 * XREFs of NtFlipObjectDisconnectEndpoint @ 0x140046C20
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x140046CBC (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 */

__int64 __fastcall NtFlipObjectDisconnectEndpoint(void *a1, int a2)
{
  __int64 v4; // r8
  ACCESS_MASK v5; // edx
  int v6; // ebx
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Object = 0LL;
    KeEnterCriticalRegion();
    v5 = 2;
    if ( !a2 )
      v5 = 1;
    v6 = FlipManagerObject::ResolveHandle(a1, v5, v4, (struct FlipManagerObject **)&Object);
    if ( v6 >= 0 )
      v6 = FlipManagerObject::DisconnectEndpoint((FlipManagerObject *)Object, a2 != 0);
    if ( Object )
      ObfDereferenceObject(Object);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}
