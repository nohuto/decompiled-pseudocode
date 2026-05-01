/*
 * XREFs of ?RmpGameModeTryApplyGraphicsPriority@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800674A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333@Z @ 0x18003BFFC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?RmpSystemSetGpuYieldPercentage@@YAJKPEAU_D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS@@@Z @ 0x18006744C (-RmpSystemSetGpuYieldPercentage@@YAJKPEAU_D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS@@@Z.c)
 *     ?RmpSystemSetGpuMemoryBudget@@YAJKK@Z @ 0x1800675FC (-RmpSystemSetGpuMemoryBudget@@YAJKK@Z.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmpGameModeTryApplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  _DWORD *v5; // rsi
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // rax
  int v12; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+44h] [rbp-2Ch] BYREF
  int v14; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+4Ch] [rbp-24h] BYREF
  _DWORD v16[4]; // [rsp+50h] [rbp-20h] BYREF

  v4 = 0;
  v5 = (_DWORD *)((char *)a2 + 128);
  if ( (*((_BYTE *)a1 + 149) & 1) != 0 )
  {
    v9 = -1073741637;
  }
  else
  {
    v8 = *v5;
    v16[1] = 0;
    v16[2] = 0;
    v16[3] = v8;
    v16[0] = 16;
    v9 = D3DKMTSetYieldPercentage(v16);
    v10 = v5;
    if ( v9 < 0
      || (v4 = 1, v9 = RmpSystemSetGpuMemoryBudget(*((_DWORD *)a2 + 33), *((_DWORD *)a2 + 34)), v10 = v5, v9 < 0) )
    {
      v5 = v10;
      if ( v4 )
        RmpSystemSetGpuYieldPercentage(*((_DWORD *)a1 + 12), (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 60));
    }
    else
    {
      v9 = 0;
    }
  }
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
  {
    v12 = *((_DWORD *)a2 + 34);
    v13 = *((_DWORD *)a2 + 33);
    v14 = *v5;
    v15 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E7278,
      byte_1800D81DF,
      a3,
      a4,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
  return (unsigned int)v9;
}
