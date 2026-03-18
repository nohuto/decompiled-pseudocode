/*
 * XREFs of PfSnAltProfileFindByProcess @ 0x140939988
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140747784 (PfSnSetAltPrefetchParam.c)
 *     PfProcessExitNotification @ 0x1409398E0 (PfProcessExitNotification.c)
 * Callees:
 *     PfSnAltProfileTreeCompareByProcess @ 0x140939A14 (PfSnAltProfileTreeCompareByProcess.c)
 */

unsigned __int64 __fastcall PfSnAltProfileFindByProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax

  v4 = qword_140E67118;
  if ( (xmmword_140E67120 & 1) != 0 && qword_140E67118 )
    v4 = (unsigned __int64)&qword_140E67118 ^ qword_140E67118;
  v5 = xmmword_140E67120 & 1;
  while ( v4 )
  {
    v6 = PfSnAltProfileTreeCompareByProcess(a1, v4, a3);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        return v4;
      v7 = *(_QWORD *)(v4 + 8);
    }
    else
    {
      v7 = *(_QWORD *)v4;
    }
    if ( v5 && v7 )
      v4 ^= v7;
    else
      v4 = v7;
  }
  return v4;
}
