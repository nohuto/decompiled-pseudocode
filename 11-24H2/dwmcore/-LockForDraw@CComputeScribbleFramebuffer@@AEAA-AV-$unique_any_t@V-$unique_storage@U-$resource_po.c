/*
 * XREFs of ?LockForDraw@CComputeScribbleFramebuffer@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18022394C
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIDCompositionDirectInkSuperWetRenderer@@PEAUComputeScribbleLatencyData@@@Z @ 0x1801C6470 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     McTemplateU0xq_EventWriteTransfer @ 0x1801C6A8C (McTemplateU0xq_EventWriteTransfer.c)
 */

_QWORD *__fastcall CComputeScribbleFramebuffer::LockForDraw(__int64 a1, _QWORD *a2)
{
  int *v2; // rbx
  __int64 *v4; // rdi
  __int64 v6; // rcx
  _QWORD *result; // rax

  v2 = (int *)(a1 + 260);
  v4 = (__int64 *)(a1 + 248);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(a1, &EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Start, *v4, *v2);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100000) != 0 )
    McTemplateU0xq_EventWriteTransfer(v6, &EVTDESC_COMPUTESCRIBBLE_SCRIBBLEBLOCKED_Stop, *v4, *v2);
  result = a2;
  *(_BYTE *)(a1 + 168) = 1;
  *a2 = a1 + 80;
  return result;
}
