/*
 * XREFs of ?TryFindControllerForInput@HapticProcessor@@CAJPEBUtagINPUT_MESSAGE_DATA@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@PEAW4tagINPUT_MESSAGE_DEVICE_TYPE@@PEAI@Z @ 0x1800CA484
 * Callers:
 *     ?ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z @ 0x1800C9D04 (-ProcessHapticNotificationMessage@HapticProcessor@@SAJPEBU_MIT_HAPTIC_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800C8194 (--1-$com_ptr_t@VBamoList_SimpleHapticsControllerPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@.c)
 *     ?TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CA5F4 (-TryFindMouseHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControlle.c)
 *     ?TryFindPenHapticControllerForMessage@HapticProcessor@@CAJPEBUtagMSG@@PEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CA7CC (-TryFindPenHapticControllerForMessage@HapticProcessor@@CAJPEBUtagMSG@@PEAPEAVBamoSimpleHapticsCo.c)
 *     ?TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1800CA948 (-TryFindTouchpadHapticControllerForHandle@HapticProcessor@@CAJPEAXPEAPEAVBamoSimpleHapticsContro.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA_NXZ @ 0x1800CB118 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_MouseHaptics2@@@details@wil@@QEAA.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HapticProcessor::TryFindControllerForInput(
        const struct tagINPUT_MESSAGE_DATA *a1,
        struct BamoSimpleHapticsControllerPrincipal **a2,
        enum tagINPUT_MESSAGE_DEVICE_TYPE *a3,
        unsigned int *a4)
{
  void *v8; // rcx
  int TouchpadHapticControllerForHandle; // eax
  unsigned int v10; // ebx
  struct BamoSimpleHapticsControllerPrincipal *v12; // rax
  int PenHapticControllerForMessage; // eax
  struct BamoSimpleHapticsControllerPrincipal *v14; // rax
  void *v15; // rcx
  int MouseHapticControllerForHandle; // eax
  struct BamoSimpleHapticsControllerPrincipal *v17; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  struct BamoSimpleHapticsControllerPrincipal *v19; // [rsp+40h] [rbp+20h] BYREF

  *a3 = IMDT_UNAVAILABLE;
  if ( (*((_BYTE *)a1 + 56) & 0x10) != 0 && (v8 = (void *)*((_QWORD *)a1 + 8)) != 0LL )
  {
    v19 = 0LL;
    TouchpadHapticControllerForHandle = HapticProcessor::TryFindTouchpadHapticControllerForHandle(v8, &v19);
    v10 = TouchpadHapticControllerForHandle;
    if ( TouchpadHapticControllerForHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x105,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
        (const char *)(unsigned int)TouchpadHapticControllerForHandle);
LABEL_5:
      wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v19);
      return v10;
    }
    v12 = v19;
    v19 = 0LL;
    *a2 = v12;
    *a3 = 16;
    *a4 = 4104;
  }
  else if ( *((_DWORD *)a1 + 14) == 8 )
  {
    v19 = 0LL;
    PenHapticControllerForMessage = HapticProcessor::TryFindPenHapticControllerForMessage(
                                      (const struct tagMSG *)((char *)a1 + 8),
                                      &v19);
    v10 = PenHapticControllerForMessage;
    if ( PenHapticControllerForMessage < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
        (const char *)(unsigned int)PenHapticControllerForMessage);
      goto LABEL_5;
    }
    v14 = v19;
    v19 = 0LL;
    *a2 = v14;
    *a3 = IMDT_PEN;
    *a4 = 4099;
  }
  else
  {
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_MouseHaptics2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_MouseHaptics2>::GetImpl'::`2'::impl) )
      return 0LL;
    if ( *((_DWORD *)a1 + 14) != 2 )
      return 0LL;
    v15 = (void *)*((_QWORD *)a1 + 8);
    if ( !v15 )
      return 0LL;
    v19 = 0LL;
    MouseHapticControllerForHandle = HapticProcessor::TryFindMouseHapticControllerForHandle(v15, &v19);
    v10 = MouseHapticControllerForHandle;
    if ( MouseHapticControllerForHandle < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x117,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\processor\\lib\\hapticprocessor.cpp",
        (const char *)(unsigned int)MouseHapticControllerForHandle);
      goto LABEL_5;
    }
    v17 = v19;
    v19 = 0LL;
    *a2 = v17;
    *a3 = IMDT_MOUSE;
    *a4 = 4104;
  }
  wil::com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>::~com_ptr_t<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerPrincipal_Principal,wil::err_returncode_policy>((__int64 *)&v19);
  return 0LL;
}
