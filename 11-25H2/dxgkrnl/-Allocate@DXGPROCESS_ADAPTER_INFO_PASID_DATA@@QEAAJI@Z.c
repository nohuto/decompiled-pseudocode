/*
 * XREFs of ?Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z @ 0x1403B9324
 * Callers:
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1403B8AE0 (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGPROCESS_ADAPTER_INFO_PASID_DATA::Allocate(
        DXGPROCESS_ADAPTER_INFO_PASID_DATA *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rax
  const wchar_t *v10; // r9
  unsigned __int64 v11; // rax
  __int64 v12; // rax

  *((_DWORD *)this + 4) = a2;
  if ( a2 == 1 )
  {
    *((_QWORD *)this + 3) = this;
    *((_QWORD *)this + 4) = (char *)this + 8;
    return 0LL;
  }
  v6 = 4LL * a2;
  if ( !is_mul_ok(a2, 4uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, 256LL, a4);
  *((_QWORD *)this + 3) = v7;
  if ( v7 )
  {
    v11 = 8LL * *((unsigned int *)this + 4);
    if ( !is_mul_ok(*((unsigned int *)this + 4), 8uLL) )
      v11 = -1LL;
    v12 = operator new[](v11, 0x4B677844u, 256LL, v8);
    *((_QWORD *)this + 4) = v12;
    if ( v12 )
      return 0LL;
    WdLogSingleEntry0(6LL);
    v9 = 6466LL;
    v10 = L"Failed to allocate pPasidDevices array";
  }
  else
  {
    WdLogSingleEntry0(6LL);
    v9 = 6460LL;
    v10 = L"Failed to allocate Pasid array";
  }
  WdLogGlobalForLineNumber = v9;
  DxgkLogInternalTriageEvent(0LL, 262145, 0xFFFFFFFFLL, v10, v9, 0LL, 0LL, 0LL, 0LL);
  return 3221225495LL;
}
