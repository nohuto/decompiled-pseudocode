/*
 * XREFs of TpReleaseCleanupGroupMembers @ 0x180069760
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180011D50 (TppBarrierAdjust.c)
 *     TppWorkpFree @ 0x180020C20 (TppWorkpFree.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppSimplepFree @ 0x18006A2D0 (TppSimplepFree.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppAlpcpFree @ 0x18006C970 (TppAlpcpFree.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TpReleaseCleanupGroupMembers(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v4; // r15d
  volatile signed __int32 **v6; // rdx
  unsigned __int64 v7; // r8
  _QWORD *i; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rdx
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  signed __int32 *v19; // roff
  signed __int32 v20; // r9d
  signed __int32 v21; // r8d
  _QWORD *v22; // rcx
  bool v23; // zf
  signed __int32 v24; // eax
  _QWORD **v25; // r14
  _QWORD *v26; // rsi
  _QWORD *j; // rax
  _QWORD *v28; // rbx
  _QWORD *v29; // rdx
  _QWORD *v30; // rcx
  _QWORD *v31; // rbx
  void (__fastcall *v32)(_QWORD *, _QWORD); // rax
  void (__fastcall *v33)(_QWORD *); // rax
  void (__fastcall *v34)(_QWORD, unsigned __int64); // rax
  __int64 (__fastcall *v35)(__int64); // rax
  _QWORD *v36; // [rsp+28h] [rbp-40h]
  __int64 v37; // [rsp+28h] [rbp-40h]
  _QWORD *v38; // [rsp+30h] [rbp-38h]
  _QWORD *v39; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v4 = (unsigned int)a2;
  if ( !a1 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !a1 )
      TppRaiseInvalidParameter(0LL);
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 56), a2, a3);
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 8), v6, v7);
    for ( i = *(_QWORD **)(a1 + 16); i != (_QWORD *)(a1 + 16); i = v38 )
    {
      v11 = i - 5;
      v36 = i - 5;
      v38 = (_QWORD *)*i;
      _m_prefetchw(i + 16);
      v12 = *((_DWORD *)i + 32);
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)v11 + 42, v12 | 0x20000, v12);
      }
      while ( v13 != v12 );
      v14 = v11 + 5;
      if ( (v12 & 0x30000) != 0 )
      {
        v17 = *v14;
        v18 = (_QWORD *)v14[1];
        if ( *(_QWORD **)(*v14 + 8LL) != v14 || (_QWORD *)*v18 != v14 )
LABEL_5:
          __fastfail(3u);
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        v19 = (signed __int32 *)v36;
        _m_prefetchw(v36);
        v20 = *v19;
        while ( v20 )
        {
          v21 = v20;
          v24 = _InterlockedCompareExchange((volatile signed __int32 *)v36, v20 + 1, v20);
          v23 = v20 == v24;
          v20 = v24;
          if ( v23 )
            goto LABEL_20;
        }
        v21 = 0;
LABEL_20:
        if ( v21 )
        {
          v22 = *(_QWORD **)(a1 + 72);
          if ( *v22 != a1 + 64 )
            goto LABEL_5;
          *v14 = a1 + 64;
          v14[1] = v22;
          *v22 = v14;
          *(_QWORD *)(a1 + 72) = v14;
        }
        else
        {
          v14[1] = v14;
          *v14 = v14;
        }
      }
      else
      {
        v36[23] = retaddr;
        v15 = *v14;
        v16 = (_QWORD *)v14[1];
        if ( *(_QWORD **)(*v14 + 8LL) != v14 )
          goto LABEL_5;
        if ( (_QWORD *)*v16 != v14 )
          goto LABEL_5;
        *v16 = v15;
        *(_QWORD *)(v15 + 8) = v16;
        v9 = v36 + 5;
        v10 = *(_QWORD **)(a1 + 72);
        if ( *v10 != a1 + 64 )
          goto LABEL_5;
        *v9 = a1 + 64;
        v36[6] = v10;
        *v10 = v9;
        *(_QWORD *)(a1 + 72) = v9;
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
    v25 = (_QWORD **)(a1 + 64);
    v26 = *(_QWORD **)(a1 + 64);
    while ( v26 != v25 )
    {
      v31 = v26 - 5;
      v26 = (_QWORD *)*v26;
      v32 = *(void (__fastcall **)(_QWORD *, _QWORD))(v31[1] + 16LL);
      if ( v32 )
        v32(v31, v4);
      if ( v4 )
      {
        v33 = *(void (__fastcall **)(_QWORD *))(v31[1] + 24LL);
        if ( v33 )
          v33(v31);
      }
    }
    for ( j = *v25; j != v25; j = v39 )
    {
      v28 = j - 5;
      v37 = (__int64)(j - 5);
      v39 = (_QWORD *)*j;
      v29 = (_QWORD *)*j;
      v30 = (_QWORD *)j[1];
      if ( *(_QWORD **)(*j + 8LL) != j || (_QWORD *)*v30 != j )
        __fastfail(3u);
      *v30 = v29;
      v29[1] = v30;
      j[1] = j;
      *j = j;
      TppBarrierAdjust(v28 + 7, 0, 1);
      if ( v28[3] )
      {
        if ( (v28[21] & 0x10000) != 0 )
        {
          v28 = (_QWORD *)v37;
        }
        else
        {
          v34 = (void (__fastcall *)(_QWORD, unsigned __int64))v28[3];
          v28 = (_QWORD *)v37;
          v34(*(_QWORD *)(v37 + 88), a3);
        }
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v28, 0xFFFFFFFF) == 1 )
      {
        v35 = **(__int64 (__fastcall ***)(__int64))(v37 + 8);
        if ( (char *)v35 == (char *)TppSimplepFree )
        {
          TppSimplepFree(v37, TppSimplepFree);
        }
        else if ( v35 == TppAlpcpFree )
        {
          TppAlpcpFree(v37);
        }
        else if ( v35 == TppWorkpFree )
        {
          TppWorkpFree(v37);
        }
        else
        {
          v35(v37);
        }
      }
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 56));
    TppBarrierAdjust((volatile signed __int64 *)(a1 + 32), 0, 1);
  }
}
