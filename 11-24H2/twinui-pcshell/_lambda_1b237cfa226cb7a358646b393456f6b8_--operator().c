/*
 * XREFs of _lambda_1b237cfa226cb7a358646b393456f6b8_::operator() @ 0x180180F74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__&_::Run @ 0x180229E30 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1b237cfa226cb7a358646b393456f6b8__-_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x1801B1FC4 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
int __fastcall lambda_1b237cfa226cb7a358646b393456f6b8_::operator()(__int64 a1)
{
  int result; // eax
  IStream **v3; // rbx
  int v4; // edi
  IStream *v5; // rcx
  int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rcx
  LPVOID v9; // rcx
  LPVOID v10; // rcx
  IStream *v11; // rcx
  IStream *v12; // rcx
  LPVOID v13; // [rsp+50h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp+38h] BYREF
  __int64 v15; // [rsp+60h] [rbp+40h] BYREF

  ppv = 0LL;
  result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppv);
  ppv = 0LL;
  v3 = *(IStream ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v13 = 0LL;
    if ( *((_DWORD *)v3 + 6) == 2 )
    {
      result = (*((__int64 (__fastcall **)(IStream **))*v3 + 1))(v3);
    }
    else
    {
      *(_QWORD *)a1 = 0LL;
      result = Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v13, v3);
      v3 = (IStream **)v13;
    }
    ppv = 0LL;
    v4 = -2147024809;
    if ( *((_DWORD *)v3 + 6) == 2 )
    {
      if ( v3[4] )
      {
        ppv = 0LL;
        v5 = v3[4];
        if ( v5 )
        {
          result = (*(__int64 (__fastcall **)(IStream *, GUID *, LPVOID *))(*(_QWORD *)v5 + 24LL))(
                     v5,
                     &GUID_0d1b8579_c52e_4207_89b3_9726ce949410,
                     &ppv);
          v6 = result;
        }
        else
        {
          v6 = 0;
        }
      }
      else
      {
        ppv = 0LL;
        v6 = -2147024809;
      }
    }
    else
    {
      v11 = v3[2];
      v3[2] = 0LL;
      result = CoGetInterfaceAndReleaseStream(v11, &GUID_0d1b8579_c52e_4207_89b3_9726ce949410, &ppv);
      v6 = result;
    }
    if ( v3 )
      result = (*((__int64 (__fastcall **)(IStream **))*v3 + 2))(v3);
    if ( v6 >= 0 )
    {
      v13 = 0LL;
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v13);
      v13 = 0LL;
      v7 = *(_QWORD *)(a1 + 8);
      if ( v7 )
      {
        v15 = 0LL;
        if ( *(_DWORD *)(v7 + 24) == 2 )
        {
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        }
        else
        {
          *(_QWORD *)(a1 + 8) = 0LL;
          result = Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v15, v7);
          v7 = v15;
        }
        v13 = 0LL;
        if ( *(_DWORD *)(v7 + 24) == 2 )
        {
          if ( *(_QWORD *)(v7 + 32) )
          {
            v13 = 0LL;
            v8 = *(_QWORD *)(v7 + 32);
            if ( v8 )
            {
              result = (*(__int64 (__fastcall **)(__int64, GUID *, LPVOID *))(*(_QWORD *)v8 + 24LL))(
                         v8,
                         &GUID_537b455d_1240_433b_82af_10929138b8be,
                         &v13);
              v4 = result;
            }
            else
            {
              v4 = 0;
            }
          }
          else
          {
            v13 = 0LL;
          }
        }
        else
        {
          v12 = *(IStream **)(v7 + 16);
          *(_QWORD *)(v7 + 16) = 0LL;
          result = CoGetInterfaceAndReleaseStream(v12, &GUID_537b455d_1240_433b_82af_10929138b8be, &v13);
          v4 = result;
        }
        if ( v7 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        if ( v4 >= 0 )
          result = (*(__int64 (__fastcall **)(LPVOID, LPVOID))(*(_QWORD *)ppv + 24LL))(ppv, v13);
      }
      v9 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        result = (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  v10 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    return (*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return result;
}
