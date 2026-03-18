/*
 * XREFs of ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x14031DC34
 * Callers:
 *     DxgkWaitForPnPTransitionDone @ 0x14031C9CC (DxgkWaitForPnPTransitionDone.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x14031D170 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400199A0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::WaitForPnPTransitionDone(
        __int64 a1,
        KWAIT_REASON a2,
        KPROCESSOR_MODE a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  unsigned int v9; // r14d
  void *v10; // rbx
  unsigned int v11; // edi
  const wchar_t *v12; // rsi
  __int64 v13; // rax
  union _LARGE_INTEGER *Timeout; // rax
  unsigned int v15; // ebp
  __int64 v17; // rdi
  const wchar_t *v18; // r9
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h] BYREF
  char v21; // [rsp+60h] [rbp-38h]

  v5 = a4;
  v20 = a1 + 88;
  v21 = 0;
  if ( a1 == -88 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *(struct _KTHREAD **)(v20 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  v9 = 0;
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 80) || !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v5) )
  {
    v17 = -1073741583LL;
    WdLogSingleEntry2(2LL, v5, -1073741583LL);
    v18 = L"Session 0x%I64x does not have session data, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 6072;
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v18, v5, v17, 0LL, 0LL, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v20);
    return (unsigned int)v17;
  }
  _mm_lfence();
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v5) + 18768LL) )
  {
    v17 = -1073741811LL;
    WdLogSingleEntry2(2LL, v5, -1073741811LL);
    v18 = L"PnP notification event is not created for session 0x%I64x, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 6082;
    goto LABEL_16;
  }
  _mm_lfence();
  v10 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v5) + 18768LL);
  ObfReferenceObject(v10);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v20);
  v11 = 0;
  v12 = L"\b";
  do
  {
    v13 = *(int *)v12;
    v9 += v13;
    v19 = -10000000 * v13;
    Timeout = (union _LARGE_INTEGER *)&v19;
    if ( v11 == 3 )
      Timeout = 0LL;
    v15 = KeWaitForSingleObject(v10, a2, a3, 0, Timeout);
    if ( v15 != 258 )
      break;
    DxgkLogCodePointPacket(0x6Fu, v9, a5, 0, 0LL);
    ++v11;
    v12 += 2;
  }
  while ( v11 < 4 );
  ObfDereferenceObject(v10);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v20);
  return v15;
}
