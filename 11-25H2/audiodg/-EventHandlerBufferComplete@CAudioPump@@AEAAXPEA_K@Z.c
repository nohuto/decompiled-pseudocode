/*
 * XREFs of ?EventHandlerBufferComplete@CAudioPump@@AEAAXPEA_K@Z @ 0x140021520
 * Callers:
 *     ?EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z @ 0x14001DCC0 (-EventHandlerBufferRelease@CAudioPump@@AEAAXPEA_K@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x140015F00 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?CancelDeadline@CAudioPump@@AEAAXXZ @ 0x140021794 (-CancelDeadline@CAudioPump@@AEAAXXZ.c)
 *     ?IsOffload@CAudioPump@@QEAA_NXZ @ 0x140021810 (-IsOffload@CAudioPump@@QEAA_NXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400574C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void __fastcall CAudioPump::EventHandlerBufferComplete(CAudioPump *this, unsigned __int64 *a2)
{
  _QWORD *v3; // rax
  __int64 (__fastcall *v4)(CAudioPump *); // rcx
  void *v5; // rdi
  __int64 v6; // rsi
  double LowPart; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm1_8
  unsigned __int64 v10; // rdx
  const char *v11; // r9
  void *v12; // rdi
  _DWORD *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+50h] [rbp+8h] BYREF
  LARGE_INTEGER DueTime; // [rsp+60h] [rbp+18h] BYREF

  if ( *((_QWORD *)this + 39) )
  {
    if ( *((_BYTE *)this + 4752) )
    {
      ++*((_QWORD *)this + 593);
      *((_BYTE *)this + 4752) = 0;
    }
    *((_QWORD *)this + 47) = *((_QWORD *)this + 583);
    v3 = (_QWORD *)((char *)this + 408);
    v4 = (__int64 (__fastcall *)(CAudioPump *))*((_QWORD *)this + 27);
    if ( CAudioPump::OutputPumpWorkRoutine != v4 || !*v3 )
      *((_BYTE *)this + 272) = 0;
    if ( CAudioPump::OutputPumpWorkRoutine == v4 && *v3 )
      *((_BYTE *)this + 4681) = 1;
    if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 84, 0, 0) )
    {
      if ( CAudioPump::OutputPumpWorkRoutine == *((__int64 (__fastcall **)(CAudioPump *))this + 27)
        && *((_QWORD *)this + 51) )
      {
        *((_BYTE *)this + 272) = 0;
        *((_BYTE *)this + 4681) = 1;
      }
      v5 = (void *)*((_QWORD *)this + 37);
      v6 = (unsigned int)(int)((double)(int)*((_QWORD *)this + 13) * 1.5);
      if ( v5 )
      {
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        if ( PerformanceCount.QuadPart < 0 )
          LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
                  + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
        else
          LowPart = (double)(int)PerformanceCount.LowPart;
        v8 = LowPart * -10000000.0;
        if ( (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL )
          v9 = (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
             + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1));
        else
          v9 = (double)(int)g_u64QPCFrequency;
        *((_QWORD *)this + 38) = v6 - (unsigned int)(int)(v8 / v9);
        DueTime.QuadPart = -v6;
        v10 = (__int64)((unsigned __int128)(v6 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
        if ( !SetWaitableTimer(v5, &DueTime, v10 + (v10 >> 63), 0LL, 0LL, 0) )
          wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x19B,
            (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\AudioPump.h",
            v11);
      }
    }
    else
    {
      v12 = (void *)*((_QWORD *)this + 37);
      if ( v12 )
      {
        CancelWaitableTimer(*((HANDLE *)this + 37));
        WaitForSingleObject(v12, 0);
      }
      CAudioPump::CancelDeadline(this);
      *((_BYTE *)this + 4681) = 0;
      if ( CAudioPump::IsOffload(this) )
      {
        v13 = (_DWORD *)*((_QWORD *)this + 596);
        *((_BYTE *)this + 4682) = 1;
        if ( *v13 > 5u )
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
            (int)v13,
            (int)&unk_1400B067F,
            0);
      }
    }
  }
}
