/*
 * XREFs of MiGenerateAccessViolation @ 0x140246254
 * Callers:
 *     MiCheckSystemPageTables @ 0x140229450 (MiCheckSystemPageTables.c)
 *     MiSystemFault @ 0x140229570 (MiSystemFault.c)
 *     MiRaisedIrqlFault @ 0x140245EB8 (MiRaisedIrqlFault.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiDeterminePoolType @ 0x140243C10 (MiDeterminePoolType.c)
 *     MiReleaseSpinLockShared @ 0x140244830 (MiReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall MiGenerateAccessViolation(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rsi
  unsigned int v2; // edi
  unsigned __int8 CurrentIrql; // al
  _QWORD *v5; // rbx
  KIRQL v6; // bp

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
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2CA70);
  }
  else
  {
    v6 = ExAcquireSpinLockShared(&dword_140E2CA70);
  }
  v5 = (_QWORD *)qword_140E2CA78;
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
  MiReleaseSpinLockShared(&dword_140E2CA70, v6);
  LOBYTE(v2) = v5 != 0LL;
  return v2;
}
