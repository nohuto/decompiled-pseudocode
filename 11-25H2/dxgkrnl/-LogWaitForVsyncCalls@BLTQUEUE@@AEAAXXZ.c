/*
 * XREFs of ?LogWaitForVsyncCalls@BLTQUEUE@@AEAAXXZ @ 0x1403C7BC0
 * Callers:
 *     ?EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ @ 0x14032AC44 (-EnableVSyncEventSignaling@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x140007184 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall BLTQUEUE::LogWaitForVsyncCalls(BLTQUEUE *this)
{
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  const CHAR *v4; // r9
  __int64 v5; // r10
  __int64 v6; // rax
  const CHAR *v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  if ( *((_DWORD *)this + 34) == 3 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this);
    if ( Current )
    {
      if ( !*((_BYTE *)Current + 585) )
      {
        *((_BYTE *)Current + 585) = 1;
        if ( (unsigned int)dword_14015B5B8 > 5 )
        {
          if ( tlgKeywordOn((__int64)&dword_14015B5B8, 0x400000000800LL) )
          {
            v6 = *(_QWORD *)(v5 + 64);
            if ( v6 )
              v4 = *(const CHAR **)(v6 + 96);
            v7 = v4;
            v8 = 33556480LL;
            v9 = 1LL;
            _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
              v2,
              (int)&unk_14013E0E2,
              v3,
              (__int64)&v9,
              (__int64)&v8,
              &v7);
          }
        }
      }
    }
  }
}
