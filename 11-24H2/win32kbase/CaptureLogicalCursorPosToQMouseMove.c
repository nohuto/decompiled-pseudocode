/*
 * XREFs of CaptureLogicalCursorPosToQMouseMove @ 0x140045C90
 * Callers:
 *     <none>
 * Callees:
 *     ?LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA?AUtagPOINT@@K@Z @ 0x140043FE0 (-LogicalCursorPosFromDpiAwarenessContext@CMouseProcessor@@QEAA-AUtagPOINT@@K@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CaptureLogicalCursorPosToQMouseMove(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // xmm0_8
  unsigned int v6; // edi
  __int64 v7; // [rsp+48h] [rbp+10h] BYREF

  result = W32GetUserSessionState(a1);
  v3 = *(_QWORD *)(result + 3144);
  if ( v3 )
  {
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
    if ( result )
    {
      v4 = *(_QWORD *)(a1 + 112);
      if ( v4 )
      {
        v6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 464LL) + 268LL);
        CMouseProcessor::LogicalCursorPosFromDpiAwarenessContext((CMouseProcessor *)result, (__int64)&v7, v6);
        result = HIDWORD(v7);
        v5 = v7;
      }
      else
      {
        v5 = *(_QWORD *)(result + 44);
        v6 = *(_DWORD *)(result + 52);
      }
      *(_QWORD *)(a1 + 192) = v5;
      *(_DWORD *)(a1 + 200) = v6;
    }
  }
  return result;
}
