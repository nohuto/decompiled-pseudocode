/*
 * XREFs of ??1?$CDeviceResourceT@V?$CMILCOMBaseT@VIDeviceResource@@V1@VCMilObjectDeleter@@@@@@MEAA@XZ @ 0x1802050C4
 * Callers:
 *     ??1CD2DResource@@MEAA@XZ @ 0x1801FE840 (--1CD2DResource@@MEAA@XZ.c)
 *     ??1CD3DResource@@MEAA@XZ @ 0x18021096C (--1CD3DResource@@MEAA@XZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>::~CDeviceResourceT<CMILCOMBaseT<IDeviceResource,IDeviceResource,CMilObjectDeleter>>(
        _QWORD *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)a1[2];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (a1[4] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
}
