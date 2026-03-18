/*
 * XREFs of ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x14038CA6C
 * Callers:
 *     _lambda_98bcd3493729aa3b805c0fba161d90cc_::operator() @ 0x14027A05C (_lambda_98bcd3493729aa3b805c0fba161d90cc_--operator().c)
 *     DxgkReleaseSwapChain @ 0x14038C5A0 (DxgkReleaseSwapChain.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x14001C1A0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z @ 0x1401F6988 (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N1@Z.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x14038CBE0 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 *     ?ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z @ 0x14038CD38 (-ReleaseBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDH@Z.c)
 */

__int64 __fastcall SwapChainReleaseInternal(
        struct DXGSWAPCHAIN *a1,
        struct _D3DKMT_RELEASESWAPCHAIN *a2,
        void *a3,
        char a4,
        int a5)
{
  bool v9; // zf
  int v10; // ebx
  unsigned __int64 v11; // rdx
  struct DXGDEVICE *v13; // [rsp+50h] [rbp-89h] BYREF
  char v14[8]; // [rsp+60h] [rbp-79h] BYREF
  struct DXGSWAPCHAIN *v15; // [rsp+68h] [rbp-71h]
  bool v16; // [rsp+70h] [rbp-69h]
  _BYTE v17[16]; // [rsp+78h] [rbp-61h] BYREF
  int v18; // [rsp+88h] [rbp-51h]
  __int64 v19; // [rsp+90h] [rbp-49h]
  _BYTE v20[16]; // [rsp+98h] [rbp-41h] BYREF
  __int64 v21; // [rsp+A8h] [rbp-31h]
  char v22; // [rsp+B0h] [rbp-29h]
  __int64 v23; // [rsp+B8h] [rbp-21h]

  if ( a2[1].hNtSwapChain )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1600;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pKmReleaseSwapChain->pMetaData == nullptr",
      1600LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = !a2->bProducer;
  a2[1].hNtSwapChain = 0LL;
  v16 = !v9;
  v13 = 0LL;
  v14[0] = a4;
  v15 = a1;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, a1, 0);
  v18 = 0;
  v19 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v10 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v14, &v13, 1, 0);
  if ( v10 >= 0 )
    v10 = DXGSWAPCHAIN::ReleaseBuffer(a1, a2, a3, a4, a5);
  DXGSWAPCHAINLOCKWITHDEVICE::Release((DXGSWAPCHAINLOCKWITHDEVICE *)v14);
  COREACCESS::~COREACCESS((COREACCESS *)v20, v11);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v17);
  return (unsigned int)v10;
}
