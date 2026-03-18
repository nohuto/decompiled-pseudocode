/*
 * XREFs of ?Channel_SetConnectionId@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SETCONNECTIONID@@@Z @ 0x18021958C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::Channel_SetConnectionId(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SETCONNECTIONID *a4)
{
  __int64 v4; // rcx
  struct CResourceTable *v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = a3;
  v4 = *((_QWORD *)this + 802);
  LODWORD(v8) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, struct CResourceTable **))(*(_QWORD *)v4 + 80LL))(
         v4,
         *((_QWORD *)a4 + 1),
         *((unsigned int *)a4 + 5),
         &v8) )
  {
    if ( *((_BYTE *)a4 + 16) )
      *((_DWORD *)a2 + 28) = (_DWORD)v8;
    else
      *((_DWORD *)a2 + 27) = (_DWORD)v8;
  }
  return 0LL;
}
