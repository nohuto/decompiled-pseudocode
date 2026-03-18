/*
 * XREFs of ?ProcessDefaultHighPerformanceAdapterProperty@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID@@_N@Z @ 0x140336198
 * Callers:
 *     NtDxgkGetProperties @ 0x1402FC800 (NtDxgkGetProperties.c)
 *     NtDxgkSetProperties @ 0x140335B40 (NtDxgkSetProperties.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 */

__int64 __fastcall ProcessDefaultHighPerformanceAdapterProperty(
        struct DXGPROCESS *a1,
        struct _D3DKMT_PROPERTIES_PROCESS_PREFERRED_ADAPTER_ID *a2,
        char a3)
{
  bool v6; // zf
  struct _KTHREAD **v7; // rcx
  unsigned int v8; // ebx
  struct _KTHREAD **v10; // [rsp+50h] [rbp-18h] BYREF
  char v11; // [rsp+58h] [rbp-10h]

  if ( !a1 )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    WdLogGlobalForLineNumber = 6129;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v8;
  }
  v6 = (struct DXGPROCESS *)((char *)a1 + 104) == 0LL;
  v7 = (struct _KTHREAD **)((char *)a1 + 104);
  v11 = 0;
  v10 = v7;
  if ( v6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    v7 = v10;
  }
  if ( v7[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v10);
  if ( a3 )
  {
    if ( *((_BYTE *)a1 + 556) )
    {
      v8 = -1073740528;
      WdLogSingleEntry1(3LL, -1073740528LL);
      WdLogGlobalForLineNumber = 6146;
      goto LABEL_9;
    }
    *((_OWORD *)a1 + 34) = *(_OWORD *)a2;
    *((_BYTE *)a1 + 556) = 1;
  }
  else
  {
    *(_OWORD *)a2 = *((_OWORD *)a1 + 34);
  }
  v8 = 0;
LABEL_9:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v10);
  return v8;
}
