/*
 * XREFs of ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1801A5444
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801A4480 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x1801A46C8 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801A48A0 (-SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801A4FE0 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1801F7AB0 (-SetRotationAxis@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector3PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector3 *a3)
{
  __int64 v3; // rax
  int v4; // edi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // xmm0_8
  int v14; // eax
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  int v16; // [rsp+48h] [rbp-20h]
  _QWORD v17[2]; // [rsp+50h] [rbp-18h] BYREF

  v3 = *((_QWORD *)this + 7);
  v4 = 0;
  if ( v3 )
  {
    if ( *(_DWORD *)(v3 + 108) )
    {
      if ( *((_DWORD *)this + 18) )
      {
        v9 = *((_DWORD *)this + 19);
        if ( _bittest(&v9, a2) )
        {
          v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6416LL) + 72LL))(
                  *(_QWORD *)(*((_QWORD *)this + 3) + 6416LL),
                  11LL);
          if ( v10 )
          {
            v11 = *((_QWORD *)this + 7);
            if ( v11 )
              v12 = *(_DWORD *)(v11 + 108);
            else
              v12 = 0;
            v13 = *(_QWORD *)a3;
            v16 = *((_DWORD *)a3 + 2);
            v17[0] = v12;
            v17[1] = *((unsigned int *)this + 18);
            v14 = CoreUICallSend(v10, v17, 2LL, 11LL, 3, &unk_180336EB8, a2, &v15, v13);
            if ( v14 != -2018375675 )
              v4 = v14;
            if ( v4 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x155u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
