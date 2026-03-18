/*
 * XREFs of NtUserfnINPAINTCLIPBRD @ 0x1C01E1910
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserfnINPAINTCLIPBRD(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _OWORD v15[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-48h]

  memset_0(v15, 0, 0x48uLL);
  PtiCurrentShared(v11, v10, v12, v13);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v15[0] = *(_OWORD *)a4;
  v15[1] = *(_OWORD *)(a4 + 16);
  v15[2] = *(_OWORD *)(a4 + 32);
  v15[3] = *(_OWORD *)(a4 + 48);
  v16 = *(_QWORD *)(a4 + 64);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           v15,
           a5);
}
