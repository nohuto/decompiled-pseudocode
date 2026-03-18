/*
 * XREFs of ?HrFindInterface@CSwapChainBuffer@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802CD160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwapChainBuffer::HrFindInterface(CSwapChainBuffer *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_462c710f_5601_454b_b804_03effd995c26.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_462c710f_5601_454b_b804_03effd995c26.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_462c710f_5601_454b_b804_03effd995c26.Data4;
    if ( !v4 )
      goto LABEL_8;
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4a0d160a_4ec2_4894_81e8_077405883c73.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4a0d160a_4ec2_4894_81e8_077405883c73.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4a0d160a_4ec2_4894_81e8_077405883c73.Data4;
    if ( v5 )
    {
      return 2147500034LL;
    }
    else
    {
LABEL_8:
      *a3 = this;
      return 0LL;
    }
  }
  return result;
}
