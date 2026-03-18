/*
 * XREFs of ?PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ @ 0x14013D48C
 * Callers:
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1401570EC (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z @ 0x1401980D0 (-Destroy@CLeakTrackingAllocator@NSInstrumentation@@SAXPEAV12@@Z.c)
 * Callees:
 *     ?PlatformPersistConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEBIPEA_N_K@Z @ 0x14013D5A4 (-PlatformPersistConfig32@NSInstrumentation@@YAXPEBGQEBQEBGPEBIPEA_N_K@Z.c)
 *     ?GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z @ 0x140198160 (-GetOutstandingPoolTags@CLeakTrackingAllocator@NSInstrumentation@@QEBA_KPEAI_KPEA_K@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

void __fastcall NSInstrumentation::CLeakTrackingAllocator::PersistState(
        NSInstrumentation::CLeakTrackingAllocator *this)
{
  NSInstrumentation *v2; // rcx
  int v3; // edx
  unsigned int v4; // eax
  bool *v5; // [rsp+20h] [rbp-59h]
  unsigned __int64 v6; // [rsp+28h] [rbp-51h]
  unsigned __int16 *v7; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v8[4]; // [rsp+38h] [rbp-41h] BYREF
  __int128 v9; // [rsp+48h] [rbp-31h]
  unsigned __int16 v10[4]; // [rsp+60h] [rbp-19h] BYREF
  const wchar_t *v11; // [rsp+68h] [rbp-11h]
  const wchar_t *v12; // [rsp+70h] [rbp-9h]
  const wchar_t *v13; // [rsp+78h] [rbp-1h]
  const wchar_t *v14; // [rsp+80h] [rbp+7h]
  const wchar_t *v15; // [rsp+88h] [rbp+Fh]
  const wchar_t *v16; // [rsp+90h] [rbp+17h]
  const wchar_t *v17; // [rsp+98h] [rbp+1Fh]
  const wchar_t *v18; // [rsp+A0h] [rbp+27h]
  const wchar_t *v19; // [rsp+A8h] [rbp+2Fh]
  unsigned int v20[4]; // [rsp+B0h] [rbp+37h] BYREF

  v2 = (NSInstrumentation *)*((_QWORD *)this + 15);
  v3 = 0;
  *(_QWORD *)v10 = L"LeakTrackingAllocatorMode";
  v11 = L"PoolLeakedState";
  v12 = L"LeakedPoolTag0";
  v13 = L"LeakedPoolTag1";
  v14 = L"LeakedPoolTag2";
  v15 = L"LeakedPoolTag3";
  v16 = L"LeakedPoolTag4";
  v17 = L"LeakedPoolTag5";
  v18 = L"LeakedPoolTag6";
  v19 = L"LeakedPoolTag7";
  *(_OWORD *)v8 = 0LL;
  v9 = 0LL;
  if ( *((NSInstrumentation **)this + 14) != v2
    || (v2 = (NSInstrumentation *)*((_QWORD *)this + 17), *((NSInstrumentation **)this + 16) != v2) )
  {
    v3 = 1;
  }
  v4 = *(_DWORD *)this;
  v7 = (unsigned __int16 *)__PAIR64__(v3, v4);
  if ( v4 && v4 - 1 <= 1 )
    NSInstrumentation::CLeakTrackingAllocator::GetOutstandingPoolTags(this, v8, 8uLL, (unsigned __int64 *)v20);
  NSInstrumentation::PlatformPersistConfig32(v2, v10, (const unsigned __int16 *const *const)&v7, v20, v5, v6);
}
