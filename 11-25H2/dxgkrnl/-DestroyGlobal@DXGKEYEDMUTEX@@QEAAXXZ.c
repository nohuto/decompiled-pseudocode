/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1403D5308
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1403D5280 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1400172A0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x14001C658 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(DXGKEYEDMUTEX *this)
{
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // rax
  _BYTE v4[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4149;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_cReference == 0", 4149LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((DXGKEYEDMUTEX **)this + 12) != (DXGKEYEDMUTEX *)((char *)this + 96) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4150;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"IsListEmpty(&m_KeyedMutexWaiterList)",
      4150LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 176) && *((_DWORD *)this + 8) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v4);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 8));
    *((_DWORD *)this + 8) = 0;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v4);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 20));
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  Current = DXGPROCESS::GetCurrent(v2);
  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 8), Current);
  WdLogGlobalForLineNumber = 4176;
}
