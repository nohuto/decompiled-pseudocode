/*
 * XREFs of PopPlNotifyDeviceFState @ 0x1403A734C
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1403A6C80 (PopPepStartComponentIdleStateChangeActivity.c)
 *     PopPluginComponentIdleState @ 0x1403A71EC (PopPluginComponentIdleState.c)
 *     PopPepCompleteComponentIdleState @ 0x1404C8510 (PopPepCompleteComponentIdleState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     _tlgCreate1Sz_char @ 0x14042C374 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14049AEBC (_tlgWriteEx_EtwWriteEx.c)
 *     PopPlCalculateDevicePowerDraw @ 0x1405D9764 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x1405D9B3C (PopPlPublishSystemPowerChange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

void __fastcall PopPlNotifyDeviceFState(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, char a5)
{
  __int64 v5; // rax
  bool v8; // cf
  __int64 v9; // r12
  __int64 v10; // rsi
  int v11; // ebx
  int v12; // eax
  unsigned int v13; // r15d
  const char *v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r10d
  int v18; // r8d
  int v19; // r9d
  int v20; // [rsp+20h] [rbp-E0h]
  int v21; // [rsp+28h] [rbp-D8h]
  unsigned int v22; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  int *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  int *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  __int64 *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  _DWORD *v40; // [rsp+110h] [rbp+10h]
  __int64 v41; // [rsp+118h] [rbp+18h]
  __int64 v42; // [rsp+120h] [rbp+20h]
  _DWORD v43[2]; // [rsp+128h] [rbp+28h] BYREF

  v5 = *(_QWORD *)(a1 + 872);
  v22 = a2;
  v23 = a4;
  v27 = *(_QWORD *)(v5 + 8LL * a2);
  if ( *(_QWORD *)(v27 + 432) )
  {
    v8 = a4 < a3;
    if ( a4 > a3 )
    {
      if ( !a5 )
        return;
      v8 = a4 < a3;
    }
    if ( !v8 || !a5 )
    {
      v9 = *(_QWORD *)(a1 + 1224);
      v10 = *(_QWORD *)(v9 + 16);
      *(_BYTE *)(v10 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 16));
      v11 = *(_DWORD *)(v9 + 32);
      v12 = PopPlCalculateDevicePowerDraw(a1, 0LL, &v23, &v22);
      *(_DWORD *)(v9 + 32) = v12;
      v13 = v12 - v11;
      if ( (unsigned int)dword_140E07680 > 5 )
      {
        v28[5] = 2LL;
        v28[4] = (__int64)&v22;
        v14 = "Beginning";
        v28[6] = v27;
        v28[7] = 16LL;
        if ( a5 )
          v14 = "Completed";
        LOWORD(v22) = 1;
        tlgCreate1Sz_char(v29, v14);
        v23 = a4;
        v30 = (int *)&v23;
        v31 = 4LL;
        v32 = (int *)&v24;
        v25 = *(_DWORD *)(v9 + 32);
        v34 = &v25;
        v36 = (int *)&v26;
        v15 = *(_QWORD *)(v9 + 16);
        v24 = v13;
        v33 = 4LL;
        v35 = 4LL;
        v26 = v13;
        v37 = 4LL;
        v16 = *(_DWORD *)(v15 + 28);
        v38 = &v27;
        LODWORD(v27) = v13 + v16;
        v40 = v43;
        v42 = *(_QWORD *)(a1 + 224);
        v43[0] = *(unsigned __int16 *)(a1 + 216);
        v39 = 4LL;
        v41 = 2LL;
        v43[1] = v17;
        tlgWriteEx_EtwWriteEx((int)&dword_140E07680, (int)&byte_14004F9C0, v18, v19, v20, v21, 0xCu, (__int64)v28);
      }
      PopPlPublishSystemPowerChange(v10, v13);
      KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 16), *(_BYTE *)(v10 + 24));
    }
  }
}
