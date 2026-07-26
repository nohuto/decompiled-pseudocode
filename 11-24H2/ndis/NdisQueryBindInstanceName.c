/*
 * XREFs of NdisQueryBindInstanceName @ 0x1400B8900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qql @ 0x14002BC80 (WPP_RECORDER_SF_qql.c)
 */

NDIS_STATUS __stdcall NdisQueryBindInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE BindingContext)
{
  _QWORD *v2; // rdi
  NDIS_STATUS v4; // ebx
  __int64 v5; // r14
  const UNICODE_STRING *v6; // rsi
  unsigned __int16 MaximumLength; // r12
  wchar_t *Pool2; // rax
  wchar_t *v9; // rbp
  char v11; // [rsp+28h] [rbp-40h]

  v2 = BindingContext;
  v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)BindingContext;
    LOBYTE(BindingContext) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)BindingContext,
      6,
      52,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      v11);
  }
  v5 = v2[3];
  v6 = *(const UNICODE_STRING **)(v5 + 3856);
  if ( v6 )
  {
    MaximumLength = v6->MaximumLength;
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, MaximumLength, 1851868238LL);
    v9 = Pool2;
    if ( Pool2 )
    {
      pAdapterInstanceName->Buffer = Pool2;
      pAdapterInstanceName->Length = 0;
      pAdapterInstanceName->MaximumLength = MaximumLength;
      v4 = (RtlAppendUnicodeStringToString(pAdapterInstanceName, v6) >> 31) & 0xC0000001;
      if ( v4 )
        ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x35u,
      (struct _GUID *)&WPP_ae366525395e343a98801eaac4c5345b_Traceguids,
      (char)v2,
      v5,
      v4);
  return v4;
}
