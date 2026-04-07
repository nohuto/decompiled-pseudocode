/*
 * XREFs of ?UnbindWindow@CHolographicSlate@@AEAAJXZ @ 0x1800C1C60
 * Callers:
 *     ??1CHolographicSlate@@UEAA@XZ @ 0x1800C170C (--1CHolographicSlate@@UEAA@XZ.c)
 *     ?Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z @ 0x1800C18BC (-Initialize@CHolographicSlate@@AEAAJQEAUHWND__@@PEAVCVisual@@II@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CHolographicSlate::UnbindWindow(CHolographicSlate *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 3);
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
  return 2147500037LL;
}
