/*
 * XREFs of TppJobpExecuteCallback @ 0x180084A50
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x18003E750 (TppBarrierAdjust.c)
 *     TppCompleteThreadData @ 0x18004BE20 (TppCompleteThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18004C370 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkpFree @ 0x18004D620 (TppWorkpFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x180084D10 (TppStartThreadData.c)
 *     TppETWCallbackStop @ 0x1800850AC (TppETWCallbackStop.c)
 *     TppETWCallbackStart @ 0x180085174 (TppETWCallbackStart.c)
 *     TppSimplepFree @ 0x1800869C0 (TppSimplepFree.c)
 *     TppAlpcpFree @ 0x180089250 (TppAlpcpFree.c)
 *     LdrAddRefDll @ 0x18008BAB0 (LdrAddRefDll.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppJobpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD **v4; // rbx
  _RTL_SRWLOCK *v9; // r14
  signed __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  LOGICAL (__fastcall *v15)(void *); // rax
  __int64 v16; // rdx
  LOGICAL (__fastcall *v17)(void *); // rax
  __int64 v18; // [rsp+78h] [rbp+10h] BYREF

  v18 = 0LL;
  v4 = (_QWORD **)(a2 + 72);
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = (_RTL_SRWLOCK *)(a2 + 128);
  TppBarrierAdjust((_RTL_SRWLOCK *)(a2 + 128), 1, 0);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 280), 2uLL) + 2;
  if ( (v10 & 1) != 0 )
  {
    if ( (v10 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    {
      v15 = (LOGICAL (__fastcall *)(void *))*v4[1];
      if ( (char *)v15 == (char *)TppSimplepFree )
      {
        TppSimplepFree(v4, TppAlpcpFree);
      }
      else if ( (char *)v15 == (char *)TppAlpcpFree )
      {
        TppAlpcpFree(v4);
      }
      else if ( v15 == TppWorkpFree )
      {
        TppWorkpFree(v4);
      }
      else
      {
        ((void (__fastcall *)(_QWORD **, __int64 (__fastcall *)(_QWORD), __int64 (__fastcall *)(_QWORD, _QWORD)))v15)(
          v4,
          TppAlpcpFree,
          TppSimplepFree);
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 208);
    if ( !v11 )
    {
LABEL_3:
      TppCleanupGroupMemberCallbackProlog(a1, (__int64)v4);
      v12 = 2147353478LL;
      if ( RtlGetCurrentServiceSessionId() )
        v13 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v13 = 2147353478LL;
      if ( *(_BYTE *)v13 )
        TppETWCallbackStart(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppStartThreadData(&v18, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
      v14 = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 96) = v14;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        a1,
        v14,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( RtlGetCurrentServiceSessionId() )
        v12 = (__int64)NtCurrentPeb()->SharedData + 556;
      if ( *(_BYTE *)v12 )
        TppETWCallbackStop(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppCompleteThreadData(v18);
      return;
    }
    if ( LdrAddRefDll(0, *(PVOID *)(a2 + 208)) >= 0 )
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
      *(_QWORD *)(a1 + 168) = v11;
      goto LABEL_3;
    }
  }
  TppBarrierAdjust(v9, -1, 0);
  if ( !_InterlockedDecrement((volatile signed __int32 *)v4) )
  {
    v17 = (LOGICAL (__fastcall *)(void *))*v4[1];
    if ( (char *)v17 == (char *)TppSimplepFree )
    {
      TppSimplepFree(v4, v16);
    }
    else if ( (char *)v17 == (char *)TppAlpcpFree )
    {
      TppAlpcpFree(v4);
    }
    else if ( v17 == TppWorkpFree )
    {
      TppWorkpFree(v4);
    }
    else
    {
      v17(v4);
    }
  }
}
