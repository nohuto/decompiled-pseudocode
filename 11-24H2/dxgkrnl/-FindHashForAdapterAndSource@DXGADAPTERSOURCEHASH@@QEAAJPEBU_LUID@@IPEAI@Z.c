/*
 * XREFs of ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x140306E6C
 * Callers:
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1402D751C (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1403C5E54 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x140306D24 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x140307130 (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x14036B4D0 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
        struct _KTHREAD **this,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  struct _KTHREAD **v8; // rbp
  __int64 v9; // r8
  unsigned int v10; // eax
  int v11; // r11d
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *v12; // rcx
  unsigned int i; // r9d
  int v14; // edx
  int v15; // eax
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rax
  __int64 HighPart; // [rsp+20h] [rbp-58h]
  __int64 LowPart; // [rsp+28h] [rbp-50h]
  struct _KTHREAD **v20; // [rsp+50h] [rbp-28h] BYREF
  char v21; // [rsp+58h] [rbp-20h]

  v4 = 0;
  v20 = this;
  v21 = 0;
  v8 = this;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 637;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_pMutex != NULL", 637LL, 0LL, 0LL, 0LL, 0LL);
    this = 0LL;
  }
  if ( this[3] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 644;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 644LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  v9 = AUTOEXPANDALLOCATION::GetActualBufferSize((AUTOEXPANDALLOCATION *)(v8 + 6)) >> 4;
  v10 = 1 << *((_DWORD *)v8 + 17);
  if ( (unsigned int)v9 > v10 )
    v9 = v10;
  if ( (_DWORD)v9 )
  {
    v11 = 0;
    v12 = v8[6];
    for ( i = 0; i < (unsigned int)v9; ++i )
    {
      v14 = *((_DWORD *)v12 + 3) & 1;
      if ( a2 && (a2->LowPart != *(_DWORD *)v12 || a2->HighPart != *((_DWORD *)v12 + 1)) )
        v14 = 0;
      if ( a3 == *((_DWORD *)v12 + 2) && v14 )
      {
        if ( !v12 )
          break;
        goto LABEL_25;
      }
      v15 = v11 + 1;
      v12 = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)((char *)v12 + 16);
      v11 = 0;
      if ( v15 == (_DWORD)v9 )
        v12 = v8[6];
      if ( v15 != (_DWORD)v9 )
        v11 = v15;
    }
  }
  else
  {
    WdLogSingleEntry2(1LL, 0LL, v9);
    WdLogGlobalForLineNumber = 5719;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"FindEntry called with invalid start table size (0x%lx), table size is only %lx)",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry((DXGADAPTERSOURCEHASH *)v8, 0, 1, a2, 0LL);
  if ( Entry )
  {
    v12 = DXGADAPTERSOURCEHASH::AddEntry((DXGADAPTERSOURCEHASH *)v8, a2, a3, (*((_DWORD *)Entry + 3) >> 1) & 1);
    if ( v12 )
LABEL_25:
      *a4 = (v12 - v8[6]) >> 4;
    else
      v4 = -1073741801;
  }
  else
  {
    WdLogSingleEntry2(1LL, a2->HighPart, a2->LowPart);
    LowPart = a2->LowPart;
    HighPart = a2->HighPart;
    WdLogGlobalForLineNumber = 5830;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"Could not find existing entry for adapter luid 0x%lx, 0x%lx",
      HighPart,
      LowPart,
      0LL,
      0LL,
      0LL);
    v4 = -1073741811;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v20);
  return v4;
}
