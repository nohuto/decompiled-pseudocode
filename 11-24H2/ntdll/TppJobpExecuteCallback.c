/*
 * XREFs of TppJobpExecuteCallback @ 0x180068EC0
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppCompleteThreadData @ 0x18001F420 (TppCompleteThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18001F970 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     TppStartThreadData @ 0x180069180 (TppStartThreadData.c)
 *     TppETWCallbackStop @ 0x18006951C (TppETWCallbackStop.c)
 *     TppETWCallbackStart @ 0x1800695E4 (TppETWCallbackStart.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     LdrAddRefDll @ 0x18006F1D0 (LdrAddRefDll.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TppJobpExecuteCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  volatile signed __int64 *v9; // r14
  __int64 v10; // r9
  signed __int64 v11; // rax
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // r8
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rdx
  __int64 (__fastcall *v19)(__int64); // rax
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v20 = 0LL;
  v4 = a2 + 72;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 72));
  v9 = (volatile signed __int64 *)(a2 + 128);
  TppBarrierAdjust((volatile signed __int64 *)(a2 + 128), 1, 0);
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 280), 2uLL) + 2;
  v12 = TppSimplepFree;
  if ( (v11 & 1) != 0 )
  {
    if ( (v11 & 0xFFFFFFFFFFFFFFFEuLL) == 0 && _InterlockedExchangeAdd((volatile signed __int32 *)v4, 0xFFFFFFFF) == 1 )
    {
      v17 = **(__int64 (__fastcall ***)(__int64))(v4 + 8);
      if ( (char *)v17 == (char *)TppSimplepFree )
      {
        TppSimplepFree(v4, TppAlpcpFree);
      }
      else if ( v17 == TppAlpcpFree )
      {
        TppAlpcpFree(v4);
      }
      else if ( v17 == TppWorkpFree )
      {
        TppWorkpFree(v4);
      }
      else
      {
        ((void (__fastcall *)(__int64, __int64 (__fastcall *)(_QWORD), __int64 (__fastcall *)(_QWORD, _QWORD)))v17)(
          v4,
          TppAlpcpFree,
          TppSimplepFree);
      }
    }
  }
  else
  {
    v13 = *(_QWORD *)(a2 + 208);
    if ( !v13 )
    {
LABEL_3:
      TppCleanupGroupMemberCallbackProlog(a1, v4, (__int64)v12, v10);
      v14 = 2147353478LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v15 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v15 = 2147353478LL;
      if ( *(_BYTE *)v15 )
        TppETWCallbackStart(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppStartThreadData(&v20, *(_QWORD *)(a2 + 152), *(_QWORD *)(a2 + 160), *(_QWORD *)(a2 + 176));
      *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 152);
      v16 = *(_QWORD *)(a2 + 160);
      *(_QWORD *)(a1 + 96) = v16;
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64, _DWORD))(a2 + 152))(
        a1,
        v16,
        a2,
        *(_QWORD *)(a4 + 8),
        a3,
        *(_DWORD *)a4);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v14 = (__int64)NtCurrentPeb()->SharedData + 556;
      if ( *(_BYTE *)v14 )
        TppETWCallbackStop(
          *(_QWORD *)(a2 + 216),
          a2,
          *(_QWORD *)(a2 + 152),
          *(_QWORD *)(a2 + 160),
          *(_QWORD *)(a2 + 176));
      TppCompleteThreadData(v20);
      return;
    }
    if ( (int)LdrAddRefDll(0LL, *(_QWORD *)(a2 + 208)) >= 0 )
    {
      *(_DWORD *)(a1 + 144) |= 0x100u;
      *(_QWORD *)(a1 + 168) = v13;
      goto LABEL_3;
    }
  }
  TppBarrierAdjust(v9, -1, 0);
  if ( !_InterlockedDecrement((volatile signed __int32 *)v4) )
  {
    v19 = **(__int64 (__fastcall ***)(__int64))(v4 + 8);
    if ( (char *)v19 == (char *)TppSimplepFree )
    {
      TppSimplepFree(v4, v18);
    }
    else if ( v19 == TppAlpcpFree )
    {
      TppAlpcpFree(v4);
    }
    else if ( v19 == TppWorkpFree )
    {
      TppWorkpFree(v4);
    }
    else
    {
      v19(v4);
    }
  }
}
