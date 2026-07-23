/*
 * XREFs of PfSnAltProfileFindByProcess @ 0x14094BE6C
 * Callers:
 *     PfSnSetAltPrefetchParam @ 0x140745A74 (PfSnSetAltPrefetchParam.c)
 *     PfProcessExitNotification @ 0x14094BDC4 (PfProcessExitNotification.c)
 * Callees:
 *     PfSnAltProfileTreeCompareByProcess @ 0x14094BEF8 (PfSnAltProfileTreeCompareByProcess.c)
 */

unsigned __int64 __fastcall PfSnAltProfileFindByProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 Root; // rbx
  int v5; // edi
  int v6; // eax
  unsigned __int64 v7; // rax

  Root = (unsigned __int64)Parent.Root;
  if ( (*(_BYTE *)&Parent.0 & 1) != 0 && Parent.Root )
    Root = (unsigned __int64)&Parent ^ (unsigned __int64)Parent.Root;
  v5 = *(_BYTE *)&Parent.0 & 1;
  while ( Root )
  {
    v6 = PfSnAltProfileTreeCompareByProcess(a1, Root, a3);
    if ( v6 >= 0 )
    {
      if ( v6 <= 0 )
        return Root;
      v7 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v7 = *(_QWORD *)Root;
    }
    if ( v5 && v7 )
      Root ^= v7;
    else
      Root = v7;
  }
  return Root;
}
