/*
 * XREFs of ??$make_shared@VCSleepStudyPowerReference@@$$V@std@@YA?AV?$shared_ptr@VCSleepStudyPowerReference@@@0@XZ @ 0x18000FBA0
 * Callers:
 *     ?CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV?$shared_ptr@VCSleepStudyPowerReference@@@std@@@Z @ 0x18000FDEC (-CreatePowerReferenceSubBlocker@CSleepStudyPowerReferenceManager@@QEAAJPEAVCVADServer@@PEAV-$sha.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::make_shared<CSleepStudyPowerReference,>(_QWORD *a1)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rdx

  ProcessHeap = GetProcessHeap();
  v3 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v4 = v3;
  if ( v3 )
  {
    v3[2] = 0LL;
    *((_DWORD *)v3 + 2) = 1;
    *((_DWORD *)v3 + 3) = 1;
    *v3 = &std::_Ref_count_obj2<CSleepStudyPowerReference>::`vftable';
  }
  else
  {
    v4 = 0LL;
  }
  a1[1] = v4;
  *a1 = v4 + 2;
  return a1;
}
