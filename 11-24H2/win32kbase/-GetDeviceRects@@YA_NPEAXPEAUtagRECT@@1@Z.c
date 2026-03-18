/*
 * XREFs of ?GetDeviceRects@@YA_NPEAXPEAUtagRECT@@1@Z @ 0x140218D70
 * Callers:
 *     ?CreateInjectionDevice@@YAHXZ @ 0x140218CB0 (-CreateInjectionDevice@@YAHXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140048B90 (HMValidateHandleNoSecure.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140053560 (RawInputManagerDeviceObjectResolveHandle.c)
 */

bool __fastcall GetDeviceRects(char *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  __int64 v5; // rcx
  PVOID v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  struct tagRECT *v9; // rax
  struct tagRECT v10; // xmm1
  bool result; // al
  PVOID Object; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 0;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 0, &Object) < 0 )
    return 0;
  v6 = Object;
  v7 = Object ? *((_QWORD *)Object + 9) : 0LL;
  *(_QWORD *)(W32GetUserSessionState(v5) + 19384) = v7;
  ObfDereferenceObject(v6);
  v8 = HMValidateHandleNoSecure(v7, 19);
  if ( !v8 )
    return 0;
  v9 = *(struct tagRECT **)(v8 + 456);
  if ( !v9 )
    return 0;
  *a2 = v9[11];
  v10 = v9[12];
  result = 1;
  *a3 = v10;
  return result;
}
