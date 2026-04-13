/*
 * XREFs of std::function_bool___cdecl(HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState)_::function_bool___cdecl(HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState)___lambda_69a92d371a2c7508f1f4ce514cd8b1f7___ @ 0x1800827C4
 * Callers:
 *     _lambda_06e77e5296b311cd39e114a3c1771c51_::operator() @ 0x180083FD8 (_lambda_06e77e5296b311cd39e114a3c1771c51_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004564 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180004768 (-_Xbad_alloc@std@@YAXXZ.c)
 */

__int64 __fastcall std::function_bool___cdecl_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState__::function_bool___cdecl_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState____lambda_69a92d371a2c7508f1f4ce514cd8b1f7___(
        __int64 a1,
        _OWORD *a2)
{
  char *v4; // rax

  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = (char *)operator new(0x40uLL);
  if ( !v4 )
    std::_Xbad_alloc();
  *(_QWORD *)v4 = off_1800C8020;
  *(_OWORD *)(v4 + 8) = *a2;
  *(_OWORD *)(v4 + 24) = a2[1];
  *(_OWORD *)(v4 + 40) = a2[2];
  *(_QWORD *)(a1 + 24) = v4;
  return a1;
}
