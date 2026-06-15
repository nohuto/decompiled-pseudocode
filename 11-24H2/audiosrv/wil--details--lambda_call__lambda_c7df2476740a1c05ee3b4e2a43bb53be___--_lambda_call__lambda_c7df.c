/*
 * XREFs of wil::details::lambda_call__lambda_c7df2476740a1c05ee3b4e2a43bb53be___::_lambda_call__lambda_c7df2476740a1c05ee3b4e2a43bb53be___ @ 0x180100FF0
 * Callers:
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$6 @ 0x18016B59D (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$6.c)
 *     _CVolumeSoftware::Make_::_1_::dtor$1 @ 0x18017060B (_CVolumeSoftware--Make_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_c7df2476740a1c05ee3b4e2a43bb53be___::_lambda_call__lambda_c7df2476740a1c05ee3b4e2a43bb53be___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 16LL))(**(_QWORD **)a1);
  }
  return result;
}
