/*
 * XREFs of ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x14010BD50
 * Callers:
 *     ??_GCInputQueue@@UEAAPEAXI@Z @ 0x14010BD10 (--_GCInputQueue@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall CInputQueue::MarkInvalid(CInputQueue *this, __int64 a2)
{
  __int64 v2; // rdi
  void (__fastcall *v4)(__int64, CInputQueue *); // rax

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    *((_QWORD *)this + 2) = 0LL;
    v4 = *(void (__fastcall **)(__int64, CInputQueue *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this, a2) + 48) + 4168LL);
    if ( v4 )
      v4(v2, this);
  }
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 16) = 0;
}
