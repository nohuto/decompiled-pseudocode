/*
 * XREFs of IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate @ 0x140218868
 * Callers:
 *     ?BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ @ 0x140218818 (-BroadcastUpdateToAllContainers@IVContentRectsSync@@YAXXZ.c)
 *     ?ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z @ 0x140218850 (-ivOnChildPartitionConnected@IVContentRectsSync@@YAXAEBUCONTAINER_ID@@@Z.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x140199058 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x140199A64 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z @ 0x1401A9610 (-GetContentRects@CContentRects@@SA_NIPEAUtagRECT@@PEAI@Z.c)
 *     ?ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140217710 (-ivrIVBroadcast@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140217880 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 */

void __fastcall IVContentRectsSync::_anonymous_namespace_::ivSendContentRectsUpdate(struct CONTAINER_ID *a1)
{
  _QWORD v2[2]; // [rsp+20h] [rbp-38h] BYREF
  struct tagRECT *v3; // [rsp+30h] [rbp-28h]

  CIVSerializer::CIVSerializer((__int64)v2, 11);
  v2[0] = &CIVGenericSerializer::`vftable';
  if ( v3 )
  {
    CContentRects::GetContentRects(4LL, v3, (unsigned int *)&v3[4]);
    if ( *(_WORD *)a1 || *((_WORD *)a1 + 1) )
      ivrIVSend((const struct CIVSerializer *)v2, 3u, a1);
    else
      ivrIVBroadcast((const struct CIVSerializer *)v2, 3u, a1);
  }
  v2[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v2);
}
