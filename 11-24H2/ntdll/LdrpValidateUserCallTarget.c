/*
 * XREFs of LdrpValidateUserCallTarget @ 0x180121510
 * Callers:
 *     RtlGuardRestoreContext @ 0x180008EA0 (RtlGuardRestoreContext.c)
 *     RtlUnwindEx @ 0x180015480 (RtlUnwindEx.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpValidateUserCallTarget(unsigned __int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 v2; // rax

  v1 = *(_QWORD *)(qword_1801EA508 + 8 * (a1 >> 9));
  v2 = a1 >> 3;
  if ( (a1 & 0xF) != 0 )
  {
    v2 &= ~1uLL;
    if ( !_bittest64(&v1, v2) )
    {
LABEL_6:
      LdrpHandleInvalidUserCallTarget();
      return;
    }
LABEL_5:
    if ( _bittest64(&v1, v2 | 1) )
      return;
    goto LABEL_6;
  }
  if ( !_bittest64(&v1, v2) )
    goto LABEL_5;
}
