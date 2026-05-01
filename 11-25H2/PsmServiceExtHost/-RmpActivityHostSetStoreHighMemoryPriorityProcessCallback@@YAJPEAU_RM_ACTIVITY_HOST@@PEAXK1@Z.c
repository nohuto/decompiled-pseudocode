/*
 * XREFs of ?RmpActivityHostSetStoreHighMemoryPriorityProcessCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180054F60
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180055174 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

__int64 __fastcall RmpActivityHostSetStoreHighMemoryPriorityProcessCallback(
        struct _RM_ACTIVITY_HOST *a1,
        void *a2,
        int a3,
        void *a4)
{
  unsigned int v6; // ebx
  int v7; // r8d
  int v8; // r9d
  unsigned int v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  void *v13; // [rsp+58h] [rbp-28h]
  _DWORD SystemInformation[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD *v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+74h] [rbp-Ch]
  int v18; // [rsp+98h] [rbp+18h] BYREF

  v17 = 0;
  v12[1] = 0;
  v13 = a2;
  v12[0] = 257;
  SystemInformation[0] = 1;
  SystemInformation[1] = 20;
  v15 = v12;
  v16 = 16;
  v6 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    v11 = *((_QWORD *)a1 + 4);
    v18 = a3;
    v10 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E72B0,
      (unsigned int)&unk_1800D9CCA,
      v7,
      v8,
      (__int64)&v10,
      (__int64)&v18,
      (__int64)&v11);
  }
  return v6;
}
