/*
 * XREFs of Isoch_FindTrbMatch @ 0x140012FE8
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x140011E20 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_DDqq @ 0x1400076A0 (WPP_RECORDER_SF_DDqq.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x140012400 (StageQueue_ForwardScanGetNextStage.c)
 *     Isoch_DoesStageContainDequeuePointer @ 0x140013238 (Isoch_DoesStageContainDequeuePointer.c)
 *     Isoch_CalculateBytesTransferred @ 0x1400132BC (Isoch_CalculateBytesTransferred.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 */

char __fastcall Isoch_FindTrbMatch(__int64 a1, __int64 *a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  __int64 v5; // r12
  char v7; // bl
  int v8; // r13d
  int v9; // r14d
  unsigned __int8 *v10; // rbp
  __int64 v11; // rcx
  __int64 *v12; // rsi
  unsigned __int8 *NextStage; // rax
  __int64 v14; // r8
  char result; // al
  int v16; // edx
  int v17; // edx

  v5 = *a2;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( *a2 )
  {
    if ( v5 == v11 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v17 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
        LOBYTE(v17) = 4;
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v17,
          14,
          36,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
      }
      v9 = *(_DWORD *)(a1 + 384);
    }
    else
    {
      v12 = *(__int64 **)(a1 + 392);
LABEL_4:
      if ( (__int64 *)(a1 + 392) == v12 )
      {
        v8 = 0;
        goto LABEL_13;
      }
      *((_BYTE *)v12 + 133) = *((_BYTE *)v12 + 132);
      *((_BYTE *)v12 + 134) = *((_BYTE *)v12 + 130);
      while ( 1 )
      {
        NextStage = StageQueue_ForwardScanGetNextStage((unsigned __int8 *)v12 + 128);
        v10 = NextStage;
        if ( !NextStage )
        {
          v12 = (__int64 *)*v12;
          goto LABEL_4;
        }
        if ( (unsigned __int8)Isoch_DoesStageContainDequeuePointer(NextStage, v5) )
          break;
        ++v9;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_DDqq(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          5u,
          v14,
          0x25u,
          (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
          v12[3],
          v10);
      v8 = Isoch_CalculateBytesTransferred(a1, v10, a2);
    }
    v7 = 1;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    LOBYTE(v16) = 2;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v16,
      14,
      35,
      (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
  }
LABEL_13:
  *a3 = (unsigned __int64)v10 & -(__int64)(v7 != 0);
  *a4 = v7 != 0 ? v9 : 0;
  result = v7;
  *a5 = v7 != 0 ? v8 : 0;
  return result;
}
