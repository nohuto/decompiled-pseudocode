/*
 * XREFs of ?Initialize@DXGK_TRANSPORT_BUFFER@@QEAAJPEAVADAPTER_RENDER@@_K@Z @ 0x14020DBAC
 * Callers:
 *     ?PrepareLiveMigration@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU_GPUP_MIGRATION_BUFFER@@PEAI@Z @ 0x140219FE0 (-PrepareLiveMigration@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_GPUP_PREPARE_LIVE_MIGRATION@@PEAU.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1400391D4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGK_TRANSPORT_BUFFER::Initialize(DXGK_TRANSPORT_BUFFER *this, struct ADAPTER_RENDER *a2)
{
  int v3; // edi
  struct DXGPROCESS *Current; // rax

  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0x2000000LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64, char *))(*(_QWORD *)(*((_QWORD *)a2 + 95) + 8LL) + 1240LL))(
         *((_QWORD *)a2 + 96),
         (char *)this + 32,
         0x2000000LL,
         (char *)this + 8);
  if ( v3 >= 0 )
  {
    Current = DXGPROCESS::GetCurrent();
    *(_DWORD *)this = DXGPROCESS::AllocHandleSafe((__int64)Current, (__int64)this, 0x14u);
    *((_BYTE *)this + 40) = 1;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3075;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to initialize and map Transport buffer",
      3075LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v3;
}
