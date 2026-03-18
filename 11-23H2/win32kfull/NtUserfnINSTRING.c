/*
 * XREFs of NtUserfnINSTRING @ 0x1C01E1C40
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01CC13C (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     RtlInitLargeAnsiString @ 0x1C009EFA4 (RtlInitLargeAnsiString.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E34E8 (RtlInitLargeUnicodeString.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSTRING(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6, int a7)
{
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int128 v12; // [rsp+40h] [rbp-18h] BYREF

  v8 = a3;
  v9 = a2;
  v12 = 0LL;
  PtiCurrentShared(a1, a2, a3, a4);
  if ( v9 == 325 || v9 == 397 )
    v8 &= ~0x2000uLL;
  if ( a7 )
  {
    RtlInitLargeAnsiString((__int64)&v12, a4);
  }
  else
  {
    if ( a4 && (a4 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    RtlInitLargeUnicodeString((__int64)&v12, a4);
  }
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           v9,
           v8,
           &v12,
           a5);
}
