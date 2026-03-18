/*
 * XREFs of ?ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GAUSSIANBLUREFFECT@@@Z @ 0x1802948A8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGaussianBlurEffect::ProcessUpdate(
        CGaussianBlurEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GAUSSIANBLUREFFECT *a3)
{
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 45) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 46) = *((_DWORD *)a3 + 4);
  (*(void (__fastcall **)(CGaussianBlurEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  return 0LL;
}
