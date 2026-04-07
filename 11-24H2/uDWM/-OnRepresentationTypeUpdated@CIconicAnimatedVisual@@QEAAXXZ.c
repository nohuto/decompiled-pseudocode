/*
 * XREFs of ?OnRepresentationTypeUpdated@CIconicAnimatedVisual@@QEAAXXZ @ 0x1800C4E1C
 * Callers:
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x1800C624C (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CIconicAnimatedVisual::OnRepresentationTypeUpdated(CIconicAnimatedVisual *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  (*(void (__fastcall **)(CIconicAnimatedVisual *, __int64))(*(_QWORD *)this + 24LL))(this, 256LL);
  v2 = (CBaseObject *)*((_QWORD *)this + 33);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 33) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 37) = 0LL;
  }
  v4 = (CBaseObject *)*((_QWORD *)this + 31);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 31) = 0LL;
  }
  (*(void (__fastcall **)(CIconicAnimatedVisual *))(*(_QWORD *)this + 48LL))(this);
}
