/*
 * XREFs of ?HamRmHostLogRundownEvents@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180053CF4
 * Callers:
 *     ?HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180053C00 (-HampPkgLogRundownEvents@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U4@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@4446555@Z @ 0x180001A10 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@.c)
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180005180 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009140 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180009DD0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA84 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U2@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U4@U3@U4@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@4AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@656333333@Z @ 0x1800537A8 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapSz@G@@U2@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapper.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180084C38 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 */

void __fastcall HamRmHostLogRundownEvents(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  int v2; // edx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _HAM_ACTIVITY *FirstActivity; // rdi
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rcx
  char v15; // al
  __int64 v16; // rcx
  int v17; // [rsp+A0h] [rbp-80h] BYREF
  int v18; // [rsp+A4h] [rbp-7Ch] BYREF
  int v19; // [rsp+A8h] [rbp-78h] BYREF
  __int64 v20; // [rsp+B0h] [rbp-70h] BYREF
  __int64 v21; // [rsp+B8h] [rbp-68h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-60h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-58h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-50h] BYREF
  const wchar_t *v25; // [rsp+D8h] [rbp-48h] BYREF
  const wchar_t *v26; // [rsp+E0h] [rbp-40h] BYREF
  const wchar_t *v27; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-30h] BYREF
  __int64 v29[5]; // [rsp+F8h] [rbp-28h] BYREF
  char v30; // [rsp+130h] [rbp+10h] BYREF
  char v31; // [rsp+138h] [rbp+18h] BYREF
  int v32; // [rsp+140h] [rbp+20h] BYREF
  int v33; // [rsp+148h] [rbp+28h] BYREF

  v19 = 0;
  v33 = 0;
  HampHostAcquireLockExclusiveEx(a1, 0);
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v19, (union _RM_OPTIMIZATION_STATE *)&v33);
  if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 8LL) )
  {
    v5 = (unsigned int)(v2 + 24);
    v21 = *((_QWORD *)a1 + 78);
    v23 = *((_QWORD *)a1 + 102);
    v30 = *((_BYTE *)a1 + 664);
    v32 = *((_DWORD *)a1 + 164);
    LODWORD(v20) = v33;
    v17 = v19;
    v31 = *((_BYTE *)a1 + 592);
    if ( a1 )
      v5 = (unsigned __int64)a1 - 32;
    v22 = v3;
    v6 = *(_QWORD *)v5;
    v7 = 624LL;
    v24 = v6;
    if ( a1 )
      v7 = (__int64)a1 + 560;
    v18 = *(_DWORD *)v7;
    v25 = (const wchar_t *)((char *)a1 + 24);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v7,
      (__int64)&unk_1800D246E,
      v3,
      v4,
      &v25,
      (__int64)&v18,
      (__int64)&v24,
      (__int64)&v31,
      (__int64)&v17,
      (__int64)&v20,
      (__int64)&v32,
      (__int64)&v30,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21);
  }
  FirstActivity = HampHostGetFirstActivity(a1);
  if ( FirstActivity )
  {
    do
    {
      if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 8LL) )
      {
        v14 = (unsigned int)(v9 + 24);
        v25 = (const wchar_t *)*((_QWORD *)FirstActivity + 50);
        v24 = *((_QWORD *)FirstActivity + 49);
        v21 = *((_QWORD *)FirstActivity + 64);
        v15 = *((_BYTE *)FirstActivity + 552) & 1;
        v23 = v10;
        v30 = v15;
        v18 = *((_DWORD *)FirstActivity + 106);
        v31 = *((_BYTE *)FirstActivity + 563);
        v17 = *((_DWORD *)FirstActivity + 28);
        v26 = (const wchar_t *)((char *)FirstActivity + 252);
        v27 = (const wchar_t *)((char *)FirstActivity + 124);
        if ( a1 )
          v14 = (__int64)a1 - 32;
        v22 = v13;
        v20 = v12;
        LOBYTE(v32) = v11;
        v28 = *(_QWORD *)v14;
        v29[0] = *((_QWORD *)FirstActivity + 5);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v14,
          (__int64)&unk_1800D2526,
          v10,
          v11,
          (__int64)v29,
          (__int64)&v28,
          &v27,
          &v26,
          (__int64)&v17,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v18,
          (__int64)&v30,
          (__int64)&v20,
          (__int64)&v21,
          (__int64)&v22,
          (__int64)&v23,
          (__int64)&v24,
          (__int64)&v25);
      }
      v16 = *((_QWORD *)FirstActivity + 12);
      if ( v16 == *((_QWORD *)FirstActivity + 10) + 608LL )
        break;
      FirstActivity = (struct _HAM_ACTIVITY *)(v16 - 96);
    }
    while ( v16 != 96 );
  }
  HampHostReleaseLockExclusive(a1);
  RmHamHostActOnProcesses(
    (struct _RM_ACTIVITY_HOST *)(((unsigned __int64)a1 - 64) & -(__int64)(a1 != 0LL)),
    0,
    1,
    (int (*)(struct _RM_ACTIVITY_HOST *, void *, unsigned int, void *))HampHostLogProcess,
    0LL);
}
