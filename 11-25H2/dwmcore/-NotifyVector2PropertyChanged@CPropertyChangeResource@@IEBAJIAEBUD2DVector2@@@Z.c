/*
 * XREFs of ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1801A5E14
 * Callers:
 *     ?NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z @ 0x1801A4480 (-NotifyCurrentPropertyValues@CVisual@@MEBAJI@Z.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801A4FE0 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801A5D00 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyVector2PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DVector2 *a3)
{
  __int64 v3; // rax
  int v4; // edi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // xmm0_8
  int v14; // eax
  _QWORD v15[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

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
            v15[0] = v12;
            v15[1] = *((unsigned int *)this + 18);
            v16 = v13;
            v14 = CoreUICallSend(v10, v15, 2LL, 11LL, 2, &unk_180336EB2, a2, &v16, v12);
            if ( v14 != -2018375675 )
              v4 = v14;
            if ( v4 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x125u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
