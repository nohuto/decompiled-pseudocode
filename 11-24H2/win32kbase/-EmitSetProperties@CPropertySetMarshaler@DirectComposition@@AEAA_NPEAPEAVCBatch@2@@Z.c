/*
 * XREFs of ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14007C74C
 * Callers:
 *     ?EmitUpdateCommands@CPropertySetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x14007D5C0 (-EmitUpdateCommands@CPropertySetMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ??$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140079E14 (--$EmitSetProperty@UPropertySetVector3Value@@UD2DVector3@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x14007A0F4 (--$EmitSetProperty@UPropertySetColorValue@@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposi.c)
 *     ??$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x14007B118 (--$EmitSetProperty@UPropertySetMatrix4x4Value@@UD2DMatrix@@@CPropertySetMarshaler@DirectComposit.c)
 *     ??$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x14007B480 (--$EmitSetProperty@UPropertySetMatrix3x2Value@@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectC.c)
 *     ??$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x14007C5D0 (--$EmitSetProperty@UPropertySetScalarValue@@M@CPropertySetMarshaler@DirectComposition@@AEAA_NPEA.c)
 *     ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@I@Z @ 0x14007C8C4 (-GetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ??$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140108C84 (--$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140129688 (--$EmitSetProperty@UPropertySetBooleanValue@@_N@CPropertySetMarshaler@DirectComposition@@AEAA_NP.c)
 *     ??$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140144C1C (--$EmitSetProperty@UPropertySetVector2Value@@UD2DVector2@@@CPropertySetMarshaler@DirectCompositi.c)
 *     ??$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140233324 (--$EmitSetProperty@UPropertySetQuaternionValue@@UD2DQuaternion@@@CPropertySetMarshaler@DirectCom.c)
 *     ?GetDataType@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1402337BC (-GetDataType@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@Q.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperties(
        DirectComposition::CPropertySetMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  _DWORD *v2; // r14
  char v5; // di
  unsigned int v6; // esi
  unsigned int *v7; // rcx
  int DataType; // eax
  char v9; // al

  v2 = (_DWORD *)((char *)this + 16);
  v5 = 1;
  if ( (*((_DWORD *)this + 4) & 0x80u) == 0 )
    return v5;
  v6 = 0;
  v7 = (unsigned int *)((char *)this + 16);
  if ( !*((_DWORD *)this + 20) )
    goto LABEL_11;
  do
  {
    if ( !(unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                          (char *)this + 72,
                          v6) )
      goto LABEL_9;
    DataType = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                 (char *)this + 72,
                 v6);
    switch ( DataType )
    {
      case 17:
        v9 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetBooleanValue,bool>(this, a2, v6);
        goto LABEL_7;
      case 18:
        v9 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetScalarValue,float>(
               (__int64)this,
               a2,
               v6);
LABEL_7:
        v5 = v9;
        break;
      case 35:
        v9 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector2Value,D2DVector2>(this, a2, v6);
        goto LABEL_7;
      case 52:
        v9 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector3Value,D2DVector3>(
               (__int64)this,
               a2,
               v6);
        goto LABEL_7;
      case 69:
        v9 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector4Value,D2DVector4>(this, a2, v6);
        goto LABEL_7;
      case 70:
        v9 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetColorValue,_D3DCOLORVALUE>(
               (__int64)this,
               a2,
               v6);
        goto LABEL_7;
      case 71:
        v9 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetQuaternionValue,D2DQuaternion>(
               this,
               a2,
               v6);
        goto LABEL_7;
      case 104:
        v9 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix3x2Value,D2D_MATRIX_3X2_F>(
               (__int64)this,
               a2,
               v6);
        goto LABEL_7;
      case 265:
        v9 = DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetMatrix4x4Value,D2DMatrix>(
               (__int64)this,
               a2,
               v6);
        goto LABEL_7;
    }
    if ( !v5 )
      return v5;
LABEL_9:
    ++v6;
  }
  while ( v6 < *((_DWORD *)this + 20) );
  v7 = (unsigned int *)((char *)this + 16);
LABEL_11:
  *v7 = *v2 & 0xFFFFFF7F;
  return v5;
}
