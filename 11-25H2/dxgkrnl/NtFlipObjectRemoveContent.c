/*
 * XREFs of NtFlipObjectRemoveContent @ 0x14005AE00
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z @ 0x140056578 (-RemoveContent@FlipManagerObject@@QEAAJ_KPEAPEAVCDisableScanoutToken@@@Z.c)
 *     ?SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z @ 0x14005BF4C (-SendToTokenManager@CDisableScanoutToken@@SAJAEAPEAV1@@Z.c)
 *     RtlCopyFromUser @ 0x140065368 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtFlipObjectRemoveContent(struct CDisableScanoutToken *a1, void *a2)
{
  unsigned __int64 v3; // r14
  __int64 v4; // r8
  int v5; // ebx
  struct FlipManagerObject *v6; // rdi
  struct CDisableScanoutToken *v8; // [rsp+50h] [rbp+8h] BYREF
  struct FlipManagerObject *v9; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  v8 = a1;
  if ( a1 && a2 )
  {
    v9 = 0LL;
    v10 = 0LL;
    RtlCopyFromUser(&v10, a2, 8uLL);
    v3 = v10;
    KeEnterCriticalRegion();
    v5 = FlipManagerObject::ResolveHandle(a1, 2u, v4, &v9);
    v6 = v9;
    if ( v5 >= 0 )
    {
      v8 = 0LL;
      v5 = FlipManagerObject::RemoveContent(v9, v3, &v8);
      CDisableScanoutToken::SendToTokenManager(&v8);
    }
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
