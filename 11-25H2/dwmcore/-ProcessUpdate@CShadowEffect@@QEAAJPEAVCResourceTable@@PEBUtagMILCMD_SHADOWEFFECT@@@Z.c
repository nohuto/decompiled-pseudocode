/*
 * XREFs of ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SHADOWEFFECT@@@Z @ 0x1802A0430
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShadowEffect::ProcessUpdate(
        CShadowEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SHADOWEFFECT *a3)
{
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  *(_OWORD *)((char *)this + 180) = *(_OWORD *)((char *)a3 + 12);
  *((_DWORD *)this + 49) = *((_DWORD *)a3 + 7);
  (*(void (__fastcall **)(CShadowEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  return 0LL;
}
