/*
 * XREFs of InternalGetRealClientRect @ 0x1C00ECAE8
 * Callers:
 *     ParkIcon @ 0x1C005FEC8 (ParkIcon.c)
 *     SetTiledRect @ 0x1C00EA538 (SetTiledRect.c)
 *     xxxArrangeIconicWindows @ 0x1C023916C (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00AE4CC (GetMonitorRectForDpi.c)
 *     ExpandMonitorSpaceVertex @ 0x1C00AF3A8 (ExpandMonitorSpaceVertex.c)
 *     ScaleDPIRect @ 0x1C00B1710 (ScaleDPIRect.c)
 *     GetRect @ 0x1C00E1ED0 (GetRect.c)
 *     GetDpiDependentMetric @ 0x1C00E91E0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00EB100 (GetDpiForSystem.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetRealClientRect(const struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rbp
  char v7; // r14
  __int64 v9; // rcx
  unsigned __int16 v10; // si
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 result; // rax
  unsigned __int16 v14; // dx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rcx
  int DpiForSystem; // eax
  int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  __m128i v21; // [rsp+40h] [rbp-58h] BYREF
  __m128i v22; // [rsp+50h] [rbp-48h] BYREF

  v6 = a4;
  v7 = a3;
  v9 = *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) & 0x2FFF;
  if ( (_DWORD)v9 == 669 )
  {
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo(v9, a2, a3) + 96);
    if ( a5 )
      v10 = 0;
    else
      v10 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9) >> 8) & 0x1FF;
    if ( (v7 & 4) != 0 )
    {
      v16 = *(__m128i *)GetMonitorRectForDpi(&v20, v6, v10);
      result = (__int64)&v21;
      v21 = v16;
    }
    else
    {
      v11 = *(_QWORD *)(v6 + 40);
      v12 = *(__m128i *)(v11 + 44);
      v21 = v12;
      if ( v10 )
      {
        v14 = *(_WORD *)(v11 + 62);
        v22 = *(__m128i *)(v11 + 28);
        v15 = ExpandMonitorSpaceVertex(v10, v14, v22.m128i_i64[0]);
        ScaleDPIRect(&v21, &v21, v10, *(_WORD *)(*(_QWORD *)(v6 + 40) + 60LL), v15, v22.m128i_i64[0]);
        v12 = v21;
      }
      v22 = v12;
      result = (__int64)&v22;
    }
    *(_OWORD *)a2 = *(_OWORD *)result;
  }
  else
  {
    result = GetRect(a1, a2, 17);
    if ( (v7 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v17);
        *(_DWORD *)(a2 + 12) += GetDpiDependentMetric(1, DpiForSystem);
      }
      result = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(result + 16) & 2) != 0 )
      {
        v19 = GetDpiForSystem(v17);
        result = GetDpiDependentMetric(0, v19);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (v7 & 2) != 0 )
  {
    result = gpsi;
    if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) <= 1 )
    {
      result = *(unsigned int *)(gpsi + 2088LL);
      *(_DWORD *)(a2 + 12) -= result;
      return result;
    }
    switch ( *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7 )
    {
      case 2u:
      case 3u:
        result = *(unsigned int *)(gpsi + 2088LL);
        *(_DWORD *)(a2 + 4) += result;
        return result;
      case 4u:
        goto LABEL_29;
      case 5u:
LABEL_28:
        result = *(unsigned int *)(gpsi + 2084LL);
        *(_DWORD *)(a2 + 8) -= result;
        return result;
      case 6u:
LABEL_29:
        result = *(unsigned int *)(gpsi + 2084LL);
        *(_DWORD *)a2 += result;
        return result;
      case 7u:
        goto LABEL_28;
    }
  }
  return result;
}
