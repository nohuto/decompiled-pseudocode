/*
 * XREFs of ?AddUniqueMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1402FC29C
 * Callers:
 *     ?_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z @ 0x1402FC230 (-_AddMode@OBTAIN_MODES_ON_SOURCE@@AEBAJAEAU_D3DKMT_DISPLAYMODE@@_N1@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x140342580 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1403B75AC (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z @ 0x1402FC480 (-AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@I@Z.c)
 *     ?RemoveMode@MODE_UNION_LIST@@AEAAXI@Z @ 0x1402FC6C0 (-RemoveMode@MODE_UNION_LIST@@AEAAXI@Z.c)
 *     _UpgradeDispModeFlags @ 0x1402FC784 (_UpgradeDispModeFlags.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddUniqueMode(MODE_UNION_LIST *this, const struct _D3DKMT_DISPLAYMODE *a2)
{
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v6; // r14
  __int64 v7; // r11
  __int64 v8; // r15
  int *v9; // r9
  int v10; // ecx
  unsigned __int32 Width; // eax
  int v12; // r9d
  int v13; // ecx
  int *v14; // rax
  int v15; // r8d
  unsigned __int32 Height; // ecx
  int v17; // eax
  __int64 v18; // rcx

  LODWORD(v2) = *((_DWORD *)this + 4);
  v3 = 0;
  if ( !(_DWORD)v2 )
    return (unsigned int)MODE_UNION_LIST::AddMode(this, a2, v2);
  v6 = *((_QWORD *)this + 4);
  v7 = (unsigned int)(v2 - 1);
  v8 = *((_QWORD *)this + 1);
  v9 = (int *)(v8 + 44LL * *(unsigned int *)(v6 + 4 * v7));
  v10 = *v9;
  if ( a2->Width != *v9 )
  {
    Width = a2->Width;
    goto LABEL_12;
  }
  Width = a2->Height;
  v10 = v9[1];
  if ( Width != v10 )
    goto LABEL_12;
  Width = a2->Format;
  v10 = v9[2];
  if ( Width != v10 )
    goto LABEL_12;
  v10 = ((unsigned int)v9[10] >> 4) & 1;
  Width = (*((_DWORD *)&a2->Flags + 1) >> 4) & 1;
  if ( Width != v10 )
    goto LABEL_12;
  Width = a2->IntegerRefreshRate;
  v10 = v9[3];
  if ( Width != v10
    || (Width = a2->ScanLineOrdering, v10 = v9[6], Width != v10)
    || (Width = a2->DisplayFixedOutput, v10 = v9[8], Width != v10)
    || (Width = a2->DisplayOrientation, v10 = v9[7], Width != v10) )
  {
LABEL_12:
    if ( (int)(Width - v10) > 0 )
      return (unsigned int)MODE_UNION_LIST::AddMode(this, a2, v2);
  }
  v12 = 0;
  v2 = 0LL;
  v13 = 0;
  if ( (int)v7 < 0 )
    goto LABEL_30;
  while ( 1 )
  {
    v2 = (unsigned int)(((int)v7 + v12) >> 1);
    v14 = (int *)(v8 + 44LL * *(unsigned int *)(v6 + 4LL * (int)v2));
    v15 = *v14;
    if ( a2->Width != *v14 )
    {
      Height = a2->Width;
      goto LABEL_24;
    }
    Height = a2->Height;
    v15 = v14[1];
    if ( Height == v15 )
    {
      Height = a2->Format;
      v15 = v14[2];
      if ( Height == v15 )
      {
        v15 = ((unsigned int)v14[10] >> 4) & 1;
        Height = (*((_DWORD *)&a2->Flags + 1) >> 4) & 1;
        if ( Height == v15 )
        {
          Height = a2->IntegerRefreshRate;
          v15 = v14[3];
          if ( Height == v15 )
          {
            Height = a2->ScanLineOrdering;
            v15 = v14[6];
            if ( Height == v15 )
            {
              Height = a2->DisplayFixedOutput;
              v15 = v14[8];
              if ( Height == v15 )
              {
                Height = a2->DisplayOrientation;
                v15 = v14[7];
                if ( Height == v15 )
                  break;
              }
            }
          }
        }
      }
    }
LABEL_24:
    v13 = Height - v15;
    if ( v13 )
    {
      v17 = v2 - 1;
      if ( v13 >= 0 )
        v17 = v7;
      LODWORD(v7) = v17;
      if ( v13 >= 0 )
        v12 = v2 + 1;
      if ( v12 <= v17 )
        continue;
    }
    goto LABEL_30;
  }
  v13 = 0;
LABEL_30:
  if ( v13 > 0 )
    v2 = (unsigned int)(v2 + 1);
  if ( v13 )
    v18 = 0LL;
  else
    v18 = v8 + 44LL * *(unsigned int *)(v6 + 4 * v2);
  if ( v18 )
  {
    if ( (*(_DWORD *)(v18 + 36) & 2) != 0 )
    {
      MODE_UNION_LIST::RemoveMode(this, v2);
      MODE_UNION_LIST::AddMode(this, a2, v2);
    }
    else
    {
      UpgradeDispModeFlags(v18, a2);
    }
  }
  else
  {
    return (unsigned int)MODE_UNION_LIST::AddMode(this, a2, v2);
  }
  return v3;
}
