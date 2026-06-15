/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18006BC7C
 * Callers:
 *     ??1CSharedStreamGroupProxy@@MEAA@XZ @ 0x1800193CC (--1CSharedStreamGroupProxy@@MEAA@XZ.c)
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x18006F2F4 (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 *     ?UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ @ 0x1800A047C (-UpdateAuxiliaryStreamState@CSharedStreamGroupProxy@@IEAAXXZ.c)
 *     ?PowerResumed@CAudioSrv@@UEAAK_J@Z @ 0x1800CE660 (-PowerResumed@CAudioSrv@@UEAAK_J@Z.c)
 *     ?PowerSuspended@CAudioSrv@@UEAAK_J@Z @ 0x1800CE900 (-PowerSuspended@CAudioSrv@@UEAAK_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD v6[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h]
  unsigned __int16 *v8; // [rsp+48h] [rbp-38h]
  int v9; // [rsp+50h] [rbp-30h]
  int v10; // [rsp+54h] [rbp-2Ch]
  unsigned __int8 *v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+60h] [rbp-20h]
  int v13; // [rsp+64h] [rbp-1Ch]
  __int64 v14; // [rsp+68h] [rbp-18h]
  int v15; // [rsp+70h] [rbp-10h]
  int v16; // [rsp+74h] [rbp-Ch]

  v16 = 0;
  v14 = a5;
  v6[0] = *a2 << 24;
  v6[1] = *(unsigned __int16 *)(a2 + 1);
  v7 = *(_QWORD *)(a2 + 3);
  v8 = *(unsigned __int16 **)(a1 + 8);
  v15 = 8;
  v9 = *v8;
  v12 = *(unsigned __int16 *)(a2 + 11);
  v11 = a2 + 11;
  v10 = 2;
  v13 = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), v6, 0LL, 0LL);
}
