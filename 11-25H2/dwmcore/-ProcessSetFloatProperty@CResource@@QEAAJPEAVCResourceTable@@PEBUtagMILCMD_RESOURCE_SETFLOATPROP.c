/*
 * XREFs of ?ProcessSetFloatProperty@CResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RESOURCE_SETFLOATPROPERTY@@@Z @ 0x180282A04
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CResource::ProcessSetFloatProperty(
        CResource *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RESOURCE_SETFLOATPROPERTY *a3)
{
  return (*(__int64 (__fastcall **)(CResource *, _QWORD, __int64, char *))(*(_QWORD *)this + 96LL))(
           this,
           *((unsigned int *)a3 + 2),
           18LL,
           (char *)a3 + 12);
}
