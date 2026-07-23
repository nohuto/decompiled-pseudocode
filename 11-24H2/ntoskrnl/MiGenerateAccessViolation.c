/*
 * XREFs of MiGenerateAccessViolation @ 0x1402FB178
 * Callers:
 *     MiRaisedIrqlFault @ 0x1402FADDC (MiRaisedIrqlFault.c)
 *     MiCheckSystemPageTables @ 0x1402FC6C0 (MiCheckSystemPageTables.c)
 *     MiSystemFault @ 0x1402FC7E0 (MiSystemFault.c)
 * Callees:
 *     MiDeterminePoolType @ 0x14020C710 (MiDeterminePoolType.c)
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall MiGenerateAccessViolation(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v2; // edi
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rbx
  KIRQL v6; // bp
  __int64 v7; // r8
  __int64 v8; // r9

  v1 = *a1;
  v2 = 0;
  if ( !MiDeterminePoolType(*a1) )
    return 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    return 0LL;
  if ( CurrentIrql == 2 )
  {
    v6 = 17;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2CBB0);
  }
  else
  {
    v6 = ExAcquireSpinLockShared(&dword_140E2CBB0);
  }
  v5 = (_QWORD *)qword_140E2CBB8;
  while ( v5 )
  {
    if ( v1 > v5[4] )
    {
      v5 = (_QWORD *)v5[1];
    }
    else
    {
      if ( v1 >= v5[3] )
        break;
      v5 = (_QWORD *)*v5;
    }
  }
  MiReleaseSpinLockShared(&dword_140E2CBB0, v6, v7, v8);
  LOBYTE(v2) = v5 != 0LL;
  return v2;
}
