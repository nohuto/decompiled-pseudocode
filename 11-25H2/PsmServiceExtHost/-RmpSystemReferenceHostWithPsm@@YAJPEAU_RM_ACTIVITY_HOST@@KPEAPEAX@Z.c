/*
 * XREFs of ?RmpSystemReferenceHostWithPsm@@YAJPEAU_RM_ACTIVITY_HOST@@KPEAPEAX@Z @ 0x180035798
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000DA1C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180036854 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpSystemReferenceHostWithPsm(struct _RM_ACTIVITY_HOST *a1, int a2, void **a3)
{
  unsigned int v4; // ebx
  int v5; // r8d
  int v6; // r9d
  __int64 v8; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+8h] BYREF
  struct _RM_ACTIVITY_HOST *v10; // [rsp+88h] [rbp+20h] BYREF

  v4 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, int, int, void **))(*(_QWORD *)(*((_QWORD *)a1 + 6) + 40LL)
                                                                                            + 120LL))(
         (char *)a1 + 552,
         *((unsigned int *)a1 + 155),
         (char *)a1 + 88,
         *((unsigned int *)a1 + 156),
         *((_QWORD *)a1 + 4),
         *((_BYTE *)a1 + 656) != 0 ? 4 : 0,
         a2,
         a3);
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
  {
    v8 = *((_QWORD *)a1 + 4);
    v10 = a1;
    v9 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E7278,
      (unsigned int)&unk_1800D9F47,
      v5,
      v6,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v10);
  }
  return v4;
}
