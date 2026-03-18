/*
 * XREFs of ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0233580
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00A3B00 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023373C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C00BD720 (NtGdiPatBlt.c)
 *     GreGetTextExtentW @ 0x1C00CD5F8 (GreGetTextExtentW.c)
 *     GetDPIMetrics @ 0x1C00D8D88 (GetDPIMetrics.c)
 *     MNGetpItemIndex @ 0x1C00E5540 (MNGetpItemIndex.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxClientGetTextExtentPointW @ 0x1C02121FC (xxxClientGetTextExtentPointW.c)
 *     CALL_LPK @ 0x1C0225724 (CALL_LPK.c)
 */

__int64 __fastcall xxxDrawItemUnderline(
        __int64 **a1,
        __int64 a2,
        Gre::Base *a3,
        __int64 a4,
        int a5,
        WCHAR *SourceString,
        unsigned int a7)
{
  int v7; // r15d
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 CurrentProcessWin32Process; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 DPIMetrics; // rax
  int v18; // r15d
  unsigned int v19; // r8d
  WCHAR *v20; // r10
  __int64 v21; // rcx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rax
  struct tagSIZE v26[5]; // [rsp+30h] [rbp-28h] BYREF

  v7 = a4;
  result = (__int64)PtiCurrentShared((__int64)a1, a2, (__int64)a3, a4);
  v13 = result;
  if ( a7 == 0xFFFF )
    return result;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 84LL) == 0x7FFFFFFF )
    goto LABEL_6;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  if ( CurrentProcessWin32Process )
  {
    v12 = -*(_QWORD *)CurrentProcessWin32Process;
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  }
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 760) & 0xF) != 0 )
  {
LABEL_6:
    if ( a7 )
    {
      v26[0] = 0LL;
      if ( (unsigned int)CALL_LPK(v13) )
      {
        xxxClientGetTextExtentPointW(a3, SourceString, a7, v26);
        v15 = (__int64)a1[2];
        if ( !v15 )
          v15 = **a1;
        result = MNGetpItemIndex(v15, a2);
        if ( (_DWORD)result == -1 )
          return result;
      }
      else
      {
        GreGetTextExtentW((HDC)a3, SourceString, a7, v26);
      }
      DPIMetrics = GetDPIMetrics(v16);
      v12 = (unsigned int)(v26[0].cx - *(_DWORD *)(DPIMetrics + 16));
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = v12;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)a2 + 84LL) = 0;
    }
  }
  v18 = *(_DWORD *)(*(_QWORD *)a2 + 84LL) + v7;
  if ( *(_DWORD *)(*(_QWORD *)a2 + 88LL) )
  {
LABEL_23:
    v25 = GetDPIMetrics(v12);
    return NtGdiPatBlt((HDC)a3, v18, *(_DWORD *)(v25 + 24) + a5, *(_DWORD *)(*(_QWORD *)a2 + 88LL), 1, 15728673);
  }
  v26[0] = 0LL;
  if ( (unsigned int)CALL_LPK(v13) )
  {
    xxxClientGetTextExtentPointW(a3, v20, v19, v26);
    v21 = (__int64)a1[2];
    if ( !v21 )
      v21 = **a1;
    result = MNGetpItemIndex(v21, a2);
    v23 = (_DWORD)result == -1;
  }
  else
  {
    result = GreGetTextExtentW((HDC)a3, v20, v19, v26);
    v23 = (_DWORD)result == 0;
  }
  if ( !v23 )
  {
    v24 = GetDPIMetrics(v22);
    v12 = (unsigned int)(v26[0].cx - *(_DWORD *)(v24 + 16));
    *(_DWORD *)(*(_QWORD *)a2 + 88LL) = v12;
    goto LABEL_23;
  }
  return result;
}
