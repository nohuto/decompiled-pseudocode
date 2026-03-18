/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1801A4FE0
 * Callers:
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801A3414 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x1802200C0 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 * Callees:
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x18003DBB0 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$GetPropertyValue@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DMatrix@@I@Z @ 0x1801A1C10 (--$GetPropertyValue@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x1801A5444 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x1801A5578 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x1801A5E14 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x1801A5F34 (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertySet::NotifyPropertyValue(__int64 a1, unsigned int a2, int a3)
{
  int v5; // ebx
  const struct D2DVector2 *Property; // rax
  int v8; // eax
  const struct D2DVector4 *v9; // rax
  int v10; // eax
  int v11; // ebp
  float v12; // xmm6_4
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // rax
  __int128 *v20; // rbp
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int ChannelCallbackId; // eax
  __int128 v25; // xmm0
  __int64 v26; // xmm1_8
  __int64 v27; // r10
  int v28; // eax
  __int64 v29; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+48h] [rbp-50h]
  __int128 v31; // [rsp+50h] [rbp-48h] BYREF
  __int64 v32; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  switch ( a3 )
  {
    case 18:
      if ( a2 >= *(_DWORD *)(a1 + 112) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v11 = 0;
      v12 = *(float *)((*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 120));
      v13 = *(_QWORD *)(a1 + 56);
      if ( !v13 )
        goto LABEL_2;
      if ( !*(_DWORD *)(v13 + 108) )
        goto LABEL_2;
      if ( !*(_DWORD *)(a1 + 72) )
        goto LABEL_2;
      v14 = *(_DWORD *)(a1 + 76);
      if ( !_bittest(&v14, a2) )
        goto LABEL_2;
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6416LL) + 72LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6416LL),
              11LL);
      if ( !v15 )
        goto LABEL_2;
      v16 = *(_QWORD *)(a1 + 56);
      v17 = v16 ? *(_DWORD *)(v16 + 108) : 0;
      v29 = v17;
      v30 = *(unsigned int *)(a1 + 72);
      v18 = CoreUICallSend(v15, &v29, 2LL, 11LL, 0, &unk_180336EAA, a2, v12, v17);
      if ( v18 != -2018375675 )
        v11 = v18;
      if ( v11 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0xC8u, 0LL);
      v5 = v11;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x22Du, 0LL);
      break;
    case 35:
      Property = (const struct D2DVector2 *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                              a1 + 88,
                                              a2);
      v8 = CPropertyChangeResource::NotifyVector2PropertyChanged((CPropertyChangeResource *)a1, a2, Property);
      v5 = v8;
      if ( v8 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x230u, 0LL);
      break;
    case 52:
      if ( a2 >= *(_DWORD *)(a1 + 112) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v22 = CPropertyChangeResource::NotifyVector3PropertyChanged(
              (CPropertyChangeResource *)a1,
              a2,
              (const struct D2DVector3 *)(*(_QWORD *)(a1 + 120)
                                        + (*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2 + 4) & 0x1FFFFFFF)));
      v5 = v22;
      if ( v22 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x233u, 0LL);
      break;
    case 69:
      v9 = (const struct D2DVector4 *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                        a1 + 88,
                                        a2);
      v10 = CPropertyChangeResource::NotifyVector4PropertyChanged((CPropertyChangeResource *)a1, a2, v9);
      v5 = v10;
      if ( v10 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x236u, 0LL);
      break;
    case 104:
      if ( a2 >= *(_DWORD *)(a1 + 112) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v5 = 0;
      v19 = *(_QWORD *)(a1 + 56);
      v20 = (__int128 *)(*(_QWORD *)(a1 + 120) + (*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2 + 4) & 0x1FFFFFFF));
      if ( !v19 )
        goto LABEL_2;
      if ( !*(_DWORD *)(v19 + 108) )
        goto LABEL_2;
      if ( !*(_DWORD *)(a1 + 72) )
        goto LABEL_2;
      v21 = *(_DWORD *)(a1 + 76);
      if ( !_bittest(&v21, a2)
        || !(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6416LL) + 72LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6416LL),
              11LL) )
      {
        goto LABEL_2;
      }
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
      v25 = *v20;
      v26 = *((_QWORD *)v20 + 2);
      v30 = *(unsigned int *)(a1 + 72);
      v31 = v25;
      v32 = v26;
      v28 = CoreUICallSend(v27, &v29, 2LL, 11LL, 7, &unk_180336ED0, a2, &v31, ChannelCallbackId);
      if ( v28 != -2018375675 )
        v5 = v28;
      if ( v5 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x212u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x23Du, 0LL);
      break;
    case 265:
      if ( a2 >= *(_DWORD *)(a1 + 112) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v23 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
              (CPropertyChangeResource *)a1,
              a2,
              (const struct D2DMatrix *)(*(_QWORD *)(a1 + 120)
                                       + (*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2 + 4) & 0x1FFFFFFF)));
      v5 = v23;
      if ( v23 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x240u, 0LL);
      break;
    default:
LABEL_2:
      v5 = 0;
      break;
  }
  return (unsigned int)v5;
}
