/*
 * XREFs of IopConstructInMemoryDumpHeader @ 0x140590974
 * Callers:
 *     IoUpdateDumpPhysicalRanges @ 0x14058F55C (IoUpdateDumpPhysicalRanges.c)
 *     IopInitializeOfflineCrashDump @ 0x140591AF4 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     IoFillDumpHeader @ 0x14058DFEC (IoFillDumpHeader.c)
 */

__int64 IopConstructInMemoryDumpHeader()
{
  __int64 result; // rax
  _DWORD *v1; // r14
  __int64 v2; // rsi

  result = (unsigned int)_InterlockedExchange(InMemData, 1);
  if ( (_DWORD)result != 1 )
  {
    dword_140E65F98 = 0;
    if ( dword_140E65F64
      && (result = qword_140E65F80 & 1, (v1 = *(_DWORD **)&InMemData[2 * result + 2]) != 0LL)
      && (result = ((_BYTE)qword_140E65F80 - 1) & 1, (v2 = *(_QWORD *)&InMemData[2 * result + 2]) != 0) )
    {
      IoFillDumpHeader((_DWORD *)(v2 + 24), 1, 332, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
      *(_QWORD *)(v2 + 4040) = qword_140E65F88;
      *(_QWORD *)(v2 + 40) = PsInitialSystemProcess->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)v2, 1397967163);
      *v1 = result;
      LODWORD(qword_140E65F80) = qword_140E65F80 + 1;
    }
    else
    {
      dword_140E65F98 = -1073741823;
    }
    _InterlockedExchange(InMemData, 0);
  }
  return result;
}
