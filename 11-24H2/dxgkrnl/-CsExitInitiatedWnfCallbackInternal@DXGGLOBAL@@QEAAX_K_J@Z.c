/*
 * XREFs of ?CsExitInitiatedWnfCallbackInternal@DXGGLOBAL@@QEAAX_K_J@Z @ 0x1403D0024
 * Callers:
 *     ?CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1403CFF00 (-CsExitInitiatedWnfCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_I.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140001280 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x14000C9A0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14000F940 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x140025980 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x14002DF18 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400738A8 (-Release@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ @ 0x1403E2248 (-ReleaseComponentReferencesHelper@DXGGLOBAL@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::CsExitInitiatedWnfCallbackInternal(DXGGLOBAL *this, __int64 a2, __int64 a3)
{
  char v4; // r12
  volatile signed __int32 **v5; // r13
  __int64 v6; // rsi
  volatile signed __int32 *v7; // r15
  volatile signed __int32 *v8; // rdi
  signed __int64 v9; // rax
  signed __int64 v10; // rtt
  __int64 v11; // r14
  LARGE_INTEGER v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  LONGLONG v15; // rax
  char v16; // dl
  unsigned int v17; // r14d
  volatile __int32 *v18; // rsi
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  LONGLONG v23; // [rsp+60h] [rbp-A8h] BYREF
  DXGGLOBAL *v24; // [rsp+68h] [rbp-A0h]
  DXGADAPTERLISTLOCK *v25[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v26[144]; // [rsp+88h] [rbp-80h] BYREF

  v22 = a3;
  v24 = this;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)this + 516, 1, 0) && *((_QWORD *)this + 237) != a2 )
  {
    *((_QWORD *)this + 237) = a2;
    v4 = 0;
    DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v25, (DXGGLOBAL *)((char *)this + 672));
    DXGAUTOADAPTERLISTLOCK::AcquireShared(v25);
    v5 = (volatile signed __int32 **)((char *)this + 800);
    v6 = v22;
    v7 = *v5;
LABEL_5:
    while ( v7 != (volatile signed __int32 *)v5 && v7 )
    {
      v8 = v7;
      v7 = *(volatile signed __int32 **)v7;
      if ( *((_QWORD *)v8 + 391) && *((_DWORD *)v8 + 845) && *((_DWORD *)v8 + 842) )
      {
        _m_prefetchw((const void *)(v8 + 6));
        v9 = *((_QWORD *)v8 + 3);
        do
        {
          if ( !v9 )
          {
            WdLogSingleEntry1(3LL, v8);
            WdLogGlobalForLineNumber = 1158;
            goto LABEL_5;
          }
          v10 = v9;
          v9 = _InterlockedCompareExchange64((volatile signed __int64 *)v8 + 3, v9 + 1, v9);
        }
        while ( v10 != v9 );
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v26, (struct DXGADAPTER *const)v8, 0LL);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v8);
        v11 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v26, 0LL);
        PerformanceFrequency.QuadPart = 0LL;
        v12 = KeQueryPerformanceCounter(&PerformanceFrequency);
        v13 = *((unsigned int *)v8 + 105);
        v14 = *((unsigned int *)v8 + 106);
        v15 = 1000000 * (v12.QuadPart - v6) / PerformanceFrequency.QuadPart;
        if ( (unsigned int)dword_14015E650 > 5
          && (qword_14015E660 & 0x400000000004LL) != 0
          && (qword_14015E668 & 0x400000000004LL) == qword_14015E668 )
        {
          v23 = v15;
          v19 = v14;
          v20 = v13;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            qword_14015E668 & 0x400000000004LL,
            (__int64)&unk_14013DCF4,
            v13,
            v14,
            (__int64)&v20,
            (__int64)&v19,
            (__int64)&v23);
        }
        if ( (int)v11 < 0 )
        {
          WdLogSingleEntry2(3LL, v8, v11);
          WdLogGlobalForLineNumber = 1153;
        }
        else
        {
          v16 = 0;
          v17 = 0;
          if ( *((_DWORD *)v8 + 842) )
          {
            do
            {
              if ( !*(_DWORD *)(520LL * v17 + *((_QWORD *)v8 + 403) + 208) )
              {
                DXGADAPTER::SetPowerComponentActiveCBInternal((DXGADAPTER *)v8, v17, 1u, 0);
                v16 = 1;
              }
              ++v17;
            }
            while ( v17 < *((_DWORD *)v8 + 842) );
            if ( v16 )
            {
              v4 = 1;
              _InterlockedIncrement(v8 + 976);
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v26);
      }
    }
    v18 = (volatile __int32 *)v24;
    if ( v4 && KeSetTimer((PKTIMER)((char *)v24 + 1904), (LARGE_INTEGER)-10000000LL, (PKDPC)((char *)v24 + 1968)) )
    {
      DXGAUTOADAPTERLISTLOCK::Release((DXGAUTOADAPTERLISTLOCK *)v25);
      DXGGLOBAL::ReleaseComponentReferencesHelper((DXGGLOBAL *)v18);
    }
    _InterlockedExchange(v18 + 516, 0);
    DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v25);
  }
}
