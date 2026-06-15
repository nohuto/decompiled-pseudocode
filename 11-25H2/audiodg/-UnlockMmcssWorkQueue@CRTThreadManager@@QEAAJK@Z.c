/*
 * XREFs of ?UnlockMmcssWorkQueue@CRTThreadManager@@QEAAJK@Z @ 0x14004C34C
 * Callers:
 *     ??1CAPOServiceProvider@@UEAA@XZ @ 0x14003A4CC (--1CAPOServiceProvider@@UEAA@XZ.c)
 * Callees:
 *     ??1?$CSAutoLock@$00@@QEAA@XZ @ 0x14002CC20 (--1-$CSAutoLock@$00@@QEAA@XZ.c)
 *     std::list_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy_____::remove_if__lambda_e0016ce6237c0b2005737692aaf38648___ @ 0x14006DB08 (std--list_wil--com_ptr_t_CLocalMmcssWorkQueue_wil--err_returncode_policy__std--allocator_wil--co.c)
 */

__int64 __fastcall CRTThreadManager::UnlockMmcssWorkQueue(CRTThreadManager *this, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  if ( ((*((_DWORD *)this + 4) - 2) & 0xFFFFFFFD) == 0 )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v6 = v4;
    std::list_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_CLocalMmcssWorkQueue_wil::err_returncode_policy_____::remove_if__lambda_e0016ce6237c0b2005737692aaf38648___(
      (char *)this + 88,
      a2);
    CSAutoLock<1>::~CSAutoLock<1>(&v6);
  }
  return 0LL;
}
