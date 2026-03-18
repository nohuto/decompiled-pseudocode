/*
 * XREFs of ?ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_BRIGHTNESSEFFECT@@@Z @ 0x1802947C4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrightnessEffect::ProcessUpdate(
        CBrightnessEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_BRIGHTNESSEFFECT *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)this;
  *((_QWORD *)this + 22) = *((_QWORD *)a3 + 1);
  *((_QWORD *)this + 23) = *((_QWORD *)a3 + 2);
  (*(void (__fastcall **)(CBrightnessEffect *, _QWORD, _QWORD))(v3 + 80))(this, 0LL, 0LL);
  return 0LL;
}
