/*
 * XREFs of ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x14036D638
 * Callers:
 *     DxgkWaitForPnPTransitionDone @ 0x14036D5E0 (DxgkWaitForPnPTransitionDone.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::WaitForPnPTransitionDone(
        __int64 a1,
        KWAIT_REASON a2,
        KPROCESSOR_MODE a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  __int64 v7; // rcx
  unsigned int v10; // r14d
  void *v11; // rbx
  unsigned int v12; // edi
  const wchar_t *v13; // rsi
  __int64 v14; // rax
  union _LARGE_INTEGER *Timeout; // rax
  unsigned int v16; // ebp
  __int64 v18; // rdi
  const wchar_t *v19; // r9
  __int64 v20; // [rsp+50h] [rbp-48h] BYREF
  __int64 v21; // [rsp+58h] [rbp-40h] BYREF
  char v22; // [rsp+60h] [rbp-38h]

  v5 = a4;
  v22 = 0;
  v7 = a1 + 88;
  v21 = v7;
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v7 = 0LL;
  }
  if ( *(struct _KTHREAD **)(v7 + 24) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = 0;
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v21);
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 80) || !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v5) )
  {
    v18 = -1073741583LL;
    WdLogSingleEntry2(2LL, v5, -1073741583LL);
    v19 = L"Session 0x%I64x does not have session data, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 6124;
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v19, v5, v18, 0LL, 0LL, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v21);
    return (unsigned int)v18;
  }
  _mm_lfence();
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v5) + 18768LL) )
  {
    v18 = -1073741811LL;
    WdLogSingleEntry2(2LL, v5, -1073741811LL);
    v19 = L"PnP notification event is not created for session 0x%I64x, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 6134;
    goto LABEL_16;
  }
  _mm_lfence();
  v11 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v5) + 18768LL);
  ObfReferenceObject(v11);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v21);
  v12 = 0;
  v13 = L"\b";
  do
  {
    v14 = *(int *)v13;
    v10 += v14;
    v20 = -10000000 * v14;
    Timeout = (union _LARGE_INTEGER *)&v20;
    if ( v12 == 3 )
      Timeout = 0LL;
    v16 = KeWaitForSingleObject(v11, a2, a3, 0, Timeout);
    if ( v16 != 258 )
      break;
    DxgkLogCodePointPacket(0x6Fu, v10, a5, 0, 0LL);
    ++v12;
    v13 += 2;
  }
  while ( v12 < 4 );
  ObfDereferenceObject(v11);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v21);
  return v16;
}
