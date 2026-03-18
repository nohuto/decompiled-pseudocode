/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1402D6B28
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140321460 (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140039C9C (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1400553F8 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x140061A20 (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1402D7158 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402D71F0 (DxgkGetAdapterDefaultScaling.c)
 */

__int64 __fastcall CCD_TOPOLOGY::MakeCloneGroupDWMClipBoxValid(CCD_TOPOLOGY *this, unsigned int a2)
{
  CCD_TOPOLOGY *v2; // rbx
  unsigned int v3; // r13d
  int v4; // esi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // ebp
  unsigned int v13; // r15d
  int v14; // eax
  _QWORD *v15; // rax
  unsigned __int8 v16; // cf
  signed __int64 v17; // rax
  _DWORD *v18; // r12
  int v19; // eax
  unsigned int v20; // r14d
  int v21; // eax
  int v22; // ecx
  __int64 result; // rax
  int v24; // eax
  int v25; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v26; // r9d
  int v27; // eax
  __int64 v28; // rbx
  int v29; // eax
  char v30; // al
  unsigned int v31; // ebx
  unsigned int v32; // r14d
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int *v35; // rax
  __int64 v36; // [rsp+20h] [rbp-78h]
  unsigned int v37[18]; // [rsp+50h] [rbp-48h] BYREF
  int v39; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v40; // [rsp+B8h] [rbp+20h] BYREF

  v2 = this;
  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  v39 = v4;
  while ( 1 )
  {
    if ( v3 >= *(unsigned __int16 *)(*((_QWORD *)v2 + 8) + 20LL) )
      return 0LL;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(v2, v3);
    v9 = PathDescriptor;
    if ( *((_DWORD *)PathDescriptor + 46) == v4 )
      break;
LABEL_29:
    v2 = this;
    ++v3;
  }
  if ( !*((_BYTE *)PathDescriptor + 129) )
  {
    if ( (*(_DWORD *)PathDescriptor & 0x100LL) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4050;
    }
    goto LABEL_25;
  }
  v10 = *((_QWORD *)PathDescriptor + 12);
  v11 = *((unsigned int *)PathDescriptor + 33);
  *(_QWORD *)v37 = v10;
  if ( (int)v11 >= 5 )
  {
    if ( (int)v11 > 16 )
      goto LABEL_8;
    D3DKMDT_VPPR_GET_OFFSET_ROTATION(v11);
    v27 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART(v26);
    v6 = (unsigned int)(((int)v8 + v27 - 2) >> 31);
    LODWORD(v6) = ((int)v8 + v27 - 2) % 4;
    v11 = (unsigned int)(v6 + 1);
  }
  if ( (_DWORD)v11 == 2 || (_DWORD)v11 == 4 )
  {
    v12 = *((_DWORD *)v9 + 39);
    v13 = *((_DWORD *)v9 + 38);
    goto LABEL_9;
  }
LABEL_8:
  v12 = *((_DWORD *)v9 + 38);
  v13 = *((_DWORD *)v9 + 39);
LABEL_9:
  v14 = *(_DWORD *)v9;
  v40 = __PAIR64__(v13, v12);
  if ( (*(_QWORD *)&v14 & 0x800000LL) == 0 )
    goto LABEL_10;
  v7 = *((unsigned int *)v9 + 43);
  if ( (int)v7 >= 0 )
  {
    v24 = *((_DWORD *)v9 + 42);
    if ( v24 >= 0 )
    {
      v8 = *((unsigned int *)v9 + 44);
      if ( (int)v8 > v24 )
      {
        v6 = *((unsigned int *)v9 + 45);
        if ( (int)v6 > (int)v7 && (int)v8 <= (int)v10 && (int)v6 <= SHIDWORD(v10) )
          goto LABEL_29;
      }
    }
  }
  if ( (*((_DWORD *)v9 + 2) & 0x800000) == 0 )
  {
LABEL_10:
    v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v11);
    v15[3] = v3;
    v15[4] = *((unsigned int *)v9 + 6);
    v15[5] = *((unsigned int *)v9 + 7);
    v16 = _bittest64((const signed __int64 *)v9, 0x2Au);
    WdLogGlobalForLineNumber = 3997;
    if ( !v16 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3999;
    }
    v17 = *(_QWORD *)v9;
    if ( *((_DWORD *)v9 + 34) == 1 )
    {
      v18 = (_DWORD *)((char *)v9 + 140);
      if ( (v17 & 0x10000) != 0 )
      {
        if ( *v18 == 5 )
        {
          DxgkGetAdapterDefaultScaling((char *)v9 + 16, (char *)v9 + 140);
          *((_DWORD *)v9 + 65) |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)v9 + 16, (char *)v9 + 140);
        *(_QWORD *)v9 |= 0x10000uLL;
        *((_DWORD *)v9 + 65) |= 0x80u;
      }
      v19 = ConvertDmmToDisplayConfigScaling((unsigned int)*v18);
      v20 = v37[1];
      switch ( v19 )
      {
        case 1:
          if ( (_DWORD)v10 != v12 || v37[1] != v13 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 85;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"*pSurfaceSize == *pContentSize",
              85LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          break;
        case 2:
          if ( (unsigned int)v10 < v12 || v37[1] < v13 )
          {
LABEL_54:
            v33 = v12 * v37[1];
            if ( v12 * v37[1] < v13 * (unsigned int)v10 )
            {
              *((_DWORD *)v9 + 45) = v37[1];
              v31 = ((unsigned int)v10 - v33 / v13) >> 1;
              *((_DWORD *)v9 + 44) = v31 + v33 / v13;
              v32 = 0;
            }
            else
            {
              v34 = v13 * (unsigned int)v10 / v12;
              *((_DWORD *)v9 + 44) = v10;
              v32 = (v20 - v34) >> 1;
              *((_DWORD *)v9 + 45) = v32 + v34;
              v31 = 0;
            }
            v35 = (unsigned int *)((char *)v9 + 172);
            goto LABEL_63;
          }
          v31 = ((unsigned int)v10 - v12) >> 1;
          v32 = (v37[1] - v13) >> 1;
          *((_DWORD *)v9 + 44) = v31 + v12;
          *((_DWORD *)v9 + 45) = v32 + v13;
LABEL_62:
          v35 = (unsigned int *)((char *)v9 + 172);
LABEL_63:
          *((_DWORD *)v9 + 42) = v31;
          *v35 = v32;
LABEL_26:
          v4 = v39;
          goto LABEL_27;
        case 3:
          break;
        case 4:
          goto LABEL_54;
        default:
          if ( v19 != 5 )
          {
            v28 = v19;
            WdLogSingleEntry1(1LL, v19);
            WdLogGlobalForLineNumber = 146;
            DxgkLogInternalTriageEvent(
              0LL,
              262146LL,
              0xFFFFFFFFLL,
              L"Unknown scaling type 0x%lx",
              v28,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          WdLogSingleEntry1(1LL, (int)*v18);
          v36 = (int)*v18;
          WdLogGlobalForLineNumber = 4037;
          DxgkLogInternalTriageEvent(
            0LL,
            262146LL,
            0xFFFFFFFFLL,
            L"Failed to set clipbox with scaling intent 0x%lx, going to force ",
            v36,
            0LL,
            0LL,
            0LL,
            0LL);
          DxgkGetAdapterDefaultScaling((char *)v9 + 16, (char *)v9 + 140);
          v29 = ConvertDmmToDisplayConfigScaling((unsigned int)*v18);
          v30 = CalculateScaling(v29, v37, (unsigned int *)&v40, (unsigned int *)v9 + 42);
          *((_DWORD *)v9 + 65) |= 0x40u;
          if ( !v30 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4043;
            DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"bRet", 4043LL, 0LL, 0LL, 0LL, 0LL);
          }
          goto LABEL_26;
      }
      *((_DWORD *)v9 + 45) = v20;
      v32 = 0;
      *((_DWORD *)v9 + 44) = v10;
      v31 = 0;
      goto LABEL_62;
    }
    if ( (v17 & 0x100) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4003;
    }
LABEL_25:
    *((_DWORD *)v9 + 65) |= 1u;
    v21 = *((_DWORD *)v9 + 24);
    *((_QWORD *)v9 + 21) = 0LL;
    *((_DWORD *)v9 + 44) = v21;
    *((_DWORD *)v9 + 45) = *((_DWORD *)v9 + 25);
LABEL_27:
    *(_QWORD *)v9 |= 0x800000uLL;
    v22 = *((_DWORD *)v9 + 43);
    if ( v22 < 0 || (v25 = *((_DWORD *)v9 + 42), v25 < 0) || *((_DWORD *)v9 + 44) <= v25 || *((_DWORD *)v9 + 45) <= v22 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4063;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"(pPathDescriptor->DwmClipBox.top >= 0) && (pPathDescriptor->DwmClipBox.left >= 0) && (pPathDescriptor->DwmClipBo"
         "x.right > pPathDescriptor->DwmClipBox.left) && (pPathDescriptor->DwmClipBox.bottom > pPathDescriptor->DwmClipBox.top)",
        4063LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_29;
  }
  WdLogSingleEntry3(2LL, v3, *((unsigned int *)v9 + 6), *((unsigned int *)v9 + 7));
  result = 3221225485LL;
  WdLogGlobalForLineNumber = 3986;
  return result;
}
