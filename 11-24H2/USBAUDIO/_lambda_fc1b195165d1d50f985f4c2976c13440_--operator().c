/*
 * XREFs of _lambda_fc1b195165d1d50f985f4c2976c13440_::operator() @ 0x140014830
 * Callers:
 *     _scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440____::_2_::scope_exit::_scope_exit @ 0x14000B73C (_scope_exit__lambda_fc1b195165d1d50f985f4c2976c13440____--_2_--scope_exit--_scope_exit.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005BFC (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

ULONG *__fastcall lambda_fc1b195165d1d50f985f4c2976c13440_::operator()(__int64 a1)
{
  IRP *v2; // rcx
  int v3; // edx
  int v4; // r8d
  ULONG *result; // rax

  v2 = **(IRP ***)a1;
  v2->IoStatus.Status = **(_DWORD **)(a1 + 8);
  IofCompleteRequest(v2, 0);
  LOBYTE(v4) = 1;
  LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
  result = &WPP_RECORDER_INITIALIZED;
  if ( *(ULONG **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    LOBYTE(v4) = 0;
  if ( (_BYTE)v3 || (_BYTE)v4 )
    return (ULONG *)WPP_RECORDER_AND_TRACE_SF_d(
                      WPP_GLOBAL_Control->AttachedDevice,
                      v3,
                      v4,
                      WPP_GLOBAL_Control->DeviceExtension);
  return result;
}
