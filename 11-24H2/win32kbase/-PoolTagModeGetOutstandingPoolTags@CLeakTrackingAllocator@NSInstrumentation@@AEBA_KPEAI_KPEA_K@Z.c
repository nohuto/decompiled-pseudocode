/*
 * XREFs of ?PoolTagModeGetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@AEBA_KPEAI_KPEA_K@Z @ 0x1401D07C8
 * Callers:
 *     ?GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z @ 0x140198160 (-GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z.c)
 * Callees:
 *     ?Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401981D0 (-Enumerate@CPointerHashTable@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 *     ?Enumerate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z @ 0x1401D0170 (-Enumerate@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAAXP6AXPEAX00@Z0@Z.c)
 */

__int64 __fastcall NSInstrumentation::CLeakTrackingAllocator::PoolTagModeGetOutstandingPoolTags(
        NSInstrumentation::CLeakTrackingAllocator *this,
        unsigned int *a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  char *v6; // rax
  NSInstrumentation::CPointerHashTable *v7; // rcx
  struct W32_PUSH_LOCK *v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+38h] [rbp-20h]
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]
  char *v15; // [rsp+48h] [rbp-10h]

  v11 = 0LL;
  v12 = 0LL;
  v10[0] = a2;
  v10[1] = a3;
  v13 = 0;
  v14 = 0;
  v6 = (char *)this + 48;
  v7 = (NSInstrumentation::CPointerHashTable *)*((_QWORD *)this + 11);
  v15 = v6;
  if ( v7 )
    NSInstrumentation::CPointerHashTable::Enumerate(
      v7,
      (void (*)(void *, void *, void *))lambda_c43910d9c8c83b4fc3d43f372adbb636_::_lambda_invoker_cdecl_,
      v10);
  v8 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 12);
  if ( v8 )
    NSInstrumentation::CSortedVector<void *,void *>::Enumerate(
      v8,
      (void (__fastcall *)(__int64, _QWORD, __int64))lambda_c43910d9c8c83b4fc3d43f372adbb636_::_lambda_invoker_cdecl_,
      (__int64)v10);
  if ( a4 )
    *a4 = v11;
  return v12;
}
