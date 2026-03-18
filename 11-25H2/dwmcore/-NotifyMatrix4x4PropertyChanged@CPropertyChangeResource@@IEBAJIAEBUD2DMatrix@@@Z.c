/*
 * XREFs of ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1801A5578
 * Callers:
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801A4FE0 (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
        CPropertyChangeResource *this,
        unsigned int a2,
        const struct D2DMatrix *a3)
{
  __int64 v3; // rax
  int v4; // edi
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  _QWORD v18[2]; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v19[4]; // [rsp+50h] [rbp-48h] BYREF

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
            v13 = *(_OWORD *)a3;
            v14 = *((_OWORD *)a3 + 1);
            v18[0] = v12;
            v18[1] = *((unsigned int *)this + 18);
            v19[0] = v13;
            v15 = *((_OWORD *)a3 + 2);
            v19[1] = v14;
            v16 = *((_OWORD *)a3 + 3);
            v19[2] = v15;
            v19[3] = v16;
            v17 = CoreUICallSend(v10, v18, 2LL, 11LL, 8, &unk_180336ED6, a2, v19, v12);
            if ( v17 != -2018375675 )
              v4 = v17;
            if ( v4 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x242u, 0LL);
          }
        }
      }
    }
  }
  return (unsigned int)v4;
}
