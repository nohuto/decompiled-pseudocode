/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x18005C230
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18003C388 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180055188 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?GetCallerPID@@YAKPEAX@Z @ 0x18005C7A0 (-GetCallerPID@@YAKPEAX@Z.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18005CA0C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 */

__int64 __fastcall RmgrSrv_RmAcquireResources(
        void *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        HANDLE hSourceHandle,
        int a8,
        int a9,
        int *a10,
        __int64 *a11)
{
  unsigned int CallerPID; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  int v18; // edi
  unsigned int v19; // ebx
  HANDLE CurrentProcess; // rbx
  HANDLE v21; // rax
  BOOL v22; // eax
  __int64 v23; // rcx
  __int64 *v24; // r15
  int *v25; // rsi
  signed int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // r9
  signed int LastError; // eax
  int v31; // [rsp+50h] [rbp-41h]
  char v32[4]; // [rsp+68h] [rbp-29h] BYREF
  int v33; // [rsp+6Ch] [rbp-25h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v35; // [rsp+74h] [rbp-1Dh] BYREF
  __int64 v36; // [rsp+78h] [rbp-19h] BYREF
  unsigned int v37; // [rsp+80h] [rbp-11h] BYREF
  HANDLE TargetHandle; // [rsp+88h] [rbp-9h] BYREF

  CallerPID = GetCallerPID(a1);
  v17 = a5;
  v18 = 0;
  v19 = CallerPID;
  TargetHandle = 0LL;
  v32[0] = 0;
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 2) != 0 && (qword_1800E8290 & 2) == qword_1800E8290 )
  {
    a5 = a9;
    v33 = a8;
    v34 = a4;
    v35 = a2;
    LODWORD(v36) = v17;
    v37 = CallerPID;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v14,
      (__int64)&unk_1800D1DD6,
      v15,
      v16,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&a5);
  }
  LOBYTE(a5) = v17 == v19;
  CurrentProcess = GetCurrentProcess();
  v21 = GetCurrentProcess();
  v22 = DuplicateHandle(v21, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u);
  v24 = a11;
  v25 = a10;
  if ( v22 )
  {
    LOBYTE(v31) = a5;
    v26 = ExecutionModel::ResourceManager::RmAcquireResources(
            v23,
            a2,
            a3,
            a4,
            v17,
            a6,
            TargetHandle,
            a8,
            a9,
            v31,
            v32,
            a11);
    if ( v26 >= 0 )
    {
      LOBYTE(v18) = v32[0] != 0;
      *v25 = v18;
    }
  }
  else
  {
    LastError = GetLastError();
    v26 = LastError;
    if ( LastError > 0 )
      v26 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 2) != 0 && (qword_1800E8290 & 2) == qword_1800E8290 )
  {
    a5 = *v25;
    v36 = *v24;
    v37 = v26;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E8278,
      byte_1800D1D82,
      v27,
      v28,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&a5);
  }
  return (unsigned int)v26;
}
