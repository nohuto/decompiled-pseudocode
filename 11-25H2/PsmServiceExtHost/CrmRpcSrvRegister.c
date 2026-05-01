/*
 * XREFs of CrmRpcSrvRegister @ 0x18003DF90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180003860 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlg.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CrmLogSrvRegisterStart @ 0x18003E130 (CrmLogSrvRegisterStart.c)
 *     CempRpcQueryClientInformation @ 0x18003E1C8 (CempRpcQueryClientInformation.c)
 *     CrmLogSrvRegisterStop @ 0x18003E460 (CrmLogSrvRegisterStop.c)
 *     CrmLogRegistrationStart @ 0x18003E894 (CrmLogRegistrationStart.c)
 *     CempStringDuplicate @ 0x18003E960 (CempStringDuplicate.c)
 *     CrmGlobalsRegistrationAdd @ 0x18003EA20 (CrmGlobalsRegistrationAdd.c)
 *     CrmRegistrationInitialize @ 0x18003EAF0 (CrmRegistrationInitialize.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall CrmRpcSrvRegister(
        RPC_BINDING_HANDLE ClientBinding,
        _QWORD *a2,
        _QWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int ClientInformation; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  _DWORD *Heap; // rax
  _DWORD *v16; // rbx
  signed __int64 v17; // rax
  ULONG v18; // eax
  int v20; // [rsp+30h] [rbp-59h] BYREF
  UUID *v21; // [rsp+38h] [rbp-51h] BYREF
  _BYTE Sid[80]; // [rsp+40h] [rbp-49h] BYREF

  memset_0(Sid, 0, 0x44uLL);
  v20 = 0;
  *a3 = 0LL;
  ClientInformation = CempRpcQueryClientInformation(ClientBinding, Sid, 0LL, 0LL, 0LL);
  v14 = ClientInformation;
  if ( ClientInformation < 0 )
  {
    if ( (unsigned int)dword_1800E72E8 > 5 )
    {
      v20 = ClientInformation;
      v21 = &Uuid;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
        v11,
        (__int64)&unk_1800DA518,
        v12,
        v13,
        &v21,
        (__int64)&v20);
    }
  }
  else
  {
    CrmLogSrvRegisterStart();
    if ( a4 >= 309 )
    {
      v14 = -1073741811;
    }
    else
    {
      Heap = HampAllocateHeap(0x98uLL);
      v16 = Heap;
      if ( Heap )
      {
        CrmRegistrationInitialize(Heap);
        v17 = _InterlockedIncrement64(&qword_1800E9A10);
        v16[6] = a4;
        *((_QWORD *)v16 + 2) = v17;
        v18 = RtlLengthSid(Sid);
        memcpy_0(v16 + 18, Sid, v18);
        *((_QWORD *)v16 + 18) = CempStringDuplicate(a6);
        CrmGlobalsRegistrationAdd(v16);
        CrmLogRegistrationStart(v16);
        *a2 = v16;
        v14 = 0;
      }
      else
      {
        v14 = -1073741801;
      }
    }
    CrmLogSrvRegisterStop((unsigned int)a4, a5, Sid, (unsigned int)v14);
    if ( v14 >= 0 )
    {
      if ( v20 == GetCurrentProcessId() )
        *a3 = *a2;
      return 0;
    }
  }
  return (unsigned int)v14;
}
