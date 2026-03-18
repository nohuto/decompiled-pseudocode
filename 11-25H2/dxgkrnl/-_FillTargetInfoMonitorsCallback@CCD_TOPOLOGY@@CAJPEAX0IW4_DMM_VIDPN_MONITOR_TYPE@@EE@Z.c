/*
 * XREFs of ?_FillTargetInfoMonitorsCallback@CCD_TOPOLOGY@@CAJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z @ 0x1402E84A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ @ 0x1400431B0 (-GetPathsCount@CCD_TOPOLOGY@@QEBAGXZ.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1402E8B80 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback(
        __int64 a1,
        CCD_TOPOLOGY *a2,
        int a3,
        int a4,
        char a5,
        char a6)
{
  unsigned int v7; // ebx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *v12; // rdx
  __int64 v14; // rax

  v7 = 0;
  if ( (unsigned __int16)CCD_TOPOLOGY::GetPathsCount(a2) )
  {
    while ( 1 )
    {
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(a2, v7);
      v12 = PathDescriptor;
      if ( *((_DWORD *)PathDescriptor + 7) != a3
        || *((_DWORD *)PathDescriptor + 4) != *(_DWORD *)(a1 + 412)
        || *((_DWORD *)PathDescriptor + 5) != *(_DWORD *)(a1 + 416) )
      {
        goto LABEL_3;
      }
      if ( a5 )
        *(_QWORD *)PathDescriptor |= 0x200000000000000uLL;
      if ( a6 )
        *(_QWORD *)PathDescriptor |= 0x100000000000000uLL;
      switch ( a4 )
      {
        case 1:
          *(_QWORD *)PathDescriptor |= 0x100000000000000uLL;
          goto LABEL_3;
        case 2:
          v14 = 0x500000000000000LL;
          goto LABEL_17;
        case 3:
          goto LABEL_16;
      }
      if ( a4 == 4 )
        break;
      if ( a4 == 5 )
      {
LABEL_16:
        v14 = 0x1100000000000000LL;
LABEL_17:
        *(_QWORD *)v12 |= v14;
      }
LABEL_3:
      if ( ++v7 >= (unsigned __int16)CCD_TOPOLOGY::GetPathsCount(a2) )
        return 0LL;
    }
    v14 = 0x900000000000000LL;
    goto LABEL_17;
  }
  return 0LL;
}
