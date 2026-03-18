/*
 * XREFs of ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x14000B4BC
 * Callers:
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x14000CEB0 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 * Callees:
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x14000B5D0 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD60 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x14000DD98 (-ReleaseTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x140035694 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CTokenManager::ProcessGdiSysmemTokens(CTokenManager *this)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned int v5; // esi
  __int64 Win32kImportTable; // rax
  int v7; // eax
  __int64 v8; // r9
  int v9; // esi
  unsigned int v10; // r8d
  int v12; // [rsp+48h] [rbp+10h] BYREF
  LONG PreviousState; // [rsp+50h] [rbp+18h] BYREF

  CTokenManager::AcquireTokenManagerLock(this);
  v2 = CTokenManager::EnsureCurrentLegacyTokenBuffer(this);
  if ( v2 >= 0 )
  {
    v3 = *((_QWORD *)this + 24);
    v2 = 0;
    if ( *(_DWORD *)(v3 + 2104) < 0x280u )
      v2 = CLegacyTokenBuffer::Grow(*((CLegacyTokenBuffer **)this + 24));
    v4 = *(_QWORD *)(v3 + 2096);
    v5 = *(_DWORD *)(v3 + 2104);
    if ( v2 >= 0 )
    {
      v12 = 0;
      Win32kImportTable = DxgkGetWin32kImportTable();
      v7 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(Win32kImportTable + 472))(v5, &v12, v4);
      v8 = *((_QWORD *)this + 24);
      v9 = 0;
      v10 = 40 * v12;
      *(_DWORD *)(*(_QWORD *)(v8 + 2088) + 16LL) += v12;
      *(_DWORD *)(*(_QWORD *)(v8 + 2088) + 2068LL) += v10;
      *(_QWORD *)(v8 + 2096) += v10;
      *(_DWORD *)(v8 + 2104) -= v10;
      if ( v7 != -1073741789 )
        v9 = v7;
      v2 = v9;
      if ( v9 >= 0 && v12 )
      {
        PreviousState = 0;
        ZwSetEvent(*((HANDLE *)this + 8), &PreviousState);
      }
    }
  }
  CTokenManager::ReleaseTokenManagerLock(this);
  return (unsigned int)v2;
}
