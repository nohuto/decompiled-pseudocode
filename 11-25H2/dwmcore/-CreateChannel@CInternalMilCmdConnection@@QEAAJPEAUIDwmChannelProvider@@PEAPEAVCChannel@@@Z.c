/*
 * XREFs of ?CreateChannel@CInternalMilCmdConnection@@QEAAJPEAUIDwmChannelProvider@@PEAPEAVCChannel@@@Z @ 0x1801B1B90
 * Callers:
 *     ?MilCompositionEngine_CreateChannel@@YAJPEAUIDwmChannelProvider@@PEAPEAUIDwmChannelPrivate@@@Z @ 0x1801B1AE0 (-MilCompositionEngine_CreateChannel@@YAJPEAUIDwmChannelProvider@@PEAPEAUIDwmChannelPrivate@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x180181244 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x1801B17D4 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z @ 0x1801B1CAC (-Create@CChannel@@SAJPEAVCInternalMilCmdConnection@@PEAUIDwmChannelProvider@@PEAPEAV1@@Z.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801FFA0C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?Release@CChannel@@UEAAKXZ @ 0x18026EAB0 (-Release@CChannel@@UEAAKXZ.c)
 */

__int64 __fastcall CInternalMilCmdConnection::CreateChannel(
        RTL_SRWLOCK *this,
        struct IDwmChannelProvider *a2,
        struct CChannel **a3)
{
  RTL_SRWLOCK *v3; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  CChannel *v9; // rbx
  int v10; // eax
  unsigned int v11; // esi
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v12; // rax
  int v14[2]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct CChannel *v16; // [rsp+50h] [rbp+8h] BYREF
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v17; // [rsp+68h] [rbp+20h] BYREF

  v3 = this + 16;
  *(_QWORD *)v14 = this + 16;
  CReadWriteLock::AcquireExclusive(this + 16);
  v16 = 0LL;
  v7 = CChannel::Create((struct CInternalMilCmdConnection *)this, a2, &v16);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)v7);
    if ( v16 )
      CChannel::Release(v16);
    if ( v3 )
    {
      LODWORD(v3[1].Ptr) = 0;
      ReleaseSRWLockExclusive(v3);
    }
    return v8;
  }
  else
  {
    v9 = v16;
    v17 = 0LL;
    v10 = CChannelTable::AssignChannelEntry((CChannelTable *)&this[6], *((_DWORD *)v16 + 18), &v17);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
        (const char *)(unsigned int)v10);
      CChannel::Release(v9);
      CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>(v14);
      return v11;
    }
    else
    {
      v12 = v17;
      *a3 = v9;
      *((_QWORD *)v12 + 1) = v9;
      if ( v3 )
      {
        LODWORD(v3[1].Ptr) = 0;
        ReleaseSRWLockExclusive(v3);
      }
      return 0LL;
    }
  }
}
