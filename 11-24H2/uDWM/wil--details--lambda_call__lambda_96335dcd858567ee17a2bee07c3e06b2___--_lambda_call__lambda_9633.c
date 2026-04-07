/*
 * XREFs of wil::details::lambda_call__lambda_96335dcd858567ee17a2bee07c3e06b2___::_lambda_call__lambda_96335dcd858567ee17a2bee07c3e06b2___ @ 0x1800ED78C
 * Callers:
 *     _CWindowList::GetCaptureWindowExclusionList_::_1_::dtor$1 @ 0x1800F9084 (_CWindowList--GetCaptureWindowExclusionList_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::lambda_call__lambda_96335dcd858567ee17a2bee07c3e06b2___::_lambda_call__lambda_96335dcd858567ee17a2bee07c3e06b2___(
        __int64 a1)
{
  void *v1; // rbx
  HANDLE CurrentProcess; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = **(void ***)a1;
    if ( v1 )
    {
      CurrentProcess = GetCurrentProcess();
      NtUnmapViewOfSection(CurrentProcess, v1);
    }
  }
}
