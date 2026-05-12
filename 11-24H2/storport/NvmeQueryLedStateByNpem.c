/*
 * XREFs of NvmeQueryLedStateByNpem @ 0x1400887C0
 * Callers:
 *     NvmeAdapterQueryLedState @ 0x14008775C (NvmeAdapterQueryLedState.c)
 * Callees:
 *     NvmeGetNpemControlInterface @ 0x1400880D8 (NvmeGetNpemControlInterface.c)
 *     _guard_dispatch_icall @ 0x1401436D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall NvmeQueryLedStateByNpem(__int64 a1, unsigned int *a2)
{
  int NpemControlInterface; // ebx
  unsigned int (__fastcall *v4)(_QWORD); // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  NpemControlInterface = NvmeGetNpemControlInterface(a1, &v6);
  if ( NpemControlInterface >= 0 )
  {
    if ( *(_WORD *)(v6 + 2) >= 2u && (v4 = *(unsigned int (__fastcall **)(_QWORD))(v6 + 56)) != 0LL )
      *a2 = (v4(*(_QWORD *)(v6 + 8)) >> 2) & 0x3FF;
    else
      return (unsigned int)-1073741637;
  }
  return (unsigned int)NpemControlInterface;
}
