/*
 * XREFs of ??1CChannel@@AEAA@XZ @ 0x180261394
 * Callers:
 *     ?Release@CChannel@@UEAAKXZ @ 0x180262A60 (-Release@CChannel@@UEAAKXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?AcquireExclusive@CReadWriteLock@@QEAAXXZ @ 0x18012D964 (-AcquireExclusive@CReadWriteLock@@QEAAXXZ.c)
 *     ?GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x18012DE58 (-GetMasterTableEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180157FC8 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x1801CFC74 (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 *     ??1?$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ @ 0x1801F331C (--1-$CWriteGuard@VCReadWriteLock@@@@QEAA@XZ.c)
 *     ?DestroyHandle@CChannelTable@@QEAAXI@Z @ 0x18025D43C (-DestroyHandle@CChannelTable@@QEAAXI@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x1802614B8 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

void __fastcall CChannel::~CChannel(CChannel *this, unsigned int a2)
{
  _QWORD **v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  CCommandBatch *v6; // rcx
  RTL_SRWLOCK *v7; // rbx
  unsigned int v8; // esi
  int MasterTableEntry; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CLIENT_CHANNEL_HANDLE_ENTRY *v12; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v13; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = &CChannel::`vftable';
  v3 = (_QWORD **)((char *)this + 80);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    operator delete(v4);
  }
  v6 = (CCommandBatch *)*((_QWORD *)this + 22);
  if ( v6 )
    CCommandBatch::`scalar deleting destructor'(v6, a2);
  v7 = (RTL_SRWLOCK *)*((_QWORD *)this + 7);
  v8 = *((_DWORD *)this + 18);
  v13 = v7 + 16;
  CReadWriteLock::AcquireExclusive(v7 + 16);
  v12 = 0LL;
  MasterTableEntry = CChannelTable::GetMasterTableEntry((CChannelTable *)&v7[6], v8, &v12);
  if ( MasterTableEntry >= 0 )
    CChannelTable::DestroyHandle((struct _RTL_CRITICAL_SECTION *)&v7[6], v8);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\internalmilcmdconnection.cpp",
      (const char *)(unsigned int)MasterTableEntry);
  CWriteGuard<CReadWriteLock>::~CWriteGuard<CReadWriteLock>((__int64 *)&v13);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 12);
  v10 = *((_QWORD *)this + 2);
  if ( v10 )
  {
    std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v10, *((_QWORD *)this + 3));
    std::_Deallocate<16,0>(
      *((_QWORD **)this + 2),
      (*((_QWORD *)this + 4) - *((_QWORD *)this + 2)) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 2) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
}
