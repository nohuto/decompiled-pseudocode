/*
 * XREFs of ?InitializeCSAccounting@DXGGLOBAL@@QEAAX_K@Z @ 0x1403F1198
 * Callers:
 *     ?AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1403F1090 (-AccountingforCSCallBackFn@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A0F0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000A3C0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14000B9E0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028A90 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 */

void __fastcall DXGGLOBAL::InitializeCSAccounting(DXGGLOBAL *this, __int64 a2)
{
  __int64 v4; // rdx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGGLOBAL *)((char *)this + 2096), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  v4 = *((_QWORD *)this + 268);
  if ( a2 != v4 )
  {
    if ( *((_DWORD *)this + 522) )
    {
      WdLogSingleEntry1(3LL, v4);
      WdLogGlobalForLineNumber = 203;
    }
    *((_QWORD *)this + 268) = a2;
    memset((char *)this + 2264, 0, 0x49C00uLL);
    *(_OWORD *)((char *)this + 304344) = 0LL;
    *((_QWORD *)this + 38045) = 0LL;
    *((_OWORD *)this + 19023) = 0LL;
    *((_QWORD *)this + 38048) = 0LL;
    *((_OWORD *)this + 19025) = 0LL;
    *((_QWORD *)this + 38052) = 0LL;
    memset((char *)this + 304424, 0, 0x180uLL);
    *((_BYTE *)this + 304392) = 1;
    *((_DWORD *)this + 522) = 1;
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v5);
}
