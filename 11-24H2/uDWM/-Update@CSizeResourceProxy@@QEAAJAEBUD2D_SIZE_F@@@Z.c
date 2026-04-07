/*
 * XREFs of ?Update@CSizeResourceProxy@@QEAAJAEBUD2D_SIZE_F@@@Z @ 0x18003C2F8
 * Callers:
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180008B44 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x18003B9BC (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x1800C514C (-UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSizeResourceProxy::Update(CSizeResourceProxy *this, const struct D2D_SIZE_F *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct D2D_SIZE_F *))(**(_QWORD **)(*((_QWORD *)this + 2)
                                                                                            + 16LL)
                                                                              + 216LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2);
}
