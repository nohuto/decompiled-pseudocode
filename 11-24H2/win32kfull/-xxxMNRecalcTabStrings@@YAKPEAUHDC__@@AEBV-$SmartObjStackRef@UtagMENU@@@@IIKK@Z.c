/*
 * XREFs of ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x14006B8A4
 * Callers:
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 * Callees:
 *     FindCharPosition @ 0x14003C144 (FindCharPosition.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14006B148 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14006B178 (MNGetpItemFromIndex.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x14007C360 (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     xxxClientGetTextExtentPointW @ 0x14007CAC8 (xxxClientGetTextExtentPointW.c)
 *     GreGetTextExtentW @ 0x14007E5DC (GreGetTextExtentW.c)
 *     GetDpiMetricsForCurrentThread @ 0x1402F1688 (GetDpiMetricsForCurrentThread.c)
 */

__int64 __fastcall xxxMNRecalcTabStrings(HDC a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // edi
  int v7; // r15d
  unsigned int v8; // ebp
  __int64 v11; // rcx
  int v12; // r13d
  __int64 v13; // rbx
  struct tagMENU *v14; // rcx
  int v15; // ecx
  int v16; // r11d
  _WORD *v17; // r12
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int CharPosition; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  int v30; // r10d
  struct tagTHREADINFO *v31; // rax
  int v32; // ebx
  unsigned int v33; // [rsp+30h] [rbp-48h]
  int v37; // [rsp+A0h] [rbp+28h]

  v6 = a3;
  v7 = a5;
  v8 = 0;
  v37 = a6 + a5;
  if ( a3 < *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 44LL) && a3 <= a4 )
  {
    v11 = *(_QWORD *)(a2 + 16);
    v12 = 0;
    v33 = a3;
    if ( !v11 )
      v11 = **(_QWORD **)a2;
    v13 = MNGetpItemFromIndex(v11, a3);
    if ( v6 < a4 )
    {
      while ( 1 )
      {
        if ( !v13 )
        {
LABEL_17:
          v6 = a3;
          goto LABEL_18;
        }
        v14 = *(struct tagMENU **)(a2 + 16);
        if ( !v14 )
          v14 = **(struct tagMENU ***)a2;
        v15 = MNIsOwnerDrawItem(v14, (struct tagITEM *)v13);
        v16 = 0;
        *(_DWORD *)(*(_QWORD *)v13 + 80LL) = v7;
        v17 = *(_WORD **)(v13 + 24);
        if ( v17 )
        {
          if ( *(_DWORD *)(*(_QWORD *)v13 + 48LL) )
            break;
        }
        if ( v15 )
          goto LABEL_11;
LABEL_12:
        v18 = v16 + v37;
        v19 = *(_QWORD *)(a2 + 16);
        if ( v16 + v37 <= (int)v8 )
          v18 = v8;
        v20 = ++v33;
        v8 = v18;
        if ( !v19 )
          v19 = **(_QWORD **)a2;
        v13 = MNGetpItemFromIndex(v19, v20);
        if ( v21 >= a4 )
          goto LABEL_17;
      }
      if ( !v15 )
      {
        CharPosition = FindCharPosition(v17, 9);
        v29 = CharPosition;
        if ( CharPosition < v30 )
        {
          v31 = PtiCurrent(v28, v27);
          if ( (unsigned int)CALL_LPK(v31) )
            xxxClientGetTextExtentPointW(a1, &v17[v29 + 1]);
          else
            GreGetTextExtentW(a1);
          v16 = *(_DWORD *)(GetDpiMetricsForCurrentThread() + 16);
        }
        v7 = a5;
        goto LABEL_12;
      }
LABEL_11:
      ++v12;
      goto LABEL_12;
    }
LABEL_18:
    if ( v12 != a4 - v6 )
    {
      v32 = *(__int16 *)(GetOemBitmapInfo(63LL) + 4);
      v8 += v32 + *(_DWORD *)(GetDpiMetricsForCurrentThread() + 16);
    }
    v22 = *(_QWORD *)(a2 + 16);
    if ( !v22 )
      v22 = **(_QWORD **)a2;
    while ( 1 )
    {
      v23 = MNGetpItemFromIndex(v22, v6);
      if ( v6 >= a4 || !v23 )
        break;
      ++v6;
      *(_DWORD *)(*(_QWORD *)v23 + 72LL) = v24;
      v22 = *(_QWORD *)(a2 + 16);
      if ( !v22 )
        v22 = **(_QWORD **)a2;
    }
  }
  return v8;
}
