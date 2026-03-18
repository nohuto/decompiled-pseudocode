/*
 * XREFs of ?Initialize@CKernelTransport@@AEAAJH@Z @ 0x180263264
 * Callers:
 *     ?Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z @ 0x180222E98 (-Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKernelTransport::Initialize(CKernelTransport *this, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  int Connection; // eax
  int v7; // eax

  v2 = *((_QWORD *)this + 3);
  v5 = 0;
  Connection = NtDCompositionCreateConnection(v2 != 0, *((_QWORD *)this + 2), (char *)this + 8);
  if ( Connection >= 0 )
  {
    if ( v2 )
    {
      v7 = (***((__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))this + 3))(
             *((_QWORD *)this + 3),
             *((_QWORD *)this + 1),
             a2);
      v5 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xA6u, 0LL);
    }
  }
  else
  {
    v5 = Connection | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, Connection | 0x10000000, 0xA2u, 0LL);
  }
  return v5;
}
