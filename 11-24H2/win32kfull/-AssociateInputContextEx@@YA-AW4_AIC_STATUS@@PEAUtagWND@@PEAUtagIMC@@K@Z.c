/*
 * XREFs of ?AssociateInputContextEx@@YA?AW4_AIC_STATUS@@PEAUtagWND@@PEAUtagIMC@@K@Z @ 0x1401C7D5C
 * Callers:
 *     NtUserAssociateInputContext @ 0x1401C7C90 (NtUserAssociateInputContext.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z @ 0x1401FFAF0 (-AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z.c)
 */

__int64 __fastcall AssociateInputContextEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v6; // r12d
  __int64 v7; // rdi
  _QWORD *v8; // r15
  unsigned int v9; // esi
  _QWORD *v10; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct tagWND *v15; // rcx
  struct tagBWL *v16; // rax
  __int64 v17; // rdx
  struct tagBWL *v18; // rbp
  __int64 *v19; // r14
  __int64 v20; // rcx
  struct tagWND *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r9

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  v6 = a3 & 0x20;
  v7 = a2;
  v8 = (_QWORD *)a1;
  v9 = 0;
  v10 = *(_QWORD **)(*(_QWORD *)(v3 + 472) + 120LL);
  if ( (a3 & 0x10) != 0 )
  {
    v7 = *(_QWORD *)(v3 + 832);
  }
  else if ( a2 && *(_QWORD *)(a2 + 16) != v3 )
  {
    goto LABEL_4;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 464LL) != *((_QWORD *)PtiCurrent(a1, a2) + 58)
    || v7 && *(_QWORD *)(v7 + 24) != v8[3] )
  {
LABEL_4:
    UserSetLastError(5);
    return 2LL;
  }
  if ( (a3 & 1) != 0 )
  {
    v15 = (struct tagWND *)v8[14];
    if ( v15 )
    {
      v16 = BuildHwndList(v15, 3LL, v3, 1);
      v18 = v16;
      if ( v16 )
      {
        v19 = (__int64 *)((char *)v16 + 32);
        v20 = *((_QWORD *)v16 + 4);
        if ( v20 != 1 )
        {
          do
          {
            LOBYTE(v17) = 1;
            v21 = (struct tagWND *)HMValidateHandleNoSecure(v20, v17);
            if ( v21 )
            {
              v22 = 0LL;
              if ( v7 )
                v22 = *(_QWORD *)v7;
              v17 = *(_QWORD *)(*((_QWORD *)v21 + 5) + 208LL);
              if ( v17 != v22 && (v17 || !v6) )
              {
                AssociateInputContext(v21, (struct tagIMC *)v7);
                if ( v23 == v10 )
                  v9 = 1;
              }
            }
            v20 = *++v19;
          }
          while ( *v19 != 1 );
          v8 = (_QWORD *)a1;
        }
        FreeHwndList(v18, v17);
      }
    }
  }
  v12 = v8[5];
  v13 = *(_QWORD *)(v12 + 208);
  if ( v13 || !v6 )
  {
    v14 = 0LL;
    if ( v7 )
      v14 = *(_QWORD *)v7;
    if ( v13 != v14 )
    {
      if ( v7 )
        v4 = *(_QWORD *)v7;
      *(_QWORD *)(v12 + 208) = v4;
      if ( v8 == v10 )
        return 1;
    }
  }
  return v9;
}
