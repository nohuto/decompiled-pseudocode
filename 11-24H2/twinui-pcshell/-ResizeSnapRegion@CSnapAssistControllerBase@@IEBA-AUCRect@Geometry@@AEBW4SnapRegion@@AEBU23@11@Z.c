/*
 * XREFs of ?ResizeSnapRegion@CSnapAssistControllerBase@@IEBA?AUCRect@Geometry@@AEBW4SnapRegion@@AEBU23@11@Z @ 0x1805A6720
 * Callers:
 *     ??$AdjustRegionsForInitialSnapPosition@V?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x18008D468 (--$AdjustRegionsForInitialSnapPosition@V-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@CS.c)
 *     ??$AdjustRegionsForInitialSnapPosition@V?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@@CSnapAssistControllerBase@@IEAAXPEAUHWND__@@AEAV?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@PEAUIImmersiveMonitor@@@Z @ 0x1805A4468 (--$AdjustRegionsForInitialSnapPosition@V-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@.c)
 * Callees:
 *     <none>
 */

int *__fastcall CSnapAssistControllerBase::ResizeSnapRegion(
        __int64 a1,
        int *a2,
        int *a3,
        _DWORD *a4,
        int *a5,
        _OWORD *a6)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  int v13; // r8d
  int v14; // ecx
  int v15; // r8d
  int v16; // ecx
  int v17; // ecx
  int v18; // r8d
  int v19; // ecx
  int v20; // r8d
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // r8d
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // eax
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  int v36; // r8d

  v6 = *a3;
  *(_OWORD *)a2 = *a6;
  if ( v6 <= 6 )
  {
    if ( v6 == 6 )
    {
      v25 = a5[1];
      if ( a2[3] <= v25 )
        v25 = a2[3];
      a2[3] = v25;
      return a2;
    }
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( !v8 )
      {
        v22 = a5[3];
        if ( a2[1] >= v22 )
          v22 = a2[1];
        a2[1] = v22;
        return a2;
      }
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
          {
            v11 = a2[1];
            v12 = a5[1];
            if ( v11 > v12 && v11 != a4[1] )
              v11 = a5[1];
            v13 = *a2;
            a2[1] = v11;
            v14 = *a5;
            if ( v13 > *a5 && v13 != *a4 )
              v13 = *a5;
            *a2 = v13;
            v15 = a2[2];
            if ( v15 <= v14 )
              goto LABEL_70;
            goto LABEL_69;
          }
        }
        else
        {
          v16 = *a5;
          if ( a2[2] <= *a5 )
            v16 = a2[2];
          a2[2] = v16;
        }
        return a2;
      }
      v17 = a2[1];
      v12 = a5[3];
      if ( v17 < v12 && v17 != a4[1] )
        v17 = a5[3];
      v18 = *a2;
      a2[1] = v17;
      v19 = *a5;
      if ( v18 > *a5 && v18 != *a4 )
        v18 = *a5;
      *a2 = v18;
      v20 = a2[2];
      if ( v20 > v19 )
      {
LABEL_26:
        if ( v20 != a4[2] )
          goto LABEL_28;
      }
    }
    else
    {
      v23 = a2[1];
      v12 = a5[3];
      if ( v23 < v12 && v23 != a4[1] )
        v23 = a5[3];
      v24 = *a2;
      a2[1] = v23;
      v19 = a5[2];
      if ( v24 < v19 && v24 != *a4 )
        v24 = a5[2];
      *a2 = v24;
      v20 = a2[2];
      if ( v20 < v19 )
        goto LABEL_26;
    }
    v19 = v20;
LABEL_28:
    a2[2] = v19;
    v21 = a2[3];
    if ( v21 >= v12 )
      goto LABEL_74;
    goto LABEL_73;
  }
  v26 = v6 - 7;
  if ( !v26 )
  {
    v35 = a2[1];
    v12 = a5[1];
    if ( v35 > v12 && v35 != a4[1] )
      v35 = a5[1];
    v36 = *a2;
    a2[1] = v35;
    v14 = a5[2];
    if ( v36 < v14 && v36 != *a4 )
      v36 = a5[2];
    *a2 = v36;
    v15 = a2[2];
    if ( v15 >= v14 )
      goto LABEL_70;
LABEL_69:
    if ( v15 != a4[2] )
    {
LABEL_71:
      a2[2] = v14;
      goto LABEL_72;
    }
LABEL_70:
    v14 = v15;
    goto LABEL_71;
  }
  v27 = v26 - 1;
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( v28 )
    {
      if ( v28 == 1 )
      {
        v29 = a2[1];
        v30 = a5[3];
        if ( v29 >= v30 || v29 == a4[1] )
          v30 = a2[1];
        v12 = a5[1];
        a2[1] = v30;
LABEL_72:
        v21 = a2[3];
        if ( v21 <= v12 )
          goto LABEL_74;
LABEL_73:
        if ( v21 != a4[3] )
        {
LABEL_75:
          a2[3] = v12;
          return a2;
        }
LABEL_74:
        v12 = v21;
        goto LABEL_75;
      }
    }
    else
    {
      v31 = a5[2];
      if ( *a2 >= v31 || *a2 == *a4 )
        v31 = *a2;
      v32 = *a5;
      *a2 = v31;
      v33 = a2[2];
      if ( v33 <= v32 || v33 == a4[2] )
        v32 = a2[2];
      a2[2] = v32;
    }
  }
  else
  {
    v34 = a5[2];
    if ( *a2 >= v34 )
      v34 = *a2;
    *a2 = v34;
  }
  return a2;
}
