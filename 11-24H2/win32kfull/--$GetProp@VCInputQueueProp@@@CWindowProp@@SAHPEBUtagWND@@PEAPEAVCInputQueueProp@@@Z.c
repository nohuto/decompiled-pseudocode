/*
 * XREFs of ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x140065490
 * Callers:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x140067238 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x14008ACA8 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ?SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z @ 0x140110A8C (-SetCompositionInputWindowUIOwner@@YA_NPEAUtagWND@@0@Z.c)
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1401F1EB8 (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ @ 0x140063B70 (-IS_USERCRIT_OWNED_SHAREDONLY@@YA_NXZ.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowProp::GetProp<CInputQueueProp>(__int64 a1, __int64 *a2)
{
  __int64 UserSessionState; // rax
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // esi
  tagObjLock **v18; // rdi
  __int64 Prop; // rdi
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  char v22; // [rsp+40h] [rbp-20h]
  char v23; // [rsp+48h] [rbp-18h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v5 = *(_QWORD *)(a1 + 144);
  v6 = *(unsigned __int16 *)(UserSessionState + 42320);
  v9 = 0;
  W32GetUserSessionState(v8, v7);
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  if ( IS_USERCRIT_OWNED_SHAREDONLY(v11, v10, v12) )
  {
    v23 = 1;
    v15 = W32GetUserSessionState(v14, v13);
    v16 = 0LL;
    if ( v5 != v15 + 42520 )
      v16 = v5;
    *(_QWORD *)&v21 = v16;
    v17 = 0;
    v18 = (tagObjLock **)&v21;
    do
    {
      if ( *v18 )
        tagObjLock::LockExclusive(*v18);
      ++v17;
      ++v18;
    }
    while ( !v17 );
    v22 = 1;
  }
  Prop = RealGetProp(*(_QWORD *)(a1 + 144), v6, 1LL);
  if ( v22 && v23 && (_QWORD)v21 )
    tagObjLock::UnLockExclusive((tagObjLock *)v21);
  *a2 = Prop;
  LOBYTE(v9) = Prop != 0;
  return v9;
}
