/*
 * XREFs of ?ClearViewInfos@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802A2998
 * Callers:
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046ECA4 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z @ 0x180472E10 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UGameMruItem@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UGameMruItem@@@std@@@0@@Z @ 0x180048B80 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UGameMruItem@@@std@@@std@@@std@@YAXPEAV-$shared_ptr.c)
 *     ?Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18008317C (-Provider@TouchKeyboardExperienceTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x1801D2E90 (-DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801F5CA8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::ClearViewInfos(RTL_SRWLOCK *this)
{
  _BYTE *v2; // rdi
  RTL_SRWLOCK *v3; // r15
  struct KBViewInfo ***v4; // rax
  struct KBViewInfo **v5; // rbx
  struct KBViewInfo **Ptr; // r14
  struct KBViewInfo **v7; // rsi
  __int64 v8; // r12
  int v9; // eax
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  _BYTE *v14; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v16; // [rsp+90h] [rbp+40h] BYREF
  const wchar_t *v17; // [rsp+98h] [rbp+48h] BYREF

  v13 = 0LL;
  v2 = 0LL;
  v14 = 0LL;
  v3 = this + 53;
  AcquireSRWLockExclusive(this + 53);
  v4 = (struct KBViewInfo ***)&this[54];
  v5 = 0LL;
  Ptr = 0LL;
  if ( &v13 == (__int128 *)&this[54] )
  {
    v8 = *((_QWORD *)&v13 + 1);
    v7 = (struct KBViewInfo **)v13;
  }
  else
  {
    v5 = *v4;
    v7 = *v4;
    *(_QWORD *)&v13 = *v4;
    *v4 = 0LL;
    Ptr = (struct KBViewInfo **)this[55].Ptr;
    v8 = (__int64)Ptr;
    *((_QWORD *)&v13 + 1) = Ptr;
    this[55].Ptr = 0LL;
    v2 = this[56].Ptr;
    v14 = v2;
    this[56].Ptr = 0LL;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  while ( v5 != Ptr )
  {
    v9 = TouchKeyboardExperienceManager::DestroyView((TouchKeyboardExperienceManager *)this, *v5);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x15CF,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
    v5 += 2;
  }
  v10 = TouchKeyboardExperienceTraceLogging::Provider();
  if ( *(_DWORD *)v10 > 5u )
  {
    v16 = (v8 - (__int64)v7) >> 4;
    v17 = (const wchar_t *)"viewInfo cleared";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)v10,
      byte_1807FC716,
      v11,
      v12,
      &v17,
      (__int64)&v16);
  }
  if ( v7 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<GameMruItem>>>((__int64)v7, v8);
    std::_Deallocate<16,0>(v7, (const struct std::nothrow_t *)((v2 - (_BYTE *)v7) & 0xFFFFFFFFFFFFFFF0uLL));
  }
}
