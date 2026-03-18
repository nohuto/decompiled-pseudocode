/*
 * XREFs of MiSystemImageHasPrivateFixups @ 0x140448F10
 * Callers:
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140210120 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiOffsetToProtos @ 0x140319D40 (MiOffsetToProtos.c)
 */

unsigned __int64 __fastcall MiSystemImageHasPrivateFixups(unsigned __int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned __int64 v3; // rbx
  bool v4; // zf
  __int64 *i; // r9
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = qword_140E2D800 == (_QWORD)&qword_140E2D800;
  *a3 = 0;
  *a2 = 0LL;
  if ( v4 || a1 < 0xFFFF800000000000uLL || byte_140E389A8[((a1 >> 39) & 0x1FF) - 256] != 11 )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140E2D81C);
  for ( i = (__int64 *)qword_140E2D800; i != &qword_140E2D800; i = (__int64 *)*i )
  {
    v10 = i[2];
    if ( a1 >= v10 && a1 <= i[3] )
    {
      v11 = (a1 - v10) >> 12;
      if ( ((*(char *)(((unsigned __int64)(unsigned int)v11 >> 3) + *(_QWORD *)(i[5] + 8)) >> (v11 & 7)) & 1) != 0 )
      {
        v12 = i[6];
        v13 = 0LL;
        v3 = v10 - i[4];
        *a3 = v11;
        *a2 = MiOffsetToProtos(v12, (unsigned __int64)(unsigned int)v11 << 12, &v13);
      }
      break;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_140E2D81C);
  return v3;
}
