/*
 * XREFs of NtUserfnINLPUAHDRAWMENU @ 0x1C01E0F20
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINLPUAHDRAWMENU(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  ULONG64 v6; // rbx
  unsigned int v8; // esi
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  v6 = a4;
  v8 = a2;
  v11 = 0LL;
  v12 = 0LL;
  PtiCurrentShared(a1, a2, a3, a4);
  if ( v6 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v11 = *(_OWORD *)v6;
  v12 = *(_QWORD *)(v6 + 16);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           v8,
           a3,
           &v11,
           a5);
}
