/*
 * XREFs of ?OnInputReceived@MPCRawInputProvider@@IEAAJXZ @ 0x1800CD394
 * Callers:
 *     ?InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z @ 0x1800CD0B0 (-InputReceivedStatic@MPCRawInputProvider@@KAJPEAXK0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BE7C8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800CCEA0 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCRawInputProvider::OnInputReceived(MPCRawInputProvider *this)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  char **v4; // rax
  char *v5; // rdi
  char *v6; // rbp
  char *i; // rsi
  int v8; // eax
  int v10[4]; // [rsp+20h] [rbp-C08h] BYREF
  __int64 v11; // [rsp+30h] [rbp-BF8h]
  _BYTE v12[3008]; // [rsp+40h] [rbp-BE8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C28h] [rbp+0h]

  *(_OWORD *)v10 = 0LL;
  v2 = 0LL;
  v11 = 0LL;
  if ( std::_Atomic_storage<bool,1>::load((__int64)this + 80) )
  {
    if ( std::_Atomic_storage<bool,1>::load(v3) )
    {
      MPCRawInputProvider::FlushQueuedDeviceChanges(this);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
      v4 = (char **)((char *)this + 184);
      if ( v10 == (int *)((char *)this + 184) )
      {
        v6 = *(char **)&v10[2];
        v5 = *(char **)v10;
      }
      else
      {
        v5 = *v4;
        *(_QWORD *)v10 = *v4;
        *v4 = 0LL;
        v6 = (char *)*((_QWORD *)this + 24);
        *(_QWORD *)&v10[2] = v6;
        *((_QWORD *)this + 24) = 0LL;
        v2 = *((_QWORD *)this + 25);
        v11 = v2;
        *((_QWORD *)this + 25) = 0LL;
      }
      if ( this != (MPCRawInputProvider *)-96LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
      for ( i = v5; i != v6; i += 3008 )
      {
        memcpy_0(v12, i, sizeof(v12));
        v8 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(*((_QWORD *)this + 2), v12);
        if ( v8 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0xBF,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
            (const char *)(unsigned int)v8,
            v10[0]);
      }
    }
    else
    {
      v5 = *(char **)v10;
    }
    if ( v5 )
      std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)((v2 - (__int64)v5) >> 6 << 6));
  }
  return 0LL;
}
