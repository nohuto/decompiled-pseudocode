/*
 * XREFs of DSA_InsertItem @ 0x180683880
 * Callers:
 *     ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x180674CEC (-_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV-$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z.c)
 *     ?AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z @ 0x18068B464 (-AppendPidl@CPinList@@QEAAHPEAVCPinnedList@@PEFBU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     DSA_Preallocate @ 0x18068390C (DSA_Preallocate.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

int __stdcall DSA_InsertItem(HDSA hdsa, int i, const void *pitem)
{
  int v4; // ebx
  unsigned int v6; // ecx

  v4 = i;
  if ( i < 0 )
    return -1;
  if ( i > *(_DWORD *)hdsa )
    v4 = *(_DWORD *)hdsa;
  if ( !(unsigned int)DSA_Preallocate(hdsa, 1LL) )
    return -1;
  if ( v4 < *(_DWORD *)hdsa )
    memmove_0(
      (void *)(*((_QWORD *)hdsa + 1) + (unsigned int)(*((_DWORD *)hdsa + 5) * (v4 + 1))),
      (const void *)(*((_QWORD *)hdsa + 1) + (unsigned int)(v4 * *((_DWORD *)hdsa + 5))),
      (unsigned int)(*((_DWORD *)hdsa + 5) * (*(_DWORD *)hdsa - v4)));
  v6 = *((_DWORD *)hdsa + 5);
  ++*(_DWORD *)hdsa;
  memmove_0((void *)(*((_QWORD *)hdsa + 1) + v4 * v6), pitem, v6);
  return v4;
}
