/*
 * XREFs of _anonymous_namespace_::NotifyPartExit @ 0x140148800
 * Callers:
 *     ?HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140252128 (-HitTestPartUpdate@NotifyShell@@YAXAEBUtagDESKTOP@@PEAUtagWND@@HAEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x14014884C (_anonymous_namespace_--NotifyShellSimplePayload.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyPartExit(__int64 a1)
{
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 380) & 1) != 0 )
  {
    result = anonymous_namespace_::NotifyShellSimplePayload(
               0,
               10,
               *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 200LL) << 16,
               0,
               0);
    *(_DWORD *)(a1 + 380) &= ~1u;
  }
  return result;
}
