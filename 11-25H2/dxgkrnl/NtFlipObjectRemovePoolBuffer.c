/*
 * XREFs of NtFlipObjectRemovePoolBuffer @ 0x14009BF80
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 *     ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x14009BA18 (-RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z.c)
 */

__int64 __fastcall NtFlipObjectRemovePoolBuffer(void *a1, void *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r8
  int v5; // ebx
  struct FlipManagerObject *v6; // rdi
  struct FlipManagerObject *v8; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  if ( a1 && a2 )
  {
    v8 = 0LL;
    v9 = 0LL;
    RtlCopyFromUser(&v9, a2, 8uLL);
    v3 = v9;
    KeEnterCriticalRegion();
    v5 = FlipManagerObject::ResolveHandle(a1, 2u, v4, &v8);
    v6 = v8;
    if ( v5 >= 0 )
      v5 = FlipManagerObject::RemovePoolBuffer(v8, v3);
    if ( v6 )
      ObfDereferenceObject(v6);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
