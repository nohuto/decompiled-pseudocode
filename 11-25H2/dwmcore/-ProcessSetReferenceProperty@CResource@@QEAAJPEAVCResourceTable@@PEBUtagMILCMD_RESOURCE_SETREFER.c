/*
 * XREFs of ?ProcessSetReferenceProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETREFERENCEPROPERTY@@@Z @ 0x180266B38
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1801B9698 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CResource::ProcessSetReferenceProperty(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_SETREFERENCEPROPERTY *a3)
{
  struct CResource *ResourceWithoutType; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  void *retaddr; // [rsp+28h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 3));
  if ( !ResourceWithoutType && *(_DWORD *)(v4 + 12) )
    ModuleFailFastForHRESULT(0x88980403, retaddr);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, struct CResource *))(*(_QWORD *)v5 + 104LL))(
           v5,
           *(unsigned int *)(v4 + 8),
           ResourceWithoutType);
}
