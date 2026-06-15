/*
 * XREFs of ??$make_shared@VCSerialWorkQueue@@$$V@std@@YA?AV?$shared_ptr@VCSerialWorkQueue@@@0@XZ @ 0x140015DD4
 * Callers:
 *     ?StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ @ 0x140015CE0 (-StartSendingNotifications@CAPOProcessingHostObject@@QEAAJXZ.c)
 * Callees:
 *     ??$_Construct_in_place@VCSerialWorkQueue@@$$V@std@@YAXAEAVCSerialWorkQueue@@@Z @ 0x140015E40 (--$_Construct_in_place@VCSerialWorkQueue@@$$V@std@@YAXAEAVCSerialWorkQueue@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x140058E04 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<CSerialWorkQueue,>(_QWORD *a1)
{
  _QWORD *result; // rax
  _DWORD *v3; // [rsp+40h] [rbp+8h]

  v3 = operator new(0x90uLL);
  *(_OWORD *)v3 = 0LL;
  v3[2] = 1;
  v3[3] = 1;
  *(_QWORD *)v3 = &std::_Ref_count_obj2<CSerialWorkQueue>::`vftable';
  std::_Construct_in_place<CSerialWorkQueue,>(v3 + 4);
  *a1 = v3 + 4;
  result = a1;
  a1[1] = v3;
  return result;
}
