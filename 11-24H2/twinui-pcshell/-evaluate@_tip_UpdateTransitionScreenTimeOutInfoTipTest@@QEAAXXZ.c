/*
 * XREFs of ?evaluate@_tip_UpdateTransitionScreenTimeOutInfoTipTest@@QEAAXXZ @ 0x180653E8C
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEAAXXZ @ 0x180653920 (-evaluate@-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@EEAAXX.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 */

void __fastcall _tip_UpdateTransitionScreenTimeOutInfoTipTest::evaluate(
        _tip_UpdateTransitionScreenTimeOutInfoTipTest *this,
        const char *a2)
{
  const char *v2; // rax
  __int64 v3; // r9
  __int64 v4; // rdx
  char v5; // r10
  __int64 v6; // r9
  char v7; // r10
  __int64 v8; // r9
  const char *v9; // rax
  __int64 v10; // r9
  char v11; // r10
  const char *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  char v15; // r10

  if ( *((_DWORD *)this + 5) || !*((_BYTE *)this + 18) )
  {
    v12 = tip2::details::reason_string((tip2::details *)"reason::invalidState", a2);
    v14 = *(_QWORD *)(v13 + 8);
    if ( *(_BYTE *)(v14 + 152) == v15 )
    {
      *(_QWORD *)(v14 + 160) = v12;
      *(_BYTE *)(v14 + 152) = 4;
      *(_WORD *)(v14 + 154) = 4;
    }
  }
  else
  {
    if ( *((_WORD *)this + 8) <= 0x14u )
    {
      if ( !*((_BYTE *)this + 19) )
      {
        v2 = tip2::details::reason_string((tip2::details *)"reason::failToUpdate", a2);
        v4 = *(_QWORD *)(v3 + 8);
        if ( *(_BYTE *)(v4 + 152) != v5 )
          return;
        *(_BYTE *)(v4 + 152) = 3;
        *(_WORD *)(v4 + 154) = 2;
        goto LABEL_7;
      }
      if ( *((_WORD *)this + 8) <= 0x14u )
        goto LABEL_12;
    }
    if ( !*((_BYTE *)this + 19) )
    {
LABEL_12:
      v8 = *((_QWORD *)this + 1);
      if ( *(_QWORD *)(v8 + 80) )
      {
        if ( *(_BYTE *)(v8 + 152) )
          return;
        *(_WORD *)(v8 + 154) = 0x4000;
      }
      else
      {
        if ( (*(_DWORD *)(v8 + 56) & 0x200) != 0 )
        {
          v9 = tip2::details::reason_string((tip2::details *)"reason::succeeded", a2);
          if ( *(_BYTE *)(v10 + 152) == v11 )
          {
            *(_QWORD *)(v10 + 160) = v9;
            *(_BYTE *)(v10 + 152) = 1;
            *(_WORD *)(v10 + 154) = 1;
          }
          return;
        }
        if ( *(_BYTE *)(v8 + 152) )
          return;
        *(_WORD *)(v8 + 154) = 16385;
      }
      *(_BYTE *)(v8 + 152) = 3;
      *(_QWORD *)(v8 + 160) = 0LL;
      return;
    }
    v2 = tip2::details::reason_string((tip2::details *)"reason::invalidUpdate", a2);
    v4 = *(_QWORD *)(v6 + 8);
    if ( *(_BYTE *)(v4 + 152) == v7 )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 3;
LABEL_7:
      *(_QWORD *)(v4 + 160) = v2;
    }
  }
}
