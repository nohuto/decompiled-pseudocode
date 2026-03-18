/*
 * XREFs of Interrupter_UpdateERDP @ 0x14000BF30
 * Callers:
 *     Interrupter_InterrupterRegisterIntialize @ 0x14000BDD4 (Interrupter_InterrupterRegisterIntialize.c)
 *     Interrupter_DeferredWorkProcessor @ 0x140025E20 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled @ 0x140048624 (Interrupter_DeferredWorkProcessorWithVelocityFor48657796Disabled.c)
 *     Interrupter_InitializeForOffload @ 0x1400491AC (Interrupter_InitializeForOffload.c)
 * Callees:
 *     SecureChannel_SendRequestSynchronously @ 0x14000C25C (SecureChannel_SendRequestSynchronously.c)
 *     WPP_RECORDER_SF_d @ 0x14000CDA0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_i @ 0x1400450D4 (WPP_RECORDER_SF_i.c)
 *     __security_check_cookie @ 0x1400596A0 (__security_check_cookie.c)
 */

__int64 __fastcall Interrupter_UpdateERDP(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  _DWORD *v9; // rdx
  bool v10; // zf
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // edx
  signed __int32 v15[10]; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v17[6]; // [rsp+40h] [rbp-58h] BYREF
  int v18; // [rsp+70h] [rbp-28h]
  _DWORD v19[3]; // [rsp+74h] [rbp-24h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(unsigned int *)(a1 + 144);
  v5 = *(_QWORD *)(v3 + 88);
  v6 = v4 ^ (v4 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL) + 16LL * *(unsigned int *)(a1 + 140))) & 0xFFFFFFFFFFFFFFF8uLL | 8;
  if ( !a2 )
    v6 = (v4 ^ (v4 ^ (*(_QWORD *)(*(_QWORD *)(a1 + 160) + 24LL) + 16LL * *(unsigned int *)(a1 + 140))) & 0xFFFFFFFFFFFFFFF8uLL) & 0xFFFFFFFFFFFFFFF7uLL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_i(*(_QWORD *)(v3 + 72), 5, 9, 32, (__int64)&WPP_7c6d88ad550c373b598f9d026beeab64_Traceguids, v6);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(v5 + 8);
  v9 = (_DWORD *)(v7 + 24);
  if ( *(_BYTE *)(v5 + 137) || (v10 = *(_BYTE *)(v8 + 1001) == 0, v16 = v6, v10) )
  {
    result = *(_QWORD *)(v8 + 736);
    if ( (result & 1) != 0 )
    {
      *v9 = v6;
      _InterlockedOr(v15, 0);
      *(_DWORD *)(v7 + 28) = HIDWORD(v6);
    }
    else
    {
      *(_QWORD *)v9 = v6;
    }
    _InterlockedOr(v15, 0);
  }
  else
  {
    v15[8] = 4;
    LODWORD(v16) = 0;
    v12 = *(_QWORD *)(v8 + 112);
    v13 = *(_QWORD *)(v5 + 128);
    v19[0] = 0;
    memset(v17, 0, 24);
    v17[5] = v9;
    v17[3] = v13;
    v17[4] = 11LL;
    v18 = 3;
    *(_QWORD *)&v19[1] = v6;
    result = SecureChannel_SendRequestSynchronously(v12, v17, 64LL, &v16, 4);
    if ( (int)result >= 0 )
    {
      result = (unsigned int)v16;
      if ( (v16 & 0x80000000) != 0LL && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        return WPP_RECORDER_SF_d(
                 *(_QWORD *)(*(_QWORD *)(v5 + 8) + 72LL),
                 v14,
                 6,
                 76,
                 (__int64)&WPP_bcf525b88d61376d20a3150a437b01de_Traceguids,
                 v16);
      }
    }
  }
  return result;
}
