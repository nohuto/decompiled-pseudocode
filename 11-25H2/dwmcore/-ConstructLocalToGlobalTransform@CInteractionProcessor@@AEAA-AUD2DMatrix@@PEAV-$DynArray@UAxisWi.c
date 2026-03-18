/*
 * XREFs of ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UAxisWithType@@$0A@@@@Z @ 0x18017DDA0
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BA18 (--$CalculateHandledInteractions@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18017BD68 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ??$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x1801F1444 (--$CalculateHandledInteractions@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@.c)
 * Callees:
 *     _anonymous_namespace_::ConvertVectorArrayToMatrix @ 0x18017B88C (_anonymous_namespace_--ConvertVectorArrayToMatrix.c)
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18017DFE8 (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@444444444@Z @ 0x18020EEB4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@_ea_18020EEB4.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

int *__fastcall CInteractionProcessor::ConstructLocalToGlobalTransform(__int64 *a1, int *a2, __int64 *a3)
{
  __int64 v3; // rsi
  int v4; // eax
  __int64 v5; // rdi
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 v13; // rbx
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // [rsp+A8h] [rbp-80h] BYREF
  int v19; // [rsp+ACh] [rbp-7Ch] BYREF
  int v20; // [rsp+B0h] [rbp-78h] BYREF
  int v21; // [rsp+B4h] [rbp-74h] BYREF
  int v22; // [rsp+B8h] [rbp-70h] BYREF
  int v23; // [rsp+BCh] [rbp-6Ch] BYREF
  int v24; // [rsp+C0h] [rbp-68h] BYREF
  int v25; // [rsp+C4h] [rbp-64h] BYREF
  int v26; // [rsp+C8h] [rbp-60h] BYREF
  int v27; // [rsp+CCh] [rbp-5Ch] BYREF
  __int64 *v28; // [rsp+D0h] [rbp-58h] BYREF
  int v29; // [rsp+D8h] [rbp-50h]
  __int64 v30; // [rsp+E0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v32; // [rsp+F0h] [rbp-38h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-30h] BYREF
  _OWORD v34[2]; // [rsp+100h] [rbp-28h] BYREF
  int v35; // [rsp+120h] [rbp-8h]

  v35 = 0;
  v3 = 0LL;
  v4 = *((_DWORD *)a3 + 6) - 1;
  v5 = v4;
  memset(v34, 0, sizeof(v34));
  if ( v4 >= 0 )
  {
    v13 = 16LL * v4;
    do
    {
      if ( (unsigned int)v3 >= 3 )
        break;
      v14 = *a3;
      v15 = *(_DWORD *)(v13 + *a3 + 8);
      v28 = *(__int64 **)(v13 + *a3);
      v29 = v15;
      if ( (unsigned __int8)anonymous_namespace_::CanAddThisColumnVectorToMatrix(v34, (unsigned int)v3, &v28) )
      {
        v16 = 3 * v3;
        v17 = *(_DWORD *)(v13 + v14 + 8);
        v3 = (unsigned int)(v3 + 1);
        *(_QWORD *)((char *)v34 + 4 * v16) = *(_QWORD *)(v13 + v14);
        *((_DWORD *)v34 + v16 + 2) = v17;
      }
      v13 -= 16LL;
      --v5;
    }
    while ( v5 >= 0 );
  }
  anonymous_namespace_::ConvertVectorArrayToMatrix((__int64)a2, (int *)v34);
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v18 = a2[10];
    v19 = a2[9];
    v20 = a2[8];
    v21 = a2[6];
    v22 = a2[5];
    v23 = a2[4];
    v24 = a2[2];
    v25 = a2[1];
    v26 = *a2;
    v27 = *((_DWORD *)a1 + 197);
    v30 = a1[60];
    v31 = a1[40];
    v32 = a1[20];
    v33 = *a1;
    v28 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      (unsigned int)&unk_1803D72B6,
      v10,
      v11,
      (__int64)&v28,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18);
  }
  return a2;
}
