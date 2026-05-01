/*
 * XREFs of ??1folder_change_reader_state@details@wil@@QEAA@XZ @ 0x180583C7C
 * Callers:
 *     ??_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z @ 0x180584094 (--_Gfolder_change_reader_state@details@wil@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall wil::details::folder_change_reader_state::~folder_change_reader_state(
        wil::details::folder_change_reader_state *this)
{
  struct _TP_IO *v1; // rdi
  HANDLE *v2; // rsi
  RTL_SRWLOCK *NumberOfBytesTransferred; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _TP_IO *)*((_QWORD *)this + 21);
  v2 = (HANDLE *)((char *)this + 120);
  if ( v1 )
  {
    wil::AcquireSRWLockExclusive(&NumberOfBytesTransferred, (RTL_SRWLOCK *)this + 22);
    *((_QWORD *)this + 21) = 0LL;
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&NumberOfBytesTransferred);
    if ( (char *)*v2 - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL
      && (CancelIoEx(*v2, (LPOVERLAPPED)((char *)this + 136)) || GetLastError() != 1168) )
    {
      LODWORD(NumberOfBytesTransferred) = 0;
      GetOverlappedResult(*v2, (LPOVERLAPPED)((char *)this + 136), (LPDWORD)&NumberOfBytesTransferred, 1);
    }
    WaitForThreadpoolIoCallbacks(v1, 1);
    CloseThreadpoolIo(v1);
  }
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(v2);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)this);
}
