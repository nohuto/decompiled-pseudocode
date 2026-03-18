/*
 * XREFs of ?Initialize@CToken@@MEAAJXZ @ 0x140035AF0
 * Callers:
 *     ?InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z @ 0x14009BD24 (-InitializeCloned@CFlipToken@@IEAAJ_KPEBUtagCloneableFlipTokenData@@@Z.c)
 *     ?Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z @ 0x1400A1628 (-Initialize@CFlipContentToken@@QEAAJIPEBUtagRECT@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CToken::Initialize(CToken *this)
{
  int v2; // edi
  __int64 v4; // rdx
  __int64 v5; // r8

  *((_DWORD *)this + 6) = 0;
  if ( !*(_QWORD *)&DXGGLOBAL::m_pGlobal )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2605;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(2605LL, v4, v5, 0LL, 2, -1, L"m_pGlobal != NULL", 45, 0, 0, 0, 0);
    }
  }
  v2 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)(*(_QWORD *)&DXGGLOBAL::m_pGlobal + 304952LL) + 40LL))((char *)this + 96);
  if ( v2 < 0 )
    (*(void (__fastcall **)(CToken *))(*(_QWORD *)this + 56LL))(this);
  return (unsigned int)v2;
}
