/*
 * XREFs of ?DeleteOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x140058FF0
 * Callers:
 *     ??1CTokenManager@@AEAA@XZ @ 0x140099E94 (--1CTokenManager@@AEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::DeleteOutstandingAnalogToken(CTokenManager *this)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rcx

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 42);
  if ( v2 )
  {
    (**v2)(v2, 1LL);
    *((_QWORD *)this + 42) = 0LL;
  }
}
