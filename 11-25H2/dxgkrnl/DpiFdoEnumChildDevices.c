/*
 * XREFs of DpiFdoEnumChildDevices @ 0x14040701C
 * Callers:
 *     DpiFdoStartAdapter @ 0x14023E8A8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DpiDxgkDdiQueryChildRelations @ 0x14018AA20 (DpiDxgkDdiQueryChildRelations.c)
 *     DxgkDWCloneCheckTargetID @ 0x1401C1C18 (DxgkDWCloneCheckTargetID.c)
 *     DpiFdoCreateChildDescriptor @ 0x140236594 (DpiFdoCreateChildDescriptor.c)
 *     DpiFdoRemoveChildDescriptors @ 0x14023E500 (DpiFdoRemoveChildDescriptors.c)
 *     DpiAcpiExposeInfo @ 0x14024A764 (DpiAcpiExposeInfo.c)
 */

__int64 __fastcall DpiFdoEnumChildDevices(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // r15
  __int64 v6; // r13
  unsigned int v7; // ebx
  _DWORD *Pool2; // rax
  _DWORD *v9; // rsi
  int ChildDescriptor; // edi
  int ChildRelations; // eax
  __int64 v12; // r9
  unsigned int v13; // r12d
  int v14; // edx
  __int64 i; // rax
  __int64 v16; // r15
  int v17; // ecx
  int v18; // eax
  int v19; // ebx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v20; // ebx
  SIZE_T v21; // rax
  bool v22; // al
  __int64 v23; // rax
  unsigned int v24; // eax
  BOOL v25; // eax
  unsigned int v26; // ecx
  bool v27; // zf
  int v28; // eax
  bool v29; // zf
  __int64 v30; // rcx
  unsigned int j; // ebx
  unsigned int v33; // [rsp+30h] [rbp-68h]
  int v34; // [rsp+34h] [rbp-64h]
  int v35; // [rsp+38h] [rbp-60h]
  char v37; // [rsp+A8h] [rbp+10h]
  unsigned int v38; // [rsp+B0h] [rbp+18h]
  unsigned int v39; // [rsp+B8h] [rbp+20h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = a1;
  v6 = *(_QWORD *)(v4 + 40);
  v7 = 28 * (*(_DWORD *)(v4 + 2704) + 1);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v7, 1953656900LL, a4);
  v9 = Pool2;
  if ( !Pool2 )
  {
    ChildDescriptor = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 5535;
    goto LABEL_112;
  }
  memset(Pool2, 0, v7);
  ChildRelations = DpiDxgkDdiQueryChildRelations(v6, *(_QWORD *)(v4 + 48), (__int64)v9, v7);
  ChildDescriptor = ChildRelations;
  if ( ChildRelations < 0 )
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 200), ChildRelations);
    WdLogGlobalForLineNumber = 5565;
    goto LABEL_112;
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 3440), 1u);
  KeWaitForSingleObject((PVOID)(v4 + 3544), Executive, 0, 0, 0LL);
  v34 = -1;
  v12 = 0LL;
  v13 = -1;
  v37 = 0;
  v14 = -1;
  v33 = 0;
  v35 = -1;
  v38 = -1;
  *(_DWORD *)(v4 + 3616) = 0;
  *(_WORD *)(v4 + 2724) = 257;
  v39 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 2704); i = ++v39 )
  {
    v16 = 7 * i;
    v17 = v9[7 * i + 4];
    if ( v17 == 2 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      v14 = v38;
      v17 = 4;
      v12 = 0LL;
      WdLogGlobalForLineNumber = 5608;
      v9[v16 + 4] = 4;
    }
    v18 = v9[v16];
    if ( v18 == 1 )
    {
      *(_BYTE *)(v4 + 2724) &= DxgkDWCloneCheckTargetID(v9[v16 + 6]);
      v19 = v9[v16 + 6];
      DXGGLOBAL::GetGlobal();
      *(_BYTE *)(v4 + 2725) &= (v19 & 0xF0000000) == 0;
      if ( *(_DWORD *)(v6 + 28) >= 0x104Fu )
      {
        v20 = v9[v16 + 1];
        if ( v20 < D3DKMDT_VOT_HD15 )
        {
          v20 = D3DKMDT_VOT_OTHER;
          if ( (v9[v16 + 1] & 0x7FFFFFFFu) <= 0xE )
            v20 = 0x80000000;
        }
        v9[v16 + 1] = v20;
        if ( v20 == D3DKMDT_VOT_MIRACAST || (unsigned int)(v20 - 16) <= 1 )
        {
          if ( v9[v16 + 4] != 4 )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry1(2LL, -1073741637LL);
            WdLogGlobalForLineNumber = 5683;
            goto LABEL_86;
          }
          if ( v20 == D3DKMDT_VOT_MIRACAST )
          {
            ++v33;
            v35 = v9[v16 + 6];
          }
          else if ( !*(_BYTE *)(v4 + 1158) )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry1(2LL, -1073741637LL);
            WdLogGlobalForLineNumber = 5709;
            goto LABEL_86;
          }
        }
      }
      else
      {
        v9[v16 + 1] = -1;
        v20 = D3DKMDT_VOT_OTHER;
        WdLogSingleEntry1(3LL, 0LL);
        WdLogGlobalForLineNumber = 5637;
      }
      if ( !IsInternalVideoOutput(v20) && v20 != D3DKMDT_VOT_LVDS )
        goto LABEL_42;
      v14 = v38;
      if ( v38 != -1 )
      {
        ChildDescriptor = -1073741637;
        WdLogSingleEntry2(2LL, (unsigned int)v9[v16 + 6], (unsigned int)v9[7 * v38 + 6]);
        WdLogGlobalForLineNumber = 5730;
        goto LABEL_86;
      }
      *(_DWORD *)(v4 + 3620) = v9[v16 + 6];
      if ( *(_BYTE *)(*(_QWORD *)(v4 + 168) + 108LL) == (_BYTE)v12
        && (*(_BYTE *)(v4 + 1153) == (_BYTE)v12 || *(_BYTE *)(v4 + 480) == (_BYTE)v12)
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x4000u
        && *(_BYTE *)(v4 + 2716) == (_BYTE)v12 )
      {
        ChildDescriptor = -1073741637;
        WdLogSingleEntry1(2LL, -1073741637LL);
        WdLogGlobalForLineNumber = 5757;
        goto LABEL_86;
      }
      if ( v13 == -1 )
      {
        v13 = v39;
        v34 = v20;
        continue;
      }
      if ( *(_BYTE *)(v4 + 2716) == (_BYTE)v12 )
      {
        v21 = RtlCompareMemory((const void *)(v4 + 544), &GUID_BUS_VMBUS, 0x10uLL);
        v12 = 0LL;
        if ( v21 != 16 || !byte_14015DD58 )
        {
          v37 = 1;
          if ( v20 == v34 )
            goto LABEL_44;
          if ( v20 == 0x80000000 )
            goto LABEL_41;
          if ( v20 != D3DKMDT_VOT_LVDS )
          {
            if ( v20 == D3DKMDT_VOT_DISPLAYPORT_EMBEDDED )
            {
              v22 = v34 == 13;
              goto LABEL_40;
            }
            goto LABEL_44;
          }
          v22 = v34 != 0x80000000;
LABEL_40:
          if ( v22 )
          {
LABEL_41:
            v23 = v13;
            v13 = v39;
            v34 = v20;
            v9[7 * v23 + 1] = -1;
          }
          else
          {
LABEL_44:
            v9[v16 + 1] = -1;
          }
        }
LABEL_42:
        v14 = v38;
      }
    }
    else
    {
      if ( v18 == 3 )
      {
        v24 = *(_DWORD *)(v6 + 28);
        if ( v24 < 0x7007 )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry2(2LL, v24, 28680LL);
          v12 = 0LL;
          WdLogGlobalForLineNumber = 5848;
          goto LABEL_42;
        }
        if ( v13 != -1 )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry2(2LL, (unsigned int)v9[7 * v13 + 6], (unsigned int)v9[v16 + 6]);
          WdLogGlobalForLineNumber = 5858;
          goto LABEL_86;
        }
        if ( *(_BYTE *)(*(_QWORD *)(v4 + 168) + 108LL) == (_BYTE)v12
          && (*(_BYTE *)(v4 + 1153) == (_BYTE)v12 || *(_BYTE *)(v4 + 480) == (_BYTE)v12) )
        {
          if ( *(_BYTE *)(v4 + 2716) == (_BYTE)v12 )
          {
            if ( *(_BYTE *)(v4 + 6393) == (_BYTE)v12 )
            {
              ChildDescriptor = -1073741637;
              WdLogSingleEntry1(2LL, -1073741637LL);
              WdLogGlobalForLineNumber = 5871;
              goto LABEL_86;
            }
            goto LABEL_54;
          }
        }
        else
        {
LABEL_54:
          if ( *(_BYTE *)(v4 + 2716) == (_BYTE)v12
            && byte_14015DD58 == (_BYTE)v12
            && *(_BYTE *)(v4 + 6393) == (_BYTE)v12
            && v14 != -1 )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry1(2LL, -1073741637LL);
            WdLogGlobalForLineNumber = 5892;
            goto LABEL_86;
          }
        }
        v25 = DxgkDWCloneCheckTargetID(v9[v16 + 6]);
        v12 = 0LL;
        if ( !v25 )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry1(2LL, (unsigned int)v9[v16 + 6]);
          WdLogGlobalForLineNumber = 5903;
          goto LABEL_86;
        }
        v26 = v9[v16 + 1];
        if ( v26 > 0xA )
        {
          if ( v26 != 11 && v26 != 12 && v26 != 13 && v26 != 18 )
          {
            v27 = v26 == 0x80000000;
            goto LABEL_71;
          }
        }
        else if ( v26 != 10 && v26 != 4 && v26 != 5 && v26 != 6 && v26 != 8 )
        {
          v27 = v26 == 9;
LABEL_71:
          if ( !v27 )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry2(2LL, (int)v9[v16 + 1], (unsigned int)v9[v16 + 6]);
            WdLogGlobalForLineNumber = 5939;
            goto LABEL_86;
          }
        }
        v28 = v9[v16 + 4];
        if ( v28 != 4 && v28 != 1 )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry1(2LL, (unsigned int)v9[v16 + 6]);
          WdLogGlobalForLineNumber = 5950;
          goto LABEL_86;
        }
        v14 = v38;
        if ( v38 == -1 )
        {
          v14 = v39;
          v38 = v39;
          *(_DWORD *)(v4 + 3620) = v9[v16 + 6];
        }
        continue;
      }
      if ( v18 != 2 )
      {
        if ( v18 == 4 )
        {
          if ( v17 != 1 )
          {
            ChildDescriptor = -1073741637;
            WdLogSingleEntry1(2LL, (unsigned int)v9[v16 + 6]);
            WdLogGlobalForLineNumber = 5975;
LABEL_86:
            v5 = a1;
            goto LABEL_111;
          }
        }
        else if ( *(_DWORD *)(v6 + 28) >= 0x700Au )
        {
          ChildDescriptor = -1073741637;
          WdLogSingleEntry2(2LL, (unsigned int)v9[v16 + 6], (int)v9[v16]);
          WdLogGlobalForLineNumber = 5994;
          goto LABEL_86;
        }
      }
    }
  }
  if ( *(_QWORD *)(v4 + 3320) == v12 )
  {
    if ( v33 )
    {
      ChildDescriptor = -1073741637;
      WdLogSingleEntry1(2LL, -1073741637LL);
      WdLogGlobalForLineNumber = 6025;
      goto LABEL_86;
    }
    v29 = 0;
  }
  else
  {
    v29 = v33 == 1;
    if ( v33 > 1 )
    {
      ChildDescriptor = -1073741637;
      WdLogSingleEntry1(2LL, -1073741637LL);
      WdLogGlobalForLineNumber = 6012;
      goto LABEL_86;
    }
  }
  if ( v29 )
    *(_DWORD *)(v4 + 3360) = v35;
  if ( v13 != -1 )
  {
    v30 = 7LL * v13;
    if ( v9[v30 + 1] == 6 )
      v9[v30 + 1] = 0x80000000;
    if ( v37 != (_BYTE)v12 )
    {
      WdLogSingleEntry1(2LL, 0LL);
      *(_DWORD *)(v4 + 2744) |= 1u;
      WdLogGlobalForLineNumber = 6056;
    }
  }
  v5 = a1;
  if ( *(_BYTE *)(v4 + 1156) == 1 )
    DpiAcpiExposeInfo(a1);
  for ( j = 0; j < *(_DWORD *)(v4 + 2704); ++j )
  {
    ChildDescriptor = DpiFdoCreateChildDescriptor(
                        v4,
                        v9[7 * j + 6],
                        1,
                        &v9[7 * j],
                        (__int64)&v9[7 * j + 1],
                        v9[7 * j + 5]);
    if ( ChildDescriptor < 0 )
      break;
  }
LABEL_111:
  KeReleaseMutex((PRKMUTEX)(v4 + 3544), 0);
  ExReleaseResourceLite((PERESOURCE)(v4 + 3440));
  KeLeaveCriticalRegion();
  if ( ChildDescriptor >= 0 )
  {
LABEL_113:
    ExFreePoolWithTag(v9, 0);
  }
  else
  {
LABEL_112:
    DpiFdoRemoveChildDescriptors(v5);
    if ( v9 )
      goto LABEL_113;
  }
  return (unsigned int)ChildDescriptor;
}
