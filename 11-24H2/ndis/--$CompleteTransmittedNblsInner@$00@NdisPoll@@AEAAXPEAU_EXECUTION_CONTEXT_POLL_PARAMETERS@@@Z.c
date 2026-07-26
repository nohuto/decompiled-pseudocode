/*
 * XREFs of ??$CompleteTransmittedNblsInner@$00@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003A90
 * Callers:
 *     ?EvtCompleteTransmittedNblsThunkWithVerifier@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003BF0 (-EvtCompleteTransmittedNblsThunkWithVerifier@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAME.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NdisPoll::CompleteTransmittedNblsInner<1>(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 result; // rax
  __int64 v6; // rdx

  v2 = *(_DWORD *)(a1 + 200);
  if ( v2 != -1 && v2 > *(_DWORD *)(a1 + 176) )
    NT_ASSERT("numberOfCompletedNbls <= m_pollData.Transmit.MaxNblsToComplete");
  result = *(unsigned int *)(a1 + 208);
  if ( (result & 0xFFFFFFF9) != 0 )
    NT_ASSERT(
      "(static_cast<decltype((m_pollData.Transmit.SendCompleteFlags) & (~allowedSendCompleteFlags))>(static_cast<::wil::i"
      "ntegral_from_enum<decltype(m_pollData.Transmit.SendCompleteFlags)>>(m_pollData.Transmit.SendCompleteFlags) & stati"
      "c_cast<::wil::integral_from_enum<decltype(~allowedSendCompleteFlags)>>(~allowedSendCompleteFlags)) == static_cast<"
      "decltype((m_pollData.Transmit.SendCompleteFlags) & (~allowedSendCompleteFlags))>(0))");
  v6 = *(_QWORD *)(a1 + 192);
  if ( v6 )
    result = (*((__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, void (__stdcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, ULONG)))ndisVerifierNdisDispatch
              + 9))(
               *(_QWORD *)(a1 + 600),
               v6,
               (unsigned int)result | (*(_BYTE *)a2 == 2),
               *(_QWORD *)(a1 + 640),
               NdisMSendNetBufferListsComplete);
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a2 + 4) = v2;
  return result;
}
