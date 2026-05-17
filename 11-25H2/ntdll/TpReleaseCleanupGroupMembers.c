/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x1800D6600
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppBarrierAdjust @ 0x180041550 (TppBarrierAdjust.c)
 *     TppWorkpFree @ 0x180042630 (TppWorkpFree.c)
 *     TppAlpcpFree @ 0x180044340 (TppAlpcpFree.c)
 *     TppSimplepFree @ 0x1800D6F60 (TppSimplepFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TpReleaseCleanupGroupMembers(__int64 a1, unsigned int a2, __int64 a3)
{
  _QWORD *i; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  _QWORD *v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  signed __int32 *v17; // roff
  signed __int32 v18; // r9d
  signed __int32 v19; // r8d
  _QWORD *v20; // rcx
  bool v21; // zf
  signed __int32 v22; // eax
  _QWORD **v23; // r14
  _QWORD *v24; // rsi
  _QWORD *j; // rax
  _QWORD *v26; // rbx
  _QWORD *v27; // rdx
  _QWORD *v28; // rcx
  _QWORD *v29; // rbx
  void (__fastcall *v30)(_QWORD *, _QWORD); // rax
  void (__fastcall *v31)(_QWORD *); // rax
  void (__fastcall *v32)(_QWORD, __int64); // rax
  void (__fastcall *v33)(__int64); // rax
  _QWORD *v34; // [rsp+28h] [rbp-40h]
  __int64 v35; // [rsp+28h] [rbp-40h]
  _QWORD *v36; // [rsp+30h] [rbp-38h]
  _QWORD *v37; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  if ( !a1 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !a1 )
      TppRaiseInvalidParameter();
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 56));
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8));
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = v36 )
    {
      v9 = i - 5;
      v34 = i - 5;
      v36 = (_QWORD *)*i;
      _m_prefetchw(i + 16);
      v10 = *((_DWORD *)i + 32);
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)v9 + 42, v10 | 0x20000, v10);
      }
      while ( v11 != v10 );
      v12 = v9 + 5;
      if ( (v10 & 0x30000) != 0 )
      {
        v15 = *v12;
        v16 = (_QWORD *)v12[1];
        if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v16 != v12 )
LABEL_5:
          __fastfail(3u);
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        v17 = (signed __int32 *)v34;
        _m_prefetchw(v34);
        v18 = *v17;
        while ( v18 )
        {
          v19 = v18;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)v34, v18 + 1, v18);
          v21 = v18 == v22;
          v18 = v22;
          if ( v21 )
            goto LABEL_20;
        }
        v19 = 0;
LABEL_20:
        if ( v19 )
        {
          v20 = *(_QWORD **)(a1 + 72);
          if ( *v20 != a1 + 64 )
            goto LABEL_5;
          *v12 = a1 + 64;
          v12[1] = v20;
          *v20 = v12;
          *(_QWORD *)(a1 + 72) = v12;
        }
        else
        {
          v12[1] = v12;
          *v12 = v12;
        }
      }
      else
      {
        v34[23] = retaddr;
        v13 = *v12;
        v14 = (_QWORD *)v12[1];
        if ( *(_QWORD **)(*v12 + 8LL) != v12 )
          goto LABEL_5;
        if ( (_QWORD *)*v14 != v12 )
          goto LABEL_5;
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        v7 = v34 + 5;
        v8 = *(_QWORD **)(a1 + 72);
        if ( *v8 != a1 + 64 )
          goto LABEL_5;
        *v7 = a1 + 64;
        v34[6] = v8;
        *v8 = v7;
        *(_QWORD *)(a1 + 72) = v7;
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    v23 = (_QWORD **)(a1 + 64);
    v24 = *(_QWORD **)(a1 + 64);
    while ( v24 != v23 )
    {
      v29 = v24 - 5;
      v24 = (_QWORD *)*v24;
      v30 = *(void (__fastcall **)(_QWORD *, _QWORD))(v29[1] + 16LL);
      if ( v30 )
        v30(v29, a2);
      if ( a2 )
      {
        v31 = *(void (__fastcall **)(_QWORD *))(v29[1] + 24LL);
        if ( v31 )
          v31(v29);
      }
    }
    for ( j = *v23; j != v23; j = v37 )
    {
      v26 = j - 5;
      v35 = (__int64)(j - 5);
      v37 = (_QWORD *)*j;
      v27 = (_QWORD *)*j;
      v28 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v28 != j )
        __fastfail(3u);
      *v28 = v27;
      v27[1] = v28;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v26 + 7, 0, 1);
      if ( v26[3] )
      {
        if ( (v26[21] & 0x10000) != 0 )
        {
          v26 = (_QWORD *)v35;
        }
        else
        {
          v32 = (void (__fastcall *)(_QWORD, __int64))v26[3];
          v26 = (_QWORD *)v35;
          v32(*(_QWORD *)(v35 + 88), a3);
        }
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26, 0xFFFFFFFF) == 1 )
      {
        v33 = **(void (__fastcall ***)(__int64))(v35 + 8);
        if ( (char *)v33 == (char *)TppSimplepFree )
        {
          TppSimplepFree(v35, TppSimplepFree);
        }
        else if ( (char *)v33 == (char *)TppAlpcpFree )
        {
          TppAlpcpFree((_QWORD *)v35);
        }
        else if ( (char *)v33 == (char *)TppWorkpFree )
        {
          TppWorkpFree(v35);
        }
        else
        {
          v33(v35);
        }
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    TppBarrierAdjust((volatile signed __int64 *)(a1 + 32), 0, 1);
  }
}
