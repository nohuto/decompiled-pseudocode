/*
 * XREFs of SupportsOnlyRawAccess @ 0x140011EA8
 * Callers:
 *     WriteField @ 0x14000229C (WriteField.c)
 *     AccFieldUnit @ 0x140003430 (AccFieldUnit.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     ReadField @ 0x140011880 (ReadField.c)
 * Callees:
 *     <none>
 */

bool __fastcall SupportsOnlyRawAccess(__int64 a1)
{
  char v1; // bl
  __int64 v2; // rax
  int v3; // esi
  KIRQL v4; // al
  __int64 i; // rdi

  v1 = 0;
  if ( *(_WORD *)(a1 + 2) == 5 )
  {
    v2 = **(_QWORD **)(a1 + 32);
    if ( *(_WORD *)(v2 + 66) == 131 )
    {
      v3 = *(unsigned __int8 *)(*(_QWORD *)(**(_QWORD **)(v2 + 96) + 96LL) + 12LL);
      v4 = ExAcquireSpinLockShared(&RSAccessLock);
      for ( i = gpRSAccessHead; i && *(_DWORD *)(i + 8) != v3; i = *(_QWORD *)i )
        ;
      ExReleaseSpinLockShared(&RSAccessLock, v4);
      if ( i && *(_QWORD *)(i + 32) )
        return *(_QWORD *)(i + 16) == 0LL;
    }
  }
  return v1;
}
