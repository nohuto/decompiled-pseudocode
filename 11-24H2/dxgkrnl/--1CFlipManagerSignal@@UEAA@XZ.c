/*
 * XREFs of ??1CFlipManagerSignal@@UEAA@XZ @ 0x14004EB34
 * Callers:
 *     ??_ECFlipManagerSignal@@UEAAPEAXI@Z @ 0x14004EAF0 (--_ECFlipManagerSignal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ @ 0x140017D78 (-ServiceBufferSignals@CFlipManagerSignal@@QEAAXXZ.c)
 */

void __fastcall CFlipManagerSignal::~CFlipManagerSignal(PVOID *this)
{
  PVOID v2; // rcx
  struct _KEVENT *v3; // rcx
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rax

  *this = &CFlipManagerSignal::`vftable';
  CFlipManagerSignal::ServiceBufferSignals((CFlipManagerSignal *)this);
  v2 = this[6];
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (struct _KEVENT *)this[3];
  if ( v3 )
  {
    KeSetEvent(v3, 1, 0);
    ObfDereferenceObject(this[3]);
  }
  v4 = (unsigned __int64)(this + 1);
  v5 = -(__int64)this;
  v6 = v4 & -(__int64)(v5 != 0);
  v7 = *(_QWORD *)v6;
  if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *(_QWORD **)((v4 & -(__int64)(v5 != 0)) + 8), *v8 != v6) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
}
