/*
 * XREFs of SetSysColor @ 0x1C005FA7C
 * Callers:
 *     xxxSetSysColors @ 0x1C005F814 (xxxSetSysColors.c)
 * Callees:
 *     GreGetNearestColor @ 0x1C005FC20 (GreGetNearestColor.c)
 *     LeaveRenderCrit @ 0x1C0060040 (LeaveRenderCrit.c)
 *     GreSetBrushOwner @ 0x1C00601D0 (GreSetBrushOwner.c)
 *     ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1C00604A0 (--0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z.c)
 *     ??1BRUSHSELOBJ@@QEAA@XZ @ 0x1C006051C (--1BRUSHSELOBJ@@QEAA@XZ.c)
 *     GreCreateSolidBrush @ 0x1C0061330 (GreCreateSolidBrush.c)
 *     GreMarkUndeletableBrush @ 0x1C00620E0 (GreMarkUndeletableBrush.c)
 *     GreSetSolidBrush @ 0x1C00D1630 (GreSetSolidBrush.c)
 *     GreSetMagicColors @ 0x1C016C72C (GreSetMagicColors.c)
 */

__int64 __fastcall SetSysColor(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rbx
  unsigned int NearestColor; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // ebx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 SolidBrush; // rax
  _QWORD v20[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (unsigned int)a1;
  NearestColor = a2;
  PsEnterPriorityRegion(a1, a2);
  v10 = SGDGetUserSessionState(v7, v6, v8, v9);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v10 + 16));
  v11 = (unsigned int)v4;
  *((_DWORD *)gpsi + v4 + 1111) = NearestColor;
  if ( (a3 & 4) != 0
    && (*((_DWORD *)gpDispInfo + 33) & 2) != 0
    && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
  {
    GreSetMagicColors(*((HDC *)gpDispInfo + 7));
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (v12 = v4 - 1) != 0
    && (v13 = v12 - 9) != 0
    && (v14 = v13 - 1) != 0
    && (v15 = v14 - 1) != 0
    && (v16 = v15 - 12) != 0
    && (unsigned int)(v16 - 3) >= 2 )
  {
    NearestColor = GreGetNearestColor(*((HDC *)gpDispInfo + 7));
  }
  *((_DWORD *)gpsi + v11 + 1142) = NearestColor;
  v17 = *((_QWORD *)gpsi + v11 + 587);
  if ( v17 )
  {
    GreSetSolidBrush(v17, NearestColor);
  }
  else
  {
    SolidBrush = GreCreateSolidBrush(NearestColor);
    *((_QWORD *)gpsi + v11 + 587) = SolidBrush;
    GreMarkUndeletableBrush(SolidBrush);
    GreSetBrushOwner(*((HBRUSH *)gpsi + v11 + 587), 0);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v20, *((HBRUSH *)gpsi + v11 + 587));
    if ( v20[0] )
      *(_DWORD *)(v20[0] + 40LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v20);
  }
  return LeaveRenderCrit();
}
