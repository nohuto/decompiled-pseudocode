/*
 * XREFs of ?ProcessUpdate@CSharedSectionBase@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHAREDSECTIONBASE@@@Z @ 0x180294B24
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSharedSectionBase::ProcessUpdate(
        CSharedSectionBase *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHAREDSECTIONBASE *a3)
{
  *((_QWORD *)this + 9) = *((_QWORD *)a3 + 1);
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 4);
  (*(void (__fastcall **)(CSharedSectionBase *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  return 0LL;
}
