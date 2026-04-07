/*
 * XREFs of ?UnbindWindow@CHolographicSlate@@AEAAXXZ @ 0x1800C4AB0
 * Callers:
 *     ??1CHolographicSlate@@UEAA@XZ @ 0x1800C4638 (--1CHolographicSlate@@UEAA@XZ.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800C4798 (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AEC0 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CHolographicSlate::UnbindWindow(CHolographicSlate *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)this + 3);
  v2 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 5);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 5) = 0LL;
  }
}
