/*
 * XREFs of KiCompareVarMtrr @ 0x140B598FC
 * Callers:
 *     KeLoadMTRR @ 0x140B6F790 (KeLoadMTRR.c)
 * Callees:
 *     <none>
 */

char KiCompareVarMtrr()
{
  unsigned int v0; // r9d
  unsigned int v1; // r10d
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // rax
  __int64 v4; // rdx

  if ( !KeGetCurrentPrcb()->Number )
  {
    v0 = 0;
    v1 = 513;
    while ( v0 < (unsigned __int64)(unsigned __int8)qword_140F103C8 )
    {
      v2 = __readmsr(v1 - 1);
      v3 = __readmsr(v1);
      v4 = (v3 >> 11) & 1;
      if ( v4 != ((*((_QWORD *)qword_140F103D8 + 2 * v0 + 1) >> 11) & 1LL)
        || v4 && (v2 != *((_QWORD *)qword_140F103D8 + 2 * v0) || v3 != *((_QWORD *)qword_140F103D8 + 2 * v0 + 1)) )
      {
        return 0;
      }
      ++v0;
      v1 += 2;
    }
  }
  return 1;
}
