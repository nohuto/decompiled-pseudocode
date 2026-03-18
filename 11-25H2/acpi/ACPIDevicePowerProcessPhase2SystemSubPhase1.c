/*
 * XREFs of ACPIDevicePowerProcessPhase2SystemSubPhase1 @ 0x140021FA0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x140010934 (AMLIAsyncEvalObject.c)
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x14001D4D0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qD @ 0x140023190 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x14002A120 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase2SystemSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // r14d
  __int64 *v3; // rbp
  const ULONG_PTR *v4; // rdx
  int v5; // r15d
  char v6; // r12
  __int64 *v7; // rsi
  signed __int32 v8; // r14d
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  bool v11; // r8
  char v12; // r11
  __int64 *v13; // r10
  __int64 *v14; // r9
  __int64 v15; // r9
  bool v16; // al
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rbx
  __int64 result; // rax
  __int64 v21; // rax
  int v22; // edx
  __int128 v23; // [rsp+48h] [rbp-70h] BYREF
  __int128 v24; // [rsp+58h] [rbp-60h]
  __int64 v25; // [rsp+68h] [rbp-50h]
  int v27; // [rsp+D0h] [rbp+18h]

  v1 = a1;
  v25 = 0LL;
  v2 = 0;
  v23 = 0LL;
  v3 = 0LL;
  *(_DWORD *)(a1 + 212) = 4;
  v24 = 0LL;
  v4 = &WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qD(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v4,
      10,
      62,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a1,
      4);
  }
  v5 = *(_DWORD *)(v1 + 104);
  v27 = *(_DWORD *)(v1 + 112);
  if ( v5 != 6 || (v6 = 1, *(_DWORD *)(v1 + 112) != 5) )
    v6 = 0;
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v7 = (__int64 *)AcpiPowerNodeList;
  if ( (__int64 *)AcpiPowerNodeList != &AcpiPowerNodeList )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v7;
      v10 = v7;
      v7 = (__int64 *)*v7;
      v11 = 0;
      v12 = 0;
      v13 = (__int64 *)v9[6];
      do
      {
        v14 = v13;
        if ( v13 == v9 + 6 )
          break;
        v13 = (__int64 *)*v13;
        v15 = *(v14 - 1);
        if ( !v11 )
        {
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 736), 0, 0);
          v11 = v8 != 0;
        }
        if ( v5 == 1 && _bittest64((const signed __int64 *)(v15 + 1120), 0x33u) )
        {
          *(_BYTE *)(v15 + 665) = 1;
          v12 = 1;
        }
      }
      while ( !v11 || !v12 );
      if ( v11 )
        _InterlockedOr64(v9 + 2, 0x20000uLL);
      else
        _InterlockedAnd64(v9 + 2, 0xFFFFFFFFFFFDFFFFuLL);
      v16 = v5 == 5 || v27 == 3;
      if ( v8 && v16 || v6 == 1 )
      {
        if ( (v9[2] & 0x40) != 0 )
        {
LABEL_32:
          _InterlockedAnd64(v9 + 2, 0xFFFFFFFFFFFFFFBFuLL);
LABEL_33:
          if ( _InterlockedCompareExchange((volatile signed __int32 *)v10 + 16, 3, 0) == 1 )
            *((_DWORD *)v10 + 17) = 3;
        }
      }
      else
      {
        v17 = v9[2];
        if ( *((_DWORD *)v10 + 11) < v5 )
        {
          if ( (v17 & 0x200) == 0 )
            _InterlockedOr64(v9 + 2, 0x40uLL);
          goto LABEL_33;
        }
        if ( (v17 & 0x40) != 0 )
          goto LABEL_32;
        if ( (v17 & 0x2000) != 0 )
          goto LABEL_33;
      }
      if ( v7 == &AcpiPowerNodeList )
      {
        v3 = 0LL;
        v1 = a1;
        v2 = 0;
        break;
      }
    }
  }
  v18 = (unsigned int)AcpiMostRecentSleepState;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  if ( v5 != 1 )
    goto LABEL_28;
  v19 = (__int64 *)AMLIGetParent(*(_QWORD *)(*(_QWORD *)(v1 + 40) + 760LL));
  v3 = AMLIGetNamedChild(v19, 1262573407);
  AMLIDereferenceHandleEx((__int64)v19);
  if ( !v3 )
    goto LABEL_28;
  WORD1(v23) = 1;
  v21 = (unsigned int)v18 < 7 ? (unsigned int)AcpiSystemStateTranslation[v18] : 0xFFFFFFFFLL;
  *(_QWORD *)&v24 = v21;
  v2 = AMLIAsyncEvalObject(v3, 0LL, 1, (__int64)&v23, ACPIDeviceCompleteGenericPhase, v1);
  AMLIDereferenceHandleEx((__int64)v3);
  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_qL(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      10,
      63,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      v1,
      v2);
  }
  result = 259LL;
  if ( v2 != 259 )
  {
LABEL_28:
    ACPIDeviceCompleteGenericPhase((__int64)v3, v2, 0LL, v1);
    return 0LL;
  }
  return result;
}
