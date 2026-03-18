/*
 * XREFs of ?MakeCloneGroupDWMClipBoxValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1402E85B8
 * Callers:
 *     ?EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ @ 0x140370B5C (-EnsureContentRegionAndDWMClipBoxAreValid@CCD_TOPOLOGY@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B6DC (-D3DKMDT_VPPR_GET_OFFSET_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x140055C48 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z @ 0x140061168 (-CalculateScaling@@YA_NW4DISPLAYCONFIG_SCALING@@PEBU_D3DKMDT_2DREGION@@1PEAU_RECTL@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?ConvertDmmToDisplayConfigScaling@@YA?AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1402E8BE8 (-ConvertDmmToDisplayConfigScaling@@YA-AW4DISPLAYCONFIG_SCALING@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402E8C80 (DxgkGetAdapterDefaultScaling.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int8 v18; // cf
  signed __int64 v19; // rax
  _DWORD *v20; // r12
  int v21; // eax
  unsigned int v22; // r14d
  int v23; // eax
  int v24; // ecx
  __int64 result; // rax
  int v26; // eax
  int v27; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v28; // r9d
  int v29; // eax
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  char v34; // al
  unsigned int v35; // ebx
  unsigned int v36; // r14d
  unsigned int v37; // ecx
  unsigned int v38; // eax
  unsigned int *v39; // rax
  __int64 v40; // [rsp+20h] [rbp-78h]
  unsigned int v41[18]; // [rsp+50h] [rbp-48h] BYREF
  int v43; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v44; // [rsp+B8h] [rbp+20h] BYREF

  v2 = this;
  v3 = 0;
  v4 = *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(this, a2) + 46);
  v43 = v4;
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
  *(_QWORD *)v41 = v10;
  if ( (int)v11 >= 5 )
  {
    if ( (int)v11 > 16 )
      goto LABEL_8;
    D3DKMDT_VPPR_GET_OFFSET_ROTATION(v11);
    v29 = D3DKMDT_VPPR_GET_CONTENT_ROTATION_PART(v28);
    v6 = (unsigned int)(((int)v8 + v29 - 2) >> 31);
    LODWORD(v6) = ((int)v8 + v29 - 2) % 4;
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
  v44 = __PAIR64__(v13, v12);
  if ( (*(_QWORD *)&v14 & 0x800000LL) == 0 )
    goto LABEL_10;
  v7 = *((unsigned int *)v9 + 43);
  if ( (int)v7 >= 0 )
  {
    v26 = *((_DWORD *)v9 + 42);
    if ( v26 >= 0 )
    {
      v8 = *((unsigned int *)v9 + 44);
      if ( (int)v8 > v26 )
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
    v18 = _bittest64((const signed __int64 *)v9, 0x2Au);
    WdLogGlobalForLineNumber = 3997;
    if ( !v18 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 3999;
    }
    v19 = *(_QWORD *)v9;
    if ( *((_DWORD *)v9 + 34) == 1 )
    {
      v20 = (_DWORD *)((char *)v9 + 140);
      if ( (v19 & 0x10000) != 0 )
      {
        if ( *v20 == 5 )
        {
          DxgkGetAdapterDefaultScaling((char *)v9 + 16, (char *)v9 + 140, v16, v17);
          *((_DWORD *)v9 + 65) |= 0x200u;
        }
      }
      else
      {
        DxgkGetAdapterDefaultScaling((char *)v9 + 16, (char *)v9 + 140, v16, v17);
        *(_QWORD *)v9 |= 0x10000uLL;
        *((_DWORD *)v9 + 65) |= 0x80u;
      }
      v21 = ConvertDmmToDisplayConfigScaling((unsigned int)*v20);
      v22 = v41[1];
      switch ( v21 )
      {
        case 1:
          if ( (_DWORD)v10 != v12 || v41[1] != v13 )
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
          break;
        case 2:
          if ( (unsigned int)v10 < v12 || v41[1] < v13 )
          {
LABEL_54:
            v37 = v12 * v41[1];
            if ( v12 * v41[1] < v13 * (unsigned int)v10 )
            {
              *((_DWORD *)v9 + 45) = v41[1];
              v35 = ((unsigned int)v10 - v37 / v13) >> 1;
              *((_DWORD *)v9 + 44) = v35 + v37 / v13;
              v36 = 0;
            }
            else
            {
              v38 = v13 * (unsigned int)v10 / v12;
              *((_DWORD *)v9 + 44) = v10;
              v36 = (v22 - v38) >> 1;
              *((_DWORD *)v9 + 45) = v36 + v38;
              v35 = 0;
            }
            v39 = (unsigned int *)((char *)v9 + 172);
            goto LABEL_63;
          }
          v35 = ((unsigned int)v10 - v12) >> 1;
          v36 = (v41[1] - v13) >> 1;
          *((_DWORD *)v9 + 44) = v35 + v12;
          *((_DWORD *)v9 + 45) = v36 + v13;
LABEL_62:
          v39 = (unsigned int *)((char *)v9 + 172);
LABEL_63:
          *((_DWORD *)v9 + 42) = v35;
          *v39 = v36;
LABEL_26:
          v4 = v43;
          goto LABEL_27;
        case 3:
          break;
        case 4:
          goto LABEL_54;
        default:
          if ( v21 != 5 )
          {
            v30 = v21;
            WdLogSingleEntry1(1LL, v21);
            WdLogGlobalForLineNumber = 146;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              0xFFFFFFFFLL,
              L"Unknown scaling type 0x%lx",
              v30,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          WdLogSingleEntry1(1LL, (int)*v20);
          v40 = (int)*v20;
          WdLogGlobalForLineNumber = 4037;
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            0xFFFFFFFFLL,
            L"Failed to set clipbox with scaling intent 0x%lx, going to force ",
            v40,
            0LL,
            0LL,
            0LL,
            0LL);
          DxgkGetAdapterDefaultScaling((char *)v9 + 16, (char *)v9 + 140, v31, v32);
          v33 = ConvertDmmToDisplayConfigScaling((unsigned int)*v20);
          v34 = CalculateScaling(v33, v41, (unsigned int *)&v44, (unsigned int *)v9 + 42);
          *((_DWORD *)v9 + 65) |= 0x40u;
          if ( !v34 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 4043;
            DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"bRet", 4043LL, 0LL, 0LL, 0LL, 0LL);
          }
          goto LABEL_26;
      }
      *((_DWORD *)v9 + 45) = v22;
      v36 = 0;
      *((_DWORD *)v9 + 44) = v10;
      v35 = 0;
      goto LABEL_62;
    }
    if ( (v19 & 0x100) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4003;
    }
LABEL_25:
    *((_DWORD *)v9 + 65) |= 1u;
    v23 = *((_DWORD *)v9 + 24);
    *((_QWORD *)v9 + 21) = 0LL;
    *((_DWORD *)v9 + 44) = v23;
    *((_DWORD *)v9 + 45) = *((_DWORD *)v9 + 25);
LABEL_27:
    *(_QWORD *)v9 |= 0x800000uLL;
    v24 = *((_DWORD *)v9 + 43);
    if ( v24 < 0 || (v27 = *((_DWORD *)v9 + 42), v27 < 0) || *((_DWORD *)v9 + 44) <= v27 || *((_DWORD *)v9 + 45) <= v24 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4063;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
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
