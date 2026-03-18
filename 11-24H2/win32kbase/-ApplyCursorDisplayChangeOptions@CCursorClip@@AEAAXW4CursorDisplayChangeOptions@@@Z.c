/*
 * XREFs of ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400550CC
 * Callers:
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x140054FA0 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 * Callees:
 *     EngMulDiv @ 0x140053870 (EngMulDiv.c)
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z @ 0x1400C8558 (-GetMouseInputSpace@CInputConfig@@QEAAXPEAVCLockedInputSpace@@@Z.c)
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1400E71A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F39BC (--0CEResourceLockShared@@QEAA@AEAVCEResourceLock@@@Z.c)
 */

void __fastcall CCursorClip::ApplyCursorDisplayChangeOptions(__int64 a1, char a2)
{
  char v3; // di
  unsigned int *v4; // r14
  __int64 v5; // rcx
  __int64 UserSessionState; // rax
  _QWORD **v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *i; // rcx
  unsigned int *v11; // rsi
  unsigned int v12; // eax
  INT v13; // edi
  INT v14; // ebx
  __int64 v15; // rax
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  INT v19; // edi
  INT v20; // ebx
  __int64 v21; // rax
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rcx
  int v28; // ebx
  _QWORD v29[2]; // [rsp+20h] [rbp-48h] BYREF
  tagDomLock *v30; // [rsp+30h] [rbp-38h] BYREF

  if ( (a2 & 1) != 0 )
  {
    v3 = 0;
    CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v29);
    v4 = 0LL;
    UserSessionState = W32GetUserSessionState(v5);
    CInputConfig::GetMouseInputSpace(*(CInputConfig **)(UserSessionState + 18688), (struct CLockedInputSpace *)v29);
    v7 = (_QWORD **)(v29[0] + 1456LL);
    v9 = W32GetUserSessionState(v8);
    CEResourceLockShared::CEResourceLockShared((CEResourceLockShared *)&v30, (struct CEResourceLock *)(v9 + 18696));
    for ( i = *v7; ; i = (_QWORD *)*i )
    {
      v11 = 0LL;
      if ( i != v7 )
        v11 = (unsigned int *)(i + 2);
      if ( !v11 )
        break;
      v12 = v11[4];
      if ( (v12 & 1) != 0 )
        v4 = v11;
      if ( (*(_BYTE *)(a1 + 64) & (unsigned __int8)v12 & 2) != 0
        && v11[6] == *(_DWORD *)(a1 + 72)
        && v11[7] == *(_DWORD *)(a1 + 76)
        && v11[8] == *(_DWORD *)(a1 + 80) )
      {
        v13 = *(_DWORD *)(a1 + 56) - *(_DWORD *)(a1 + 48);
        v14 = v11[2] - *v11;
        v15 = W32GetUserSessionState(i);
        v16 = *v11 + EngMulDiv(*(_DWORD *)(*(_QWORD *)(v15 + 19928) + 4960LL) - *(_DWORD *)(a1 + 48), v14, v13);
        v18 = *(_QWORD *)(W32GetUserSessionState(v17) + 19928);
        *(_DWORD *)(v18 + 4960) = v16;
        v19 = *(_DWORD *)(a1 + 60) - *(_DWORD *)(a1 + 52);
        v20 = v11[3] - v11[1];
        v21 = W32GetUserSessionState(v18);
        v22 = v11[1] + EngMulDiv(*(_DWORD *)(*(_QWORD *)(v21 + 19928) + 4964LL) - *(_DWORD *)(a1 + 52), v20, v19);
        v3 = 1;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v23) + 19928) + 4964LL) = v22;
        break;
      }
    }
    tagDomLock::UnLockExclusive(v30);
    if ( !v3 )
    {
      if ( v4 )
      {
        v25 = *v4;
        v26 = v25 + (int)(v4[2] - v25) / 2;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v25) + 19928) + 4960LL) = v26;
        v27 = v4[1];
        v28 = v27 + (int)(v4[3] - v27) / 2;
        *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v27) + 19928) + 4964LL) = v28;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v24) + 19928) + 4960LL) = 0LL;
      }
    }
    tagDomLock::UnLockExclusive((tagDomLock *)v29[1]);
  }
}
