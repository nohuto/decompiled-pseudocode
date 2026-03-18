/*
 * XREFs of ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x14033D5A0
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14031C570 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x14033C550 (_anonymous_namespace_--_UpdateConnectedSetCallback.c)
 *     ?LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z @ 0x14033E220 (-LoadByTopologySetId@CCD_RECENT_TOPOLOGY_RETRIEVER@@QEAAJAEBVCCD_SET_STRING_ID@@K_N@Z.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1403907A8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     DxgkConvertPathsModalityToDisplayConfig @ 0x1403D8D10 (DxgkConvertPathsModalityToDisplayConfig.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x14031CC98 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z @ 0x14033C63C (-IsSameCloneGroup@CCD_TOPOLOGY@@QEBA_NII_N@Z.c)
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x14033D740 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 */

__int64 __fastcall CCD_TOPOLOGY::QueryTopologyClass(CCD_TOPOLOGY *this, enum CCD_TOPOLOGY_CLASS *a2)
{
  unsigned int v2; // r15d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v5; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v6; // r9
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rdx
  int v10; // esi
  unsigned int v11; // r14d
  __int64 v12; // r8
  unsigned int v13; // edi
  __int64 result; // rax
  unsigned int v15; // [rsp+A8h] [rbp+38h] BYREF
  struct _LUID v16; // [rsp+B0h] [rbp+40h] BYREF

  v2 = 0;
  *(_DWORD *)a2 = 0;
  v16 = 0LL;
  v15 = 0;
  CCD_BTL::Global();
  v7 = BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(&v16, &v15, v5, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    WdLogSingleEntry4(2LL, v7, this, *((_QWORD *)this + 8), this);
    result = v8;
    WdLogGlobalForLineNumber = 3373;
    return result;
  }
  v9 = *((_QWORD *)this + 8);
  v10 = 0;
  v11 = *(unsigned __int16 *)(v9 + 20);
  while ( 1 )
  {
    if ( v2 >= v11 )
      goto LABEL_8;
    v12 = 296LL * v2;
    if ( *(_DWORD *)(v12 + v9 + 72) == v16.LowPart
      && *(_DWORD *)(v12 + v9 + 76) == v16.HighPart
      && *(_DWORD *)(v12 + v9 + 84) == v15 )
    {
      break;
    }
    ++v2;
  }
  v13 = 0;
  if ( !*(_WORD *)(v9 + 20) )
    goto LABEL_8;
  do
  {
    if ( v13 == v2 || CCD_TOPOLOGY::IsSameCloneGroup(this, v13, v2, 0) )
      ++v10;
    ++v13;
  }
  while ( v13 < v11 );
  if ( !v10 )
  {
LABEL_8:
    *(_DWORD *)a2 = 8;
    return 0LL;
  }
  if ( v10 != 1 )
  {
    if ( v11 <= 1 )
      return 3221225473LL;
    *(_DWORD *)a2 = 2;
    return 0LL;
  }
  result = 0LL;
  if ( v11 <= 1 )
    *(_DWORD *)a2 = 1;
  else
    *(_DWORD *)a2 = 4;
  return result;
}
