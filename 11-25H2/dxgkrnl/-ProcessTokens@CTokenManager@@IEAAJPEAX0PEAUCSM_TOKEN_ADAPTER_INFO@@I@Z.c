/*
 * XREFs of ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14000CEB0
 * Callers:
 *     ?TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1400502D0 (-TokenThread@CTokenManager@@UEAAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x14000B4BC (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z @ 0x14000D160 (-ProcessDxgkAdapterTokens@CTokenManager@@IEAAJI@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14002E750 (-InitAdapterCollection@CTokenManager@@IEAAJPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     ?SetTokenThreadProcess@CTokenManager@@IEAAXXZ @ 0x140056488 (-SetTokenThreadProcess@CTokenManager@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::ProcessTokens(
        CTokenManager *this,
        HANDLE Handle,
        void *a3,
        struct CSM_TOKEN_ADAPTER_INFO *a4,
        unsigned int a5)
{
  ULONG v9; // r12d
  __int64 v10; // rax
  _OWORD *v11; // r15
  __int64 Win32kImportTable; // rax
  NTSTATUS inited; // ebx
  NTSTATUS v15; // eax
  int v16; // eax
  unsigned int v17; // r14d
  char *v18; // rbx
  int v19; // esi
  CTokenManager *v20; // rax
  void *v21; // rcx
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v23[3]; // [rsp+38h] [rbp-80h] BYREF
  __int64 v24; // [rsp+68h] [rbp-50h]

  v24 = 0LL;
  v9 = a5 + 2;
  memset(v23, 0, sizeof(v23));
  if ( a5 <= 5 )
  {
    v11 = v23;
  }
  else
  {
    v10 = 8LL * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v10 = -1LL;
    v11 = (_OWORD *)operator new[](v10, 1650675028LL, 256LL);
    if ( !v11 )
      return 3221225495LL;
  }
  *(_QWORD *)v11 = Handle;
  *((_QWORD *)v11 + 1) = a3;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)this + 4, (signed __int64)KeGetCurrentThread(), 0LL) )
  {
    inited = -2147483631;
  }
  else
  {
    CTokenManager::SetTokenThreadProcess(this);
    Win32kImportTable = DxgkGetWin32kImportTable();
    if ( (*(unsigned int (__fastcall **)(struct CSM_TOKEN_ADAPTER_INFO *, _QWORD))(Win32kImportTable + 80))(a4, a5) )
    {
      v21 = (void *)*((_QWORD *)this + 8);
      Timeout.LowPart = 0;
      ZwSetEvent(v21, (PLONG)&Timeout);
    }
    inited = CTokenManager::InitAdapterCollection(this, a4, (void **)v11 + 2, a5);
    if ( inited >= 0 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = ZwWaitForMultipleObjects(v9, (HANDLE *)v11, WaitAny, 1u, 0LL);
          inited = v15;
          if ( v15 >= 0 )
            break;
          if ( v15 == -1073741801 || v15 == -1073741789 )
          {
            Timeout.QuadPart = -160000LL;
            inited = ZwWaitForSingleObject(Handle, 0, &Timeout);
            if ( inited == 258 )
              continue;
          }
          goto LABEL_11;
        }
        if ( !v15 || v15 == 192 || v15 == 257 )
          break;
        if ( v15 == 1 )
        {
          CTokenManager::ProcessGdiSysmemTokens(this);
        }
        else
        {
          v16 = *((_DWORD *)this + 22);
          if ( v16 && inited <= (unsigned int)(v16 + 1) )
          {
            v17 = inited - 2;
            v18 = 0LL;
            v19 = -1073741275;
            ExAcquirePushLockSharedEx((char *)this + 152, 0LL);
            *((_BYTE *)this + 160) = 0;
            if ( v17 < *((_DWORD *)this + 29) )
            {
              v20 = (CTokenManager *)*((_QWORD *)this + 17);
              while ( v20 != (CTokenManager *)((char *)this + 136) )
              {
                v18 = (char *)v20 - 8;
                if ( !v20 )
                  v18 = 0LL;
                if ( !v17 )
                {
                  v19 = 0;
                  break;
                }
                v20 = *(CTokenManager **)v20;
                --v17;
              }
            }
            ExReleasePushLockSharedEx((char *)this + 152, 0LL);
            if ( v19 >= 0 )
              CTokenManager::ProcessDxgkAdapterTokens(this, *((_DWORD *)v18 + 10));
          }
        }
      }
      inited = 0;
    }
LABEL_11:
    *((_QWORD *)this + 4) = 0LL;
  }
  if ( v11 != v23 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)inited;
}
