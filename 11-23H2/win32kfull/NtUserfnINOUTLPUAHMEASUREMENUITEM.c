/*
 * XREFs of NtUserfnINOUTLPUAHMEASUREMENUITEM @ 0x1C01E1570
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserfnINOUTLPUAHMEASUREMENUITEM(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE *v14; // rdx
  __int64 result; // rax
  __int128 v16; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v17; // [rsp+60h] [rbp-98h]
  __int128 v18; // [rsp+70h] [rbp-88h]
  __int128 v19; // [rsp+80h] [rbp-78h]
  __int128 v20; // [rsp+90h] [rbp-68h]
  __int128 v21; // [rsp+A0h] [rbp-58h]
  __int128 v22; // [rsp+B0h] [rbp-48h]

  memset_0(&v16, 0, 0x70uLL);
  PtiCurrentShared(v11, v10, v12, v13);
  v14 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v14 = (_BYTE *)MmUserProbeAddress;
  *v14 = *v14;
  v14[111] = v14[111];
  v16 = *a4;
  v17 = a4[1];
  v18 = a4[2];
  v19 = a4[3];
  v20 = a4[4];
  v21 = a4[5];
  v22 = a4[6];
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v16,
             a5);
  *a4 = v16;
  a4[1] = v17;
  a4[2] = v18;
  a4[3] = v19;
  a4[4] = v20;
  a4[5] = v21;
  a4[6] = v22;
  return result;
}
