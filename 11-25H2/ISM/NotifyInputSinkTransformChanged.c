/*
 * XREFs of NotifyInputSinkTransformChanged @ 0x18004C210
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@?$vector@VNotificationData@@V?$allocator@VNotificationData@@@std@@@std@@AEAAPEAVNotificationData@@QEAV2@AEA_KAEBUtagINPUT_TRANSFORM@@@Z @ 0x18004C494 (--$_Emplace_reallocate@AEA_KAEBUtagINPUT_TRANSFORM@@@-$vector@VNotificationData@@V-$allocator@VN.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18009CD84 (atexit.c)
 *     _Init_thread_footer @ 0x18009D758 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009D7C0 (_Init_thread_header.c)
 *     ??0?$unordered_map@_K_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_K@std@@@2@@std@@QEAA@XZ @ 0x1800A7EF4 (--0-$unordered_map@_K_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$allocator@U-$pair@$$CB_K_K@std@@@2@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall NotifyInputSinkTransformChanged(__int64 a1, _OWORD *a2)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rdx
  unsigned __int64 i; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 v19; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp+18h]

  if ( dword_180247CF0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180247CF0);
    if ( dword_180247CF0 == -1 )
    {
      SRWLock.Ptr = 0LL;
      std::unordered_map<unsigned __int64,unsigned __int64>::unordered_map<unsigned __int64,unsigned __int64>(&unk_180247C88);
      qword_180247CC8 = 0LL;
      qword_180247CE0 = 0LL;
      xmmword_180247CD0 = 0LL;
      byte_180247CE8 = 0;
      atexit(InputSinkDataCache::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180247CF0);
    }
  }
  v4 = 0;
  v19 = 0LL;
  if ( a1 )
  {
    NtQueryCompositionInputSinkLuid(a1, &v19);
    v4 = v19;
  }
  v20 = __PAIR64__(HIDWORD(v19), v4);
  v5 = __PAIR64__(HIDWORD(v19), v4);
  v19 = __PAIR64__(HIDWORD(v19), v4);
  AcquireSRWLockExclusive(&SRWLock);
  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v9 = *((unsigned __int8 *)&v19 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  v10 = 2 * (qword_180247CB8 & v7);
  v11 = *(_QWORD *)(qword_180247CA0 + 8 * v10 + 8);
  if ( v11 == qword_180247C90 )
  {
LABEL_11:
    v11 = 0LL;
  }
  else
  {
    v6 = *(_QWORD *)(qword_180247CA0 + 8 * v10);
    while ( v5 != *(_QWORD *)(v11 + 16) )
    {
      if ( v11 == v6 )
        goto LABEL_11;
      v11 = *(_QWORD *)(v11 + 8);
    }
  }
  v12 = qword_180247C90;
  if ( v11 )
    v12 = v11;
  if ( v12 != qword_180247C90 )
  {
    v13 = qword_180247CC8;
    v14 = xmmword_180247CD0;
    while ( v13 != (_QWORD *)xmmword_180247CD0 && (*(_DWORD *)v13 != 2 || v13[1] != v5) )
      v13 += 12;
    if ( v13 == (_QWORD *)xmmword_180247CD0 )
    {
      if ( (_QWORD)xmmword_180247CD0 == *((_QWORD *)&xmmword_180247CD0 + 1) )
      {
        std::vector<NotificationData>::_Emplace_reallocate<unsigned __int64 &,tagINPUT_TRANSFORM const &>(
          &qword_180247CC8,
          xmmword_180247CD0,
          &v19,
          a2);
      }
      else
      {
        *(_DWORD *)xmmword_180247CD0 = 2;
        *(_QWORD *)(v14 + 8) = v5;
        *(_QWORD *)(v14 + 16) = 0LL;
        *(_OWORD *)(v14 + 32) = *a2;
        *(_OWORD *)(v14 + 48) = a2[1];
        *(_OWORD *)(v14 + 64) = a2[2];
        *(_OWORD *)(v14 + 80) = a2[3];
        *(_QWORD *)&xmmword_180247CD0 = xmmword_180247CD0 + 96;
      }
    }
    else
    {
      *((_OWORD *)v13 + 2) = *a2;
      *((_OWORD *)v13 + 3) = a2[1];
      *((_OWORD *)v13 + 4) = a2[2];
      *((_OWORD *)v13 + 5) = a2[3];
    }
    if ( qword_180247CE0 && !byte_180247CE8 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)qword_180247CE0 + 80LL))(
              qword_180247CE0,
              1000000LL,
              0LL,
              v6);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x8C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\inputsinkdatacache\\lib\\"
                        "inputsinkdatacache.cpp",
          (const char *)(unsigned int)v16,
          v17);
      byte_180247CE8 = 1;
    }
  }
  ReleaseSRWLockExclusive(&SRWLock);
  return 1LL;
}
