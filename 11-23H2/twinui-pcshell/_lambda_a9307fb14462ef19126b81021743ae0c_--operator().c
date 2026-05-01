/*
 * XREFs of _lambda_a9307fb14462ef19126b81021743ae0c_::operator() @ 0x1804E780C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___::Run @ 0x1804EC1C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a9307fb14462ef19126b81021743ae0c___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_a9307fb14462ef19126b81021743ae0c_::operator()(_QWORD *a1)
{
  PCWSTR StringRawBuffer; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // esi
  __int64 v6; // [rsp+50h] [rbp+20h] BYREF
  __int64 v7; // [rsp+58h] [rbp+28h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+30h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 280LL) + 184LL))(*(_QWORD *)(*a1 + 280LL), &v6);
  if ( v6 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*a1 + 304LL), 0LL);
    v7 = -1LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*a1 + 8LL) + 584LL))(*a1 + 8LL, &v7);
    v3 = *((_DWORD *)a1 + 6);
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( !v4 )
      {
        (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v6 + 24LL))(
          v6,
          StringRawBuffer,
          v7,
          a1[2],
          1);
        goto LABEL_11;
      }
      if ( v4 != 1 )
        goto LABEL_11;
    }
    else
    {
      (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, _DWORD))(*(_QWORD *)v6 + 24LL))(
        v6,
        StringRawBuffer,
        v7,
        a1[2],
        0);
    }
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(*a1 + 280LL) + 208LL))(
      *(_QWORD *)(*a1 + 280LL),
      &SRWLock);
    v5 = ((*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 144LL))(*a1) - 4 > 1) + 2;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    (*(void (__fastcall **)(__int64, PCWSTR, __int64, _QWORD, int))(*(_QWORD *)v6 + 24LL))(
      v6,
      StringRawBuffer,
      v7,
      a1[2],
      v5);
  }
LABEL_11:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v6);
}
