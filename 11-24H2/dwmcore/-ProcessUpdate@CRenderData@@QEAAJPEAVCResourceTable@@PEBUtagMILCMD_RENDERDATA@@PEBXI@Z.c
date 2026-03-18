/*
 * XREFs of ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x180131774
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x180130ED4 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 *     ?CheckPrimitives@CRenderData@@AEAAJXZ @ 0x1801315F0 (-CheckPrimitives@CRenderData@@AEAAJXZ.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180131874 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18013260C (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x1801326B0 (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 */

__int64 __fastcall CRenderData::ProcessUpdate(
        CRenderData *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERDATA *a3,
        const void *a4,
        unsigned int a5)
{
  int Handles; // esi
  int v10; // eax
  int v12; // r9d
  unsigned int v13; // eax

  Handles = 0;
  CRenderData::DestroyRenderData(this);
  v10 = *((_DWORD *)a3 + 2);
  if ( !v10 )
    goto LABEL_2;
  if ( a5 != v10 )
  {
    Handles = -2003303421;
    v13 = 88;
    v12 = -2003303421;
    goto LABEL_10;
  }
  CDataStreamWriter::Reset((CRenderData *)((char *)this + 72));
  Handles = CDataStreamWriter::AddBlockData((CRenderData *)((char *)this + 72), a4, a5);
  v12 = Handles;
  if ( Handles < 0 )
  {
    v13 = 93;
    goto LABEL_10;
  }
  Handles = CRenderData::GetHandles(this, a2);
  v12 = Handles;
  if ( Handles < 0 )
  {
    v13 = 97;
    goto LABEL_10;
  }
  Handles = CRenderData::CheckPrimitives(this);
  v12 = Handles;
  if ( Handles < 0 )
  {
    v13 = 101;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, v13, 0LL);
    CRenderData::DestroyRenderData(this);
    return (unsigned int)Handles;
  }
LABEL_2:
  *((_BYTE *)this + 296) = 1;
  CResource::NotifyOnChanged(this, 0LL, 0LL);
  return (unsigned int)Handles;
}
