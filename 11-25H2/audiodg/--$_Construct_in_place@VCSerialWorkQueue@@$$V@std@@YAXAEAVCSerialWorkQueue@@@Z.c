/*
 * XREFs of ??$_Construct_in_place@VCSerialWorkQueue@@$$V@std@@YAXAEAVCSerialWorkQueue@@@Z @ 0x140015E40
 * Callers:
 *     ??$make_shared@VCSerialWorkQueue@@$$V@std@@YA?AV?$shared_ptr@VCSerialWorkQueue@@@0@XZ @ 0x140015DD4 (--$make_shared@VCSerialWorkQueue@@$$V@std@@YA-AV-$shared_ptr@VCSerialWorkQueue@@@0@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Construct_in_place<CSerialWorkQueue,>(__int64 a1)
{
  __int64 v2; // rcx

  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  v2 = a1 + 88;
  *(_QWORD *)v2 = 0LL;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)(v2 + 16) = 0LL;
  *(_QWORD *)(v2 + 24) = 0LL;
  _Mtx_init_in_situ((_Mtx_t)v2, 2);
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 8) = 3;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 1;
  *(_DWORD *)(a1 + 72) = 72;
}
