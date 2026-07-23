/*
 * XREFs of AlpcpCaptureIdMessage @ 0x1409C5670
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14073F800 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureIdMessage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char PreviousMode; // al
  __int64 result; // rax

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (a1 & 3) != 0 )
LABEL_3:
    ExRaiseDatatypeMisalignment();
  if ( _bittest16((const signed __int16 *)(a1 + 4), 0xCu) )
  {
    *a2 = *(_DWORD *)(a1 + 16);
    result = *(unsigned int *)(a1 + 20);
  }
  else
  {
    if ( PreviousMode && (a1 & 3) != 0 )
      goto LABEL_3;
    *a2 = *(_DWORD *)(a1 + 24);
    result = *(unsigned int *)(a1 + 32);
  }
  *a3 = result;
  return result;
}
