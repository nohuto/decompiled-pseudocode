/*
 * XREFs of ?Channel_SetDescription@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETDESCRIPTION@@PEBXI@Z @ 0x1801D92E0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x1801991F8 (-FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z @ 0x1801D9324 (-SetOwnerProcessName@CChannelContext@@QEAAXPEBDI@Z.c)
 */

__int64 __fastcall CComposition::Channel_SetDescription(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SETDESCRIPTION *a4,
        const void *a5,
        unsigned int a6)
{
  __int64 v6; // r8
  const char *v8; // rdx

  v6 = *((unsigned int *)a4 + 1);
  v8 = (char *)a4 + 8;
  if ( a6 < (int)v6 + 1 || v8[v6] )
    CComposition::FailFastOnMalformedPacket(1252792891, 0LL);
  CChannelContext::SetOwnerProcessName(a2, v8, v6);
  return 0LL;
}
