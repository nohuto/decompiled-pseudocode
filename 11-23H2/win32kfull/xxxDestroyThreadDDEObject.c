/*
 * XREFs of xxxDestroyThreadDDEObject @ 0x1C009ED40
 * Callers:
 *     NtUserDdeInitialize @ 0x1C008A980 (NtUserDdeInitialize.c)
 *     NtUserCsDdeUninitialize @ 0x1C01CD8F0 (NtUserCsDdeUninitialize.c)
 * Callees:
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 */

__int64 __fastcall xxxDestroyThreadDDEObject(__int64 a1, __int64 a2)
{
  _QWORD *CurrentIrp; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 j; // rax
  _QWORD *i; // rax

  if ( *(_BYTE *)(_HMPheFromObject(a2) + 24) != 9
    || (*(_BYTE *)(_HMPheFromObject(a2) + 25) & 1) != 0
    || *(_QWORD *)(_HMPkheFromObject(a2) + 8) != a1 )
  {
    return 0LL;
  }
  CurrentIrp = WPP_MAIN_CB.Queue.Wcb.CurrentIrp;
  if ( (PVOID)a2 == WPP_MAIN_CB.Queue.Wcb.CurrentIrp )
  {
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = *(PVOID *)(a2 + 24);
  }
  else
  {
    for ( i = (_QWORD *)*((_QWORD *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp + 3); i != (_QWORD *)a2; i = (_QWORD *)i[3] )
      CurrentIrp = i;
    CurrentIrp[3] = *(_QWORD *)(a2 + 24);
  }
  v5 = *(_QWORD *)(a1 + 624);
  if ( a2 == v5 )
  {
    *(_QWORD *)(a1 + 624) = *(_QWORD *)(a2 + 32);
  }
  else
  {
    for ( j = *(_QWORD *)(v5 + 32); j != a2; j = *(_QWORD *)(j + 32) )
      v5 = j;
    *(_QWORD *)(v5 + 32) = *(_QWORD *)(a2 + 32);
  }
  if ( (unsigned int)HMMarkObjectDestroy(a2) )
  {
    v6 = *(_QWORD *)(a2 + 48);
    if ( HMAssignmentUnlock(a2 + 48) )
    {
      HMFreeObject(a2);
      xxxDestroyWindow(v6);
    }
    else
    {
      HMFreeObject(a2);
    }
  }
  return 1LL;
}
