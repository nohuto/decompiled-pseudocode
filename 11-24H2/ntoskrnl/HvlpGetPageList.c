/*
 * XREFs of HvlpGetPageList @ 0x14058C388
 * Callers:
 *     HvlpMarkHypervisorPagesForHibernation @ 0x140589B68 (HvlpMarkHypervisorPagesForHibernation.c)
 *     HvlAddPagesCallbackRoutine @ 0x140589CB0 (HvlAddPagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromHypervisor @ 0x14058A6E4 (HvlpGetEncryptedDataFromHypervisor.c)
 * Callees:
 *     HvlpGetPageListIterator @ 0x14058C440 (HvlpGetPageListIterator.c)
 *     HvlpInvokeGetPageListHypercall @ 0x14058C45C (HvlpInvokeGetPageListHypercall.c)
 */

__int64 __fastcall HvlpGetPageList(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 PageListIterator; // rax
  _WORD *v6; // rbx
  __int64 v8; // rsi
  unsigned int v9; // edi
  __int64 v10; // r8
  unsigned __int64 v11; // rcx

  *a2 = 0LL;
  *a3 = 0;
  PageListIterator = HvlpGetPageListIterator(a1);
  v6 = (_WORD *)PageListIterator;
  if ( !*(_BYTE *)(PageListIterator + 2) )
    return 0LL;
  v8 = *(_QWORD *)(PageListIterator + 8);
  v9 = 261;
  while ( 1 )
  {
    v10 = (unsigned __int16)*v6;
    if ( (unsigned __int16)v10 < *(_WORD *)(v8 + 8) )
      break;
    if ( *(_QWORD *)v8 == -1LL )
      return 0;
    HvlpInvokeGetPageListHypercall(v6);
    *v6 = 0;
  }
  v11 = *(_QWORD *)(v8 + 8 * v10 + 16);
  *a2 = v11 & 0xFFFFFFFFFFLL;
  *a3 = (v11 >> 40) + 1;
  *v6 = v10 + 1;
  return v9;
}
