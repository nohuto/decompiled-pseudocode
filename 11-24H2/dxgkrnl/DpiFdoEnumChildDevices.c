/*
 * XREFs of DpiFdoEnumChildDevices @ 0x1403FF92C
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245688 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004BC00 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x14018CC64 (DpiDxgkDdiQueryChildRelations.c)
 *     DxgkDWCloneCheckTargetID @ 0x1401C6234 (DxgkDWCloneCheckTargetID.c)
 *     DpiFdoCreateChildDescriptor @ 0x14023D098 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1402451C0 (DpiFdoRemoveChildDescriptors.c)
 *     DpiAcpiExposeInfo @ 0x140251594 (DpiAcpiExposeInfo.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r15
  __int64 v3; // r13
  unsigned int v4; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v6; // rsi
  int ChildDescriptor; // edi
  int ChildRelations; // eax
  __int64 v9; // r9
  unsigned int v10; // r12d
  int v11; // edx
  __int64 i; // rax
  __int64 v13; // r15
  int v14; // ecx
  int v15; // eax
  int v16; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v17; // ebx
  SIZE_T v18; // rax
  bool v19; // al
  __int64 v20; // rax
  unsigned int v21; // eax
  BOOL v22; // eax
  unsigned int v23; // ecx
  bool v24; // zf
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rcx
  unsigned int j; // ebx
  unsigned int v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+34h] [rbp-64h]
  int v32; // [rsp+38h] [rbp-60h]
  char v34; // [rsp+A8h] [rbp+10h]
  unsigned int v35; // [rsp+B0h] [rbp+18h]
  unsigned int v36; // [rsp+B8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = a1;
  v3 = *(_QWORD *)(v1 + 40);
  v4 = 28 * (*(_DWORD *)(v1 + 2704) + 1);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v4, 1953656900LL);
  v6 = Pool2;
  if ( !Pool2 )
  {
    ChildDescriptor = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 5667;
    goto LABEL_112;
  }
  memset(Pool2, 0, v4);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v3, *(_QWORD *)(v1 + 48), (__int64)v6, v4);
  ChildDescriptor = ChildRelations;
  if ( ChildRelations < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v3 + 200), ChildRelations);
    WdLogGlobalForLineNumber = 5697;
    goto LABEL_112;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v1 + 3440), 1u);
  KeWaitForSingleObject((PVOID)(v1 + 3544), Executive, 0, 0, 0LL);
  v31 = -1;
  v9 = 0LL;
  v10 = -1;
  v34 = 0;
  v11 = -1;
  v30 = 0;
  v32 = -1;
  v35 = -1;
  *(_DWORD *)(v1 + 3616) = 0;
  *(_WORD *)(v1 + 2724) = 257;
  v36 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 2704); i = ++v36 )
  {
    v13 = 7 * i;
    v14 = v6[7 * i + 4];
    if ( v14 == 2 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      v11 = v35;
      v14 = 4;
      v9 = 0LL;
      WdLogGlobalForLineNumber = 5740;
      v6[v13 + 4] = 4;
    }
    v15 = v6[v13];
    if ( v15 == 1 )
    {
      *(_BYTE *)(v1 + 2724) &= DxgkDWCloneCheckTargetID(v6[v13 + 6]);
      v16 = v6[v13 + 6];
      DXGGLOBAL::GetGlobal();
      *(_BYTE *)(v1 + 2725) &= (v16 & 0xF0000000) == 0;
      if ( *(_DWORD *)(v3 + 28) >= 0x104Fu )
      {
        v17 = v6[v13 + 1];
        if ( v17 < D3DKMDT_VOT_HD15 )
        {
          v17 = D3DKMDT_VOT_OTHER;
          if ( (v6[v13 + 1] & 0x7FFFFFFFu) <= 0xE )
            v17 = 0x80000000;
        }
        v6[v13 + 1] = v17;
        if ( v17 == D3DKMDT_VOT_MIRACAST || (unsigned int)(v17 - 16) <= 1 )
        {
          if ( v6[v13 + 4] != 4 )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry1(2LL, -1073741637LL);
            WdLogGlobalForLineNumber = 5815;
            goto LABEL_86;
          }
          if ( v17 == D3DKMDT_VOT_MIRACAST )
          {
            ++v30;
            v32 = v6[v13 + 6];
          }
          else if ( !*(_BYTE *)(v1 + 1158) )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry1(2LL, -1073741637LL);
            WdLogGlobalForLineNumber = 5841;
            goto LABEL_86;
          }
        }
      }
      else
      {
        v6[v13 + 1] = -1;
        v17 = D3DKMDT_VOT_OTHER;
        WdLogSingleEntry1(3LL, 0LL);
        WdLogGlobalForLineNumber = 5769;
      }
      if ( !IsInternalVideoOutput(v17) && v17 != D3DKMDT_VOT_LVDS )
        goto LABEL_42;
      v11 = v35;
      if ( v35 != -1 )
      {
        ChildDescriptor = -1073741637;
        WdLogSingleEntry2(2LL, (unsigned int)v6[v13 + 6], (unsigned int)v6[7 * v35 + 6]);
        WdLogGlobalForLineNumber = 5862;
        goto LABEL_86;
      }
      *(_DWORD *)(v1 + 3620) = v6[v13 + 6];
      if ( *(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL) == (_BYTE)v9
        && (*(_BYTE *)(v1 + 1153) == (_BYTE)v9 || *(_BYTE *)(v1 + 480) == (_BYTE)v9)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x4000u
        && *(_BYTE *)(v1 + 2716) == (_BYTE)v9 )
      {
        ChildDescriptor = -1073741637;
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 5889;
        goto LABEL_86;
      }
      if ( v10 == -1 )
      {
        v10 = v36;
        v31 = v17;
        continue;
      }
      if ( *(_BYTE *)(v1 + 2716) == (_BYTE)v9 )
      {
        v18 = RtlCompareMemory((const void *)(v1 + 544), &GUID_BUS_VMBUS, 0x10uLL);
        v9 = 0LL;
        if ( v18 != 16 || !byte_140160D18 )
        {
          v34 = 1;
          if ( v17 == v31 )
            goto LABEL_44;
          if ( v17 == 0x80000000 )
            goto LABEL_41;
          if ( v17 != D3DKMDT_VOT_LVDS )
          {
            if ( v17 == D3DKMDT_VOT_DISPLAYPORT_EMBEDDED )
            {
              v19 = v31 == 13;
              goto LABEL_40;
            }
            goto LABEL_44;
          }
          v19 = v31 != 0x80000000;
LABEL_40:
          if ( v19 )
          {
LABEL_41:
            v20 = v10;
            v10 = v36;
            v31 = v17;
            v6[7 * v20 + 1] = -1;
          }
          else
          {
LABEL_44:
            v6[v13 + 1] = -1;
          }
        }
LABEL_42:
        v11 = v35;
      }
    }
    else
    {
      if ( v15 == 3 )
      {
        v21 = *(_DWORD *)(v3 + 28);
        if ( v21 < 0x7007 )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry2(2LL, v21, 28680LL);
          v9 = 0LL;
          WdLogGlobalForLineNumber = 5980;
          goto LABEL_42;
        }
        if ( v10 != -1 )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry2(2LL, (unsigned int)v6[7 * v10 + 6], (unsigned int)v6[v13 + 6]);
          WdLogGlobalForLineNumber = 5990;
          goto LABEL_86;
        }
        if ( *(_BYTE *)(*(_QWORD *)(v1 + 168) + 108LL) == (_BYTE)v9
          && (*(_BYTE *)(v1 + 1153) == (_BYTE)v9 || *(_BYTE *)(v1 + 480) == (_BYTE)v9) )
        {
          if ( *(_BYTE *)(v1 + 2716) == (_BYTE)v9 )
          {
            if ( *(_BYTE *)(v1 + 6393) == (_BYTE)v9 )
            {
              ChildDescriptor = -1073741637;
              WdLogSingleEntry1(2LL, -1073741637LL);
              WdLogGlobalForLineNumber = 6003;
              goto LABEL_86;
            }
            goto LABEL_54;
          }
        }
        else
        {
LABEL_54:
          if ( *(_BYTE *)(v1 + 2716) == (_BYTE)v9
            && byte_140160D18 == (_BYTE)v9
            && *(_BYTE *)(v1 + 6393) == (_BYTE)v9
            && v11 != -1 )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry1(2LL, -1073741637LL);
            WdLogGlobalForLineNumber = 6024;
            goto LABEL_86;
          }
        }
        v22 = DxgkDWCloneCheckTargetID(v6[v13 + 6]);
        v9 = 0LL;
        if ( !v22 )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry1(2LL, (unsigned int)v6[v13 + 6]);
          WdLogGlobalForLineNumber = 6035;
          goto LABEL_86;
        }
        v23 = v6[v13 + 1];
        if ( v23 > 0xA )
        {
          if ( v23 != 11 && v23 != 12 && v23 != 13 && v23 != 18 )
          {
            v24 = v23 == 0x80000000;
            goto LABEL_71;
          }
        }
        else if ( v23 != 10 && v23 != 4 && v23 != 5 && v23 != 6 && v23 != 8 )
        {
          v24 = v23 == 9;
LABEL_71:
          if ( !v24 )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry2(2LL, (int)v6[v13 + 1], (unsigned int)v6[v13 + 6]);
            WdLogGlobalForLineNumber = 6071;
            goto LABEL_86;
          }
        }
        v25 = v6[v13 + 4];
        if ( v25 != 4 && v25 != 1 )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry1(2LL, (unsigned int)v6[v13 + 6]);
          WdLogGlobalForLineNumber = 6082;
          goto LABEL_86;
        }
        v11 = v35;
        if ( v35 == -1 )
        {
          v11 = v36;
          v35 = v36;
          *(_DWORD *)(v1 + 3620) = v6[v13 + 6];
        }
        continue;
      }
      if ( v15 != 2 )
      {
        if ( v15 == 4 )
        {
          if ( v14 != 1 )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry1(2LL, (unsigned int)v6[v13 + 6]);
            WdLogGlobalForLineNumber = 6107;
LABEL_86:
            v2 = a1;
            goto LABEL_111;
          }
        }
        else if ( *(_DWORD *)(v3 + 28) >= 0x700Au )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry2(2LL, (unsigned int)v6[v13 + 6], (int)v6[v13]);
          WdLogGlobalForLineNumber = 6126;
          goto LABEL_86;
        }
      }
    }
  }
  if ( *(_QWORD *)(v1 + 3320) == v9 )
  {
    if ( v30 )
    {
      ChildDescriptor = -1073741637;
      WdLogSingleEntry1(2LL, -1073741637LL);
      WdLogGlobalForLineNumber = 6157;
      goto LABEL_86;
    }
    v26 = 0;
  }
  else
  {
    v26 = v30 == 1;
    if ( v30 > 1 )
    {
      ChildDescriptor = -1073741637;
      WdLogSingleEntry1(2LL, -1073741637LL);
      WdLogGlobalForLineNumber = 6144;
      goto LABEL_86;
    }
  }
  if ( v26 )
    *(_DWORD *)(v1 + 3360) = v32;
  if ( v10 != -1 )
  {
    v27 = 7LL * v10;
    if ( v6[v27 + 1] == 6 )
      v6[v27 + 1] = 0x80000000;
    if ( v34 != (_BYTE)v9 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      *(_DWORD *)(v1 + 2744) |= 1u;
      WdLogGlobalForLineNumber = 6188;
    }
  }
  v2 = a1;
  if ( *(_BYTE *)(v1 + 1156) == 1 )
    DpiAcpiExposeInfo(a1);
  for ( j = 0; j < *(_DWORD *)(v1 + 2704); ++j )
  {
    ChildDescriptor = DpiFdoCreateChildDescriptor(
                        v1,
                        v6[7 * j + 6],
                        1,
                        &v6[7 * j],
                        (__int64)&v6[7 * j + 1],
                        v6[7 * j + 5]);
    if ( ChildDescriptor < 0 )
      break;
  }
LABEL_111:
  KeReleaseMutex((PRKMUTEX)(v1 + 3544), 0);
  ExReleaseResourceLite((PERESOURCE)(v1 + 3440));
  KeLeaveCriticalRegion();
  if ( ChildDescriptor >= 0 )
  {
LABEL_113:
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
LABEL_112:
    DpiFdoRemoveChildDescriptors(v2);
    if ( v6 )
      goto LABEL_113;
  }
  return (unsigned int)ChildDescriptor;
}
