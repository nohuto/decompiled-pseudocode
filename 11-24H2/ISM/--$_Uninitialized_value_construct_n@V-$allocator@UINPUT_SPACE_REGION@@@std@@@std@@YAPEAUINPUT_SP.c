/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@PEAU1@_KAEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x180071160
 * Callers:
 *     ?OnSystemContextNotification@GestureServices@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180070CF0 (-OnSystemContextNotification@GestureServices@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180070DB0 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180071060 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<INPUT_SPACE_REGION>>(char *a1, __int64 a2)
{
  char *v2; // rdi
  __int64 v3; // rbx

  v2 = a1;
  if ( a2 )
  {
    v3 = 200 * a2;
    memset_0(a1, 0, 200 * a2);
    v2 += v3;
  }
  return v2;
}
