/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70
 * Callers:
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 * Callees:
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     FindCharPosition @ 0x14003C144 (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x14003D240 (xxxPSMGetTextExtent.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x14006A118 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14006B148 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNIspItemValid @ 0x14006B1A4 (MNIspItemValid.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetOemBitmapInfo @ 0x14007B520 (GetOemBitmapInfo.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 *     GetDpiServerInfoForDpi @ 0x1402F18D4 (GetDpiServerInfoForDpi.c)
 *     GreGetTextCharacterExtra @ 0x140310A74 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x140310ABC (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(
        struct tagMENU ***a1,
        struct tagWND *a2,
        unsigned __int16 a3,
        HDC a4,
        struct tagITEM *a5,
        int a6,
        unsigned int *a7)
{
  int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  struct tagITEM *v14; // rsi
  struct tagMENU *v15; // rcx
  unsigned int v16; // eax
  struct tagMENU *v17; // rcx
  struct tagMENU *v18; // rcx
  unsigned int v19; // r13d
  int v20; // edx
  struct tagMENU *v21; // rcx
  unsigned int *v22; // rax
  unsigned int CharPosition; // eax
  const WCHAR *v25; // r10
  struct tagMENU *v26; // rcx
  __int64 v27; // rax
  struct tagMENU *v28; // rcx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  HFONT v32; // rdx
  unsigned int v33; // ecx
  bool v34; // zf
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  struct tagMENU *v38; // rcx
  int v39; // eax
  HFONT v40; // [rsp+30h] [rbp-68h]
  _OWORD v41[6]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v42; // [rsp+B0h] [rbp+18h]

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  memset(v41, 0, 32);
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, a3);
  v14 = a5;
  v40 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a5 + 4LL) & 0x1000) != 0 )
  {
    v32 = *(HFONT *)(GetDpiMetricsForDpi(a3) + 56);
    if ( v32 )
    {
      v40 = GreSelectFont(a4, v32);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDpiServerInfoForDpi(a3);
      GetDpiMetricsForDpi(a3);
      GreSetTextCharacterExtra(a4);
      v7 = a6;
    }
  }
  v15 = (struct tagMENU *)a1[2];
  if ( !v15 )
    v15 = **a1;
  v16 = MNIsOwnerDrawItem(v15, v14);
  v42 = v16;
  if ( *(_QWORD *)(*(_QWORD *)v14 + 96LL) )
  {
    v26 = (struct tagMENU *)a1[2];
    if ( !v26 )
      v26 = **a1;
    if ( !(unsigned int)MNIsUAHMenu(v26) )
    {
LABEL_42:
      v27 = *(_QWORD *)v14;
      if ( *(_QWORD *)(*(_QWORD *)v14 + 96LL) == -1LL )
        goto LABEL_43;
      if ( *(_DWORD *)(v27 + 104) == -1 )
      {
        if ( (*(_DWORD *)(v27 + 4) & 0x20000000) != 0 )
        {
          *(_DWORD *)(*(_QWORD *)v14 + 104LL) = GetDpiDependentMetric(25LL, a3);
          *(_DWORD *)(*(_QWORD *)v14 + 108LL) = GetDpiDependentMetric(26LL, a3);
          if ( *(_QWORD *)(*(_QWORD *)v14 + 96LL) == 1LL )
            *(_DWORD *)(*(_QWORD *)v14 + 104LL) += 2;
        }
        else
        {
          v38 = (struct tagMENU *)a1[2];
          if ( !v38 )
            v38 = **a1;
          if ( (unsigned int)MNIsUAHMenu(v38) )
          {
LABEL_43:
            xxxMNGetBitmapSize(a1, (__int64 *)v14, a2, a3, (__int64)a4);
            v28 = (struct tagMENU *)a1[2];
            if ( !v28 )
              v28 = **a1;
            if ( !(unsigned __int8)MNIspItemValid(v28, v14) )
              goto LABEL_17;
            goto LABEL_46;
          }
          if ( (unsigned int)GreExtGetObjectW(*(Gre::Base **)(*(_QWORD *)v14 + 96LL), 32LL, v41) )
          {
            *(_DWORD *)(*(_QWORD *)v14 + 104LL) = DWORD1(v41[0]);
            v39 = DWORD2(v41[0]);
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)v14 + 104LL) = GetDpiDependentMetric(25LL, a3);
            v39 = GetDpiDependentMetric(26LL, a3);
          }
          *(_DWORD *)(*(_QWORD *)v14 + 108LL) = v39;
        }
      }
LABEL_46:
      v9 = *(_DWORD *)(*(_QWORD *)v14 + 104LL);
      if ( *((_DWORD *)**a1 + 18) > v9 )
        v20 = *((_DWORD *)**a1 + 18);
      else
        v20 = *(_DWORD *)(*(_QWORD *)v14 + 104LL);
      v7 = a6;
      *((_DWORD *)**a1 + 18) = v20;
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
      }
      else if ( *(_DWORD *)(*(_QWORD *)v14 + 108LL) > DpiDependentMetric )
      {
        DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
      }
      v19 = v42;
      if ( v42 )
        goto LABEL_23;
      goto LABEL_29;
    }
    v29 = *(_DWORD *)(*(_QWORD *)v14 + 96LL);
    if ( v29 > 7 )
    {
      v36 = v29 - 8;
      if ( !v36 )
        goto LABEL_52;
      v37 = v36 - 1;
      if ( !v37 )
        goto LABEL_52;
      v35 = v37 - 1;
      v34 = v35 == 0;
    }
    else
    {
      if ( v29 == 7 )
        goto LABEL_52;
      v30 = v29 - 1;
      if ( !v30 )
        goto LABEL_52;
      v31 = v30 - 1;
      if ( !v31 )
        goto LABEL_52;
      v33 = v31 - 1;
      if ( !v33 )
        goto LABEL_52;
      v35 = v33 - 2;
      v34 = v35 == 0;
    }
    if ( !v34 && v35 != 1 )
      goto LABEL_42;
LABEL_52:
    v16 = v42;
  }
  if ( !v16 )
  {
    v19 = v42;
LABEL_29:
    if ( *((_QWORD *)v14 + 3) )
    {
      a5 = 0LL;
      if ( v7 && DpiDependentMetric <= *(_DWORD *)(GetDpiMetricsForDpi(a3) + 36) )
        DpiDependentMetric = *(_DWORD *)(GetDpiMetricsForDpi(a3) + 36);
      CharPosition = FindCharPosition(*((_WORD **)v14 + 3), 9);
      xxxPSMGetTextExtent(a4, v25, CharPosition, &a5);
      if ( v9 )
        v9 += (_DWORD)a5 + 2;
      else
        v9 = (unsigned int)a5;
    }
    if ( v7 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)**a1 + 5) + 40LL) & 0x4000000) != 0 || *(int *)(*((_QWORD *)**a1 + 5) + 40LL) >= 0 )
        v9 += *(__int16 *)(GetOemBitmapInfo(63LL) + 4);
      v9 += 6;
      DpiDependentMetric += 2;
    }
    goto LABEL_23;
  }
  xxxMNGetBitmapSize(a1, (__int64 *)v14, a2, a3, (__int64)a4);
  v17 = (struct tagMENU *)a1[2];
  if ( !v17 )
    v17 = **a1;
  if ( !(unsigned __int8)MNIspItemValid(v17, v14) )
  {
LABEL_17:
    v19 = v42;
    goto LABEL_27;
  }
  v9 = *(_DWORD *)(*(_QWORD *)v14 + 104LL);
  if ( v7 )
  {
    DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
    v9 += 2 * *(_DWORD *)(GetDpiMetricsForDpi(a3) + 16);
  }
  else
  {
    v18 = (struct tagMENU *)a1[2];
    if ( !v18 )
      v18 = **a1;
    if ( (unsigned int)MNIsUAHMenu(v18) )
      DpiDependentMetric = *(_DWORD *)(*(_QWORD *)v14 + 108LL);
  }
  v19 = v42;
LABEL_23:
  v21 = (struct tagMENU *)a1[2];
  if ( !v21 )
    v21 = **a1;
  if ( (unsigned __int8)MNIspItemValid(v21, v14) && (*(_DWORD *)(*(_QWORD *)v14 + 4LL) & 0x1000) != 0 )
  {
    if ( v40 )
      GreSelectFont(a4, v40);
    else
      GreSetTextCharacterExtra(a4);
  }
LABEL_27:
  v22 = a7;
  *a7 = v9;
  v22[1] = DpiDependentMetric;
  return v19;
}
