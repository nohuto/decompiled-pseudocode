/*
 * XREFs of NtUserfnINLPCREATESTRUCT @ 0x1C00E3260
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitLargeAnsiString @ 0x1C009EFA4 (RtlInitLargeAnsiString.c)
 *     RtlInitLargeUnicodeString @ 0x1C00E34E8 (RtlInitLargeUnicodeString.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

__int64 __fastcall NtUserfnINLPCREATESTRUCT(
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
  PERESOURCE *v15; // rax
  __int64 v16; // rbx
  _OWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  _OWORD v24[3]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v25; // [rsp+70h] [rbp-58h]
  __int128 v26; // [rsp+80h] [rbp-48h]
  _QWORD v27[2]; // [rsp+90h] [rbp-38h] BYREF
  _BYTE v28[16]; // [rsp+A0h] [rbp-28h] BYREF

  memset_0(v24, 0, 0x70uLL);
  v15 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v12, v11, v13, v14);
  v16 = 0LL;
  if ( !ExIsResourceAcquiredSharedLite(*v15) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( a4 )
  {
    v17 = (_OWORD *)a4;
    if ( a4 >= MmUserProbeAddress )
      v17 = (_OWORD *)MmUserProbeAddress;
    v24[0] = *v17;
    v24[1] = v17[1];
    v24[2] = v17[2];
    v25 = v17[3];
    v26 = v17[4];
    if ( a7 )
    {
      v18 = *((_QWORD *)&v25 + 1);
      if ( *((_QWORD *)&v25 + 1) )
        v18 = *((_QWORD *)&v25 + 1);
      RtlInitLargeAnsiString((__int64)v27, v18);
      v19 = v26;
      if ( (v26 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v26 )
          v19 = v26;
        RtlInitLargeAnsiString((__int64)v28, v19);
      }
    }
    else
    {
      v20 = *((_QWORD *)&v25 + 1);
      if ( *((_QWORD *)&v25 + 1) )
      {
        if ( (BYTE8(v25) & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v20 = *((_QWORD *)&v25 + 1);
      }
      v27[1] = v20;
      HIDWORD(v27[0]) &= ~0x80000000;
      if ( v20 )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( *(_WORD *)(v20 + 2 * v21) );
        LODWORD(v27[0]) = 2 * v21;
        HIDWORD(v27[0]) = (2 * v21 + 2) & 0x7FFFFFFF;
      }
      else
      {
        v27[0] = 0LL;
      }
      v22 = v26;
      if ( (v26 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        if ( (_QWORD)v26 )
        {
          if ( (v26 & 1) != 0 )
            ExRaiseDatatypeMisalignment();
          v22 = v26;
        }
        RtlInitLargeUnicodeString(v28, v22);
      }
    }
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             (unsigned __int64)v24 & -(__int64)(a4 != 0),
             a5);
  }
  if ( a2 != 129 )
    return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, unsigned __int64, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             (unsigned __int64)v24 & -(__int64)(a4 != 0),
             a5);
  return v16;
}
