/*
 * XREFs of CreateInputContext @ 0x1401B0F80
 * Callers:
 *     ?xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z @ 0x14003EBCC (-xxxCreateDefaultImeWindow@@YAPEAUtagWND@@PEAU1@GPEAX@Z.c)
 *     NtUserCreateInputContext @ 0x1401B0EF0 (NtUserCreateInputContext.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??4?$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z @ 0x1401B10B8 (--4-$SharedMixedObjectPointerFieldpImcNext@UtagIMC@@@tagIMC@@QEAAPEAU1@PEAU1@@Z.c)
 */

_QWORD *__fastcall CreateInputContext(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagTHREADINFO *v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v11; // r9
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = PtiCurrent(a1, a2);
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)v5 + 132, 0, 0) & 0x2000000) != 0
    || (**(_DWORD **)(W32GetUserSessionState(v4, v3) + 19928) & 4) == 0
    || a1 && !*((_QWORD *)v5 + 104) )
  {
    return 0LL;
  }
  v7 = *((_QWORD *)v5 + 62);
  if ( !v7 )
    return 0LL;
  LOBYTE(v6) = 17;
  v8 = HMAllocObject(v5, v7, v6, 72LL);
  v9 = (_QWORD *)v8;
  if ( !v8 )
    return 0LL;
  if ( a1 )
  {
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(v8 + 56, *(_QWORD *)(*((_QWORD *)v5 + 104) + 56LL));
    tagIMC::SharedMixedObjectPointerFieldpImcNext<tagIMC>::operator=(*v11 + 56LL, v9);
  }
  else
  {
    v12[0] = (char *)v5 + 832;
    v12[1] = v8;
    HMAssignmentLock(v12, 0LL);
    *(_QWORD *)(*((_QWORD *)v5 + 65) + 256LL) = v9[6];
    *(_QWORD *)(v9[5] + 16LL) = 0LL;
    v9[7] = 0LL;
  }
  *(_QWORD *)(v9[5] + 24LL) = a1;
  return v9;
}
