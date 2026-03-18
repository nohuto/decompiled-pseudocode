/*
 * XREFs of ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180181AE0
 * Callers:
 *     ?PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z @ 0x1801844F4 (-PropertyUpdated@CPropertySet@@AEAAJIIPEBX@Z.c)
 *     ?NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z @ 0x180214870 (-NotifyCurrentPropertyValues@CPropertySet@@MEBAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetChannelCallbackId@CNotificationResource@@IEBAIXZ @ 0x180154D20 (-GetChannelCallbackId@CNotificationResource@@IEBAIXZ.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z @ 0x180181F44 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z @ 0x180182078 (-NotifyMatrix4x4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DMatrix@@@Z.c)
 *     ??$GetPropertyValue@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAPEAUD2DMatrix@@I@Z @ 0x180182A2C (--$GetPropertyValue@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z @ 0x180182BA0 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector2@@@Z.c)
 *     ?NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z @ 0x180182EDC (-NotifyVector4PropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DVector4@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPropertySet::NotifyPropertyValue(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  __int64 v4; // r8
  int v7; // ebx
  const struct D2DVector2 *Property; // rax
  int v10; // eax
  const struct D2DVector4 *v11; // rax
  int v12; // eax
  int v13; // ebp
  float v14; // xmm6_4
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  __int128 *v22; // rbp
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int ChannelCallbackId; // eax
  __int128 v27; // xmm0
  __int64 v28; // xmm1_8
  __int64 v29; // r10
  int v30; // eax
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  __int64 v32; // [rsp+48h] [rbp-50h]
  __int128 v33; // [rsp+50h] [rbp-48h] BYREF
  __int64 v34; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (unsigned int)(a3 - 18);
  switch ( (int)v4 )
  {
    case 0:
      if ( a2 >= *(_DWORD *)(a1 + 112) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v13 = 0;
      v14 = *(float *)((*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2 + 4) & 0x1FFFFFFF) + *(_QWORD *)(a1 + 120));
      v15 = *(_QWORD *)(a1 + 56);
      if ( !v15 )
        goto LABEL_2;
      if ( !*(_DWORD *)(v15 + 108) )
        goto LABEL_2;
      if ( !*(_DWORD *)(a1 + 72) )
        goto LABEL_2;
      v16 = *(_DWORD *)(a1 + 76);
      if ( !_bittest(&v16, a2) )
        goto LABEL_2;
      v17 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6392LL) + 72LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6392LL),
              11LL);
      if ( !v17 )
        goto LABEL_2;
      v18 = *(_QWORD *)(a1 + 56);
      v19 = v18 ? *(_DWORD *)(v18 + 108) : 0;
      v31 = v19;
      v32 = *(unsigned int *)(a1 + 72);
      v20 = CoreUICallSend(v17, &v31, 2LL, 11LL, 0, &unk_18032BF6A, a2, v14, v19);
      if ( v20 != -2018375675 )
        v13 = v20;
      if ( v13 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xC8u, 0LL);
      v7 = v13;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0x22Du, 0LL);
      break;
    case 17:
      Property = (const struct D2DVector2 *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                              a1 + 88,
                                              a2,
                                              v4,
                                              a4);
      v10 = CPropertyChangeResource::NotifyVector2PropertyChanged((CPropertyChangeResource *)a1, a2, Property);
      v7 = v10;
      if ( v10 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x230u, 0LL);
      break;
    case 34:
      if ( a2 >= *(_DWORD *)(a1 + 112) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v24 = CPropertyChangeResource::NotifyVector3PropertyChanged(
              (CPropertyChangeResource *)a1,
              a2,
              (const struct D2DVector3 *)(*(_QWORD *)(a1 + 120)
                                        + (*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2 + 4) & 0x1FFFFFFF)));
      v7 = v24;
      if ( v24 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x233u, 0LL);
      break;
    case 51:
      v11 = (const struct D2DVector4 *)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::GetPropertyValue<D2DMatrix>(
                                         a1 + 88,
                                         a2,
                                         v4,
                                         a4);
      v12 = CPropertyChangeResource::NotifyVector4PropertyChanged((CPropertyChangeResource *)a1, a2, v11);
      v7 = v12;
      if ( v12 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x236u, 0LL);
      break;
    case 86:
      if ( a2 >= *(_DWORD *)(a1 + 112) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v7 = 0;
      v21 = *(_QWORD *)(a1 + 56);
      v22 = (__int128 *)(*(_QWORD *)(a1 + 120) + (*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2 + 4) & 0x1FFFFFFF));
      if ( !v21 )
        goto LABEL_2;
      if ( !*(_DWORD *)(v21 + 108) )
        goto LABEL_2;
      if ( !*(_DWORD *)(a1 + 72) )
        goto LABEL_2;
      v23 = *(_DWORD *)(a1 + 76);
      if ( !_bittest(&v23, a2)
        || !(*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 24) + 6392LL) + 72LL))(
              *(_QWORD *)(*(_QWORD *)(a1 + 24) + 6392LL),
              11LL) )
      {
        goto LABEL_2;
      }
      ChannelCallbackId = CNotificationResource::GetChannelCallbackId((CNotificationResource *)a1);
      v27 = *v22;
      v28 = *((_QWORD *)v22 + 2);
      v32 = *(unsigned int *)(a1 + 72);
      v33 = v27;
      v34 = v28;
      v30 = CoreUICallSend(v29, &v31, 2LL, 11LL, 7, &unk_18032BF90, a2, &v33, ChannelCallbackId);
      if ( v30 != -2018375675 )
        v7 = v30;
      if ( v7 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x212u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x23Du, 0LL);
      break;
    case 247:
      if ( a2 >= *(_DWORD *)(a1 + 112) )
        ModuleFailFastForHRESULT(-2147024809, retaddr);
      v25 = CPropertyChangeResource::NotifyMatrix4x4PropertyChanged(
              (CPropertyChangeResource *)a1,
              a2,
              (const struct D2DMatrix *)(*(_QWORD *)(a1 + 120)
                                       + (*(_DWORD *)(*(_QWORD *)(a1 + 88) + 8LL * a2 + 4) & 0x1FFFFFFF)));
      v7 = v25;
      if ( v25 >= 0 )
        goto LABEL_2;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v25, 0x240u, 0LL);
      break;
    default:
LABEL_2:
      v7 = 0;
      break;
  }
  return (unsigned int)v7;
}
