/*
 * XREFs of ?Delete@DxgkCompositionObject@@SAXPEAX@Z @ 0x140026500
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@DxgkAttachToObjectSession@@QEAAJXZ @ 0x1400265C8 (-Attach@DxgkAttachToObjectSession@@QEAAJXZ.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400266E0 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400267C0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DxgkCompositionObject::Delete(_QWORD *a1)
{
  bool v2; // zf
  int v3; // eax
  _BYTE v4[256]; // [rsp+20h] [rbp-168h] BYREF
  _BYTE v5[8]; // [rsp+120h] [rbp-68h] BYREF
  PVOID Object; // [rsp+128h] [rbp-60h]
  int v7; // [rsp+130h] [rbp-58h]
  struct _KAPC_STATE ApcState; // [rsp+138h] [rbp-50h] BYREF

  Object = 0LL;
  v2 = a1[2] == 0LL;
  v3 = *((_DWORD *)a1 + 2);
  v5[0] = 0;
  v7 = v3;
  if ( !v2 )
  {
    if ( (int)DxgkAttachToObjectSession::Attach((DxgkAttachToObjectSession *)v5) >= 0 )
    {
      CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v4);
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)a1[2] + 32LL))(a1[2], a1);
      CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v4);
    }
    if ( v5[0] )
      KeUnstackDetachProcess(&ApcState);
    if ( Object )
      ObfDereferenceObject(Object);
  }
}
