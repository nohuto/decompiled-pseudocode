/*
 * XREFs of ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x1801C9DB4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x1801CA074 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessClearSurfaceResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES *a3)
{
  __int64 v4; // rcx
  void (__fastcall *v5)(CPrimitiveGroup *, __int64); // rax

  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, struct CResourceTable *, const struct tagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES *))(*(_QWORD *)v4 + 8LL))(
      v4,
      a2,
      a3);
    *((_QWORD *)this + 16) = 0LL;
    v5 = *(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 80LL);
    if ( (char *)v5 == (char *)CResource::NotifyOnChanged )
      CResource::NotifyOnChanged(this, 5LL, 0LL);
    else
      v5(this, 5LL);
  }
  CPrimitiveGroup::ReleaseSurfaceResources(this);
  return 0LL;
}
