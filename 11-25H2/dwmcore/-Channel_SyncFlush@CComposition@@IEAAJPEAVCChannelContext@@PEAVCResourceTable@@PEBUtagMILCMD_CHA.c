/*
 * XREFs of ?Channel_SyncFlush@CComposition@@IEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x180185AD4
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180185B8C (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CComposition::Channel_SyncFlush(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_SYNCFLUSH *a4)
{
  _QWORD *v4; // r8
  unsigned int v5; // eax
  unsigned int v6; // r9d
  int v7; // ebx
  int v8; // r9d
  unsigned int v10; // eax
  struct CChannelContext *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = (_QWORD *)((char *)this + 904);
  v5 = *((_DWORD *)this + 232);
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v7 = -2147024362;
    v10 = 181;
    v8 = -2147024362;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v10, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x557u, 0LL);
    return (unsigned int)v7;
  }
  v7 = 0;
  if ( v6 <= *((_DWORD *)this + 231) )
  {
    *(_QWORD *)(*v4 + 8LL * *((unsigned int *)this + 232)) = a2;
    *((_DWORD *)this + 232) = v6;
    goto LABEL_4;
  }
  v7 = DynArrayImpl<1>::AddMultipleAndSet((char *)this + 904, 8LL, v4, &v11);
  v8 = v7;
  if ( v7 < 0 )
  {
    v10 = 192;
    goto LABEL_7;
  }
LABEL_4:
  CMILRefCountImpl::AddReference((struct CChannelContext *)((char *)v11 + 8));
  return (unsigned int)v7;
}
