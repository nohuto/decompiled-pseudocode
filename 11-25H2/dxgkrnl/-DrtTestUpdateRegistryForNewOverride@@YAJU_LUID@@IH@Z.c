/*
 * XREFs of ?DrtTestUpdateRegistryForNewOverride@@YAJU_LUID@@IH@Z @ 0x1401C55AC
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x140039A2C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??1DXGSESSIONMODECHANGELOCK@@QEAA@XZ @ 0x14003EC00 (--1DXGSESSIONMODECHANGELOCK@@QEAA@XZ.c)
 *     ?WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z @ 0x1401C58C0 (-WriteDpiToRegistry@DpiPersistence@@YAJAEBU_LUID@@IK@Z.c)
 */

__int64 __fastcall DrtTestUpdateRegistryForNewOverride(struct _LUID a1, unsigned int a2, unsigned int a3)
{
  int v5; // eax
  unsigned int v6; // r9d
  __int64 v7; // rdi
  struct _LUID v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+78h] [rbp+20h] BYREF

  v9 = a1;
  v10 = 0;
  v5 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v10, 0);
  v7 = v5;
  if ( v5 >= 0 )
  {
    LODWORD(v7) = DpiPersistence::WriteDpiToRegistry((DpiPersistence *)&v9, (const struct _LUID *)a2, a3, v6);
  }
  else
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 2406;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed to acquire session mode change lock shared (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGSESSIONMODECHANGELOCK::~DXGSESSIONMODECHANGELOCK((DXGSESSIONMODECHANGELOCK *)&v10);
  return (unsigned int)v7;
}
