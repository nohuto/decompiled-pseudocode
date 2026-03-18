/*
 * XREFs of NtUserfnINLPMDICREATESTRUCT @ 0x1C01E0D50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeAnsiString @ 0x1C009EFA4 (RtlInitLargeAnsiString.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E34E8 (RtlInitLargeUnicodeString.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserfnINLPMDICREATESTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  _OWORD v19[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h]
  _BYTE v21[16]; // [rsp+78h] [rbp-30h] BYREF
  _BYTE v22[24]; // [rsp+88h] [rbp-20h] BYREF

  memset_0(v19, 0, 0x58uLL);
  PtiCurrentShared(v12, v11, v13, v14);
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v19[0] = *(_OWORD *)a4;
  v19[1] = *(_OWORD *)(a4 + 16);
  v19[2] = *(_OWORD *)(a4 + 32);
  v20 = *(_QWORD *)(a4 + 48);
  v15 = *((_QWORD *)&v19[0] + 1);
  if ( !a7 )
  {
    if ( *((_QWORD *)&v19[0] + 1) )
    {
      if ( (BYTE8(v19[0]) & 1) != 0 )
        goto LABEL_17;
      v15 = *((_QWORD *)&v19[0] + 1);
    }
    RtlInitLargeUnicodeString((__int64)v21, v15);
    v17 = *(_QWORD *)&v19[0];
    if ( (*(_QWORD *)&v19[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( *(_QWORD *)&v19[0] )
      {
        if ( (v19[0] & 1) != 0 )
LABEL_17:
          ExRaiseDatatypeMisalignment();
        v17 = *(_QWORD *)&v19[0];
      }
    }
    else
    {
      v17 = 0LL;
    }
    RtlInitLargeUnicodeString((__int64)v22, v17);
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             v19,
             a5);
  }
  if ( *((_QWORD *)&v19[0] + 1) )
    v15 = *((_QWORD *)&v19[0] + 1);
  RtlInitLargeAnsiString((__int64)v21, v15);
  v16 = *(_QWORD *)&v19[0];
  if ( (*(_QWORD *)&v19[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( *(_QWORD *)&v19[0] )
      v16 = *(_QWORD *)&v19[0];
  }
  else
  {
    v16 = 0LL;
  }
  RtlInitLargeAnsiString((__int64)v22, v16);
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _OWORD *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
          + ((a6 + 6) & 0x1F)))(
           a1,
           a2,
           a3,
           v19,
           a5);
}
