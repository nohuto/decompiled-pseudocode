/*
 * XREFs of ?SetProperty@CPropertySet@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801841F0
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x18000ED10 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x1801830DC (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ??$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQuaternion@@@Z @ 0x1801831A0 (--$UpdateProperty@UD2DQuaternion@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DQu.c)
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801844F4 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ??$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@@Z @ 0x18018510C (--$UpdateProperty@UD2DMatrix@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix.c)
 *     ??$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector3@@@Z @ 0x180185260 (--$UpdateProperty@UD2DVector3@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z @ 0x18024C768 (--$UpdateProperty@_N@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEB_N@Z.c)
 *     ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@@Z @ 0x18024E67C (--$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3D.c)
 */

__int64 __fastcall CPropertySet::SetProperty(__int64 a1, unsigned int a2, int a3, _QWORD *a4)
{
  int v5; // r8d
  int v6; // r8d
  __int64 v7; // rax
  int v8; // eax
  int v9; // edi
  unsigned int v10; // ebx
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // eax
  int v22; // r9d
  unsigned int v23; // eax
  int updated; // eax
  int v25; // r9d
  unsigned int v26; // eax
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 >= *(_DWORD *)(a1 + 112) )
  {
    v9 = -2147024809;
    v10 = -2147024809;
    v28 = 251;
LABEL_30:
    v27 = v9;
LABEL_45:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, v28, 0LL);
    return v10;
  }
  v5 = a3 - 17;
  if ( !v5 )
  {
    updated = CPropertySet::UpdateProperty<bool>((CPropertySet *)a1, a2);
    v10 = updated;
    if ( updated >= 0 )
      return 0;
    v28 = 257;
    goto LABEL_44;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v12 = v6 - 17;
    if ( v12 )
    {
      v13 = v12 - 17;
      if ( v13 )
      {
        v14 = v13 - 17;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 33;
              if ( !v17 )
              {
                if ( a2 >= *(_DWORD *)(a1 + 112) )
                  ModuleFailFastForHRESULT(-2147024809, retaddr);
                v18 = *(_QWORD *)(a1 + 88);
                if ( *(_DWORD *)(v18 + 8LL * a2) == 104 )
                {
                  v19 = *(_DWORD *)(v18 + 8LL * a2 + 4);
                  v20 = *(_QWORD *)(a1 + 120);
                  v19 &= 0x1FFFFFFFu;
                  *(_OWORD *)(v19 + v20) = *(_OWORD *)a4;
                  *(_QWORD *)(v19 + v20 + 16) = a4[2];
                  v21 = CPropertySet::PropertyUpdated((CPropertySet *)a1, a2, 2u, a4);
                  v9 = v21;
                  v10 = v21;
                  if ( v21 >= 0 )
                    return 0;
                  v22 = v21;
                  v23 = 415;
                }
                else
                {
                  v9 = -2147024809;
                  v23 = 408;
                  v10 = -2147024809;
                  v22 = -2147024809;
                }
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, v23, 0LL);
                v28 = 285;
                goto LABEL_30;
              }
              if ( v17 != 161 )
                ModuleFailFastForHRESULT(-2147418113, retaddr);
              updated = CPropertySet::UpdateProperty<D2DMatrix>((CPropertySet *)a1, a2);
              v10 = updated;
              if ( updated >= 0 )
                return 0;
              v28 = 289;
            }
            else
            {
              updated = CPropertySet::UpdateProperty<D2DQuaternion>((CPropertySet *)a1, a2, 71, a4);
              v10 = updated;
              if ( updated >= 0 )
                return 0;
              v28 = 281;
            }
          }
          else
          {
            updated = CPropertySet::UpdateProperty<_D3DCOLORVALUE>((CPropertySet *)a1, a2);
            v10 = updated;
            if ( updated >= 0 )
              return 0;
            v28 = 277;
          }
        }
        else
        {
          updated = CPropertySet::UpdateProperty<D2DQuaternion>((CPropertySet *)a1, a2, 69, a4);
          v10 = updated;
          if ( updated >= 0 )
            return 0;
          v28 = 273;
        }
      }
      else
      {
        updated = CPropertySet::UpdateProperty<D2DVector3>((CPropertySet *)a1, a2);
        v10 = updated;
        if ( updated >= 0 )
          return 0;
        v28 = 269;
      }
    }
    else
    {
      updated = CPropertySet::UpdateProperty<D2DVector2>((CPropertySet *)a1, a2, 35, a4);
      v10 = updated;
      if ( updated >= 0 )
        return 0;
      v28 = 265;
    }
LABEL_44:
    v27 = updated;
    goto LABEL_45;
  }
  if ( a2 >= *(_DWORD *)(a1 + 112) )
    ModuleFailFastForHRESULT(-2147024809, retaddr);
  v7 = *(_QWORD *)(a1 + 88);
  if ( *(_DWORD *)(v7 + 8LL * a2) != 18 )
  {
    v9 = -2147024809;
    v26 = 408;
    v10 = -2147024809;
    v25 = -2147024809;
    goto LABEL_29;
  }
  *(_DWORD *)((*(_DWORD *)(v7 + 8LL * a2 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 120)) = *(_DWORD *)a4;
  v8 = CPropertySet::PropertyUpdated((CPropertySet *)a1, a2, 2u, a4);
  v9 = v8;
  v10 = v8;
  if ( v8 < 0 )
  {
    v25 = v8;
    v26 = 415;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, v26, 0LL);
    v28 = 261;
    goto LABEL_30;
  }
  return 0;
}
