/*
 * XREFs of ?CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ @ 0x1401899F0
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1400532D4 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14000CB60 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14000CC20 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140010030 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z @ 0x140072E4C (--0DXGAUTOADAPTERLISTLOCK@@QEAA@AEAVDXGADAPTERLISTLOCK@@@Z.c)
 *     ??1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ @ 0x1400730D4 (--1DXGAUTOADAPTERLISTLOCK@@QEAA@XZ.c)
 *     ?AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ @ 0x1400732F4 (-AcquireShared@DXGAUTOADAPTERLISTLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

void __fastcall DXGGLOBAL::CaptureSchedulerLogs(DXGGLOBAL *this)
{
  _QWORD **v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _QWORD *v6; // rcx
  DXGADAPTERLISTLOCK *v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (_QWORD **)((char *)this + 800);
  DXGAUTOADAPTERLISTLOCK::DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v7, (DXGGLOBAL *)((char *)this + 672));
  DXGAUTOADAPTERLISTLOCK::AcquireShared(v7);
  v2 = *v1;
LABEL_2:
  while ( v2 != v1 && v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( v3[391] )
    {
      _m_prefetchw(v3 + 3);
      v4 = v3[3];
      while ( v4 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64(v3 + 3, v4 + 1, v4);
        if ( v5 == v4 )
        {
          DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
            (DXGADAPTERSTOPRESETLOCKSHARED *)v8,
            (struct DXGADAPTER *)v3,
            1);
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v3);
          if ( *((_DWORD *)v3 + 50) == 1 )
          {
            v6 = (_QWORD *)v3[391];
            if ( !*(_BYTE *)(v6[2] + 209LL) )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v6[92] + 8LL) + 56LL))(v6[93]);
          }
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
          goto LABEL_2;
        }
      }
    }
  }
  DXGAUTOADAPTERLISTLOCK::~DXGAUTOADAPTERLISTLOCK((DXGAUTOADAPTERLISTLOCK *)v7);
}
