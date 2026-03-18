/*
 * XREFs of ??$CalculateHandledInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180128138
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18008AA88 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x180128888 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x180128DE0 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     _anonymous_namespace_::AxisContainsMotion @ 0x180128F00 (_anonymous_namespace_--AxisContainsMotion.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x18012A4C0 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int128 *a3,
        _BYTE *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _OWORD *a8,
        _OWORD *a9,
        _OWORD *a10)
{
  __int128 v11; // xmm4
  __int128 v13; // xmm8
  __int128 v15; // xmm12
  __int128 v16; // xmm4
  __int128 v17; // xmm8
  __int128 v18; // xmm12
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  char v22; // al
  char v23; // cl
  unsigned int v25; // [rsp+38h] [rbp-D0h]
  _QWORD v26[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int128 *v27; // [rsp+50h] [rbp-B8h]
  _OWORD *v28; // [rsp+58h] [rbp-B0h]
  _BYTE v29[64]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-60h] BYREF
  int v31; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-48h] BYREF
  int v33; // [rsp+C8h] [rbp-40h]
  _DWORD v34[16]; // [rsp+F8h] [rbp-10h] BYREF

  v11 = xmmword_1803F9850;
  v13 = xmmword_1803F9860;
  v15 = xmmword_1803F9870;
  v26[0] = a9;
  *a8 = CMILMatrix::Identity;
  a8[1] = v11;
  a8[2] = v13;
  a8[3] = v15;
  v16 = xmmword_1803F9850;
  v17 = xmmword_1803F9860;
  v18 = xmmword_1803F9870;
  *a9 = CMILMatrix::Identity;
  a9[1] = v16;
  a9[2] = v17;
  a9[3] = v18;
  *a10 = xmmword_1803C8D40;
  a10[1] = xmmword_1803C8D50;
  a10[2] = xmmword_1803C8D60;
  a10[3] = xmmword_1803C8D70;
  v28 = a10;
  v19 = *(_QWORD *)a2;
  v20 = *(_QWORD *)a2;
  v27 = a3;
  v25 = v20 == 0 ? 0x8007139F : 0;
  if ( !v19 )
    return v25;
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 40LL))(v19, &v31);
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)a2 + 48LL))(*(_QWORD *)a2, &v30);
  v32 = *(_QWORD *)v21;
  v33 = *(_DWORD *)(v21 + 8);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a5 + 40LL))(a5, v34);
  v30 = *v27;
  if ( *(_QWORD *)a2 == a5 )
  {
    v22 = 0;
    v23 = 0;
  }
  else
  {
    v23 = BYTE1(v30);
    v22 = v30;
  }
  if ( v34[0] != 2 )
  {
    if ( v34[0] == 4 && !v23 )
    {
      if ( a2[16] < 0 )
      {
        *(_BYTE *)(a7 + 1) = 1;
        *a6 = 2;
        *(_BYTE *)(a1 + 1249) = 1;
      }
      return v25;
    }
    goto LABEL_6;
  }
  if ( v22 )
  {
LABEL_6:
    if ( v31 == 1 && !a4[1] && !*a4 )
    {
      CInteractionProcessor::ConstructLocalToGlobalTransform(a1, v29, a4 + 8);
      CInteractionProcessor::ConvertGlobalMotionToLocalMotion(a1, v26, &v32, v29, a8, v26[0]);
      *(_OWORD *)a7 = *(_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal(a1, &v30, v26, v28);
      if ( (unsigned __int8)anonymous_namespace_::AxisContainsMotion(a7) )
        *a6 = 2;
    }
    return v25;
  }
  if ( (a2[16] & 0x40) != 0 )
  {
    *(_BYTE *)a7 = 1;
    *a6 = 2;
    *(_BYTE *)(a1 + 1248) = 1;
  }
  return v25;
}
