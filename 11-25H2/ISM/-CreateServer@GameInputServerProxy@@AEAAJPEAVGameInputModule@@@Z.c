/*
 * XREFs of ?CreateServer@GameInputServerProxy@@AEAAJPEAVGameInputModule@@@Z @ 0x1800719F0
 * Callers:
 *     ?LoadGameInput@GameInputServerProxy@@AEAAJXZ @ 0x1800716B0 (-LoadGameInput@GameInputServerProxy@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GameInputServerProxy::CreateServer(RTL_SRWLOCK *this, struct GameInputModule *a2)
{
  __int64 (__fastcall *v2)(_DWORD *, GUID *, __int64 *); // rax
  __int64 result; // rax
  RTL_SRWLOCK *v5; // r14
  int v6; // edi
  RTL_SRWLOCK *v7; // rdi
  RTL_SRWLOCK *v8; // rsi
  RTL_SRWLOCK *i; // rbx
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  _DWORD v11[4]; // [rsp+28h] [rbp-18h] BYREF

  v2 = (__int64 (__fastcall *)(_DWORD *, GUID *, __int64 *))*((_QWORD *)a2 + 3);
  v10 = 0LL;
  v11[0] = -10034830;
  v11[1] = 1185990568;
  v11[2] = -143540582;
  v11[3] = -557123954;
  result = v2(v11, &GUID_ff03efb3_9964_4a77_bbf0_2a387f32c83c, &v10);
  if ( (int)result >= 0 )
  {
    AcquireSRWLockExclusive(this + 4);
    v5 = this + 5;
    v6 = (*(__int64 (__fastcall **)(__int64, PVOID, RTL_SRWLOCK *))(*(_QWORD *)v10 + 24LL))(v10, this[6].Ptr, this + 5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    ReleaseSRWLockExclusive(this + 4);
    if ( v6 >= 0 )
    {
      v7 = this + 27;
      AcquireSRWLockExclusive(this + 27);
      v8 = this + 24;
      for ( i = (RTL_SRWLOCK *)v8->Ptr; i != v8; i = (RTL_SRWLOCK *)i->Ptr )
        (*(void (__fastcall **)(PVOID, PVOID, _QWORD))(*(_QWORD *)v5->Ptr + 24LL))(v5->Ptr, i[3].Ptr, LODWORD(i[2].Ptr));
      ReleaseSRWLockExclusive(v7);
      return 0LL;
    }
    else
    {
      return (unsigned int)v6;
    }
  }
  return result;
}
