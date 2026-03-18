/*
 * XREFs of _lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator() @ 0x1401A9A2C
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___ @ 0x1401A9960 (W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___.c)
 * Callees:
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 */

__int64 __fastcall lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator()(__int64 *a1)
{
  _BYTE *v1; // r8
  __int64 v2; // rdx
  __int64 i; // rdx

  v1 = a1 + 1;
  v2 = *a1;
  if ( *((_BYTE *)a1 + 8) )
    *(_DWORD *)(v2 + 12) |= 0x2000000u;
  else
    *(_DWORD *)(v2 + 12) &= ~0x2000000u;
  for ( i = *(_QWORD *)(v2 + 328); i; i = *(_QWORD *)(i + 704) )
  {
    if ( *v1 )
      _InterlockedOr((volatile signed __int32 *)(i + 528), 0x20000000u);
    else
      _InterlockedAnd((volatile signed __int32 *)(i + 528), 0xDFFFFFFF);
    if ( *v1 )
      *(_DWORD *)(*(_QWORD *)(i + 520) + 28LL) |= 0x20000000u;
    else
      *(_DWORD *)(*(_QWORD *)(i + 520) + 28LL) &= ~0x20000000u;
  }
  return 0LL;
}
