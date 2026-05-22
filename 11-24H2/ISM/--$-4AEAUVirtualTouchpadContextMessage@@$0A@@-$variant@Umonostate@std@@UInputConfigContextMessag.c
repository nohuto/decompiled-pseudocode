/*
 * XREFs of ??$?4AEAUVirtualTouchpadContextMessage@@$0A@@?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAAEAV01@AEAUVirtualTouchpadContextMessage@@@Z @ 0x1801A0CC4
 * Callers:
 *     ?GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x1801A1260 (-GetCurrentContext@VirtualTouchpadContextProvider@@UEAAJPEAV-$variant@Umonostate@std@@UInputConf.c)
 * Callees:
 *     ?_Tidy@?$vector@UINPUT_SPACE_PAYLOAD@@V?$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ @ 0x18000BE80 (-_Tidy@-$vector@UINPUT_SPACE_PAYLOAD@@V-$allocator@UINPUT_SPACE_PAYLOAD@@@std@@@std@@AEAAXXZ.c)
 *     ?_Destroy@?$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@QEAAXXZ @ 0x18007A554 (-_Destroy@-$_Variant_base@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMe.c)
 *     ??$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@AEAAX_KAEBQEAUVirtualTouchpadRect@@1@Z @ 0x1801A0E78 (--$_Construct_n@AEBQEAUVirtualTouchpadRect@@AEBQEAU1@@-$vector@UVirtualTouchpadRect@@V-$allocato.c)
 *     ??4?$vector@UVirtualTouchpadRect@@V?$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801A1050 (--4-$vector@UVirtualTouchpadRect@@V-$allocator@UVirtualTouchpadRect@@@std@@@std@@QEAAAEAV01@AEBV.c)
 */

__int64 __fastcall std::variant<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::operator=<VirtualTouchpadContextMessage &,0>(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( *(_BYTE *)(a1 + 24) == 3 )
  {
    std::vector<VirtualTouchpadRect>::operator=(a1, a2, a2);
  }
  else
  {
    v9 = 0LL;
    v3 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a2[1] - *a2) >> 3);
    v8 = 0LL;
    std::vector<VirtualTouchpadRect>::_Construct_n<VirtualTouchpadRect * const &,VirtualTouchpadRect * const &>(&v8, v3);
    std::_Variant_base<std::monostate,InputConfigContextMessage,DisplayOcclusionContextMessage,VirtualTouchpadContextMessage,MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::_Destroy(a1);
    v4 = *((_QWORD *)&v8 + 1);
    v5 = v9;
    v6 = v8;
    v9 = 0LL;
    v8 = 0uLL;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 16) = v5;
    *(_BYTE *)(a1 + 24) = 3;
    std::vector<INPUT_SPACE_PAYLOAD>::_Tidy((__int64 *)&v8);
  }
  return a1;
}
