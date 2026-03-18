/*
 * XREFs of ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1402EA610
 * Callers:
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x140369680 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005319C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     DxgkGetAdapterDefaultScaling @ 0x1402E8C80 (DxgkGetAdapterDefaultScaling.c)
 *     ?_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402EAD70 (-_ReadPath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIQEAGPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@.c)
 *     _CcdReadRegistryValues @ 0x1402EAF88 (_CcdReadRegistryValues.c)
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402EB8EC (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x14036B030 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z @ 0x14036CCF4 (-SetModalitySetId@CCD_TOPOLOGY@@QEAAAEBVCCD_SET_STRING_ID@@AEBV2@@Z.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        struct CCD_TOPOLOGY *a2)
{
  unsigned __int16 v3; // si
  const struct CCD_SET_STRING_ID *v4; // r12
  __int64 v5; // rax
  unsigned __int16 v6; // r8
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  int v11; // r9d
  int v12; // r14d
  __int64 v13; // rbx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // r12
  __int64 v21; // r12
  NTSTATUS v22; // eax
  unsigned int v23; // edi
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v24; // rdi
  int RegistryValues; // eax
  int v26; // eax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  NTSTATUS v32; // eax
  void *v33; // rdi
  NTSTATUS v34; // eax
  __int64 result; // rax
  _WORD *v36; // rax
  unsigned int v37; // eax
  unsigned int v38; // edx
  const struct CCD_SET_STRING_ID *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  int v42; // eax
  int v43; // edx
  __int64 v44; // rax
  unsigned int v45; // [rsp+30h] [rbp-69h]
  unsigned int v46; // [rsp+34h] [rbp-65h]
  unsigned int v47; // [rsp+34h] [rbp-65h]
  int v48; // [rsp+38h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v50; // [rsp+48h] [rbp-51h]
  int v51; // [rsp+4Ch] [rbp-4Dh]
  const struct CCD_SET_STRING_ID *SetId; // [rsp+50h] [rbp-49h]
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v53; // [rsp+58h] [rbp-41h]
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int16 v56; // [rsp+A0h] [rbp+7h] BYREF
  WCHAR SourceString; // [rsp+A8h] [rbp+Fh] BYREF

  v53 = this;
  v3 = 0;
  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v4 = SetId;
  if ( !SetId )
  {
    WdLogSingleEntry0(2LL);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 1160;
    return result;
  }
  v5 = *((_QWORD *)a2 + 8);
  if ( v5 )
    v6 = *(_WORD *)(v5 + 22);
  else
    v6 = 0;
  v7 = *((_WORD *)SetId + 16);
  v8 = *((_QWORD *)a2 + 8);
  if ( !v5 )
    v8 = 0LL;
  if ( v7 > v6 )
  {
    if ( v5 )
      v3 = *(_WORD *)(v8 + 22);
    WdLogSingleEntry2(1LL, v3, *((unsigned __int16 *)SetId + 16));
    result = 3221225507LL;
    WdLogGlobalForLineNumber = 1169;
    return result;
  }
  v9 = 0;
  if ( v7 )
  {
    do
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v9);
      CCD_TOPOLOGY::ClearPathDescriptor(PathDescriptor);
      ++v9;
    }
    while ( v9 < *((unsigned __int16 *)SetId + 16) );
  }
  v11 = -1;
  Handle = 0LL;
  v51 = -1;
  v12 = -1073741823;
  v13 = 0LL;
  v14 = 0;
  while ( 1 )
  {
    v45 = v14;
    if ( v14 >= *((unsigned __int16 *)v4 + 16) )
      break;
    v15 = *((_QWORD *)v4 + 3);
    v16 = v14 - 1;
    v17 = v14;
    v18 = 0;
    v48 = 0;
    v46 = 0;
    v19 = (int)(v14 - 1);
    v20 = *(unsigned __int16 *)(v15 + 8 * v17 + 2);
    if ( v16 >= 0 )
    {
      v36 = (_WORD *)(v15 + 8LL * v16 + 2);
      do
      {
        if ( *v36 != (_WORD)v20 )
          break;
        ++v18;
        v36 -= 4;
        --v19;
      }
      while ( v19 >= 0 );
      v46 = v18;
    }
    v12 = 0;
    if ( v11 != (_DWORD)v20 )
    {
      v32 = RtlStringCbPrintfW(&SourceString, 6uLL, (size_t *)L"%02x", *(unsigned __int16 *)(v15 + 8 * v17 + 2));
      v12 = v32;
      if ( v32 < 0 )
      {
        WdLogSingleEntry5(1LL, v32, v17, v20, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 1229;
        goto LABEL_42;
      }
      if ( Handle )
        ZwClose(Handle);
      DestinationString = 0LL;
      v33 = (void *)*((_QWORD *)v53 + 8);
      RtlInitUnicodeString(&DestinationString, &SourceString);
      *(_QWORD *)&ObjectAttributes.Length = 48LL;
      ObjectAttributes.ObjectName = &DestinationString;
      *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
      ObjectAttributes.RootDirectory = v33;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v34 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v12 = v34;
      if ( v34 < 0 )
      {
        WdLogSingleEntry5(2LL, v34, v45, v20, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 1247;
        goto LABEL_42;
      }
      v51 = v20;
    }
    v21 = v46;
    v22 = RtlStringCbPrintfW(&v56, 6uLL, (size_t *)L"%02x", v46);
    v23 = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry2(1LL, v22, v46);
      result = v23;
      WdLogGlobalForLineNumber = 1264;
      return result;
    }
    v24 = CCD_TOPOLOGY::GetPathDescriptor(a2, v45);
    RegistryValues = CcdReadRegistryValues(Handle, 0LL, &unk_14015BDC0, 8LL, v24);
    if ( RegistryValues < 0 )
    {
      WdLogSingleEntry4(2LL, RegistryValues, Handle, v46, v45);
      WdLogGlobalForLineNumber = 1289;
LABEL_39:
      CCD_TOPOLOGY::ClearPathDescriptor(v24);
LABEL_40:
      v4 = SetId;
      break;
    }
    *((_QWORD *)v24 + 13) = *((_QWORD *)v24 + 12);
    v26 = CcdReadRegistryValues(Handle, 0LL, &unk_14015BD50, 2LL, &v48);
    if ( v26 == -1073741772 )
    {
      v48 = 0;
    }
    else if ( v26 < 0 )
    {
      WdLogSingleEntry4(2LL, v26, Handle, v46, v45);
      WdLogGlobalForLineNumber = 1321;
      goto LABEL_39;
    }
    v50 = *((_DWORD *)v24 + 24);
    v47 = *((_DWORD *)v24 + 25);
    v28 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_ReadPath(v27, Handle, v21, &v56, v24);
    if ( v28 < 0 )
    {
      WdLogSingleEntry5(2LL, v28, v45, v21, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 1344;
      goto LABEL_39;
    }
    *((_DWORD *)v24 + 51) = 0;
    *((_DWORD *)v24 + 52) = 4;
    switch ( v48 )
    {
      case 0:
        v40 = *(_QWORD *)v24;
        v41 = *(_QWORD *)v24 & 0x10B87LL;
        *(_QWORD *)v24 = v41;
        if ( (v40 & 0x100) != 0 )
        {
          if ( (v40 & 0x200) == 0 || ((*((_DWORD *)v24 + 33) - 2) & 0xFFFFFFFD) != 0 )
          {
            v42 = *((_DWORD *)v24 + 25);
            v43 = *((_DWORD *)v24 + 24);
          }
          else
          {
            v42 = *((_DWORD *)v24 + 24);
            v43 = *((_DWORD *)v24 + 25);
          }
          *((_DWORD *)v24 + 38) = v43;
          *((_DWORD *)v24 + 39) = v42;
          *(_QWORD *)v24 = v41 | 0x20000;
        }
LABEL_76:
        v44 = *(_QWORD *)v24 & 0x30B87LL;
        *(_QWORD *)v24 = v44;
        if ( v48 == 1 && (v44 & 0x10000) != 0 && *((_DWORD *)v24 + 35) == 5 )
          DxgkGetAdapterDefaultScaling((struct _LUID *)v24 + 2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING *)v24 + 35);
LABEL_80:
        *(_QWORD *)v24 &= 0x830B87uLL;
        if ( *((_DWORD *)v24 + 29) != 21 )
        {
          WdLogSingleEntry3(3LL, *((int *)v24 + 29), v53, v24);
          WdLogGlobalForLineNumber = 1423;
        }
        *((_DWORD *)v24 + 29) = 21;
LABEL_45:
        *(_QWORD *)v24 &= 0x830F87uLL;
LABEL_23:
        *(_QWORD *)v24 &= 0x1830F87uLL;
        goto LABEL_24;
      case 1:
        goto LABEL_76;
      case 2:
        goto LABEL_80;
      case 3:
        goto LABEL_45;
      case 4:
        goto LABEL_23;
    }
    WdLogSingleEntry3(2LL, v48, *((unsigned int *)v24 + 6), *((unsigned int *)v24 + 7));
    WdLogGlobalForLineNumber = 1483;
    CCD_TOPOLOGY::ClearPathDescriptor(v24);
LABEL_24:
    v29 = *(_QWORD *)v24;
    if ( (*(_QWORD *)v24 & 0x1000000LL) != 0 )
    {
      v30 = CcdReadRegistryValues(Handle, &v56, &unk_14015BB20, 4LL, v24);
      if ( v30 < 0 )
      {
        WdLogSingleEntry3(3LL, v30, v45, v21);
        WdLogGlobalForLineNumber = 1503;
        goto LABEL_40;
      }
    }
    else
    {
      *((_DWORD *)v24 + 60) = 1;
      if ( (v29 & 2) != 0 )
      {
        *((_QWORD *)v24 + 28) = *(_QWORD *)((char *)v24 + 52);
        *(_QWORD *)v24 = v29 | 0x1000000;
      }
    }
    v31 = *(_QWORD *)v24;
    if ( (*(_QWORD *)v24 & 0x20000LL) != 0 )
    {
      if ( (_DWORD)v21 )
      {
        *((_QWORD *)v24 + 19) = v13;
      }
      else
      {
        if ( (v31 & 0x200) != 0 && ((*((_DWORD *)v24 + 33) - 2) & 0xFFFFFFFD) == 0 )
        {
          v37 = v50;
          v38 = v47;
        }
        else
        {
          v37 = v47;
          v38 = v50;
        }
        *((_DWORD *)v24 + 38) = v38;
        *((_DWORD *)v24 + 39) = v37;
        v13 = *((_QWORD *)v24 + 19);
      }
    }
    if ( (v31 & 0x10000) != 0 )
    {
      *((_DWORD *)v24 + 34) = *((_DWORD *)v24 + 35);
      v31 |= 0x40000000000uLL;
      *(_QWORD *)v24 = v31;
    }
    if ( (v31 & 0x100) == 0 )
      *(_QWORD *)v24 = v31 & 0xFFFFFFFFFF7FFFFFuLL;
    v4 = SetId;
    v14 = v45 + 1;
    v11 = v51;
  }
  if ( v12 >= 0 )
  {
    v39 = CCD_TOPOLOGY::SetModalitySetId(a2, v4);
    v12 = *(_DWORD *)v39;
    if ( *(int *)v39 >= 0 )
    {
      *(_WORD *)(*((_QWORD *)a2 + 8) + 20LL) = *((_WORD *)v4 + 16);
      *(_DWORD *)(*((_QWORD *)a2 + 8) + 24LL) |= 1u;
    }
    else
    {
      WdLogSingleEntry3(2LL, *(int *)v39, a2, v4);
      WdLogGlobalForLineNumber = 1574;
    }
  }
LABEL_42:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v12;
}
