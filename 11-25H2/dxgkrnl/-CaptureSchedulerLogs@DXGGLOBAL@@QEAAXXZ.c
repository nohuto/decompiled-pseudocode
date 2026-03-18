/*
 * XREFs of ?CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ @ 0x1401872EC
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x140053624 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1400196D0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x14001AFC0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x14001C140 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x14001C200 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x14001F610 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x140028800 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall DXGGLOBAL::CaptureSchedulerLogs(DXGGLOBAL *this)
{
  _QWORD **v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _QWORD *v6; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = (_QWORD **)((char *)this + 768);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
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
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v7);
}
