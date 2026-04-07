/*
 * XREFs of ?ReleaseDecoderCopyBuffers@CBitmapSource@@QEAA_NXZ @ 0x18000B428
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x18000A684 (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
bool __fastcall CBitmapSource::ReleaseDecoderCopyBuffers(CBitmapSource *this)
{
  bool v1; // bl
  int (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  int (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v5 = 0LL;
  v2 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 12);
  v3 = *v2;
  v5 = 0LL;
  if ( (*v3)(v2, &IID_IWICDecoderBitmapSource, &v5) >= 0 )
    v1 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5) == 0;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  return v1;
}
