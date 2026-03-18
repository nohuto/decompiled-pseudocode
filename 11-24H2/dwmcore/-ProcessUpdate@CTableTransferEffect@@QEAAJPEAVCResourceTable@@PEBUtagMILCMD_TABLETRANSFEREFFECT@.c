/*
 * XREFs of ?ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_TABLETRANSFEREFFECT@@@Z @ 0x180294B58
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTableTransferEffect::ProcessUpdate(
        CTableTransferEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_TABLETRANSFEREFFECT *a3)
{
  *((_BYTE *)this + 176) = *((_BYTE *)a3 + 8);
  *((_BYTE *)this + 177) = *((_BYTE *)a3 + 9);
  *((_BYTE *)this + 178) = *((_BYTE *)a3 + 10);
  *((_BYTE *)this + 179) = *((_BYTE *)a3 + 11);
  *((_BYTE *)this + 180) = *((_BYTE *)a3 + 12);
  (*(void (__fastcall **)(CTableTransferEffect *, _QWORD, _QWORD))(*(_QWORD *)this + 80LL))(this, 0LL, 0LL);
  return 0LL;
}
