/*
 * XREFs of ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1401570EC
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E25E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ @ 0x14013D48C (-PersistState@CLeakTrackingAllocator@NSInstrumentation@@AEAAXXZ.c)
 *     ?CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x1401CFF50 (-CreateGeneralTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     ?CreatePoolTagTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAXPEAII_N@Z @ 0x1401CFFD4 (-CreatePoolTagTrackingAllocator@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAXPEAII_N@Z.c)
 *     ?RetrievePreviouslyPersistedState@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAW4TrackingMode@LeakTrackingAllocatorCore@2@PEAW4PoolLeakState@12@PEAII2@Z @ 0x1401D0A50 (-RetrievePreviouslyPersistedState@CLeakTrackingAllocator@NSInstrumentation@@CAXPEAW4TrackingMode.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

struct NSInstrumentation::CLeakTrackingAllocator *__fastcall NSInstrumentation::CLeakTrackingAllocator::Create(
        struct NSInstrumentation::CLeakTrackingAllocator *this,
        char a2,
        __int64 a3,
        unsigned int a4)
{
  BOOL v5; // ecx
  int v7; // eax
  unsigned int v8; // r8d
  int v9; // r9d
  int v10; // r9d
  struct NSInstrumentation::CLeakTrackingAllocator *PoolTagTrackingAllocator; // rax
  NSInstrumentation::CLeakTrackingAllocator *v12; // rdi
  unsigned int v14; // [rsp+30h] [rbp-29h] BYREF
  BOOL v15; // [rsp+34h] [rbp-25h] BYREF
  int v16; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-19h]
  __int64 v18; // [rsp+50h] [rbp-9h] BYREF
  int v19; // [rsp+58h] [rbp-1h]
  _DWORD v20[4]; // [rsp+60h] [rbp+7h] BYREF
  unsigned int v21[4]; // [rsp+70h] [rbp+17h] BYREF
  __int128 v22; // [rsp+80h] [rbp+27h]

  v20[0] = 1;
  v18 = 0LL;
  v19 = 0;
  v14 = 0;
  v5 = 0;
  v15 = 0;
  v20[1] = 2;
  v20[2] = 2;
  v17[0] = &v18;
  v17[1] = v20;
  v7 = 0;
  v16 = 0;
  v8 = 0;
  *(_OWORD *)v21 = 0LL;
  v22 = 0LL;
  if ( !a2 )
  {
    NSInstrumentation::CLeakTrackingAllocator::RetrievePreviouslyPersistedState(
      (enum NSInstrumentation::LeakTrackingAllocatorCore::TrackingMode *)&v15,
      (enum NSInstrumentation::CLeakTrackingAllocator::PoolLeakState *)&v16,
      v21,
      a4,
      &v14);
    v8 = v14;
    v5 = v15;
    v7 = v16;
  }
  v9 = *(_DWORD *)(v17[v7] + 4LL * v5);
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
LABEL_11:
        *(_DWORD *)this = 0;
        v12 = this;
        *((_QWORD *)this + 1) = 0LL;
        *((_QWORD *)this + 5) = 0LL;
        *((_QWORD *)this + 2) = 0LL;
        *((_DWORD *)this + 8) = 0;
        *((_QWORD *)this + 10) = 0LL;
        *((_QWORD *)this + 14) = 0LL;
        *((_QWORD *)this + 15) = 0LL;
        *((_QWORD *)this + 16) = 0LL;
        *((_QWORD *)this + 17) = 0LL;
        *((_QWORD *)this + 11) = 0LL;
        *((_QWORD *)this + 12) = 0LL;
        *((_QWORD *)this + 13) = 0LL;
        *((_BYTE *)this + 144) = 0;
        goto LABEL_12;
      }
      PoolTagTrackingAllocator = NSInstrumentation::CLeakTrackingAllocator::CreatePoolTagTrackingAllocator(
                                   this,
                                   v21,
                                   v8,
                                   1);
    }
    else
    {
      PoolTagTrackingAllocator = NSInstrumentation::CLeakTrackingAllocator::CreateGeneralTrackingAllocator(this, v5);
    }
    v12 = PoolTagTrackingAllocator;
  }
  else
  {
    *(_DWORD *)this = 0;
    v12 = this;
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
    *((_DWORD *)this + 8) = 0;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_BYTE *)this + 144) = 0;
  }
  if ( !v12 )
    goto LABEL_11;
LABEL_12:
  if ( a2 && v12 )
    NSInstrumentation::CLeakTrackingAllocator::PersistState(v12);
  return v12;
}
