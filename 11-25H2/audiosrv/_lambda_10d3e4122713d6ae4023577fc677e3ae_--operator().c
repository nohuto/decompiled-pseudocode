/*
 * XREFs of _lambda_10d3e4122713d6ae4023577fc677e3ae_::operator() @ 0x18011CF94
 * Callers:
 *     ?AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z @ 0x18011D27C (-AddRule@DynamicAudioEndpointManager@@QEAAJPEAUIAudioProcess@@PEAU_DynamicRoutingRule@@PEA_J@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_10d3e4122713d6ae4023577fc677e3ae_::operator()(_QWORD **a1)
{
  _QWORD *v1; // rax
  char v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = *a1;
  v5 = 0;
  v4 = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD, char *, char *))(*(_QWORD *)*v1 + 80LL))(*v1, *a1[1], &v5, &v4);
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 96LL))(**a1, *a1[1], a1[2]);
}
