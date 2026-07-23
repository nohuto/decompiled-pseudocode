/*
 * XREFs of KiStartDpcThread @ 0x140739308
 * Callers:
 *     KiInitializeDynamicProcessor @ 0x140B595D8 (KiInitializeDynamicProcessor.c)
 *     KeInitSystem @ 0x140C62E30 (KeInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x1408F8C50 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall KiStartDpcThread(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-28h] BYREF
  __int128 v5; // [rsp+58h] [rbp-20h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 208);
  Handle = 0LL;
  v5 = 0LL;
  WORD4(v5) = v1;
  *(_QWORD *)&v5 = *(_QWORD *)(a1 + 200);
  v2 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, KiExecuteDpc, a1, &v5, a1 + 36);
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
