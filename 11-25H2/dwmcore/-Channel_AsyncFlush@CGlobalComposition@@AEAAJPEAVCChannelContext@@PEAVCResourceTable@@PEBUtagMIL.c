/*
 * XREFs of ?Channel_AsyncFlush@CGlobalComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_ASYNCFLUSH@@@Z @ 0x1801AACD4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ReleaseResponseRef@CResponseItem@@UEAAXXZ @ 0x1801AADB0 (-ReleaseResponseRef@CResponseItem@@UEAAXXZ.c)
 *     ?SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z @ 0x1801AAEA4 (-SendResponseWorker@CAsyncFlushResponse@@CAJPEAVCChannelContext@@IJ@Z.c)
 */

__int64 __fastcall CGlobalComposition::Channel_AsyncFlush(
        CGlobalComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_ASYNCFLUSH *a4)
{
  unsigned int v4; // esi
  unsigned int v5; // ebp
  __int64 v7; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // rbx

  v4 = 0;
  v5 = *((_DWORD *)a4 + 1);
  v7 = *((_QWORD *)g_pComposition + 78);
  v8 = operator new(0x38uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 0;
    v8[4] = 1;
    *((_QWORD *)v8 + 3) = v7;
    *((_WORD *)v8 + 16) = 0;
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v8 + 2));
    v9[12] = v5;
    *(_QWORD *)v9 = &CAsyncFlushResponse::`vftable';
    *((_QWORD *)v9 + 5) = a2;
    if ( a2 )
      CMILRefCountImpl::AddReference((struct CChannelContext *)((char *)a2 + 8));
    CResponseItem::ReleaseResponseRef((CResponseItem *)v9);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x14Eu, 0LL);
    CAsyncFlushResponse::SendResponseWorker(a2, v5, -2147024882);
  }
  return v4;
}
