/*
 * XREFs of MmRaisePoolQuota @ 0x14027BE20
 * Callers:
 *     PspExpandQuota @ 0x14027BC98 (PspExpandQuota.c)
 * Callees:
 *     <none>
 */

char __fastcall MmRaisePoolQuota(int a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // rcx
  char result; // al
  unsigned __int64 v7; // rax

  if ( a1 == 1 )
  {
    v4 = 0x80000LL;
    if ( a3 )
      v4 = a3;
    v7 = v4;
    if ( v4 < 0x100000 )
      v7 = 0x100000LL;
    if ( qword_140E376A0 - qword_140E37690 > v7 >> 12 && v4 + qword_140E2CC10 >= qword_140E2CC10 )
    {
      qword_140E2CC10 += v4;
      goto LABEL_9;
    }
  }
  else
  {
    v4 = 0x10000LL;
    if ( a3 )
      v4 = a3;
    v5 = v4;
    if ( v4 < 0x100000 )
      v5 = 0x100000LL;
    if ( *(_QWORD *)&MiState - qword_140E2CB88 > v5 >> 12 && v4 + qword_140E2CC18 >= qword_140E2CC18 )
    {
      qword_140E2CC18 += v4;
LABEL_9:
      result = 1;
      *a4 = a2 + v4;
      return result;
    }
  }
  return 0;
}
