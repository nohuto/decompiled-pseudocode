/*
 * XREFs of ?GetObjectCacheForEndpoint_UnderLock@CDeviceGraphObjectCacheManager@@AEAAPEAUIDeviceGraphObjectCache@@PEBG@Z @ 0x140022948
 * Callers:
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140022D10 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x140012DD8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
struct IDeviceGraphObjectCache *__fastcall CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock(
        CDeviceGraphObjectCacheManager *this,
        const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // r9
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rbx
  unsigned __int16 *i; // rbx
  unsigned __int16 *v8; // rbx
  int v9; // eax
  int (__fastcall ***v10)(_QWORD, _QWORD, _QWORD); // rsi
  int (__fastcall *v11)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v12; // rdi
  int (__fastcall ***v13)(_QWORD, _QWORD, _QWORD); // rcx
  unsigned __int16 *v14; // rax
  int v15; // ecx
  int (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp+30h] BYREF
  __int64 v17; // [rsp+58h] [rbp+38h] BYREF
  unsigned __int16 *v18; // [rsp+60h] [rbp+40h]

  v2 = a2;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v3 = 0LL;
  while ( *a2 )
    v3 = (unsigned int)*a2++ + 33 * (_DWORD)v3;
  v4 = (unsigned int)v3 % *((_DWORD *)this + 10);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    for ( i = *(unsigned __int16 **)(v5 + 8 * v4); i; i = (unsigned __int16 *)*((_QWORD *)i + 2) )
    {
      if ( *((_DWORD *)i + 6) == (_DWORD)v3 )
      {
        v14 = *(unsigned __int16 **)i;
        do
        {
          v4 = *(unsigned __int16 *)((char *)v2 + (_QWORD)v14 - *(_QWORD *)i);
          v15 = *v14 - (_DWORD)v4;
          if ( v15 )
            break;
          ++v14;
        }
        while ( (_DWORD)v4 );
        if ( !v15 )
          goto LABEL_7;
      }
    }
  }
  i = 0LL;
LABEL_7:
  if ( !i )
    return 0LL;
  v8 = (unsigned __int16 *)*((_QWORD *)i + 1);
  v18 = v8;
  if ( !v8 )
  {
LABEL_25:
    if ( v8 )
      (*(void (__fastcall **)(unsigned __int16 *, __int64, __int64, const unsigned __int16 *))(*(_QWORD *)v8 + 16LL))(
        v8,
        v4,
        v3,
        v2);
    return 0LL;
  }
  (*(void (__fastcall **)(unsigned __int16 *, __int64, __int64, const unsigned __int16 *))(*(_QWORD *)v8 + 8LL))(
    v8,
    v4,
    v3,
    v2);
  v16 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  v9 = (*(__int64 (__fastcall **)(unsigned __int16 *, GUID *, _QWORD))(*(_QWORD *)v8 + 24LL))(
         v8,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v16);
  v10 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
  if ( v9 < 0 || !v16 )
  {
LABEL_28:
    if ( v10 )
    {
      v16 = 0LL;
      ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v10)[2])(v10);
    }
    goto LABEL_25;
  }
  v17 = 0LL;
  v11 = **v16;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  if ( v11(v10, &GUID_78173c1a_c536_449b_8ed3_f5cb523cfed0, &v17) < 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
    v10 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
    goto LABEL_28;
  }
  v12 = v17;
  v17 = 0LL;
  v13 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(int (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v13)[2])(v13);
  }
  (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v8 + 16LL))(v8);
  return (struct IDeviceGraphObjectCache *)v12;
}
