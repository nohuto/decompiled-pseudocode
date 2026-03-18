/*
 * XREFs of ?DmmCacheInvalidDisplayModeChangeRequest@@YAJQEAXIW4_DMM_CLIENT_TYPE@@W4_DMM_DISPMODECHANGE_TYPE@@JQEBE@Z @ 0x14018B1AC
 * Callers:
 *     DxgkSetDisplayMode @ 0x14037ECD0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1403CF944 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 */

__int64 __fastcall DmmCacheInvalidDisplayModeChangeRequest(__int64 a1, __int64 a2)
{
  _OWORD v3[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+68h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  memset(v3, 0, sizeof(v3));
  return DmmCacheDisplayModeChangeRequest(a1, a2, v3);
}
