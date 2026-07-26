/*
 * XREFs of ndisReplaceBindTokens @ 0x140151778
 * Callers:
 *     ndisReadNicBindProperties @ 0x140151474 (ndisReadNicBindProperties.c)
 * Callees:
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014FD10 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1401696A0 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 */

__int64 __fastcall ndisReplaceBindTokens(__int64 a1, NetSetupPropertyBag *a2)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  char *Atom; // rsi
  char *v6; // rax
  unsigned __int64 v7; // r8
  unsigned __int64 i; // rcx
  __int64 v9; // r8
  _QWORD *v10; // r9
  unsigned int v11; // ecx
  __int64 v12; // rdx
  bool v13; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( *((_QWORD *)qword_140127138 + 11) )
  {
    v13 = 0;
    result = NetSetupPropertyBag::ReadBoolean(
               a2,
               (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_DoNotReplaceUpperRange,
               &v13);
    if ( (_DWORD)result )
      return result;
    if ( !v13 )
    {
      Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_140127138, L"ndis5");
      v6 = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_140127138, L"wlan");
      if ( !Atom || !v6 )
        return 3221225626LL;
      v7 = *(unsigned int *)(a1 + 52);
      for ( i = 0LL; i != v7; ++i )
      {
        if ( i >= v7 )
LABEL_17:
          __fastfail(5u);
        if ( *(char **)(*(_QWORD *)(a1 + 56) + 8 * i) == v6 )
          return 0LL;
      }
      v9 = *(unsigned int *)(a1 + 20);
      v10 = qword_140127138;
      v11 = *(_DWORD *)(a1 + 20);
      while ( v2 != v9 )
      {
        if ( v2 >= v11 )
          goto LABEL_17;
        v12 = *(_QWORD *)(a1 + 24);
        if ( *(char **)(v12 + 8 * v2) == Atom )
        {
          *(_QWORD *)(v12 + 8 * v2) = v10[11];
          v11 = *(_DWORD *)(a1 + 20);
        }
        ++v2;
      }
    }
  }
  return 0LL;
}
