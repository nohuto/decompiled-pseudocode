/*
 * XREFs of ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x1403691B8
 * Callers:
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140372AB0 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1402C82B4 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x14036B2B0 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::GetMonitorHashsForPath(
        CCD_TOPOLOGY *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4,
        struct D3DKMT_HASH *a5)
{
  unsigned int v5; // r12d
  __int64 HighPart; // rsi
  unsigned __int16 v8; // cx
  unsigned int v9; // edi
  __int64 v10; // r14
  DWORD LowPart; // ebx
  __int64 v13; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  __int64 v15; // r9
  int v16; // r13d
  unsigned int v17; // esi
  unsigned int v18; // ebx
  unsigned int v19; // edi
  __int64 v20; // rax
  unsigned __int16 v21; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v22; // rax
  int v23; // ecx
  unsigned int v24; // eax
  __int64 result; // rax
  void *v26; // rbx
  struct D3DKMT_HASH *v27; // r14
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  const struct _LUID *v30; // rax
  const struct _LUID *v31; // rdi
  unsigned int v32; // edx
  const struct _LUID *v33; // r12
  int v34; // eax
  unsigned int v35; // r15d
  int Md5Checksum; // eax
  unsigned __int16 v37; // [rsp+70h] [rbp+8h] BYREF
  struct _LUID v38; // [rsp+78h] [rbp+10h]

  v38 = a2;
  v5 = *a4;
  HighPart = a2.HighPart;
  v8 = 0;
  v9 = 0;
  v10 = a3;
  LowPart = a2.LowPart;
  while ( 1 )
  {
    v13 = *((_QWORD *)this + 8);
    if ( v13 )
      v8 = *(_WORD *)(v13 + 20);
    if ( v9 >= v8 )
      goto LABEL_18;
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v9);
    if ( *((_DWORD *)PathDescriptor + 6) == (_DWORD)v10
      && *((_DWORD *)PathDescriptor + 4) == LowPart
      && *((_DWORD *)PathDescriptor + 5) == (_DWORD)HighPart )
    {
      break;
    }
    ++v9;
    v8 = 0;
  }
  v16 = *((_DWORD *)PathDescriptor + 46);
  if ( v16 == -1 )
  {
LABEL_18:
    WdLogSingleEntry3(3LL, HighPart, LowPart, v10);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 5997;
    return result;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  while ( 1 )
  {
    v20 = *((_QWORD *)this + 8);
    v21 = v20 ? *(_WORD *)(v20 + 20) : 0;
    if ( v19 >= v21 )
      break;
    v22 = CCD_TOPOLOGY::GetPathDescriptor(this, v19++);
    v23 = *((_DWORD *)v22 + 46);
    v24 = v18 + 1;
    if ( v23 != v16 )
      v24 = v18;
    v18 = v24;
  }
  *a4 = v18;
  if ( v18 > v5 )
    return 3221225507LL;
  v26 = (void *)operator new[](0x8002uLL, 0x63644356u, 256LL, v15);
  if ( !v26 )
  {
    WdLogSingleEntry0(6LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 6026;
    return result;
  }
  v27 = a5;
  while ( 1 )
  {
    v28 = *((_QWORD *)this + 8);
    if ( v28 )
      v29 = *(_WORD *)(v28 + 20);
    else
      v29 = 0;
    if ( v17 >= v29 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
      return 0LL;
    }
    v30 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, v17);
    v31 = v30;
    if ( v30[23].LowPart != v16 )
      goto LABEL_29;
    v32 = v30[3].HighPart;
    v33 = v30 + 2;
    v37 = 0;
    v34 = CCD_TOPOLOGY::_QueryMonitorIdStr(v30 + 2, v32, (unsigned __int16 *)v26, 0x4001u, &v37);
    v35 = v34;
    if ( v34 < 0 )
      break;
    Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)v26, 2 * (unsigned int)v37, (unsigned __int8 *)v27 + 4);
    v35 = Md5Checksum;
    if ( Md5Checksum < 0 )
    {
      WdLogSingleEntry4(2LL, v31[2].HighPart, v33->LowPart, (unsigned int)v31[3].HighPart, Md5Checksum);
      WdLogGlobalForLineNumber = 6053;
      goto LABEL_36;
    }
    *(_DWORD *)v27 = 1;
    v27 = (struct D3DKMT_HASH *)((char *)v27 + 20);
LABEL_29:
    ++v17;
  }
  WdLogSingleEntry4(2LL, v31[2].HighPart, v33->LowPart, (unsigned int)v31[3].HighPart, v34);
  WdLogGlobalForLineNumber = 6045;
LABEL_36:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v26);
  return v35;
}
