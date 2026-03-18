/*
 * XREFs of ?Create@CKernelTransport@@SAJHPEAPEAVCTransport@@@Z @ 0x180222E98
 * Callers:
 *     ?Initialize@CConnection@@QEAAJH@Z @ 0x180222CBC (-Initialize@CConnection@@QEAAJH@Z.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CKernelTransport@@AEAA@XZ @ 0x180263108 (--0CKernelTransport@@AEAA@XZ.c)
 *     ?Initialize@CKernelTransport@@AEAAJH@Z @ 0x180263264 (-Initialize@CKernelTransport@@AEAAJH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKernelTransport::Create(int a1, struct CTransport **a2)
{
  CKernelTransport *v4; // rax
  CKernelTransport *v5; // rax
  struct CTransport *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx

  v4 = (CKernelTransport *)MIDL_user_allocate(0x20uLL);
  if ( v4
    && (*(_OWORD *)v4 = 0LL, *((_OWORD *)v4 + 1) = 0LL, v5 = CKernelTransport::CKernelTransport(v4), (v6 = v5) != 0LL) )
  {
    v7 = CKernelTransport::Initialize(v5, a1);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x5Au, 0LL);
      (**(void (__fastcall ***)(struct CTransport *, __int64))v6)(v6, 1LL);
    }
    else
    {
      *a2 = v6;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x59u, 0LL);
  }
  return v8;
}
