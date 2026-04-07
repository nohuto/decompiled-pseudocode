/*
 * XREFs of ?SetRoot@CHolographicInteropTextureProxy@@QEAAJPEAVCVisualProxy@@@Z @ 0x1800C45DC
 * Callers:
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800C4798 (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHolographicInteropTextureProxy::SetRoot(
        CHolographicInteropTextureProxy *this,
        struct CVisualProxy *a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    v2 = *(unsigned int *)(*((_QWORD *)a2 + 2) + 24LL);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 672LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           v2);
}
