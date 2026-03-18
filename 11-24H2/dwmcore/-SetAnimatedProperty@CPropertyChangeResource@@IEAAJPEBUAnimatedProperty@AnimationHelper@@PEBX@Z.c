/*
 * XREFs of ?SetAnimatedProperty@CPropertyChangeResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180181480
 * Callers:
 *     _lambda_d811ba136654e7aa75c1d0bf78146f4c_::_lambda_invoker_cdecl_ @ 0x180212FE0 (_lambda_d811ba136654e7aa75c1d0bf78146f4c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800BEF90 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180181F44 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801821D0 (-NotifyOnChanged@CGeometry@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801829C4 (-NotifyMatrix3x2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x180182EDC (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ?NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z @ 0x180292470 (-NotifyBooleanPropertyChanged@CPropertyChangeResource@@IEBAJI_N@Z.c)
 *     ?NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z @ 0x180292564 (-NotifyColorPropertyChanged@CPropertyChangeResource@@IEBAJIAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x18029266C (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 *     memcmp_0 @ 0x1802DF6C8 (memcmp_0.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertyChangeResource::SetAnimatedProperty(
        CPropertyChangeResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct _D3DCOLORVALUE *a3)
{
  size_t v4; // r14
  char *v5; // rbp
  __int64 v9; // rax
  __int64 v10; // rbp
  struct _RTL_GENERIC_TABLE *v11; // rcx
  char *v12; // r14
  char *v13; // r8
  __int64 (__fastcall *v14)(CPropertyChangeResource *, __int64, __int64); // rax
  int v15; // eax
  int v16; // ebp
  __int64 v17; // rax
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // xmm0_8
  int v24; // eax
  __int64 v25; // rax
  unsigned int v26; // ebx
  __int64 v27; // rax
  unsigned int v28; // ebx
  float r; // xmm6_4
  unsigned int i; // edx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // edx
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  int v40; // eax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // edx
  int v45; // eax
  __int64 v46; // rax
  _QWORD v47[2]; // [rsp+40h] [rbp-A8h] BYREF
  _QWORD v48[2]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v49[2]; // [rsp+60h] [rbp-88h] BYREF
  __m256i Buffer; // [rsp+70h] [rbp-78h] BYREF
  __int128 v51; // [rsp+90h] [rbp-58h]
  __int128 v52; // [rsp+A0h] [rbp-48h]
  __int64 v53; // [rsp+F0h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a2 + 2);
  v5 = (char *)this + *((_QWORD *)a2 + 1);
  if ( !memcmp_0(v5, a3, v4) )
    return 0LL;
  memcpy_0(v5, a3, v4);
  v9 = *((_QWORD *)this + 3);
  v10 = *(_QWORD *)(v9 + 888);
  if ( v10 == *(_QWORD *)(v9 + 896) )
  {
    v46 = v10 + 1;
    v10 = 1LL;
    if ( v46 )
      v10 = v46;
  }
  v11 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 6);
  v12 = 0LL;
  if ( v11 )
  {
    Buffer.m256i_i32[0] = *(_DWORD *)a2;
    memset(&Buffer.m256i_u64[1], 0, 24);
    LODWORD(v51) = 0;
    v12 = (char *)RtlLookupElementGenericTable(v11, &Buffer);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&Buffer.m256i_i64[1]);
  }
  v13 = v12 + 8;
  if ( !v12 )
    v13 = 0LL;
  if ( v13 )
  {
    for ( i = 0; i < *((_DWORD *)v13 + 6); *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v13 + 8 * v31) + 232LL) = v10 )
      v31 = i++;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 3) + 824LL) + 440LL) |= 2u;
    CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 8u);
  }
  v14 = *(__int64 (__fastcall **)(CPropertyChangeResource *, __int64, __int64))(*(_QWORD *)this + 80LL);
  if ( (char *)v14 == (char *)CResource::NotifyOnChanged )
  {
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
  else if ( (char *)v14 == (char *)CGeometry::NotifyOnChanged )
  {
    CGeometry::NotifyOnChanged(this, 0LL, 0LL);
  }
  else
  {
    v14(this, 0LL, 0LL);
  }
  v15 = *((_DWORD *)a2 + 1);
  v16 = -2147024809;
  if ( v15 == 265 )
  {
    v25 = *((_QWORD *)this + 7);
    v16 = 0;
    v26 = *(_DWORD *)a2;
    if ( v25 )
    {
      if ( *(_DWORD *)(v25 + 108) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          v32 = *((_DWORD *)this + 19);
          if ( _bittest(&v32, v26) )
          {
            v33 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
                    *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
                    11LL);
            if ( v33 )
            {
              v34 = *((_QWORD *)this + 7);
              if ( v34 )
                v35 = *(_DWORD *)(v34 + 108);
              else
                v35 = 0;
              v36 = *(_OWORD *)&a3->r;
              v37 = *(_OWORD *)&a3[1].r;
              v49[0] = v35;
              v49[1] = *((unsigned int *)this + 18);
              *(_OWORD *)Buffer.m256i_i8 = v36;
              v38 = *(_OWORD *)&a3[2].r;
              *(_OWORD *)&Buffer.m256i_u64[2] = v37;
              v39 = *(_OWORD *)&a3[3].r;
              v51 = v38;
              v52 = v39;
              v40 = CoreUICallSend(v33, v49, 2LL, 11LL, 8, &unk_18032BF96, v26, &Buffer, v47[0]);
              if ( v40 != -2018375675 )
                v16 = v40;
              if ( v16 >= 0 )
                goto LABEL_27;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x242u, 0LL);
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
  if ( v15 == 18 )
  {
    v27 = *((_QWORD *)this + 7);
    v16 = 0;
    v28 = *(_DWORD *)a2;
    r = a3->r;
    if ( v27 )
    {
      if ( *(_DWORD *)(v27 + 108) )
      {
        if ( *((_DWORD *)this + 18) )
        {
          v41 = *((_DWORD *)this + 19);
          if ( _bittest(&v41, v28) )
          {
            v42 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
                    *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
                    11LL);
            if ( v42 )
            {
              v43 = *((_QWORD *)this + 7);
              if ( v43 )
                v44 = *(_DWORD *)(v43 + 108);
              else
                v44 = 0;
              v48[0] = v44;
              v48[1] = *((unsigned int *)this + 18);
              v45 = CoreUICallSend(v42, v48, 2LL, 11LL, 0, &unk_18032BF6A, v28, r, v47[0]);
              if ( v45 != -2018375675 )
                v16 = v45;
              if ( v16 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0xC8u, 0LL);
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
  if ( v15 != 35 )
  {
    switch ( v15 )
    {
      case 17:
        v16 = CPropertyChangeResource::NotifyBooleanPropertyChanged(this, *(_DWORD *)a2, LOBYTE(a3->r));
        goto LABEL_26;
      case 52:
        v16 = CPropertyChangeResource::NotifyVector3PropertyChanged(this, *(_DWORD *)a2, (const struct D2DVector3 *)a3);
        goto LABEL_26;
      case 69:
        v16 = CPropertyChangeResource::NotifyVector4PropertyChanged(this, *(_DWORD *)a2, (const struct D2DVector4 *)a3);
        goto LABEL_26;
      case 70:
        v16 = CPropertyChangeResource::NotifyColorPropertyChanged(this, *(_DWORD *)a2, a3);
        goto LABEL_26;
      case 71:
        v16 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
                this,
                *(_DWORD *)a2,
                (const struct D2DQuaternion *)a3);
        goto LABEL_26;
      case 104:
        v16 = CPropertyChangeResource::NotifyMatrix3x2PropertyChanged(
                this,
                *(_DWORD *)a2,
                (const struct D2D_MATRIX_3X2_F *)a3);
        goto LABEL_26;
      default:
        goto LABEL_60;
    }
  }
  v17 = *((_QWORD *)this + 7);
  v16 = 0;
  v18 = *(_DWORD *)a2;
  if ( !v17
    || !*(_DWORD *)(v17 + 108)
    || !*((_DWORD *)this + 18)
    || (v19 = *((_DWORD *)this + 19), !_bittest(&v19, v18))
    || (v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*((_QWORD *)this + 3) + 6392LL) + 72LL))(
                *(_QWORD *)(*((_QWORD *)this + 3) + 6392LL),
                11LL)) == 0 )
  {
LABEL_26:
    if ( v16 < 0 )
LABEL_60:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x9Du, 0LL);
    goto LABEL_27;
  }
  v21 = *((_QWORD *)this + 7);
  if ( v21 )
    v22 = *(unsigned int *)(v21 + 108);
  else
    v22 = 0LL;
  v23 = *(_QWORD *)&a3->r;
  v47[0] = v22;
  v47[1] = *((unsigned int *)this + 18);
  v53 = v23;
  v24 = CoreUICallSend(v20, v47, 2LL, 11LL, 2, &unk_18032BF72, v18, &v53, v22);
  if ( v24 != -2018375675 )
    v16 = v24;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x125u, 0LL);
    goto LABEL_26;
  }
LABEL_27:
  if ( v16 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x66u, 0LL);
  return (unsigned int)v16;
}
