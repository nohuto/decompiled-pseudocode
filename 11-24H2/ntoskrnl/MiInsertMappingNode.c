/*
 * XREFs of MiInsertMappingNode @ 0x14049A260
 * Callers:
 *     MmAllocateMappingAddressEx @ 0x140A531F0 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1402903E0 (RtlAvlInsertNodeEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiInsertMappingNode(_QWORD *a1)
{
  unsigned __int64 v1; // rbx
  KIRQL v3; // al
  _QWORD *v4; // rdx
  bool v5; // r8
  unsigned __int8 v6; // si
  _QWORD *v7; // rcx

  v1 = a1[3];
  v3 = ExAcquireSpinLockExclusive(&dword_140E35FE8);
  v4 = (_QWORD *)qword_140E35FF0;
  v5 = 0;
  v6 = v3;
  if ( qword_140E35FF0 )
  {
    while ( 1 )
    {
      if ( v1 < v4[3] )
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      v4 = v7;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140E35FF0, (unsigned __int64)v4, v5, a1);
  return MiReleaseSpinLockExclusive(&dword_140E35FE8, v6);
}
