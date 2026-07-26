/*
 * XREFs of NdisReadPcmciaAttributeMemory @ 0x1400DE130
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ndisGetSetBusConfigSpace @ 0x1400DDDE4 (ndisGetSetBusConfigSpace.c)
 */

ULONG __stdcall NdisReadPcmciaAttributeMemory(NDIS_HANDLE NdisAdapterHandle, ULONG Offset, PVOID Buffer, ULONG Length)
{
  ULONG v6; // ebp
  ULONG SetBusConfigSpace; // eax
  ULONG v9; // ebx
  char v11[4]; // [rsp+30h] [rbp-28h]

  v6 = Offset;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Offset) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      Offset,
      7,
      24,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      (char)NdisAdapterHandle);
  }
  SetBusConfigSpace = ndisGetSetBusConfigSpace((__int64)NdisAdapterHandle, v6, (__int64)Buffer, Length, 1u, 1);
  v9 = SetBusConfigSpace;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v11 = SetBusConfigSpace;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      7u,
      0x19u,
      (struct _GUID *)&WPP_4816aa3b0baa34f1d8e04600f3680c92_Traceguids,
      (char)NdisAdapterHandle,
      *(_DWORD *)v11);
  }
  return v9;
}
