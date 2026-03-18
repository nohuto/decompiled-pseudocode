/*
 * XREFs of NtUserfnINOUTLPMEASUREITEMSTRUCT @ 0x1C01E1230
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPMEASUREITEMSTRUCT(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  unsigned int v8; // esi
  _BYTE *v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+48h] [rbp-50h] BYREF
  __int128 v13; // [rsp+58h] [rbp-40h]

  v8 = a2;
  v12 = 0LL;
  v13 = 0LL;
  PtiCurrentShared(a1, a2, a3, (__int64)a4);
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[31] = v10[31];
  v12 = *a4;
  v13 = a4[1];
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             v8,
             a3,
             &v12,
             a5);
  *a4 = v12;
  a4[1] = v13;
  return result;
}
