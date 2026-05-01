/*
 * XREFs of ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003BA14
 * Callers:
 *     ?HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z @ 0x18003B7C8 (-HampPdcPlmUpdateState@@YAKPEAU_HAM_PDC_CONTEXT@@KK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C100 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@PEAPEAU2@@Z @ 0x1800670AC (-HampSlsBlockerEntryFindOrInsert@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOC.c)
 *     ?HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180067184 (-HampSlsBlockerEntryFind@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@_KPEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER.c)
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180067A80 (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180067C48 (-HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 *     ?HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18006BF4C (-HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 */

void __fastcall HampSlsUpdateHostBlockType(__int64 a1, struct _RM_HAM_ACTIVITY_HOST *a2, char a3)
{
  char *v6; // rax
  __int64 v7; // rdx
  struct _HAM_SLEEP_STUDY_CONTEXT *v8; // rcx
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v9; // rdi
  __int64 v10; // rdx
  int v11; // r8d
  int v12; // r9d
  int v13; // r8d
  int v14; // r9d
  int v15; // r8d
  int v16; // r9d
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v17; // [rsp+60h] [rbp+30h] BYREF
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v18; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) )
    return;
  if ( !a3 )
  {
    if ( (*(_DWORD *)(a1 + 32) & 3) == 1 )
    {
      v6 = (char *)a2 - 32;
      v7 = 32LL;
      if ( a2 )
        v7 = (__int64)v6;
      if ( (int)HampSlsBlockerEntryFind((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, *(_QWORD *)v7, &v17) >= 0
        && (int)HampSlsBlockerEntryUpdateBlockType(v17, 0LL, a1, a2) < 0
        && (unsigned int)dword_1800E72B0 > 4 )
      {
        if ( (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 64LL) )
        {
          LODWORD(v17) = v13;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1800E72B0,
            (unsigned int)&unk_1800D64AD,
            v13,
            v14,
            (__int64)&v17);
        }
      }
    }
    return;
  }
  if ( HampSlsBlockerEntryCreate((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, a2, &v18) < 0 )
  {
    if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 64LL) )
    {
      LODWORD(v17) = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1800E72B0,
        (unsigned int)&unk_1800D6471,
        v15,
        v16,
        (__int64)&v17);
    }
  }
  else if ( (*(_BYTE *)(a1 + 32) & 2) == 0 && (*(_BYTE *)(a1 + 32) & 1) != 0 )
  {
    v9 = v18;
    HampSlsBlockerEntryFindOrInsert((struct _HAM_SLEEP_STUDY_CONTEXT *)a1, v18, &v17);
    LOBYTE(v10) = a3;
    if ( v17 == v9 )
      v9 = 0LL;
    if ( (int)HampSlsBlockerEntryUpdateBlockType(v17, v10, a1, a2) < 0
      && (unsigned int)dword_1800E72B0 > 4
      && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 64LL) )
    {
      LODWORD(v17) = v11;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1800E72B0,
        (unsigned int)&unk_1800D64AD,
        v11,
        v12,
        (__int64)&v17);
    }
    goto LABEL_11;
  }
  v9 = v18;
LABEL_11:
  if ( v9 )
    HampSlsBlockerEntryDestroy(v8, v9);
}
