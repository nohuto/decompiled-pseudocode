/*
 * XREFs of ??$RegisterWinRTObject@$01@Details@WRL@Microsoft@@YAJPEBGPEAPEBGPEAPEAU_RO_REGISTRATION_COOKIE@@I@Z @ 0x1800CB074
 * Callers:
 *     ?RegisterWinRTObject@?$Module@$01VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAJPEBGPEAPEBGPEAPEAU_RO_REGISTRATION_COOKIE@@I@Z @ 0x1800CF000 (-RegisterWinRTObject@-$Module@$01VSvcHostModule@Internal@Windows@@@WRL@Microsoft@@UEAAJPEBGPEAPE.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RegisterWinRTObject<2>(
        __int64 a1,
        const WCHAR **a2,
        __int64 a3,
        unsigned int a4)
{
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rax
  _BYTE *v8; // rbp
  unsigned __int64 v9; // rax
  HSTRING *v10; // rax
  HSTRING *v11; // r14
  int v12; // ebx
  __int64 v13; // rdi
  signed __int64 v14; // r15
  __int64 v15; // rdx
  const WCHAR *v16; // rcx
  HRESULT String; // eax
  HSTRING *v18; // rsi

  v5 = a4;
  v7 = 8LL * a4;
  if ( !is_mul_ok(a4, 8uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
  v9 = 8 * v5;
  if ( !is_mul_ok(v5, 8uLL) )
    v9 = -1LL;
  v10 = (HSTRING *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v12 = 0;
  if ( v8 && v10 )
  {
    v13 = 0LL;
    if ( (_DWORD)v5 )
    {
      v14 = v8 - (_BYTE *)a2;
      while ( v12 >= 0 )
      {
        v15 = -1LL;
        *(const WCHAR **)((char *)a2 + v14) = (const WCHAR *)Microsoft::WRL::Details::ActivationFactoryCallback<2>;
        v16 = *a2;
        do
          ++v15;
        while ( v16[v15] );
        String = WindowsCreateString(v16, v15, &v11[v13]);
        v13 = (unsigned int)(v13 + 1);
        ++a2;
        v12 = String;
        if ( (unsigned int)v13 >= (unsigned int)v5 )
        {
          if ( String < 0 )
            break;
          goto LABEL_14;
        }
      }
    }
    else
    {
LABEL_14:
      v12 = RoRegisterActivationFactories(v11, v8, (unsigned int)v5, a3);
    }
    if ( (_DWORD)v13 )
    {
      v18 = v11;
      do
      {
        WindowsDeleteString(*v18++);
        --v13;
      }
      while ( v13 );
    }
  }
  else
  {
    v12 = -2147024882;
  }
  operator delete(v8);
  operator delete(v11);
  return (unsigned int)v12;
}
