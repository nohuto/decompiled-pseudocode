/*
 * XREFs of MNDrawArrow @ 0x1402E9214
 * Callers:
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     xxxMNSetTop @ 0x1402BE960 (xxxMNSetTop.c)
 *     xxxMNDrawFullNC @ 0x1402E951C (xxxMNDrawFullNC.c)
 * Callees:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     GetDpiMetricsForWindow @ 0x1402F1798 (GetDpiMetricsForWindow.c)
 */

__int64 __fastcall MNDrawArrow(HDC a1, __int64 a2, int a3)
{
  __int64 v6; // r13
  __int64 result; // rax
  HDC DCEx; // rbp
  LONG v9; // esi
  int v10; // r8d
  LONG v11; // edi
  int v12; // r9d
  int v13; // r10d
  __int64 v14; // rax
  int v15; // edi
  int v16; // ebx
  __int64 DpiMetricsForWindow; // rax
  int v18; // ebx
  unsigned int v19; // r12d
  __int64 OemBitmapInfo; // rax
  int v21; // ecx
  struct tagRECT v22; // [rsp+30h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(**(_QWORD **)a2 + 16LL);
  result = *(_QWORD *)(**(_QWORD **)a2 + 40LL);
  if ( (*(_DWORD *)(result + 124) & 3) != 0 )
  {
    if ( a1 )
      DCEx = a1;
    else
      DCEx = (HDC)_GetDCEx(v6, 0LL, 66561LL);
    if ( *(int *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) + 40LL) < 0 )
      v9 = 7;
    else
      v9 = *(__int16 *)(GetOemBitmapInfo(63LL) + 4) + 3;
    if ( a3 == -3 )
    {
      v10 = 65;
      v11 = 3;
      v12 = 2;
      v13 = 8;
    }
    else
    {
      v14 = *(_QWORD *)(v6 + 40);
      v15 = *(_DWORD *)(v14 + 100);
      v16 = *(_DWORD *)(v14 + 92);
      DpiMetricsForWindow = GetDpiMetricsForWindow(v6);
      v10 = 68;
      v12 = 3;
      v13 = 16;
      v11 = v15 - *(_DWORD *)(DpiMetricsForWindow + 36) - v16 - 3;
    }
    v18 = v13 | 0x100;
    v19 = v10 + 2;
    if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 124LL) & 3) != v12 )
    {
      v18 = v13;
      v19 = v10;
    }
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) + 24LL) )
    {
      OemBitmapInfo = GetOemBitmapInfo(65LL);
      v22.top = v11;
      v22.left = v9;
      v21 = *(__int16 *)(OemBitmapInfo + 4);
      LODWORD(OemBitmapInfo) = *(__int16 *)(OemBitmapInfo + 6);
      v22.right = v9 + v21;
      v22.bottom = v11 + OemBitmapInfo;
      result = DrawFrameControl(DCEx, &v22, 2u, v18 | 0x800u);
    }
    else
    {
      BitBltSysBmp(DCEx, v9, v11, v19, 1);
      result = BitBltSysBmp(DCEx, v9, v11, v19, 1);
    }
    if ( !a1 )
      return _ReleaseDC(DCEx);
  }
  return result;
}
