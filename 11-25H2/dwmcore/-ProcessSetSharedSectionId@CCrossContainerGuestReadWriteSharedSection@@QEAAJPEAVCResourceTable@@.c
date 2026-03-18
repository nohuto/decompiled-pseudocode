/*
 * XREFs of ?ProcessSetSharedSectionId@CCrossContainerGuestReadWriteSharedSection@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION_SETSHAREDSECTIONID@@@Z @ 0x1802A2FBC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossContainerGuestReadWriteSharedSection::ProcessSetSharedSectionId(
        CCrossContainerGuestReadWriteSharedSection *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CROSSCONTAINERGUESTREADWRITESHAREDSECTION_SETSHAREDSECTIONID *a3)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a3 + 8);
  return result;
}
