/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_63b61c2369133a205197eda5bd671ee7_@@CAXPEAU_FAST_ERESOURCE@@PEAU_W32THREADNONPAGED@@@Z @ 0x1401A8F70
 * Callers:
 *     NtUserGetKeyState @ 0x14016CDE0 (NtUserGetKeyState.c)
 *     NtUserToUnicodeEx @ 0x140173450 (NtUserToUnicodeEx.c)
 * Callees:
 *     EtwTraceAcquireExclusiveUserCrit @ 0x1400339B0 (EtwTraceAcquireExclusiveUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x140033AB0 (EtwTraceAcquiredExclusiveUserCrit.c)
 */

void __fastcall _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_(
        struct _FAST_ERESOURCE *a1,
        struct _W32THREADNONPAGED *a2)
{
  __int64 v4; // r8

  EtwTraceAcquireExclusiveUserCrit();
  LOBYTE(v4) = 1;
  ExAcquireFastResourceExclusive(a1, (char *)a2 + 32, v4);
  *((_DWORD *)a2 + 6) = *((_DWORD *)a2 + 6) & 0xFFFFFFF3 | 8;
  EtwTraceAcquiredExclusiveUserCrit();
}
