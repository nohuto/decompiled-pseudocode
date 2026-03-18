/*
 * XREFs of ?ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORMATRIXEFFECT@@@Z @ 0x1802A0154
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CColorMatrixEffect::ProcessUpdate(
        CColorMatrixEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORMATRIXEFFECT *a3)
{
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a3 + 8);
  *((_OWORD *)this + 12) = *(_OWORD *)((char *)a3 + 24);
  *((_OWORD *)this + 13) = *(_OWORD *)((char *)a3 + 40);
  *((_OWORD *)this + 14) = *(_OWORD *)((char *)a3 + 56);
  *((_OWORD *)this + 15) = *(_OWORD *)((char *)a3 + 72);
  *((_DWORD *)this + 64) = *((_DWORD *)a3 + 22);
  *((_DWORD *)this + 65) = *((_DWORD *)a3 + 23);
  (*(void (__fastcall **)(CColorMatrixEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  return 0LL;
}
