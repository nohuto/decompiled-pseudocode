/*
 * XREFs of ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x1403206D8
 * Callers:
 *     ?EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z @ 0x1402D9EA8 (-EnumerateFunctionalModesWorker@CCD_TOPOLOGY@@AEAAJIKAEAVCCD_MODE_RESULT_SET@@@Z.c)
 *     ?FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z @ 0x14032018C (-FunctionalizeWorker@CCD_TOPOLOGY@@AEAAJI_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140009C9C (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x140029DDC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402D70F0 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x140307F48 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z @ 0x1403CF128 (-DxgkGetPreferredVidPnSourceList@@YAJAEBU_LUID@@IPEAI1@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::ConvertLegacyQDCDWMClonePath(CCD_TOPOLOGY *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  unsigned int v5; // r14d
  struct _KTHREAD **i; // r15
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  struct _LUID *v8; // rbx
  unsigned int v9; // r12d
  unsigned int v10; // r12d
  int AdapterAndSourceForHash; // r13d
  unsigned int v12; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v13; // r15
  unsigned int v14; // r14d
  unsigned int j; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // eax
  __int64 v20; // rcx
  _DWORD *v21; // r13
  int PreferredVidPnSourceList; // eax
  __int64 v23; // r12
  unsigned int k; // r12d
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v25; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v26; // rdx
  int v27; // eax
  __int64 v28; // rcx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v29; // rax
  __int64 v30; // [rsp+28h] [rbp-99h]
  __int64 v31; // [rsp+30h] [rbp-91h]
  __int64 v32; // [rsp+30h] [rbp-91h]
  __int64 v33; // [rsp+38h] [rbp-89h]
  unsigned int v34; // [rsp+58h] [rbp-69h] BYREF
  struct _LUID v35; // [rsp+60h] [rbp-61h] BYREF
  unsigned int v36[16]; // [rsp+68h] [rbp-59h] BYREF
  unsigned int v37[16]; // [rsp+A8h] [rbp-19h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v3 = *((_QWORD *)this + 8);
  v4 = 0;
  v5 = 0;
  for ( i = (struct _KTHREAD **)((char *)Global + 1384); v5 < *(unsigned __int16 *)(v3 + 20); ++v5 )
  {
    PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(this, v5);
    v8 = (struct _LUID *)PathDescriptor;
    if ( *((_BYTE *)PathDescriptor + 129) )
    {
      v9 = *((_DWORD *)PathDescriptor + 7);
      if ( ((unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i) & v9) != 0 )
      {
        v35 = 0LL;
        v34 = 0;
        v10 = v9 >> DXGADAPTERSOURCEHASH::GetHashBitShift(i);
        AdapterAndSourceForHash = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                    (DXGADAPTERSOURCEHASH *)i,
                                    v10,
                                    &v35,
                                    &v34);
        if ( AdapterAndSourceForHash < 0 )
        {
          WdLogSingleEntry1(2LL, v10);
          WdLogGlobalForLineNumber = 4119;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Failed info for hash (0x%lx)",
            v10,
            0LL,
            0LL,
            0LL,
            0LL);
          return (unsigned int)AdapterAndSourceForHash;
        }
        v8[3].HighPart &= ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(i);
        v8[3].LowPart = v34;
        v8[2] = v35;
      }
    }
    else
    {
      *(_QWORD *)PathDescriptor &= 0xFFFFFFFFFF7DFFFFuLL;
      *((_QWORD *)PathDescriptor + 1) &= 0xFFFFFFFFFF7DFFFFuLL;
    }
    v3 = *((_QWORD *)this + 8);
  }
  v12 = 0;
  if ( !*(_WORD *)(v3 + 20) )
    return 0LL;
  while ( 1 )
  {
    v13 = CCD_TOPOLOGY::GetPathDescriptor(this, v12);
    if ( (*(_QWORD *)v13 & 0x4000000000000LL) != 0 )
      break;
LABEL_32:
    v28 = *((_QWORD *)this + 8);
    if ( ++v12 >= *(unsigned __int16 *)(v28 + 20) )
    {
      if ( *(_WORD *)(v28 + 20) )
      {
        do
        {
          v29 = CCD_TOPOLOGY::GetPathDescriptor(this, v4++);
          *(_QWORD *)v29 |= 0x4000000000000uLL;
        }
        while ( v4 < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL) );
      }
      return 0LL;
    }
  }
  v14 = 0;
  for ( j = v12; j < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++j )
  {
    v16 = CCD_TOPOLOGY::GetPathDescriptor(this, j);
    if ( *((_DWORD *)v13 + 4) == *((_DWORD *)v16 + 4) )
    {
      v17 = *((int *)v13 + 5);
      if ( (_DWORD)v17 == *((_DWORD *)v16 + 5) )
      {
        if ( v14 >= 0x10 )
        {
          WdLogSingleEntry4(2LL, v14, v17, *((unsigned int *)v13 + 4), -1073741811LL);
          v33 = *((unsigned int *)v13 + 4);
          v31 = *((int *)v13 + 5);
          WdLogGlobalForLineNumber = 4178;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000LL,
            0xFFFFFFFFLL,
            L"Total paths (0x%I64x) from adapter 0x%I64x%08I64x is larger than D3DKMDT_MAX_VIDPN_SOURCES, returning 0x%I64x.",
            v14,
            v31,
            v33,
            -1073741811LL,
            0LL);
          return 3221225485LL;
        }
        if ( !*((_BYTE *)v16 + 129) || _bittest64((const signed __int64 *)v16 + 1, 0x2Du) )
          v18 = *((_DWORD *)v16 + 6);
        else
          v18 = -1;
        v20 = v14++;
        v37[v20] = v18;
        v36[v20] = *((_DWORD *)v16 + 7);
      }
    }
  }
  v21 = (_DWORD *)((char *)v13 + 16);
  PreferredVidPnSourceList = DxgkGetPreferredVidPnSourceList((const struct _LUID *)v13 + 2, v14, v36, v37);
  v23 = PreferredVidPnSourceList;
  if ( PreferredVidPnSourceList >= 0 )
  {
    for ( k = v12; k < *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL); ++k )
    {
      v25 = CCD_TOPOLOGY::GetPathDescriptor(this, k);
      v26 = v25;
      if ( *v21 == *((_DWORD *)v25 + 4) && *((_DWORD *)v13 + 5) == *((_DWORD *)v25 + 5) )
      {
        v27 = 0;
        if ( v14 )
        {
          while ( v36[v27] != *((_DWORD *)v26 + 7) )
          {
            if ( ++v27 >= v14 )
              goto LABEL_30;
          }
          *((_DWORD *)v26 + 6) = v37[v27];
        }
LABEL_30:
        *(_QWORD *)v26 &= ~0x4000000000000uLL;
      }
    }
    goto LABEL_32;
  }
  WdLogSingleEntry3(2LL, *((int *)v13 + 5), (unsigned int)*v21, PreferredVidPnSourceList);
  v32 = (unsigned int)*v21;
  v30 = *((int *)v13 + 5);
  WdLogGlobalForLineNumber = 4218;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Failed to get the preferred VidPn source list for adapter 0x%I64x%08I64x, Status = 0x%I64x",
    v30,
    v32,
    v23,
    0LL,
    0LL);
  return (unsigned int)v23;
}
