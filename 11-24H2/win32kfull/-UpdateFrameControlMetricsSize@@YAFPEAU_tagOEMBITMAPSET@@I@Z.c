/*
 * XREFs of ?UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z @ 0x14018B1A8
 * Callers:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x14018B06C (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x140074FC4 (GetDpiDependentMetric.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 */

__int64 __fastcall UpdateFrameControlMetricsSize(struct _tagOEMBITMAPSET *a1, unsigned __int16 a2)
{
  unsigned __int16 *v2; // r15
  __int16 v3; // r14
  _WORD *v4; // r12
  unsigned int v5; // r13d
  int v7; // edi
  unsigned __int16 v8; // dx
  int DpiDependentMetric; // eax
  int v10; // esi
  int v11; // ecx
  int v13; // ecx
  int v14; // esi
  int v15; // ecx
  unsigned int v16; // ebx
  int v17; // ecx
  int v18; // eax

  v2 = (unsigned __int16 *)&unk_14034EDD0;
  v3 = 0;
  v4 = (_WORD *)((char *)a1 + 22);
  v5 = 0;
  do
  {
    v7 = 0;
    v8 = v2[1];
    LOWORD(DpiDependentMetric) = 0;
    switch ( *v2 )
    {
      case 1u:
        if ( (v8 & 0x80u) != 0 )
        {
          v10 = 24;
          v11 = 23;
        }
        else if ( (v8 & 0x40) != 0 )
        {
          v10 = 26;
          v11 = 25;
        }
        else
        {
          v10 = 13;
          v11 = 12;
        }
        v7 = GetDpiDependentMetric(v11, a2) - 2;
        LOWORD(DpiDependentMetric) = GetDpiDependentMetric(v10, a2) - 4;
        goto LABEL_12;
      case 2u:
LABEL_28:
        if ( (v8 & 0x18) != 0 )
        {
          DpiDependentMetric = *(_DWORD *)(GetDpiMetricsForDpi(a2) + 36);
        }
        else
        {
          v13 = 28;
LABEL_20:
          DpiDependentMetric = GetDpiDependentMetric(v13, a2);
        }
        v7 = DpiDependentMetric;
        goto LABEL_12;
      case 3u:
        if ( (v8 & 8) != 0 )
        {
          v14 = 1;
        }
        else
        {
          if ( (v8 & 2) != 0 )
          {
            v14 = 1;
            v15 = 11;
LABEL_25:
            v16 = a2;
            v7 = GetDpiDependentMetric(v15, a2);
            v17 = v14;
LABEL_26:
            LOWORD(DpiDependentMetric) = GetDpiDependentMetric(v17, v16);
            goto LABEL_12;
          }
          v14 = 10;
        }
        v15 = 0;
        goto LABEL_25;
    }
    if ( *v2 != 4 )
    {
      if ( *v2 == 5 )
        goto LABEL_28;
      if ( *v2 != 0xFFFF )
        goto LABEL_12;
      if ( (v8 & 1) == 0 )
      {
        v13 = 13;
        goto LABEL_20;
      }
      v16 = a2;
      v18 = GetDpiDependentMetric(12, a2);
      v17 = 13;
      v7 = 4 * v18;
      goto LABEL_26;
    }
    if ( (v8 & 0x408) == 8 )
    {
      LOWORD(DpiDependentMetric) = v5 - 8;
    }
    else
    {
      DpiDependentMetric = (a2 >> 3) + 1;
      v7 = DpiDependentMetric;
    }
LABEL_12:
    *(v4 - 1) = v7;
    *v4 = DpiDependentMetric;
    if ( v7 <= v3 )
      LOWORD(v7) = v3;
    ++v5;
    v2 += 2;
    v4 += 4;
    v3 = v7;
  }
  while ( v5 < 0x5D );
  return (unsigned __int16)v7;
}
