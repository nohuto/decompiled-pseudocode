/*
 * XREFs of NtUserfnINSTRINGNULL @ 0x1C00E3150
 * Callers:
 *     ?_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z @ 0x1C01CC13C (-_InBoxString@@YA_JJPEAUtagWND@@I_K_J1KH@Z.c)
 * Callees:
 *     RtlInitLargeAnsiString @ 0x1C009EFA4 (RtlInitLargeAnsiString.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E34E8 (RtlInitLargeUnicodeString.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINSTRINGNULL(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  _OWORD *v7; // rbx
  _OWORD v12[2]; // [rsp+38h] [rbp-20h] BYREF

  v7 = (_OWORD *)a4;
  v12[0] = 0LL;
  PtiCurrentShared();
  if ( v7 )
  {
    if ( a7 )
    {
      RtlInitLargeAnsiString((__int64)v12, a4);
    }
    else
    {
      if ( ((unsigned __int8)v7 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      RtlInitLargeUnicodeString(v12, a4);
    }
    v7 = v12;
  }
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           v7,
           a5);
}
