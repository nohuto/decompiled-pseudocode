/*
 * XREFs of ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BD68
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801F05F8 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ?GetGlobalMotion@CInteractionContextWrapper@@UEAA?AUInteractionMotion@@XZ @ 0x18017C090 (-GetGlobalMotion@CInteractionContextWrapper@@UEAA-AUInteractionMotion@@XZ.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18017C168 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18017C6C0 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 *     _anonymous_namespace_::AxisContainsMotion @ 0x18017C7E0 (_anonymous_namespace_--AxisContainsMotion.c)
 *     ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x18017DDA0 (-ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA-AUD2DMatrix@@PEAV-$DynArray@UAxisWi.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
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
  __int64 (__fastcall *v20)(__int64, __int128 *); // rax
  __int64 GlobalMotion; // rax
  char v22; // al
  char v23; // cl
  unsigned int v25; // [rsp+38h] [rbp-D0h]
  _OWORD *v27; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v28[64]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-60h] BYREF
  int v30; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-48h] BYREF
  int v32; // [rsp+C8h] [rbp-40h]
  _DWORD v33[16]; // [rsp+F8h] [rbp-10h] BYREF

  v11 = xmmword_1804058D0;
  v13 = xmmword_1804058E0;
  v15 = xmmword_1804058F0;
  v27 = a10;
  *a8 = CMILMatrix::Identity;
  a8[1] = v11;
  a8[2] = v13;
  a8[3] = v15;
  v16 = xmmword_1804058D0;
  v17 = xmmword_1804058E0;
  v18 = xmmword_1804058F0;
  *a9 = CMILMatrix::Identity;
  a9[1] = v16;
  a9[2] = v17;
  a9[3] = v18;
  *a10 = xmmword_1803D3A10;
  a10[1] = xmmword_1803D3A20;
  a10[2] = xmmword_1803D3A30;
  a10[3] = xmmword_1803D3A40;
  v25 = *(_QWORD *)a2 == 0LL ? 0x8007139F : 0;
  if ( !*(_QWORD *)a2 )
    return v25;
  (*(void (__fastcall **)(_QWORD, int *))(**(_QWORD **)a2 + 40LL))(*(_QWORD *)a2, &v30);
  v19 = *(_QWORD *)a2;
  v20 = *(__int64 (__fastcall **)(__int64, __int128 *))(**(_QWORD **)a2 + 48LL);
  if ( (char *)v20 == (char *)CInteractionContextWrapper::GetGlobalMotion )
    GlobalMotion = CInteractionContextWrapper::GetGlobalMotion(v19, &v29);
  else
    GlobalMotion = v20(v19, &v29);
  v31 = *(_QWORD *)GlobalMotion;
  v32 = *(_DWORD *)(GlobalMotion + 8);
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a5 + 40LL))(a5, v33);
  v29 = *a3;
  if ( *(_QWORD *)a2 == a5 )
  {
    v22 = 0;
    v23 = 0;
  }
  else
  {
    v23 = BYTE1(v29);
    v22 = v29;
  }
  if ( v33[0] != 2 )
  {
    if ( v33[0] == 4 && !v23 )
    {
      if ( a2[16] < 0 )
      {
        *(_BYTE *)(a7 + 1) = 1;
        *a6 = 2;
        *(_BYTE *)(a1 + 1249) = 1;
      }
      return v25;
    }
    goto LABEL_8;
  }
  if ( v22 )
  {
LABEL_8:
    if ( v30 == 1 && !a4[1] && !*a4 )
    {
      CInteractionProcessor::ConstructLocalToGlobalTransform(a1, v28, a4 + 8);
      CInteractionProcessor::ConvertGlobalMotionToLocalMotion(a1, &v29, &v31, v28, a8, a9);
      *(_OWORD *)a7 = *(_OWORD *)CInteractionProcessor::ComputeHandledInteractionsFromLocal(a1, &v27, &v29, v27);
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
