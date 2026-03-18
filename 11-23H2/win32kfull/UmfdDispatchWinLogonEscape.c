/*
 * XREFs of UmfdDispatchWinLogonEscape @ 0x1C007BF68
 * Callers:
 *     NtGdiExtEscape @ 0x1C00D09E0 (NtGdiExtEscape.c)
 * Callees:
 *     ??0ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C007C000 (--0ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z @ 0x1C007C158 (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SAX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C007C6F0 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 *     ??1ExclusiveWinlognRequestLock@@QEAA@XZ @ 0x1C013F4D0 (--1ExclusiveWinlognRequestLock@@QEAA@XZ.c)
 */

void __fastcall UmfdDispatchWinLogonEscape(unsigned __int64 a1)
{
  HANDLE Handle[2]; // [rsp+28h] [rbp-20h]
  char v2; // [rsp+58h] [rbp+10h] BYREF

  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 16 > MmUserProbeAddress || a1 + 16 < a1 )
    *(_BYTE *)MmUserProbeAddress = 0;
  *(_OWORD *)Handle = *(_OWORD *)a1;
  ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)&v2);
  if ( LODWORD(Handle[0]) )
  {
    if ( LODWORD(Handle[0]) == 1 )
      UmfdHostLifeTimeManager::TerminateUmfdHost(LODWORD(Handle[1]) != 0);
  }
  else
  {
    UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(Handle[1]);
  }
  ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)&v2);
}
