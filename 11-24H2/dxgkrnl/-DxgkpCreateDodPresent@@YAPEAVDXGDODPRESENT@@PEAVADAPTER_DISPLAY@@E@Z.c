/*
 * XREFs of ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x140282420
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140369FB0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1400671A0 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1402813D4 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1403ECEB4 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 */

struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(struct ADAPTER_DISPLAY *a1, unsigned __int8 a2)
{
  __int64 v4; // rax
  DXGDODPRESENT *v6; // rbx
  unsigned int i; // edi
  __int64 v8; // [rsp+20h] [rbp-38h]

  v4 = operator new[](3040LL * *((unsigned int *)a1 + 24) + 144, 0x4B677844u, 64LL);
  if ( v4 )
  {
    v6 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v4, a1, (BLTQUEUE *)(v4 + 144), a2);
    for ( i = 0; i < *(_DWORD *)v6; ++i )
    {
      if ( (int)BLTQUEUE::Startup((PVOID)(*((_QWORD *)v6 + 1) + 3040LL * i)) < 0 )
      {
        DXGDODPRESENT::`scalar deleting destructor'(v6);
        return 0LL;
      }
    }
    return v6;
  }
  else
  {
    WdLogSingleEntry1(6LL, *((_QWORD *)a1 + 2));
    v8 = *((_QWORD *)a1 + 2);
    WdLogGlobalForLineNumber = 5195;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGDODPRESENT for display only adapter 0x%I64x!",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
