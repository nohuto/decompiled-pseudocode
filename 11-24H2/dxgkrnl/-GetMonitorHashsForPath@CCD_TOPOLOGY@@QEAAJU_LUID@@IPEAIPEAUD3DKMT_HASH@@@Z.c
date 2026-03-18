/*
 * XREFs of ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x14033DFA0
 * Callers:
 *     ?DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x14033D8C0 (-DxgkGetMonitorHash@@YAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1402DF034 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x14033F6C0 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
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
  int v15; // r13d
  unsigned int v16; // esi
  unsigned int v17; // ebx
  unsigned int v18; // edi
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v21; // rax
  int v22; // ecx
  unsigned int v23; // eax
  __int64 result; // rax
  void *v25; // rbx
  struct D3DKMT_HASH *v26; // r14
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  const struct _LUID *v29; // rax
  const struct _LUID *v30; // rdi
  unsigned int v31; // edx
  const struct _LUID *v32; // r12
  int v33; // eax
  unsigned int v34; // r15d
  int Md5Checksum; // eax
  unsigned __int16 v36; // [rsp+70h] [rbp+8h] BYREF
  struct _LUID v37; // [rsp+78h] [rbp+10h]

  v37 = a2;
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
  v15 = *((_DWORD *)PathDescriptor + 46);
  if ( v15 == -1 )
  {
LABEL_18:
    WdLogSingleEntry3(3LL, HighPart, LowPart, v10);
    result = 3221225473LL;
    WdLogGlobalForLineNumber = 6084;
    return result;
  }
  v16 = 0;
  v17 = 0;
  v18 = 0;
  while ( 1 )
  {
    v19 = *((_QWORD *)this + 8);
    v20 = v19 ? *(_WORD *)(v19 + 20) : 0;
    if ( v18 >= v20 )
      break;
    v21 = CCD_TOPOLOGY::GetPathDescriptor(this, v18++);
    v22 = *((_DWORD *)v21 + 46);
    v23 = v17 + 1;
    if ( v22 != v15 )
      v23 = v17;
    v17 = v23;
  }
  *a4 = v17;
  if ( v17 > v5 )
    return 3221225507LL;
  v25 = (void *)operator new[](0x8002uLL, 0x63644356u, 256LL);
  if ( !v25 )
  {
    WdLogSingleEntry0(6LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 6113;
    return result;
  }
  v26 = a5;
  while ( 1 )
  {
    v27 = *((_QWORD *)this + 8);
    if ( v27 )
      v28 = *(_WORD *)(v27 + 20);
    else
      v28 = 0;
    if ( v16 >= v28 )
    {
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
      return 0LL;
    }
    v29 = (const struct _LUID *)CCD_TOPOLOGY::GetPathDescriptor(this, v16);
    v30 = v29;
    if ( v29[23].LowPart != v15 )
      goto LABEL_29;
    v31 = v29[3].HighPart;
    v32 = v29 + 2;
    v36 = 0;
    v33 = CCD_TOPOLOGY::_QueryMonitorIdStr(v29 + 2, v31, (unsigned __int16 *)v25, 0x4001u, &v36);
    v34 = v33;
    if ( v33 < 0 )
      break;
    Md5Checksum = CcdCreateMd5Checksum((const unsigned __int8 *)v25, 2 * (unsigned int)v36, (unsigned __int8 *)v26 + 4);
    v34 = Md5Checksum;
    if ( Md5Checksum < 0 )
    {
      WdLogSingleEntry4(2LL, v30[2].HighPart, v32->LowPart, (unsigned int)v30[3].HighPart, Md5Checksum);
      WdLogGlobalForLineNumber = 6140;
      goto LABEL_36;
    }
    *(_DWORD *)v26 = 1;
    v26 = (struct D3DKMT_HASH *)((char *)v26 + 20);
LABEL_29:
    ++v16;
  }
  WdLogSingleEntry4(2LL, v30[2].HighPart, v32->LowPart, (unsigned int)v30[3].HighPart, v33);
  WdLogGlobalForLineNumber = 6132;
LABEL_36:
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v25);
  return v34;
}
