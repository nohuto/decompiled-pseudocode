/*
 * XREFs of ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x140061168
 * Callers:
 *     ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1402E85B8 (-MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall CalculateScaling(int a1, unsigned int *a2, unsigned int *a3, unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v7; // rbx
  char result; // al
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // r9d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  unsigned int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // ecx

  v4 = 0;
  switch ( a1 )
  {
    case 1:
      if ( *a2 != *a3 || a2[1] != a3[1] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 85;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"*pSurfaceSize == *pContentSize",
          85LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      goto LABEL_18;
    case 2:
      v9 = *a2;
      v10 = *a3;
      if ( v9 < *a3 || (v11 = a2[1], v12 = a3[1], v11 < v12) )
      {
LABEL_11:
        v17 = a3[1];
        v15 = a2[1];
        v16 = *a2;
        v18 = *a3;
        v19 = *a2 * v17;
        v20 = v18 * v15;
        if ( v18 * v15 < v19 )
        {
          v23 = v20 / v17;
          v22 = 0;
          v24 = (v16 - v20 / v17) >> 1;
          v16 = v23 + v24;
          v4 = v24;
        }
        else
        {
          v21 = v19 / v18;
          v22 = (v15 - v21) >> 1;
          v15 = v21 + v22;
        }
        *a4 = v4;
        a4[1] = v22;
        goto LABEL_19;
      }
      v13 = (v9 - v10) >> 1;
      v14 = (v11 - v12) >> 1;
      *a4 = v13;
      v15 = v14 + v12;
      a4[1] = v14;
      v16 = v13 + v10;
LABEL_19:
      result = 1;
      a4[2] = v16;
      a4[3] = v15;
      return result;
    case 3:
LABEL_18:
      v15 = a2[1];
      v16 = *a2;
      *(_QWORD *)a4 = 0LL;
      goto LABEL_19;
    case 4:
      goto LABEL_11;
  }
  if ( a1 != 5 )
  {
    v7 = a1;
    WdLogSingleEntry1(1LL, a1);
    WdLogGlobalForLineNumber = 146;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"Unknown scaling type 0x%lx", v7, 0LL, 0LL, 0LL, 0LL);
  }
  return 0;
}
