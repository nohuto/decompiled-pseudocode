/*
 * XREFs of ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1403246EC
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402831E4 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1402E8FAC (DxgkGetAllMonitorDevicesFromSessionView.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1403245A4 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 *     ?GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ @ 0x1403249AC (-GetActualBufferSize@AUTOEXPANDALLOCATION@@QEAAIXZ.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1403840D8 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
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
  DXGADAPTERSOURCEHASH *v20; // [rsp+50h] [rbp-28h] BYREF
  char v21; // [rsp+58h] [rbp-20h]

  v4 = 0;
  v20 = this;
  v21 = 0;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 638;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_pMutex != NULL", 638LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((struct _KTHREAD **)v20 + 3) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 645;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_pMutex->IsOwner()", 645LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v20);
  v9 = AUTOEXPANDALLOCATION::GetActualBufferSize((DXGADAPTERSOURCEHASH *)((char *)this + 48)) >> 4;
  v10 = 1 << *((_DWORD *)this + 17);
  if ( (unsigned int)v9 > v10 )
    v9 = v10;
  if ( (_DWORD)v9 )
  {
    v11 = 0;
    v12 = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)*((_QWORD *)this + 6);
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
        v12 = (struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *)*((_QWORD *)this + 6);
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
      262146,
      0xFFFFFFFFLL,
      L"FindEntry called with invalid start table size (0x%lx), table size is only %lx)",
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, 0, 1, a2, 0LL);
  if ( Entry )
  {
    v12 = DXGADAPTERSOURCEHASH::AddEntry(this, a2, a3, (*((_DWORD *)Entry + 3) >> 1) & 1);
    if ( v12 )
LABEL_25:
      *a4 = ((__int64)v12 - *((_QWORD *)this + 6)) >> 4;
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
      262146,
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
