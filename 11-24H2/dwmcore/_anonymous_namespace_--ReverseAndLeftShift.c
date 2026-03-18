/*
 * XREFs of _anonymous_namespace_::ReverseAndLeftShift @ 0x180127E8C
 * Callers:
 *     ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x180127AF8 (--$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFla.c)
 *     ??$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x1802055CC (--$ComputeHandledInteractionsFromLocal@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILF.c)
 * Callees:
 *     _anonymous_namespace_::ConvertVectorArrayToMatrix @ 0x180127FAC (_anonymous_namespace_--ConvertVectorArrayToMatrix.c)
 *     ?D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z @ 0x18012A95C (-D3DXVectorAreCloseToZero@@YAHAEBUD2DVector3@@@Z.c)
 */

__int64 __fastcall anonymous_namespace_::ReverseAndLeftShift(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // xmm1_4
  unsigned int v3; // xmm0_4
  unsigned int v4; // xmm1_4
  unsigned int v5; // xmm0_4
  unsigned __int64 v6; // xmm6_8
  __int64 v7; // r8
  char v8; // r9
  __int64 v9; // r8
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v14; // [rsp+28h] [rbp-48h]
  unsigned __int64 v15; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-3Ch]
  unsigned __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-30h]

  v2 = a2[6];
  LODWORD(v13) = a2[2];
  v14 = a2[10];
  v3 = a2[5];
  HIDWORD(v13) = v2;
  v4 = a2[1];
  HIDWORD(v15) = v3;
  v5 = *a2;
  LODWORD(v15) = v4;
  v16 = a2[9];
  v6 = v15;
  v17 = __PAIR64__(a2[4], v5);
  v18 = a2[8];
  do
  {
    while ( 1 )
    {
      if ( (unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v13)
        && !(unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v15) )
      {
        v13 = v6;
        v14 = v12;
        v6 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
        v15 = v6;
        v16 = 0;
      }
      if ( !(unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v15)
        || (unsigned int)D3DXVectorAreCloseToZero((const struct D2DVector3 *)&v17) )
      {
        break;
      }
      v6 = v17;
      v11 = v18;
      v17 = 0LL;
      v18 = 0;
      v15 = v6;
      v16 = v11;
    }
  }
  while ( v8 );
  anonymous_namespace_::ConvertVectorArrayToMatrix(v7, &v13);
  return v9;
}
