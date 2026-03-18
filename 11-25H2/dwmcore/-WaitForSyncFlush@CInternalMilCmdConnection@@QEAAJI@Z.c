/*
 * XREFs of ?WaitForSyncFlush@CInternalMilCmdConnection@@QEAAJI@Z @ 0x18018161C
 * Callers:
 *     ?SyncFlushInternal@CChannel@@AEAAJXZ @ 0x180181AD0 (-SyncFlushInternal@CChannel@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x180181244 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180181738 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801FFA0C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18025AF2C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CInternalMilCmdConnection::WaitForSyncFlush(RTL_SRWLOCK *this, unsigned int a2)
{
  RTL_SRWLOCK *v2; // rbx
  int MasterTableEntry; // eax
  unsigned int v6; // edi
  void *v7; // rdi
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 16;
  v11 = (struct CLIENT_CHANNEL_HANDLE_ENTRY *)&this[16];
  CReadWriteLock::AcquireExclusive(this + 16);
  if ( LOBYTE(this[3].Ptr) )
  {
    v11 = 0LL;
    MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)&this[6], a2, &v11);
    v6 = MasterTableEntry;
    if ( MasterTableEntry < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB6,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
        (const char *)(unsigned int)MasterTableEntry);
      if ( v2 )
      {
        LODWORD(v2[1].Ptr) = 0;
        ReleaseSRWLockExclusive(v2);
      }
      return v6;
    }
    else
    {
      v7 = (void *)*((_QWORD *)v11 + 2);
      if ( v2 )
      {
        LODWORD(v2[1].Ptr) = 0;
        ReleaseSRWLockExclusive(v2);
      }
      if ( WaitForSingleObject(v7, 0xFFFFFFFF) == -1 )
        return wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0xBE,
                 (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
                 v8);
      else
        return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB3,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)0x88980416LL);
    CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(&v11);
    return 2291663894LL;
  }
}
