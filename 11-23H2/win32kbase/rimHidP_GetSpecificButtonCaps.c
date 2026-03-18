/*
 * XREFs of rimHidP_GetSpecificButtonCaps @ 0x1C01851CC
 * Callers:
 *     _IsValidParallelButton @ 0x1C00D3CC0 (_IsValidParallelButton.c)
 *     RIMDeliverConfigRequest @ 0x1C0180728 (RIMDeliverConfigRequest.c)
 *     RIMSendLatencyMgtDeviceRequest @ 0x1C0182C04 (RIMSendLatencyMgtDeviceRequest.c)
 *     RIMAssignTouchType @ 0x1C0186854 (RIMAssignTouchType.c)
 *     RIMGetDeviceButtons @ 0x1C0188A58 (RIMGetDeviceButtons.c)
 *     RIMGetPointerDeviceProperties @ 0x1C01897A0 (RIMGetPointerDeviceProperties.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C018B69C (RIMRetrieveAllLinkIndexUsages.c)
 *     rimIDECheckConfidenceSupport @ 0x1C01932A4 (rimIDECheckConfidenceSupport.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall rimHidP_GetSpecificButtonCaps(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // di
  unsigned __int16 v9; // si
  unsigned int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax

  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = a1;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 184) )
    return 3221225659LL;
  v15 = SGDGetUserSessionState(v12, v11, v13, v14);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, __int64, __int64))(v15 + 184))(
           v10,
           v9,
           v8,
           v7,
           a5,
           a6,
           a7);
}
