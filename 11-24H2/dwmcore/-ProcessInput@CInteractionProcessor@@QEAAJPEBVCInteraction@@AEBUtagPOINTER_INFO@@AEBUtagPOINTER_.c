/*
 * XREFs of ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18025834C
 * Callers:
 *     ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEA_N@Z @ 0x180257770 (-ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMa.c)
 *     ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEA_N@Z @ 0x18028A5F0 (-ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix.c)
 * Callees:
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18008C684 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801245B0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18012ADD4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ??9CMILMatrix@@QEBA_NAEBV0@@Z @ 0x18014BC20 (--9CMILMatrix@@QEBA_NAEBV0@@Z.c)
 *     _tlgKeywordOn @ 0x1801B92C0 (_tlgKeywordOn.c)
 *     ?ConvertToInputType@@YA?AW4InputType@@KI@Z @ 0x1801D82E0 (-ConvertToInputType@@YA-AW4InputType@@KI@Z.c)
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x180210DC8 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180257FEC (-ProcessInput@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsE.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x1802580C4 (-ProcessInput@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x18025819C (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@PEAUTemporaryConfiguration@@@Z @ 0x180258274 (-ProcessInput@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 */

__int64 __fastcall CInteractionProcessor::ProcessInput(
        CInteractionProcessor *this,
        const struct CInteraction *a2,
        const struct tagPOINTER_INFO *a3,
        const struct tagPOINTER_INFO_UNION *a4,
        unsigned int a5,
        const struct CMILMatrix *a6,
        struct IManipulationResource *a7,
        bool *a8)
{
  int v11; // edx
  __int64 v12; // r8
  unsigned int started; // esi
  __int64 v14; // rdx
  __int64 v15; // r10
  void *v16; // r11
  int v17; // eax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // eax
  __int64 v31; // [rsp+30h] [rbp-B9h] BYREF
  __int64 v32; // [rsp+38h] [rbp-B1h] BYREF
  __int64 v33; // [rsp+40h] [rbp-A9h] BYREF
  __int64 v34; // [rsp+48h] [rbp-A1h] BYREF
  CInteractionProcessor *v35; // [rsp+50h] [rbp-99h] BYREF
  __int64 v36; // [rsp+58h] [rbp-91h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+60h] [rbp-89h] BYREF
  __int64 *v38; // [rsp+80h] [rbp-69h]
  __int64 v39; // [rsp+88h] [rbp-61h]
  CInteractionProcessor **v40; // [rsp+90h] [rbp-59h]
  __int64 v41; // [rsp+98h] [rbp-51h]
  __int64 *v42; // [rsp+A0h] [rbp-49h]
  __int64 v43; // [rsp+A8h] [rbp-41h]
  __int64 *v44; // [rsp+B0h] [rbp-39h]
  __int64 v45; // [rsp+B8h] [rbp-31h]
  __int64 *v46; // [rsp+C0h] [rbp-29h]
  __int64 v47; // [rsp+C8h] [rbp-21h]
  __int64 *v48; // [rsp+D0h] [rbp-19h]
  __int64 v49; // [rsp+D8h] [rbp-11h]

  if ( (unsigned int)dword_1803F8D18 > 4 && tlgKeywordOn((__int64)&dword_1803F8D18, 2LL) )
  {
    v31 = *((_QWORD *)this + 60);
    v32 = *((_QWORD *)this + 40);
    v33 = *((_QWORD *)this + 20);
    v34 = *(_QWORD *)this;
    v48 = &v31;
    v46 = &v32;
    v44 = &v33;
    v42 = &v34;
    v40 = &v35;
    v38 = &v36;
    v36 = v12;
    v49 = (unsigned int)(v11 + 6);
    v47 = v49;
    v45 = v49;
    v43 = v49;
    v41 = v49;
    v39 = v49;
    v35 = this;
    tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803F8D18, byte_1803CC41B, 0LL, 0LL, v49, &v37);
  }
  *a8 = 0;
  started = 0;
  *((_DWORD *)this + 197) = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
  *((_DWORD *)this + 198) = a5;
  *((_QWORD *)this + 100) = *((_QWORD *)a3 + 2);
  if ( CMILMatrix::operator!=((float *)this + 210, (float *)a6) )
  {
    *(_OWORD *)v15 = *(_OWORD *)v14;
    *(_OWORD *)(v15 + 16) = *(_OWORD *)(v14 + 16);
    *(_OWORD *)(v15 + 32) = *(_OWORD *)(v14 + 32);
    *(_OWORD *)(v15 + 48) = *(_OWORD *)(v14 + 48);
    *(_DWORD *)(v15 + 64) = *(_DWORD *)(v14 + 64);
    anonymous_namespace_::DecomposeMatrix(
      v15,
      v16,
      (__int64)this + 908,
      (__int64)this + 976,
      (CInteractionProcessor *)((char *)this + 1044),
      (CInteractionProcessor *)((char *)this + 1112));
    v17 = *((_DWORD *)this + 243);
    v18 = *(_OWORD *)((char *)this + 924);
    *(_OWORD *)((char *)this + 1180) = *(_OWORD *)((char *)this + 908);
    v19 = *(_OWORD *)((char *)this + 940);
    *(_OWORD *)((char *)this + 1196) = v18;
    v20 = *(_OWORD *)((char *)this + 956);
    *(_OWORD *)((char *)this + 1212) = v19;
    *(_OWORD *)((char *)this + 1228) = v20;
    *((_DWORD *)this + 311) = v17;
    if ( !CMILMatrix::Invert((CInteractionProcessor *)((char *)this + 1180), v21, v22) )
    {
      v24 = *((_DWORD *)this + 243);
      v25 = *(_OWORD *)((char *)this + 924);
      *(_OWORD *)v23 = *(_OWORD *)((char *)this + 908);
      v26 = *(_OWORD *)((char *)this + 940);
      *(_OWORD *)(v23 + 16) = v25;
      v27 = *(_OWORD *)((char *)this + 956);
      *(_OWORD *)(v23 + 32) = v26;
      *(_OWORD *)(v23 + 48) = v27;
      *(_DWORD *)(v23 + 64) = v24;
    }
    *a8 = 1;
  }
  if ( !*((_DWORD *)this + 196) )
  {
    v28 = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
    started = CInteractionProcessor::StartInteraction(this, 0LL, 0, (__int64)a7, v28);
  }
  *((_BYTE *)this + 808) &= ~0x10u;
  switch ( *((_DWORD *)this + 197) )
  {
    case 2:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             this,
                             (__int64)this + 784,
                             (__int64)a3,
                             (__int64)a4,
                             (__int64)this + 1272);
    case 3:
      return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 20,
                             (__int64)this + 784,
                             (__int64)a3,
                             (__int64)a4,
                             (__int64)this + 1272);
    case 4:
      if ( CInteractionProcessor::AllowPenGestureDetection(this) )
        return (unsigned int)CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ProcessInput(
                               (_QWORD *)this + 40,
                               (__int64)this + 784,
                               (__int64)a3,
                               (__int64)a4,
                               (__int64)this + 1272);
      break;
    case 6:
      return (unsigned int)CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 60,
                             (__int64)this + 784,
                             (__int64)a3,
                             (__int64)a4,
                             (__int64)this + 1272);
  }
  return started;
}
