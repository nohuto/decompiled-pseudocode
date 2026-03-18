/*
 * XREFs of ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1401F4B50
 * Callers:
 *     NtUserDestroyInputContext @ 0x140293A00 (NtUserDestroyInputContext.c)
 * Callees:
 *     BuildHwndList @ 0x140047FC0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140048500 (FreeHwndList.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     ?AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z @ 0x1401FFAF0 (-AssociateInputContext@@YAPEAUHIMC__@@PEAUtagWND@@PEAUtagIMC@@@Z.c)
 */

__int64 __fastcall DestroyInputContext(struct tagIMC *a1, __int64 a2)
{
  __int64 v2; // rdi
  struct tagBWL *v4; // rax
  __int64 v5; // rdx
  struct tagBWL *v6; // rbp
  __int64 v7; // rax
  int v9; // ecx
  __int64 *i; // rsi
  struct tagWND *v11; // rax

  v2 = *((_QWORD *)a1 + 2);
  if ( (struct tagTHREADINFO *)v2 != PtiCurrent((__int64)a1, a2) )
  {
    v9 = 5;
LABEL_8:
    UserSetLastError(v9);
    return 0LL;
  }
  if ( a1 == *(struct tagIMC **)(v2 + 832) )
  {
    v9 = 87;
    goto LABEL_8;
  }
  v4 = BuildHwndList(
         *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 496) + 8LL) + 24LL) + 112LL),
         3LL,
         v2,
         1);
  v6 = v4;
  if ( v4 )
  {
    for ( i = (__int64 *)((char *)v4 + 32); *i != 1; ++i )
    {
      LOBYTE(v5) = 1;
      v11 = (struct tagWND *)HMValidateHandleNoSecure(*i, v5);
      if ( v11 )
      {
        v5 = *(_QWORD *)a1;
        if ( *(_QWORD *)(*((_QWORD *)v11 + 5) + 208LL) == *(_QWORD *)a1 )
          AssociateInputContext(v11, *(struct tagIMC **)(v2 + 832));
      }
    }
    FreeHwndList(v6, v5);
  }
  v7 = _HMPheFromObject(a1);
  if ( (*(_BYTE *)(v7 + 25) & 1) == 0 )
    HMDestroyUnlockedObject(v7);
  return 1LL;
}
