/*
 * XREFs of ?NotifyPropertyChanged@CPropertyChangeResource@@IEBAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180182420
 * Callers:
 *     ?NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@@Z @ 0x1801FA450 (-NotifyCurrentPropertyValuesImpl@CPropertyChangeResource@@IEBAJIAEBV-$span@QEBUAnimatedProperty@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801829C4 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x180182EDC (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x180292470 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x180292564 (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x18029266C (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyPropertyChanged(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        bool *a3)
{
  int v3; // eax
  int v6; // ebx
  __int64 v7; // rax
  unsigned int v8; // ebp
  int v9; // eax
  __int64 v10; // r10
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // xmm0_8
  int v14; // eax
  __int64 v15; // rax
  unsigned int v16; // ebp
  __int64 v18; // rax
  unsigned int v19; // esi
  float v20; // xmm6_4
  __int64 v21; // rax
  unsigned int v22; // ebp
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // edx
  __int64 v27; // xmm0_8
  int v28; // eax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edx
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  unsigned int v41; // edx
  int v42; // eax
  __int64 v43; // [rsp+40h] [rbp-88h] BYREF
  int v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h] BYREF
  __int64 v46; // [rsp+58h] [rbp-70h]
  _OWORD v47[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v48; // [rsp+D8h] [rbp+10h] BYREF

  v3 = *((_DWORD *)a2 + 1);
  v6 = -2147024809;
  if ( v3 != 265 )
  {
    if ( v3 == 18 )
    {
      v18 = *((_QWORD *)this + 7);
      v6 = 0;
      v19 = *(_DWORD *)a2;
      v20 = *(float *)a3;
      if ( v18 )
      {
        if ( *(_DWORD *)(v18 + 108) )
        {
          if ( *((_DWORD *)this + 18) )
          {
            v38 = *((_DWORD *)this + 19);
            if ( _bittest(&v38, v19) )
            {
              v39 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
                      *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
                      11LL);
              if ( v39 )
              {
                v40 = *((_QWORD *)this + 7);
                if ( v40 )
                  v41 = *(_DWORD *)(v40 + 108);
                else
                  v41 = 0;
                v45 = v41;
                v46 = *((unsigned int *)this + 18);
                v42 = CoreUICallSend(v39, &v45, 2LL, 11LL, 0, &unk_18032BF6A, v19, v20, v43);
                if ( v42 != -2018375675 )
                  v6 = v42;
                if ( v6 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xC8u, 0LL);
              }
            }
          }
        }
      }
    }
    else if ( v3 == 35 )
    {
      v7 = *((_QWORD *)this + 7);
      v6 = 0;
      v8 = *(_DWORD *)a2;
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 108) )
        {
          if ( *((_DWORD *)this + 18) )
          {
            v9 = *((_DWORD *)this + 19);
            if ( _bittest(&v9, v8) )
            {
              v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
                      *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
                      11LL);
              if ( v10 )
              {
                v11 = *((_QWORD *)this + 7);
                if ( v11 )
                  v12 = *(unsigned int *)(v11 + 108);
                else
                  v12 = 0LL;
                v13 = *(_QWORD *)a3;
                v45 = v12;
                v46 = *((unsigned int *)this + 18);
                v48 = v13;
                v14 = CoreUICallSend(v10, &v45, 2LL, 11LL, 2, &unk_18032BF72, v8, &v48, v43);
                if ( v14 != -2018375675 )
                  v6 = v14;
                if ( v6 >= 0 )
                  return (unsigned int)v6;
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x125u, 0LL);
              }
            }
          }
        }
      }
    }
    else
    {
      switch ( v3 )
      {
        case 17:
          v6 = CPropertyChangeResource::NotifyBooleanPropertyChanged(this, *(_DWORD *)a2, *a3);
          goto LABEL_17;
        case 52:
          v21 = *((_QWORD *)this + 7);
          v6 = 0;
          v22 = *(_DWORD *)a2;
          if ( !v21 )
            goto LABEL_17;
          if ( !*(_DWORD *)(v21 + 108) )
            goto LABEL_17;
          if ( !*((_DWORD *)this + 18) )
            goto LABEL_17;
          v23 = *((_DWORD *)this + 19);
          if ( !_bittest(&v23, v22) )
            goto LABEL_17;
          v24 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
                  *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
                  11LL);
          if ( !v24 )
            goto LABEL_17;
          v25 = *((_QWORD *)this + 7);
          if ( v25 )
            v26 = *(_DWORD *)(v25 + 108);
          else
            v26 = 0;
          v27 = *(_QWORD *)a3;
          v44 = *((_DWORD *)a3 + 2);
          v45 = v26;
          v46 = *((unsigned int *)this + 18);
          v28 = CoreUICallSend(v24, &v45, 2LL, 11LL, 3, &unk_18032BF78, v22, &v43, v27);
          if ( v28 != -2018375675 )
            v6 = v28;
          if ( v6 >= 0 )
            return (unsigned int)v6;
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x155u, 0LL);
          break;
        case 69:
          v6 = CPropertyChangeResource::NotifyVector4PropertyChanged(this, *(_DWORD *)a2, (const struct D2DVector4 *)a3);
          goto LABEL_17;
        case 70:
          v6 = CPropertyChangeResource::NotifyColorPropertyChanged(
                 this,
                 *(_DWORD *)a2,
                 (const struct _D3DCOLORVALUE *)a3);
          goto LABEL_17;
        case 71:
          v6 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
                 this,
                 *(_DWORD *)a2,
                 (const struct D2DQuaternion *)a3);
          goto LABEL_17;
        case 104:
          v6 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
                 this,
                 *(_DWORD *)a2,
                 (const struct D2D_MATRIX_3X2_F *)a3);
          goto LABEL_17;
        default:
          goto LABEL_54;
      }
    }
    goto LABEL_17;
  }
  v15 = *((_QWORD *)this + 7);
  v6 = 0;
  v16 = *(_DWORD *)a2;
  if ( !v15
    || !*(_DWORD *)(v15 + 108)
    || !*((_DWORD *)this + 18)
    || (v29 = *((_DWORD *)this + 19), !_bittest(&v29, v16))
    || (v30 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
                *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
                11LL)) == 0 )
  {
LABEL_17:
    if ( v6 < 0 )
LABEL_54:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x9Du, 0LL);
    return (unsigned int)v6;
  }
  v31 = *((_QWORD *)this + 7);
  if ( v31 )
    v32 = *(_DWORD *)(v31 + 108);
  else
    v32 = 0;
  v33 = *(_OWORD *)a3;
  v34 = *((_OWORD *)a3 + 1);
  v45 = v32;
  v46 = *((unsigned int *)this + 18);
  v47[0] = v33;
  v35 = *((_OWORD *)a3 + 2);
  v47[1] = v34;
  v36 = *((_OWORD *)a3 + 3);
  v47[2] = v35;
  v47[3] = v36;
  v37 = CoreUICallSend(v30, &v45, 2LL, 11LL, 8, &unk_18032BF96, v16, v47, v43);
  if ( v37 != -2018375675 )
    v6 = v37;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x242u, 0LL);
    goto LABEL_17;
  }
  return (unsigned int)v6;
}
