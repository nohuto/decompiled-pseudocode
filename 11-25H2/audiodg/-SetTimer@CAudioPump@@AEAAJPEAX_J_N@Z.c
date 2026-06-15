/*
 * XREFs of ?SetTimer@CAudioPump@@AEAAJPEAX_J_N@Z @ 0x14002C1E0
 * Callers:
 *     ?Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z @ 0x140021AF0 (-Start@CAudioPump@@UEAAJPEA_JPEAUISaDeviceCallback@@PEAUIUnknown@@@Z.c)
 *     ?Resume@CAudioPump@@UEAAJXZ @ 0x14002C010 (-Resume@CAudioPump@@UEAAJXZ.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1400574C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CAudioPump::SetTimer(CAudioPump *this, void *a2, __int64 a3, char a4)
{
  double v7; // xmm0_8
  double v8; // xmm0_8
  double v9; // xmm1_8
  LARGE_INTEGER v10; // rax
  unsigned __int64 v11; // rdx
  const char *v12; // r9
  LARGE_INTEGER DueTime; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
    return 0LL;
  if ( a4 )
  {
    v10.QuadPart = 0LL;
  }
  else
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    v7 = PerformanceCount.QuadPart < 0
       ? (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
       + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
       : (double)(int)PerformanceCount.LowPart;
    v8 = v7 * -10000000.0;
    v9 = (g_u64QPCFrequency & 0x8000000000000000uLL) != 0LL
       ? (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
       + (double)(int)(g_u64QPCFrequency & 1 | (g_u64QPCFrequency >> 1))
       : (double)(int)g_u64QPCFrequency;
    v10.QuadPart = -a3;
    *((_QWORD *)this + 38) = a3 - (unsigned int)(int)(v8 / v9);
  }
  DueTime = v10;
  v11 = (__int64)((unsigned __int128)(a3 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11;
  if ( SetWaitableTimer(a2, &DueTime, v11 + (v11 >> 63), 0LL, 0LL, 0) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x19B,
             (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\AudioPump.h",
             v12);
}
