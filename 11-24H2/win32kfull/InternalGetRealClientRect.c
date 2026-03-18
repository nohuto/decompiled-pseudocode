/*
 * XREFs of InternalGetRealClientRect @ 0x140079644
 * Callers:
 *     SetTiledRect @ 0x140079510 (SetTiledRect.c)
 *     ParkIcon @ 0x1401E31D8 (ParkIcon.c)
 *     xxxArrangeIconicWindows @ 0x1402E9D44 (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x140026844 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1400269FC (GetMonitorWorkRectForDpi.c)
 *     GetRect @ 0x1400355F0 (GetRect.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  __m128i *MonitorRectForDpi; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i v14; // xmm0
  __int64 result; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int DpiForSystem; // eax
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __m128i v24; // [rsp+20h] [rbp-58h] BYREF
  __m128i v25; // [rsp+30h] [rbp-48h] BYREF

  v6 = a4;
  v9 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v9 == 669 )
  {
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo() + 104);
    if ( a5 )
      v10 = 0;
    else
      v10 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9) >> 8) & 0x1FF;
    if ( (a3 & 4) != 0 )
      MonitorRectForDpi = GetMonitorRectForDpi(&v25, v6, v10);
    else
      MonitorRectForDpi = GetMonitorWorkRectForDpi(&v24, v6, v10);
    v14 = *MonitorRectForDpi;
    result = (__int64)&v25;
    v25 = v14;
    *(__m128i *)a2 = v14;
  }
  else
  {
    result = GetRect(a1, a2, 17);
    if ( (a3 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v13, v12, v18, v19);
        *(_DWORD *)(a2 + 12) += GetDpiDependentMetric(1, DpiForSystem);
      }
      result = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(result + 16) & 2) != 0 )
      {
        v21 = GetDpiForSystem(v13, v12, v18, v19);
        result = GetDpiDependentMetric(0, v21);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (a3 & 2) != 0 )
  {
    result = W32GetUserSessionState(v13, v12);
    v16 = *(_QWORD *)(result + 19928);
    v17 = *(_DWORD *)(v16 + 2120) & 0xFFFFFFF7;
    if ( (*(_DWORD *)(v16 + 2120) & 0xFFFFFFF7) == 0 || (v17 = (unsigned int)(v17 - 1), !(_DWORD)v17) )
    {
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v17) + 19928) + 2088LL);
      *(_DWORD *)(a2 + 12) -= result;
      return result;
    }
    v22 = (unsigned int)(v17 - 1);
    if ( !(_DWORD)v22 || (v22 = (unsigned int)(v22 - 1), !(_DWORD)v22) )
    {
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v22) + 19928) + 2088LL);
      *(_DWORD *)(a2 + 4) += result;
      return result;
    }
    v23 = (unsigned int)(v22 - 1);
    if ( !(_DWORD)v23 )
      goto LABEL_28;
    v23 = (unsigned int)(v23 - 1);
    if ( !(_DWORD)v23 )
    {
LABEL_27:
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v23) + 19928) + 2084LL);
      *(_DWORD *)(a2 + 8) -= result;
      return result;
    }
    v23 = (unsigned int)(v23 - 1);
    if ( !(_DWORD)v23 )
    {
LABEL_28:
      result = *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(v16, v23) + 19928) + 2084LL);
      *(_DWORD *)a2 += result;
      return result;
    }
    if ( (_DWORD)v23 == 1 )
      goto LABEL_27;
  }
  return result;
}
