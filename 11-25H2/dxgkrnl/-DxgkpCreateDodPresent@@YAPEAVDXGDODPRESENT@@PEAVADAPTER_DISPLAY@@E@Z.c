/*
 * XREFs of ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x14027B5E0
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x140382BE0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1400675E0 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 *     ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x140279ED8 (--0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1403F3334 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 */

struct DXGDODPRESENT *__fastcall DxgkpCreateDodPresent(
        struct ADAPTER_DISPLAY *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  DXGDODPRESENT *v8; // rbx
  unsigned int i; // edi
  __int64 v10; // [rsp+20h] [rbp-38h]

  v6 = operator new[](2968LL * *((unsigned int *)a1 + 24) + 144, 0x4B677844u, 64LL, a4);
  if ( v6 )
  {
    v8 = DXGDODPRESENT::DXGDODPRESENT((DXGDODPRESENT *)v6, a1, (BLTQUEUE *)(v6 + 144), a2);
    for ( i = 0; i < *(_DWORD *)v8; ++i )
    {
      if ( (int)BLTQUEUE::Startup((PVOID)(*((_QWORD *)v8 + 1) + 2968LL * i)) < 0 )
      {
        DXGDODPRESENT::`scalar deleting destructor'(v8);
        return 0LL;
      }
    }
    return v8;
  }
  else
  {
    WdLogSingleEntry1(6LL, *((_QWORD *)a1 + 2));
    v10 = *((_QWORD *)a1 + 2);
    WdLogGlobalForLineNumber = 4606;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Failed to allocate DXGDODPRESENT for display only adapter 0x%I64x!",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
