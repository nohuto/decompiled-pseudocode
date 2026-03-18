/*
 * XREFs of UserDetachQueueFromInputWindow @ 0x1400A4408
 * Callers:
 *     UserDetachQueueFromInputWindowApiExt @ 0x1400A43F0 (UserDetachQueueFromInputWindowApiExt.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1400829D0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     HMValidateHandleNoSecure @ 0x14008CDA0 (HMValidateHandleNoSecure.c)
 *     IsWindowBeingDestroyed @ 0x1400911AC (IsWindowBeingDestroyed.c)
 *     ??1ReEnterLeaveCrit@@QEAA@XZ @ 0x1400A4A5C (--1ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1401F1EB8 (-DetachInputQueueFromWindow@@YAXPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 */

void __fastcall UserDetachQueueFromInputWindow(__int64 a1, struct IInputQueue *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  struct tagWND *v7; // r8
  bool v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = IS_USERCRIT_OWNED_EXCLUSIVE(a1, (__int64)a2, a3);
  if ( !v8 )
    EnterCrit(1LL, 0LL);
  LOBYTE(v5) = 1;
  v6 = HMValidateHandleNoSecure(a1, v5);
  if ( v6 && !(unsigned int)IsWindowBeingDestroyed(v6) )
    DetachInputQueueFromWindow(v7, a2);
  ReEnterLeaveCrit::~ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
}
