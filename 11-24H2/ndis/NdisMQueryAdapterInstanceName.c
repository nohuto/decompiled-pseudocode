/*
 * XREFs of NdisMQueryAdapterInstanceName @ 0x14008EB00
 * Callers:
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x14014A704 (-Initialize@NdisPoll@@QEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 */

NDIS_STATUS __stdcall NdisMQueryAdapterInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE MiniportHandle)
{
  NDIS_HANDLE v2; // rdi
  unsigned __int16 v4; // bp
  wchar_t *Pool2; // rax
  wchar_t *v6; // rsi
  NDIS_STATUS v7; // ebx
  char v9; // [rsp+28h] [rbp-30h]

  v2 = MiniportHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)MiniportHandle;
    LOBYTE(MiniportHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)MiniportHandle,
      13,
      10,
      (struct _GUID *)&WPP_c884a764ce4f344e81b00742df278ddf_Traceguids,
      v9);
  }
  v4 = *(_WORD *)(*((_QWORD *)v2 + 482) + 2LL);
  Pool2 = (wchar_t *)ExAllocatePool2(64LL, v4, 1851868238LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    pAdapterInstanceName->Buffer = Pool2;
    pAdapterInstanceName->MaximumLength = v4;
    pAdapterInstanceName->Length = 0;
    v7 = (RtlAppendUnicodeStringToString(pAdapterInstanceName, *((PCUNICODE_STRING *)v2 + 482)) >> 31) & 0xC0000001;
    if ( v7 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    v7 = -1073741670;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      (struct _GUID *)&WPP_c884a764ce4f344e81b00742df278ddf_Traceguids,
      (char)v2,
      v7);
  return v7;
}
