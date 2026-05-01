/*
 * XREFs of ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18003B748
 * Callers:
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F960 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@445@Z @ 0x180002618 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@U2@U3@@-$_tlgWrit.c)
 *     ?HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x18003B520 (-HampManagerGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003B994 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041644 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18005506C (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180063CAC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTempl.c)
 *     ?HampHostTryEnterModsPlmPhase@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18007E25C (-HampHostTryEnterModsPlmPhase@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

__int64 __fastcall HampPdcPlmUpdateState(struct _HAM_PDC_CONTEXT *a1, unsigned int a2, char a3)
{
  unsigned int v6; // edi
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rbx
  char *v8; // r15
  unsigned __int8 v9; // al
  __int64 v10; // r8
  unsigned int v11; // esi
  int v13; // r9d
  __int64 v14; // r9
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // [rsp+50h] [rbp-20h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h] BYREF
  const wchar_t *v21; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+30h] BYREF
  int v23; // [rsp+B8h] [rbp+48h] BYREF

  v6 = 0;
  NextHost = (struct _RM_HAM_ACTIVITY_HOST *)HampHostEnumerateHostsInNode(*(_QWORD *)a1 + 352LL, 0LL);
  if ( NextHost )
  {
    v8 = (char *)a1 + 32;
    do
    {
      v9 = HampHostTryEnterModsPlmPhase(NextHost, a2);
      v11 = v9;
      if ( v9 )
      {
        v10 = (unsigned int)dword_1800E82B0;
        if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 64LL) )
        {
          v22 = v11;
          v18 = *((_QWORD *)NextHost - 4);
          v23 = *((_DWORD *)NextHost + 140);
          v19 = (__int64)NextHost + 24;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
            (_DWORD)NextHost + 560,
            (unsigned int)&unk_1800D6A6E,
            v10,
            v13,
            (__int64)&v19,
            (__int64)&v23,
            (__int64)&v18,
            (__int64)&v22);
          v10 = (unsigned int)dword_1800E82B0;
        }
        if ( (_BYTE)v11 == 1
          && (a3 & 1) != 0
          && (unsigned int)v10 > 4
          && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 0x400000000008LL) )
        {
          v19 = 0x1000000LL;
          v22 = a2;
          v23 = 1;
          v20 = *((_QWORD *)NextHost - 4);
          LODWORD(v18) = *((_DWORD *)NextHost + 140);
          v21 = (const wchar_t *)((char *)NextHost + 24);
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            (__int64)NextHost + 560,
            (__int64)&unk_1800D68AF,
            v10,
            v14,
            &v21,
            (__int64)&v18,
            (__int64)&v20,
            (__int64)&v23,
            (__int64)&v22,
            (__int64)&v19);
        }
        v6 = 1;
      }
      LOBYTE(v10) = v11;
      HampSlsUpdateHostBlockType(v8, NextHost, v10);
      NextHost = HampManagerGetNextHost(NextHost);
    }
    while ( NextHost );
  }
  if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 8LL) )
  {
    v23 = a2;
    LOBYTE(v22) = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v15,
      (unsigned int)&unk_1800D6872,
      v16,
      v17,
      (__int64)&v22,
      (__int64)&v23);
  }
  return v6;
}
