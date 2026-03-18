/*
 * XREFs of ?UpdateHPDFilteringTelemetry@VIDPN_MGR@@QEAAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1403D04B4
 * Callers:
 *     ?DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z @ 0x1403D0410 (-DmmUpdateHPDFilteringTelemetry@@YAXPEAXAEAU_DMM_HPD_FILTER_INFO@@PEAU_GUID@@IE@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U2@U3@U3@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@5555555544455AEBU?$_tlgWrapperByRef@$0BA@@@44455@Z @ 0x140005FD8 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x140036A80 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 */

void __fastcall VIDPN_MGR::UpdateHPDFilteringTelemetry(
        DMMVIDEOPRESENTTARGETSET **this,
        struct _GUID *a2,
        struct _GUID *a3,
        unsigned int a4,
        unsigned __int8 a5)
{
  __int64 v5; // rsi
  struct DXGADAPTER *ContainingAdapter; // r15
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v11; // r10
  __int64 v12; // rbx
  int v13; // eax
  struct _GUID v14; // xmm0
  struct _GUID v15; // xmm0
  unsigned __int8 v16; // al
  int v17; // r9d
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned int v20; // ecx
  bool v21; // al
  __int64 v22; // rcx
  bool v23; // [rsp+D8h] [rbp-80h] BYREF
  bool v24; // [rsp+D9h] [rbp-7Fh] BYREF
  bool v25; // [rsp+DAh] [rbp-7Eh] BYREF
  char v26; // [rsp+DBh] [rbp-7Dh] BYREF
  unsigned __int8 v27; // [rsp+DCh] [rbp-7Ch] BYREF
  bool v28; // [rsp+DDh] [rbp-7Bh] BYREF
  char v29; // [rsp+DEh] [rbp-7Ah] BYREF
  char v30; // [rsp+DFh] [rbp-79h] BYREF
  bool v31; // [rsp+E0h] [rbp-78h] BYREF
  bool v32; // [rsp+E1h] [rbp-77h] BYREF
  bool v33; // [rsp+E2h] [rbp-76h] BYREF
  char v34; // [rsp+E3h] [rbp-75h] BYREF
  int v35; // [rsp+E4h] [rbp-74h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v37; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+F8h] [rbp-60h] BYREF
  struct _DMM_HPD_FILTER_INFO *v39; // [rsp+100h] [rbp-58h] BYREF
  __int64 v40; // [rsp+108h] [rbp-50h] BYREF
  __int64 v41; // [rsp+110h] [rbp-48h] BYREF
  __int64 v42; // [rsp+118h] [rbp-40h] BYREF
  __int64 v43; // [rsp+120h] [rbp-38h] BYREF
  bool v44; // [rsp+148h] [rbp-10h] BYREF

  v5 = a4;
  ContainingAdapter = VIDPN_MGR::GetContainingAdapter((VIDPN_MGR *)this);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this[15], v5);
  v11 = TargetById;
  if ( !TargetById )
  {
    WdLogSingleEntry1(2LL, v5);
    WdLogGlobalForLineNumber = 5848;
    return;
  }
  v12 = (__int64)TargetById + 568;
  v13 = *(_DWORD *)a2[2].Data4;
  if ( (v13 & 0xC0000) == 0 )
    goto LABEL_3;
  v15 = *a3;
  *a2 = *a3;
  if ( (_BYTE)v13 == 8 )
    v16 = *(_DWORD *)(*((_QWORD *)v11 + 67) + 168LL);
  else
    v16 = 0;
  a2[2].Data4[1] = v16;
  v17 = *(_DWORD *)a2[2].Data4;
  if ( (v17 & 0x10000) != 0 )
    goto LABEL_22;
  if ( (v17 & 0x20000) != 0 )
  {
LABEL_18:
    if ( (unsigned int)dword_14015B660 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_14015B660, 0x400000000080LL) )
      {
        v20 = *(_DWORD *)(v12 + 40);
        v39 = (struct _DMM_HPD_FILTER_INFO *)a2;
        v44 = (v18 & 0x80000) != 0;
        v23 = (v18 & 0x40000) != 0;
        v36 = *(_QWORD *)&a2[2].Data1;
        v37 = *(_QWORD *)a2[1].Data4;
        v38 = *(_QWORD *)&a2[1].Data1;
        v24 = (v20 & 0x80000) != 0;
        v25 = (v20 & 0x40000) != 0;
        v40 = *(_QWORD *)(v12 + 32);
        v41 = *(_QWORD *)(v12 + 24);
        v42 = *(_QWORD *)(v12 + 16);
        v26 = BYTE2(v20) & 1;
        v27 = a5;
        v28 = (_BYTE)v18 == 10;
        v29 = *(_BYTE *)(v12 + 41);
        v30 = HIBYTE(v20) & 1;
        v31 = (v20 & 0x800000) != 0;
        v32 = (v20 & 0x400000) != 0;
        v21 = (v20 & 0x200000) != 0;
        v22 = v20 >> 20;
        v33 = v21;
        LOBYTE(v22) = v22 & 1;
        v43 = *(_QWORD *)((char *)ContainingAdapter + 412);
        v35 = *(_DWORD *)(v19 + 24);
        v34 = v22;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
          v22,
          (__int64)&unk_14013D36B,
          v12,
          v18,
          (__int64)&v35,
          (__int64)&v43,
          (__int64)&v34,
          (__int64)&v33,
          (__int64)&v32,
          (__int64)&v31,
          (__int64)&v30,
          (__int64)&v29,
          (__int64)&v28,
          (__int64)&v27,
          (__int64)&v26,
          (__int64)&v42,
          (__int64)&v41,
          (__int64)&v40,
          (__int64)&v25,
          (__int64)&v24,
          (__int64 *)&v39,
          (__int64)&v38,
          (__int64)&v37,
          (__int64)&v36,
          (__int64)&v23,
          (__int64)&v44);
      }
    }
    if ( (*(_DWORD *)a2[2].Data4 & 0x60000) != 0x40000 )
      goto LABEL_3;
LABEL_22:
    v15 = *a2;
    goto LABEL_12;
  }
  if ( (*(_DWORD *)(v12 + 40) & 0x40000) != 0 )
  {
    if ( (__int64)(*(_QWORD *)&a2[1].Data1 - *(_QWORD *)(v12 + 16)) > 100000000 )
    {
      if ( (v17 & 0x40000) != 0 )
        goto LABEL_12;
LABEL_3:
      v14 = 0LL;
      *(_OWORD *)v12 = 0LL;
      *(_OWORD *)(v12 + 16) = 0LL;
LABEL_4:
      *(struct _GUID *)(v12 + 32) = v14;
      return;
    }
    goto LABEL_18;
  }
  if ( (v17 & 0x40000) != 0 )
  {
LABEL_12:
    *(struct _GUID *)v12 = v15;
    *(struct _GUID *)(v12 + 16) = a2[1];
    v14 = a2[2];
    goto LABEL_4;
  }
}
