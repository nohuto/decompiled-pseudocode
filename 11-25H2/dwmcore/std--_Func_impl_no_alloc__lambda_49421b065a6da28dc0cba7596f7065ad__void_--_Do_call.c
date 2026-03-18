/*
 * XREFs of std::_Func_impl_no_alloc__lambda_49421b065a6da28dc0cba7596f7065ad__void_::_Do_call @ 0x1802C8F50
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qxx_EventWriteTransfer @ 0x1802C9348 (McTemplateU0qxx_EventWriteTransfer.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_49421b065a6da28dc0cba7596f7065ad__void_::_Do_call(
        __int64 a1,
        int a2)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    return McTemplateU0qxx_EventWriteTransfer(
             a1,
             a2,
             **(_DWORD **)(a1 + 8),
             **(_QWORD **)(a1 + 16),
             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL));
  return result;
}
