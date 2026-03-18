/*
 * XREFs of ?SendCreateBundleObjectByPointer@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJKPEAPEAXPEAI@Z @ 0x1401F3564
 * Callers:
 *     ?VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z @ 0x1402081EC (-VailSendCreateBundleObjectByPointer@DXGSESSIONDATA@@QEAAJKPEAPEAXPEAI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14029C800 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendCreateBundleObjectByPointer(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        unsigned int a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v5; // rbx
  struct DXGPROCESS *Current; // r13
  unsigned int v9; // edi
  __int64 v10; // r14
  struct _OBJECT_TYPE *ObjectType; // rax
  _DWORD *v12; // r8
  int v13; // ecx
  unsigned int v14; // edi
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v18; // [rsp+50h] [rbp-69h] BYREF
  int v19; // [rsp+58h] [rbp-61h] BYREF
  int v20; // [rsp+5Ch] [rbp-5Dh]
  __int64 v21; // [rsp+60h] [rbp-59h]
  _DWORD v22[2]; // [rsp+68h] [rbp-51h] BYREF
  __int64 v23; // [rsp+70h] [rbp-49h]
  unsigned __int64 v24; // [rsp+78h] [rbp-41h]
  _DWORD v25[16]; // [rsp+80h] [rbp-39h] BYREF

  v5 = a2;
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( !a4 || !a3 || (unsigned int)(v5 - 1) > 0xF )
    {
      WdLogSingleEntry4(3LL, a4, a3, v5, -1073741811LL);
      WdLogGlobalForLineNumber = 685;
      return 3221225485LL;
    }
    *a4 = 0;
    v22[1] = -1073741823;
    v23 = 1LL;
    v22[0] = 1869901170;
    v24 = 0LL;
    memset(v25, 0, sizeof(v25));
    v19 = 1869901170;
    v9 = 0;
    v20 = -1073741823;
    v21 = 2LL;
    v18 = 16;
    while ( v9 < (unsigned int)v5 )
    {
      v10 = v9;
      ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType(a3[v9]);
      if ( ObjectType == g_pDxgkSharedAllocationObjectType )
      {
        v12 = a3[v9];
        v13 = v12[10];
      }
      else
      {
        if ( ObjectType != g_pDxgkSharedSyncObjectType )
        {
          v14 = -1073741811;
          WdLogSingleEntry3(3LL, a3[v10], ObjectType, -1073741811LL);
          WdLogGlobalForLineNumber = 717;
          return v14;
        }
        v12 = a3[v9];
        v13 = v12[2];
      }
      v25[v9] = v13;
      if ( !v13 )
      {
        v14 = -1073741811;
        WdLogSingleEntry4(3LL, (unsigned int)v25[v10], v12, ObjectType, -1073741811LL);
        WdLogGlobalForLineNumber = 728;
        return v14;
      }
      ++v9;
    }
    v15 = *((_QWORD *)this + 1);
    v24 = __PAIR64__(HIDWORD(v24), v5) | 0x100000000LL;
    HIDWORD(v23) = *((_DWORD *)Current + 122);
    v16 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v15 + 32LL))(
            v15,
            v22,
            88LL,
            &v19,
            &v18);
    v14 = v16;
    if ( v16 >= 0 )
    {
      if ( v18 == 16 )
      {
        if ( (_DWORD)v21 == 2 )
        {
          v14 = v20;
          if ( v20 >= 0 )
            *a4 = HIDWORD(v21);
          return v14;
        }
        WdLogSingleEntry2(3LL, (int)v21, -1073741823LL);
        WdLogGlobalForLineNumber = 771;
      }
      else
      {
        WdLogSingleEntry2(3LL, v18, -1073741823LL);
        WdLogGlobalForLineNumber = 762;
      }
      return (unsigned int)-1073741823;
    }
    else
    {
      WdLogSingleEntry1(3LL, v16);
      WdLogGlobalForLineNumber = 753;
    }
    return v14;
  }
  WdLogSingleEntry1(2LL, -1073741811LL);
  WdLogGlobalForLineNumber = 672;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000LL,
    0xFFFFFFFFLL,
    L"Invalid process context. Returning 0x%I64x",
    -1073741811LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
