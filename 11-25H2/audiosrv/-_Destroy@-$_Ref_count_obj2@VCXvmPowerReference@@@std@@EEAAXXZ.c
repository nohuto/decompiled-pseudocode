/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VCXvmPowerReference@@@std@@EEAAXXZ @ 0x180104320
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18001681C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall std::_Ref_count_obj2<CXvmPowerReference>::_Destroy(__int64 a1)
{
  __int64 v1; // rdi
  struct _TP_TIMER *v3; // rcx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  std::_Mutex_base::lock((std::_Mutex_base *)(v1 + 40));
  if ( (*(_DWORD *)(v1 + 32))-- == 1 )
  {
    v3 = *(struct _TP_TIMER **)(v1 + 72);
    if ( v3 )
    {
      pftDueTime.dwLowDateTime = -200000000;
      pftDueTime.dwHighDateTime = -1;
      SetThreadpoolTimer(v3, &pftDueTime, 0, 0x64u);
    }
  }
  return _Mtx_unlock((_Mtx_t)(v1 + 40));
}
