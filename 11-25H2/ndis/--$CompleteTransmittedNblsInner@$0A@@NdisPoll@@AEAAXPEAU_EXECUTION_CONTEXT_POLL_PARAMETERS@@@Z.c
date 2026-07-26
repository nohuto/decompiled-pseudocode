/*
 * XREFs of ??$CompleteTransmittedNblsInner@$0A@@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003A0C
 * Callers:
 *     ?EvtCompleteTransmittedNblsThunk@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140003AA0 (-EvtCompleteTransmittedNblsThunk@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisMSendNetBufferListsComplete @ 0x140047050 (NdisMSendNetBufferListsComplete.c)
 */

void __fastcall NdisPoll::CompleteTransmittedNblsInner<0>(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  int v5; // eax
  struct _NET_BUFFER_LIST *v6; // rdx

  v2 = *(_DWORD *)(a1 + 200);
  if ( v2 != -1 && v2 > *(_DWORD *)(a1 + 176) )
    NT_ASSERT("numberOfCompletedNbls <= m_pollData.Transmit.MaxNblsToComplete");
  v5 = *(_DWORD *)(a1 + 208);
  if ( (v5 & 0xFFFFFFF9) != 0 )
    NT_ASSERT(
      "(static_cast<decltype((m_pollData.Transmit.SendCompleteFlags) & (~allowedSendCompleteFlags))>(static_cast<::wil::i"
      "ntegral_from_enum<decltype(m_pollData.Transmit.SendCompleteFlags)>>(m_pollData.Transmit.SendCompleteFlags) & stati"
      "c_cast<::wil::integral_from_enum<decltype(~allowedSendCompleteFlags)>>(~allowedSendCompleteFlags)) == static_cast<"
      "decltype((m_pollData.Transmit.SendCompleteFlags) & (~allowedSendCompleteFlags))>(0))");
  v6 = *(struct _NET_BUFFER_LIST **)(a1 + 192);
  if ( v6 )
    NdisMSendNetBufferListsComplete(*(NDIS_HANDLE *)(a1 + 600), v6, v5 | (*(_BYTE *)a2 == 2));
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a2 + 4) = v2;
}
