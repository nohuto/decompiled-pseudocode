/*
 * XREFs of ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x18002DF30
 * Callers:
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x18002C5A0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004E70 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180010AC0 (--3@YAXPEAX@Z.c)
 *     ?ForEachEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker@1@@Z @ 0x18002D4AC (-ForEachEntry@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAJ$$QEAVCListWorker.c)
 *     ?IsListEmpty@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ @ 0x18002DA98 (-IsListEmpty@-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAAHXZ.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18002E778 (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_S @ 0x18002F290 (WPP_SF_S.c)
 */

__int64 __fastcall CDuckingManager::NotifyUnfilteredClientsAutoUnduck(
        CDuckingManager *this,
        const unsigned __int16 *a2)
{
  char *v3; // r15
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  int v6; // r14d
  LPVOID v7; // rax
  void (__fastcall **v8)(_QWORD, CDuckingNotification *); // rbx
  ATL::CAtlException *v10; // [rsp+20h] [rbp-48h] BYREF
  void (__fastcall **v11[3])(_QWORD, CDuckingNotification *); // [rsp+28h] [rbp-40h] BYREF
  __int16 v12; // [rsp+40h] [rbp-28h]
  void (__fastcall **v13)(_QWORD, CDuckingNotification *); // [rsp+70h] [rbp+8h]

  v3 = (char *)this + 72;
  if ( !CLockedList_UniqueValuesOnly<CDuckingNotification,0>::IsListEmpty((__int64)this + 72) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x8000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, &WPP_53f29f244fa932abd536e394721a76e7_Traceguids, a2);
    }
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v5 = 2 * v4 + 2;
    v6 = 2 * v4 + 74;
    v7 = operator new(2 * v4 + 74);
    v8 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v7;
    v13 = (void (__fastcall **)(_QWORD, CDuckingNotification *))v7;
    if ( v7 )
    {
      *(_DWORD *)v7 = v6;
      *((_DWORD *)v7 + 1) = 512;
      *((_DWORD *)v7 + 6) = v5;
      *((_BYTE *)v7 + 60) = 0;
      *((_DWORD *)v7 + 14) = 0;
      StringCbCopyW((unsigned __int16 *)v7 + 36, v5, a2);
      try
      {
        v11[0] = (void (__fastcall **)(_QWORD, CDuckingNotification *))&CGenerateDuckingNotification::`vftable';
        v11[1] = v8;
        v11[2] = 0LL;
        v12 = 0;
        CLockedList_UniqueValuesOnly<CDuckingNotification,0>::ForEachEntry((__int64)v3, v11);
      }
      catch ( ATL::CAtlException *v10 )
      {
        if ( *(_DWORD *)v10 == -1073741571 )
          _o__resetstkoflw();
        v8 = v13;
      }
    }
    operator delete(v8);
  }
  return 0LL;
}
