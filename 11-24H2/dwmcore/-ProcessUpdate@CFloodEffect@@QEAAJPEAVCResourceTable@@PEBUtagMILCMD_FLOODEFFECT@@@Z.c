/*
 * XREFs of ?ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FLOODEFFECT@@@Z @ 0x180294878
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CFloodEffect::ProcessUpdate(
        CFloodEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_FLOODEFFECT *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a3 + 8);
  (*(void (__fastcall **)(CFloodEffect *, _QWORD, _QWORD))(v3 + 80))(this, 0LL, 0LL);
  return 0LL;
}
