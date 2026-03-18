/*
 * XREFs of ?ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ARITHMETICCOMPOSITEEFFECT@@@Z @ 0x1802A00A8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CArithmeticCompositeEffect::ProcessUpdate(
        CArithmeticCompositeEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ARITHMETICCOMPOSITEEFFECT *a3)
{
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a3 + 8);
  *((_DWORD *)this + 48) = *((_DWORD *)a3 + 6);
  (*(void (__fastcall **)(CArithmeticCompositeEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  return 0LL;
}
