/*
 * XREFs of ?Partition_BoostCompositorClock@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_BOOSTCOMPOSITORCLOCK@@@Z @ 0x180254340
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CComposition::Partition_BoostCompositorClock(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_BOOSTCOMPOSITORCLOCK *a4)
{
  int v4; // eax
  int v5; // eax

  v4 = *((_DWORD *)this + 1601);
  if ( *((_BYTE *)a4 + 4) )
  {
    v5 = v4 + 1;
LABEL_5:
    *((_DWORD *)this + 1601) = v5;
    return 0LL;
  }
  if ( v4 )
  {
    v5 = v4 - 1;
    goto LABEL_5;
  }
  return 0LL;
}
