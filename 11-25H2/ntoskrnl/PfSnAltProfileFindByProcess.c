/*
 * XREFs of PfSnAltProfileFindByProcess @ 0x14091D3BC
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x14073B764 (PfSnSetAltPrefetchParam.c)
 *     PfProcessExitNotification @ 0x14091D314 (PfProcessExitNotification.c)
 * Callees:
 *     PfSnAltProfileTreeCompareByProcess @ 0x14091D448 (PfSnAltProfileTreeCompareByProcess.c)
 */

unsigned __int64 __fastcall PfSnAltProfileFindByProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax

  v4 = qword_140E66E58;
  if ( (xmmword_140E66E60 & 1) != 0 && qword_140E66E58 )
    v4 = (unsigned __int64)&qword_140E66E58 ^ qword_140E66E58;
  v5 = xmmword_140E66E60 & 1;
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
