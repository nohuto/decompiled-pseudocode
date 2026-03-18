/*
 * XREFs of NtUserfnINOUTLPWINDOWPOS @ 0x1C0074B30
 * Callers:
 *     <none>
 * Callees:
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C01409C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTLPWINDOWPOS(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  unsigned int v8; // esi
  PERESOURCE *v10; // rax
  _BYTE *v11; // rdx
  __int64 result; // rax
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF
  __int128 v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+68h] [rbp-10h]

  v8 = a2;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v10 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(a1, a2, a3, a4);
  if ( !ExIsResourceAcquiredSharedLite(*v10) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  PsGetThreadWin32Thread(KeGetCurrentThread());
  v11 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v11 = (_BYTE *)MmUserProbeAddress;
  *v11 = *v11;
  v11[39] = v11[39];
  v13 = *(_OWORD *)a4;
  v14 = *(_OWORD *)(a4 + 16);
  v15 = *(_QWORD *)(a4 + 32);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             v8,
             a3,
             &v13,
             a5);
  *(_OWORD *)a4 = v13;
  *(_OWORD *)(a4 + 16) = v14;
  *(_QWORD *)(a4 + 32) = v15;
  return result;
}
