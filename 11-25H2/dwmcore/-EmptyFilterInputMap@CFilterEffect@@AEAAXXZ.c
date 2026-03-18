/*
 * XREFs of ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18029D3A4
 * Callers:
 *     ??1CFilterEffect@@MEAA@XZ @ 0x18027F95C (--1CFilterEffect@@MEAA@XZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x18029D750 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEIN.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18029D210 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 */

void __fastcall CFilterEffect::EmptyFilterInputMap(CFilterEffect *this)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  InternalFilterInput *v4; // rcx

  v1 = *((int *)this + 38);
  if ( v1 > 0 )
  {
    for ( i = 0LL; i < v1; ++i )
    {
      CResource::UnRegisterNotifierInternal(
        this,
        *(struct CResource **)(*(_QWORD *)(*((_QWORD *)this + 18) + 8 * i) + 24LL));
      v4 = *(InternalFilterInput **)(*((_QWORD *)this + 18) + 8 * i);
      if ( v4 )
        InternalFilterInput::`scalar deleting destructor'(v4);
    }
  }
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((__int64)this + 136);
}
