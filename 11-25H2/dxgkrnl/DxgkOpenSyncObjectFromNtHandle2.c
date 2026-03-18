/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2 @ 0x1403F02F0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z @ 0x1403F0310 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@EEEPEAX@Z.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2(struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *a1)
{
  void *v2; // [rsp+20h] [rbp-18h]

  return DxgkOpenSyncObjectFromNtHandle2Impl(a1, 1u, 0, 0, v2);
}
