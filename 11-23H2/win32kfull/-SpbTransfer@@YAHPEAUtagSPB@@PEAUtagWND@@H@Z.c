/*
 * XREFs of ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000DF2C
 * Callers:
 *     CreateSpb @ 0x1C000DCF4 (CreateSpb.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000DF2C (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C000BF9C (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000DF2C (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C0042ABC (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C004FB80 (xxxInternalInvalidate.c)
 *     IntersectWithParents @ 0x1C0063940 (IntersectWithParents.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A6788 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall SpbTransfer(struct tagSPB *a1, struct tagWND *a2, int a3)
{
  unsigned __int64 v6; // rcx
  struct tagWND *i; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+28h] [rbp-20h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 136LL);
  if ( !v6 )
    goto LABEL_2;
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) + 824LL) & 0x400) != 0 )
    return 1LL;
  v10 = 0LL;
  if ( v6 <= 1 || (unsigned int)GreGetRgnBox(v6, &v10) )
    v10 = *(struct tagRECT *)(*((_QWORD *)a2 + 5) + 88LL);
  if ( !(unsigned int)IntersectWithParents(a2, &v10)
    || (AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9),
        xxxInternalInvalidate(a2, ghrgnSPB2, 0x48u),
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9),
        (unsigned int)SpbCheckRect2(a1, a2, &v10, 1u)) )
  {
LABEL_2:
    if ( a3 )
    {
      for ( i = (struct tagWND *)*((_QWORD *)a2 + 14); i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( !(unsigned int)SpbTransfer(a1, i, 1) )
          return 0LL;
      }
    }
    return 1LL;
  }
  return 0LL;
}
