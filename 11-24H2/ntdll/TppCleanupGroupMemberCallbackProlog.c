/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x18001F970
 * Callers:
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x18001F480 (TppExecuteWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x180068EC0 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800703A0 (RtlActivateActivationContextUnsafeFast.c)
 *     NtSetInformationThread @ 0x180161E30 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180162840 (NtTraceEvent.c)
 *     NtAlpcSetInformation @ 0x180162E60 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x1801652A0 (NtSetInformationWorkerFactory.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

struct _TEB *__fastcall TppCleanupGroupMemberCallbackProlog(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v6; // zf
  __int64 v7; // rsi
  __int64 v8; // rsi
  signed __int32 v9; // r14d
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rbp
  __int64 v13; // rax
  signed __int32 v14; // r8d
  int v15; // eax
  signed __int32 v16; // edx
  void *v17; // rcx
  __int64 v18; // rsi
  struct _TEB *v19; // rax
  void *SubProcessTag; // r8
  _DWORD *SharedData; // rdx
  __int64 v22; // rdx
  struct _TEB *result; // rax
  struct _TEB **v24; // rbx
  __int64 v25; // rcx
  int v26; // [rsp+20h] [rbp-68h] BYREF
  signed __int64 v27; // [rsp+28h] [rbp-60h]
  int v28; // [rsp+30h] [rbp-58h] BYREF
  _OWORD v29[2]; // [rsp+38h] [rbp-50h] BYREF
  int v30; // [rsp+58h] [rbp-30h]
  int v31; // [rsp+5Ch] [rbp-2Ch]

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
  {
    v6 = *(_DWORD *)(a1 + 72) == 0;
    v26 = 0;
    if ( v6 )
    {
      v7 = *(_QWORD *)(a1 + 184);
      if ( v7 )
        v8 = *(_QWORD *)(v7 + 144);
      else
        v8 = *(_QWORD *)(a1 + 128);
      if ( v8 && TppPoolpSerializedPool != v8 )
      {
        v9 = _InterlockedDecrement((volatile signed __int32 *)(v8 + 416));
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 420));
        _m_prefetchw((const void *)(v8 + 8));
        v10 = *(_QWORD *)(v8 + 8);
        v27 = v10;
        do
        {
          LODWORD(v27) = ((__int16)v10 + 1) ^ (v10 ^ ((__int16)v10 + 1)) & 0xFFFF0000;
          v11 = v10;
          v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 8), v27, v10);
          v27 = v10;
        }
        while ( v11 != v10 );
        *(_DWORD *)(a1 + 144) |= 0x10u;
        v12 = *(_QWORD *)(a1 + 136);
        *(_DWORD *)(a1 + 72) = 1;
        if ( v12 && (*(_BYTE *)(v12 + 288) & 3) == 3 )
        {
          while ( 1 )
          {
            v13 = *(_QWORD *)(v12 + 216);
            v14 = *(_DWORD *)(v12 + 284);
            if ( !v13 || (v15 = *(_DWORD *)(v13 + 440)) == 0 )
              v15 = MEMORY[0x7FFE03C0];
            v16 = v15 + *(_DWORD *)(*(_QWORD *)(v12 + 216) + 420LL);
            a4 = (unsigned int)(v15 + v16);
            if ( v14 >= v16 && v14 <= v15 + (int)a4 )
              break;
            if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 284), a4, v14) )
            {
              v25 = *(_QWORD *)(v12 + 272);
              v28 = v15 + v16;
              NtAlpcSetInformation(v25, 8LL, &v28);
            }
          }
        }
        if ( !v9 )
        {
          v26 = 1;
          NtSetInformationWorkerFactory(*(_QWORD *)(v8 + 56), 9LL, &v26);
        }
      }
    }
    else
    {
      TppRaiseInvalidParameter(a1);
    }
  }
  v17 = *(void **)(a2 + 104);
  if ( v17 )
  {
    *(_QWORD *)(a1 + 80) = v17;
    v18 = 2147353488LL;
    v19 = NtCurrentTeb();
    SubProcessTag = v19->SubProcessTag;
    v19->SubProcessTag = v17;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v22 = (__int64)NtCurrentPeb()->SharedData + 566;
    else
      v22 = 2147353488LL;
    if ( *(_BYTE *)v22 && v17 != SubProcessTag )
    {
      memset(v29, 0, sizeof(v29));
      WORD3(v29[0]) = 1349;
      v30 = (int)SubProcessTag;
      v31 = (int)v17;
      if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v22, SubProcessTag, a4) )
        v18 = (__int64)NtCurrentPeb()->SharedData + 566;
      NtTraceEvent(*(unsigned __int8 *)v18, 1026LL, 8LL, v29);
    }
  }
  result = NtCurrentTeb();
  result->ActivityId = *(_GUID *)(a2 + 112);
  v24 = (struct _TEB **)(a2 + 128);
  if ( v24 )
  {
    if ( *(struct _TEB **)NtCurrentTeb()->WorkingOnBehalfTicket != *v24 )
    {
      result = (struct _TEB *)NtSetInformationThread(-2LL, 44LL, v24);
      if ( (int)result < 0 )
        return result;
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v24;
    }
    result = *v24;
    *(_QWORD *)(a1 + 248) = *v24;
  }
  return result;
}
