/*
 * XREFs of ?IndicateReceivedNbls@NdisPoll@@AEAAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140067480
 * Callers:
 *     ?EvtIndicateReceivedNbls@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z @ 0x140067460 (-EvtIndicateReceivedNbls@NdisPoll@@CAXPEAXPEAU_EXECUTION_CONTEXT_POLL_PARAMETERS@@@Z.c)
 * Callees:
 *     NdisMIndicateReceiveNetBufferLists @ 0x14001DE10 (NdisMIndicateReceiveNetBufferLists.c)
 */

void __fastcall NdisPoll::IndicateReceivedNbls(NdisPoll *this, struct _EXECUTION_CONTEXT_POLL_PARAMETERS *a2)
{
  ULONG i; // ebx
  _QWORD *v5; // rax
  int v6; // ecx
  struct _NET_BUFFER_LIST *v7; // rdx

  i = *((_DWORD *)this + 68);
  if ( i == -1 )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 33);
    for ( i = 0; v5; ++i )
      v5 = (_QWORD *)*v5;
  }
  else if ( i > *((_DWORD *)this + 62) )
  {
    NT_ASSERT("numberOfIndicatedNbls <= m_pollData.Receive.MaxNblsToIndicate");
  }
  v6 = *((_DWORD *)this + 70);
  if ( (v6 & 0xFFFF20FF) != 0 )
    NT_ASSERT(
      "(static_cast<decltype((m_pollData.Receive.Flags) & (~allowedReceiveFlags))>(static_cast<::wil::integral_from_enum<"
      "decltype(m_pollData.Receive.Flags)>>(m_pollData.Receive.Flags) & static_cast<::wil::integral_from_enum<decltype(~a"
      "llowedReceiveFlags)>>(~allowedReceiveFlags)) == static_cast<decltype((m_pollData.Receive.Flags) & (~allowedReceiveFlags))>(0))");
  v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)this + 33);
  if ( v7 )
    NdisMIndicateReceiveNetBufferLists(*((NDIS_HANDLE *)this + 75), v7, 0, i, v6 | (*(_BYTE *)a2 == 2));
  *((_QWORD *)this + 33) = 0LL;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)a2 + 1) = i;
}
