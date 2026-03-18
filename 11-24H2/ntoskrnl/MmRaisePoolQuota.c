/*
 * XREFs of MmRaisePoolQuota @ 0x14024B810
 * Callers:
 *     PspExpandQuota @ 0x14024B688 (PspExpandQuota.c)
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
    if ( qword_140E37560 - qword_140E37550 > v7 >> 12 && v4 + qword_140E2CAD0 >= qword_140E2CAD0 )
    {
      qword_140E2CAD0 += v4;
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
    if ( *(_QWORD *)&MiState - qword_140E2CA48 > v5 >> 12 && v4 + qword_140E2CAD8 >= qword_140E2CAD8 )
    {
      qword_140E2CAD8 += v4;
LABEL_9:
      result = 1;
      *a4 = a2 + v4;
      return result;
    }
  }
  return 0;
}
