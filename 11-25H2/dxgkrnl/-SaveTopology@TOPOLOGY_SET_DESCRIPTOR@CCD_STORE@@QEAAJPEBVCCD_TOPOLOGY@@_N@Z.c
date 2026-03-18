/*
 * XREFs of ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x140266014
 * Callers:
 *     _anonymous_namespace_::_SaveTopologySetCallback @ 0x140261D70 (_anonymous_namespace_--_SaveTopologySetCallback.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z @ 0x140040FF4 (-GetBitsPerPixel@@YAIW4_D3DDDIFORMAT@@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x14004C14C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005319C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x14036D0C0 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     _CcdOpenRegistrySubkey @ 0x1403CA298 (_CcdOpenRegistrySubkey.c)
 *     ?QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z @ 0x1403D0330 (-QueryCloneInfo@CCD_SET_STRING_ID@@QEBAJIPEAI00@Z.c)
 *     ?TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ @ 0x1403E6278 (-TouchTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJXZ.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403F58E8 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 *     _CcdWriteRegistryValues @ 0x1403F5AE0 (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::SaveTopology(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        const struct CCD_TOPOLOGY *a2)
{
  int v3; // eax
  unsigned int v4; // edi
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  unsigned __int16 *v6; // r13
  unsigned int v7; // r14d
  int v8; // eax
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  __int64 v11; // rax
  unsigned __int16 v12; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *v14; // rcx
  __int64 v15; // r12
  __int64 v16; // rdi
  NTSTATUS v17; // eax
  int v18; // eax
  int v19; // r12d
  int v20; // edx
  int v21; // eax
  unsigned int BitsPerPixel; // eax
  int v23; // edx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int16 v27; // dx
  unsigned int v29; // [rsp+30h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v31; // [rsp+40h] [rbp-30h] BYREF
  int v32; // [rsp+44h] [rbp-2Ch]
  ULONG v33; // [rsp+48h] [rbp-28h] BYREF
  int v34; // [rsp+4Ch] [rbp-24h]
  int v35; // [rsp+50h] [rbp-20h]
  _DWORD v36[3]; // [rsp+54h] [rbp-1Ch] BYREF
  WCHAR SourceString; // [rsp+60h] [rbp-10h] BYREF

  *(_QWORD *)&v36[1] = this;
  v3 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TouchTopology(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry4(2LL, v3, a2, *((_QWORD *)a2 + 8), 1LL);
    WdLogGlobalForLineNumber = 1610;
    return v4;
  }
  ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(a2);
  v6 = (unsigned __int16 *)ModalitySetId;
  if ( *(int *)ModalitySetId < 0 || !*((_WORD *)ModalitySetId + 4) )
  {
    WdLogSingleEntry4(2LL, *(int *)ModalitySetId, a2, *((_QWORD *)a2 + 8), 1LL);
    WdLogGlobalForLineNumber = 1628;
    return v4;
  }
  v32 = -1;
  v7 = 0;
  Handle = 0LL;
  while ( v7 < v6[16] )
  {
    v31 = 0;
    v29 = 0;
    v8 = CCD_SET_STRING_ID::QueryCloneInfo((CCD_SET_STRING_ID *)v6, v7, &v31, 0LL, &v29);
    if ( v8 < 0 )
    {
      WdLogSingleEntry4(1LL, v8, v7, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 1651;
      break;
    }
    if ( *(int *)a2 < 0
      || !*((_WORD *)a2 + 4)
      || ((v9 = *((_QWORD *)a2 + 8)) == 0 ? (v10 = 0) : (v10 = *(_WORD *)(v9 + 20)), v7 >= v10) )
    {
      WdLogSingleEntry4(1LL, -1073741823LL, v7, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 1667;
      break;
    }
    v11 = *((_QWORD *)a2 + 7);
    if ( v11 )
      v12 = *(_WORD *)(v11 + 2LL * v7);
    else
      v12 = v7;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v12);
    v15 = v31;
    v16 = (__int64)PathDescriptor;
    if ( v32 != v31 )
    {
      v17 = RtlStringCbPrintfW(&SourceString, 6uLL, (size_t *)L"%02x", v31);
      if ( v17 < 0 )
      {
        WdLogSingleEntry5(1LL, v17, v7, v15, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 1690;
        break;
      }
      if ( Handle )
        ZwClose(Handle);
      v33 = 0;
      v18 = CcdOpenRegistrySubkey((int)&Handle, 983103, *(_QWORD *)(*(_QWORD *)&v36[1] + 64LL), &SourceString, &v33);
      if ( v18 < 0 )
      {
        WdLogSingleEntry5(2LL, v18, v7, v15, a2, *((_QWORD *)a2 + 8));
        WdLogGlobalForLineNumber = 1710;
        break;
      }
      v32 = v15;
      if ( !v29 )
      {
        v19 = *(_DWORD *)(v16 + 96);
        v34 = *(_DWORD *)(v16 + 100);
        v35 = *(_DWORD *)(v16 + 112);
        if ( (*(_QWORD *)v16 & 0x20000LL) != 0 )
        {
          if ( (*(_QWORD *)v16 & 0x200LL) == 0 || ((*(_DWORD *)(v16 + 132) - 2) & 0xFFFFFFFD) != 0 )
          {
            v20 = *(_DWORD *)(v16 + 152);
            v21 = *(_DWORD *)(v16 + 156);
          }
          else
          {
            v20 = *(_DWORD *)(v16 + 156);
            v21 = *(_DWORD *)(v16 + 152);
          }
          *(_DWORD *)(v16 + 100) = v21;
          *(_DWORD *)(v16 + 96) = v20;
        }
        BitsPerPixel = GetBitsPerPixel((enum _D3DDDIFORMAT)*(_DWORD *)(v16 + 116));
        *(_DWORD *)(v16 + 112) = v23 * (BitsPerPixel >> 3);
        v24 = CcdWriteRegistryValues((PCWSTR)Handle, v16);
        if ( v24 < 0 )
        {
          WdLogSingleEntry4(2LL, v24, Handle, 0LL, v7);
          WdLogGlobalForLineNumber = 1762;
          break;
        }
        *(_DWORD *)(v16 + 100) = v34;
        *(_DWORD *)(v16 + 112) = v35;
        *(_DWORD *)(v16 + 96) = v19;
        v36[0] = 4;
        v25 = CcdWriteRegistryValues((PCWSTR)Handle, (__int64)v36);
        if ( v25 < 0 )
        {
          WdLogSingleEntry4(2LL, v25, Handle, 0LL, v7);
          WdLogGlobalForLineNumber = 1790;
          break;
        }
      }
    }
    v26 = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
            v14,
            Handle,
            v29,
            (const struct D3DKMT_PATHMODALITY_DESCRIPTOR *)v16);
    if ( v26 < 0 )
    {
      WdLogSingleEntry5(2LL, v26, v7, v29, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 1811;
      break;
    }
    if ( (*(_QWORD *)v16 & 0x800000000000LL) != 0
      && IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(v16 + 88))
      && (v27 & 0x200) != 0 )
    {
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 331) = *(_DWORD *)(v16 + 132);
    }
    ++v7;
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
