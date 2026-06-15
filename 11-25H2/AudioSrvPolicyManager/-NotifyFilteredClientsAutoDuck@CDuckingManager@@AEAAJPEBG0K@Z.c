/*
 * XREFs of ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800304C4
 * Callers:
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x18002F478 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180007070 (--2@YAPEAX_K@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A860 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180010D60 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x180020100 (__security_check_cookie.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x18002FD60 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     ?IsListEmpty@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ @ 0x180030478 (-IsListEmpty@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x180031158 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x180031C70 (WPP_SF_S.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDuckingManager::NotifyFilteredClientsAutoDuck(
        CDuckingManager *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3,
        int a4)
{
  int v8; // ebx
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  int v12; // r14d
  _DWORD *v13; // rax
  __int64 (__fastcall ***v14)(); // rdx
  _DWORD *v15; // [rsp+20h] [rbp-49h] BYREF
  __int128 v16; // [rsp+28h] [rbp-41h]
  __int64 (__fastcall **v17)(); // [rsp+40h] [rbp-29h] BYREF
  __int128 v18; // [rsp+48h] [rbp-21h]
  __int64 (__fastcall ***v19)(); // [rsp+78h] [rbp+Fh]

  v8 = 0;
  if ( CLockedList_UniqueValuesOnly<CDuckingNotification,0>::IsListEmpty((__int64)this + 72) )
    return 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, a2);
  }
  v10 = -1LL;
  do
    ++v10;
  while ( a2[v10] );
  v11 = 2 * v10 + 2;
  v12 = 2 * v10 + 74;
  v13 = operator new(2 * v10 + 74);
  v15 = v13;
  if ( v13 )
  {
    *v13 = v12;
    v15[1] = 512;
    v15[6] = v11;
    *((_BYTE *)v15 + 60) = 1;
    v15[14] = a4;
    StringCbCopyW((unsigned __int16 *)v15 + 36, v11, a2);
    *(_QWORD *)&v16 = this;
    *((_QWORD *)&v16 + 1) = &v15;
    v17 = off_180053908;
    v18 = v16;
    v19 = &v17;
    v8 = CDuckingManager::ForEachDuckableSession((__int64)this, (__int64)a3, (__int64)&v17);
    if ( v19 )
    {
      v14 = &v17;
      LOBYTE(v14) = v19 != &v17;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v19)[4])(v19, v14);
    }
    v13 = v15;
  }
  operator delete(v13);
  v15 = 0LL;
  if ( v8 < 0 )
    AudPolicyLogError("CDuckingManager::NotifyFilteredClientsAutoDuck", 680, v8);
  return (unsigned int)v8;
}
