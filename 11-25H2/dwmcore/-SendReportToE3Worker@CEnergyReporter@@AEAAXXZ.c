/*
 * XREFs of ?SendReportToE3Worker@CEnergyReporter@@AEAAXXZ @ 0x180181158
 * Callers:
 *     ?SendReportToE3Worker@CEnergyReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18021AF10 (-SendReportToE3Worker@CEnergyReporter@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x180181244 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 */

void __fastcall CEnergyReporter::SendReportToE3Worker(CEnergyReporter *this)
{
  char *v1; // rsi
  unsigned int v3; // eax
  unsigned __int64 v4; // rbx

  v1 = (char *)this + 56;
  CReadWriteLock::AcquireExclusive((CEnergyReporter *)((char *)this + 56));
  *((_BYTE *)this + 81) = 1;
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
  v3 = *((_DWORD *)this + 28);
  if ( v3 > 0xFFFF )
    LOWORD(v3) = -1;
  v4 = ((unsigned __int64)(unsigned __int16)v3 << 16) | 2;
  if ( *((_DWORD *)this + 28) > 0xFFFFu
    && (unsigned int)dword_180404C64 < MEMORY[0x7FFE037C]
    && !(unsigned __int8)EtwCheckCoverage(&off_180404C58) )
  {
    NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_180404C58, 0x18u);
  }
  SetCITInfo(v4, *((_QWORD *)this + 11));
  CReadWriteLock::AcquireExclusive((CReadWriteLock *)v1);
  *((_WORD *)this + 40) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)v1 + 2) = 0;
  ReleaseSRWLockExclusive((PSRWLOCK)v1);
}
