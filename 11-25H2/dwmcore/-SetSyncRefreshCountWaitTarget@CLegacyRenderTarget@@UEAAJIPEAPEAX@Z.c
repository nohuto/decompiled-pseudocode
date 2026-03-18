/*
 * XREFs of ?SetSyncRefreshCountWaitTarget@CLegacyRenderTarget@@UEAAJIPEAPEAX@Z @ 0x1801C0BA0
 * Callers:
 *     ?WaitForNextTick@CMonitorClock@@UEAA?AW4WaitResult@ICompositorClock@@PEAX@Z @ 0x1801BF400 (-WaitForNextTick@CMonitorClock@@UEAA-AW4WaitResult@ICompositorClock@@PEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800FFE90 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::SetSyncRefreshCountWaitTarget(
        CLegacyRenderTarget *this,
        unsigned int a2,
        void **a3)
{
  __int64 *v5; // rcx
  void **v7; // rdi
  __int64 v8; // rax
  int v9; // ebp
  __int64 result; // rax
  unsigned int v11; // ebx
  void *v12; // [rsp+38h] [rbp-20h] BYREF
  char v13; // [rsp+40h] [rbp-18h]

  v5 = (__int64 *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    v7 = (void **)((char *)this + 33640);
    if ( (unsigned __int64)(*((_QWORD *)this + 4205) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_6;
    v8 = *v5;
    v12 = 0LL;
    v13 = 1;
    v9 = (*(__int64 (__fastcall **)(__int64 *, void **))(v8 + 72))(v5, &v12);
    if ( v13 )
    {
      wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        v7,
        v12);
      v7 = (void **)((char *)this + 33640);
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x366u, 0LL);
      return (unsigned int)v9;
    }
    else
    {
LABEL_6:
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 56LL))(*((_QWORD *)this + 4), a2);
      v11 = result;
      if ( (int)result < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, result, 0x369u, 0LL);
        return v11;
      }
      else
      {
        *a3 = *v7;
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x36Fu, 0LL);
    return 2291662854LL;
  }
  return result;
}
