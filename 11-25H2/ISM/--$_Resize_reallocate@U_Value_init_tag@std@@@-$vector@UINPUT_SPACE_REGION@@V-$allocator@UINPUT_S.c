/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180071330
 * Callers:
 *     ?OnSystemContextNotification@GestureServices@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180070FC0 (-OnSystemContextNotification@GestureServices@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 *     ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x180071080 (-OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV-$variant@Umonostate@std@@UInputConfigCon.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@PEAU1@_KAEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x180071430 (--$_Uninitialized_value_construct_n@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SP.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009AC3C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlength@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ @ 0x18009C0DC (-_Xlength@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@CAXXZ.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

__int64 __fastcall std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  char *v10; // rsi

  if ( a2 > 0x147AE147AE147AELL )
    std::vector<INPUT_SPACE_PAYLOAD>::_Xlength(a1, a2, 0x147AE147AE147AELL, a4);
  v6 = 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v7 = 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3);
  v8 = v7 >> 1;
  if ( v7 <= 0x147AE147AE147AELL - (v7 >> 1) )
  {
    v9 = v8 + v7;
    if ( v8 + v7 >= a2 )
    {
      if ( v9 > 0x147AE147AE147AELL )
        std::_Throw_bad_array_new_length();
    }
    else
    {
      v9 = a2;
    }
  }
  else
  {
    v9 = 0x147AE147AE147AELL;
  }
  v10 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(200 * v9);
  std::_Uninitialized_value_construct_n<std::allocator<INPUT_SPACE_REGION>>(&v10[200 * v6], a2 - v6);
  memmove_0(v10, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<INPUT_SPACE_REGION>::_Change_array(a1, v10, a2, v9);
}
