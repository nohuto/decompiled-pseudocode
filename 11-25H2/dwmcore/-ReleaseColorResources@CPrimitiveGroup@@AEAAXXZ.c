/*
 * XREFs of ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x180130118
 * Callers:
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x18013001C (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801F38B4 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x1802AB964 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGRO.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180023388 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CPrimitiveGroup::ReleaseColorResources(CPrimitiveGroup *this)
{
  __int64 v1; // rbp
  __int64 *i; // r14
  __int64 v4; // rbx

  v1 = 0LL;
  for ( i = (__int64 *)((char *)this + 200); (unsigned int)v1 < *((_DWORD *)this + 56); v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *i;
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(*i + 8 * v1));
    *(_QWORD *)(v4 + 8 * v1) = 0LL;
  }
  DynArray<CResource *,0>::Reset(i);
}
