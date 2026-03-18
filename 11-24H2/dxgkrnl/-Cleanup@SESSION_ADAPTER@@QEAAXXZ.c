/*
 * XREFs of ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1403D8110
 * Callers:
 *     ?DestroyCsrssProcess@DXGSESSIONDATA@@QEAAXXZ @ 0x1401FA620 (-DestroyCsrssProcess@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1403474AC (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1403D8328 (-DestroyCddDeviceAndContext@SESSION_ADAPTER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

void __fastcall SESSION_ADAPTER::Cleanup(SESSION_ADAPTER *this)
{
  unsigned int v1; // eax
  unsigned int *v2; // rdi
  int *v3; // rsi
  SESSION_ADAPTER *v5; // rbp
  SESSION_ADAPTER *v6; // r12
  SESSION_ADAPTER *v7; // r13
  void *v8; // rax
  _QWORD *v9; // r14
  int v10; // ecx
  SESSION_ADAPTER *v11; // rcx
  SESSION_ADAPTER **v12; // rax
  DXGADAPTER *v13; // rcx
  __int64 v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+20h] [rbp-58h]
  __int64 v16; // [rsp+28h] [rbp-50h]
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+30h] [rbp-48h]
  __int64 v20; // [rsp+38h] [rbp-40h]

  v1 = *((_DWORD *)this + 12);
  v2 = (unsigned int *)((char *)this + 8);
  v3 = (int *)((char *)this + 12);
  if ( v1 )
  {
    WdLogSingleEntry3(2LL, v1, *v3, *v2);
    v18 = *v2;
    v16 = *v3;
    v14 = *((unsigned int *)this + 12);
    WdLogGlobalForLineNumber = 2990;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Detected multiple reference leakage (0x%I64x) on session adapter for adapter 0x%I64x%08I64x",
      v14,
      v16,
      v18,
      0LL,
      0LL);
    *((_DWORD *)this + 12) = 0;
  }
  SESSION_ADAPTER::DestroyCddDeviceAndContext(this, *((struct DXGDEVICE **)this + 7));
  v5 = (SESSION_ADAPTER *)*((_QWORD *)this + 14);
  while ( v5 != (SESSION_ADAPTER *)((char *)this + 112) )
  {
    v6 = v5;
    v7 = v5;
    v5 = *(SESSION_ADAPTER **)v5;
    WdLogSingleEntry4(2LL, *((unsigned int *)v7 + 10), *((unsigned int *)v7 - 4), *v3, *v2);
    v20 = *v2;
    v19 = *v3;
    v17 = *((unsigned int *)v7 - 4);
    v15 = *((unsigned int *)v7 + 10);
    WdLogGlobalForLineNumber = 3021;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Detected multiple reference leakage (0x%I64x) on display source (0x%I64x) in session adapter for adapter 0x%I64x%08I64x",
      v15,
      v17,
      v19,
      v20,
      0LL);
    v8 = (char *)v7 + 56;
    v9 = (_QWORD *)((char *)v7 + 568);
    if ( *((_QWORD *)v7 + 7) || *v9 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3026;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pDisplaySource->m_pCddPrimaryAllocation[0] == NULL) && (pDisplaySource->m_pCddShadowAllocation == NULL)",
        3026LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v8 = (char *)v7 + 56;
    }
    memset(v8, 0, 0x200uLL);
    *v9 = 0LL;
    v10 = *((_DWORD *)v7 - 4);
    *((_DWORD *)v7 + 10) = 0;
    *((_DWORD *)this + 26) &= ~(1 << v10);
    *((_QWORD *)v7 - 1) = 0LL;
    v11 = *(SESSION_ADAPTER **)v6;
    if ( *(SESSION_ADAPTER **)(*(_QWORD *)v6 + 8LL) != v6 || (v12 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 1), *v12 != v6) )
      __fastfail(3u);
    *v12 = v11;
    *((_QWORD *)v11 + 1) = v12;
    --*((_DWORD *)this + 27);
  }
  v13 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( v13 )
  {
    DXGADAPTER::ReleaseReference(v13);
    *((_QWORD *)this + 2) = 0LL;
  }
}
