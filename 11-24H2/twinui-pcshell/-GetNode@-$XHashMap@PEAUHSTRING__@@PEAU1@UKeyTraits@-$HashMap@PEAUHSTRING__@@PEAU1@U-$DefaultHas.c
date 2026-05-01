/*
 * XREFs of ?GetNode@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@AEBAJAEBQEAUHSTRING__@@AEAI1AEAPEAVCNode@12@PEAPEAV412@@Z @ 0x18056DDF4
 * Callers:
 *     ?Lookup@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@QEAAJAEBQEAUHSTRING__@@PEAPEAVCPair@12@@Z @ 0x18056EF44 (-Lookup@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash.c)
 *     ?SetAt@?$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@?$HashMap@PEAUHSTRING__@@PEAU1@U?$DefaultHash@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@3456@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U83456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@PEAUHSTRING__@@@XWinRT@@@XWinRT@@QEAAJAEBQEAUHSTRING__@@0PEAPEAUTXPOSITION@2@@Z @ 0x1805701B0 (-SetAt@-$XHashMap@PEAUHSTRING__@@PEAU1@UKeyTraits@-$HashMap@PEAUHSTRING__@@PEAU1@U-$DefaultHash@.c)
 * Callees:
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x18056C248 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 */

__int64 __fastcall XWinRT::XHashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::HashMap<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultHash<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<HSTRING__ *>>::GetNode(
        __int64 a1,
        HSTRING *a2,
        _DWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  PCWSTR StringRawBuffer; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  PCWSTR v13; // r9
  unsigned int i; // eax
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rbx
  _QWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rbx
  HSTRING v21; // r8
  HSTRING v22; // rdx
  __int64 result; // rax
  _QWORD *v24; // rax
  UINT32 v25; // [rsp+40h] [rbp+8h] BYREF

  v25 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(*a2, &v25);
  v12 = 0LL;
  v13 = StringRawBuffer;
  for ( i = -2128831035; v12 < 2 * (unsigned __int64)v25; i = 16777619 * v11 )
  {
    v15 = *((unsigned __int8 *)v13 + v12++);
    v11 = i ^ v15;
  }
  HIDWORD(v16) = 0;
  *a4 = i;
  LODWORD(v16) = i % *(_DWORD *)(a1 + 24);
  v17 = *(_QWORD *)(a1 + 8);
  *a3 = v16;
  if ( v17 )
  {
    v18 = a5;
    v19 = 0LL;
    v20 = *(_QWORD *)(v17 + 8 * v16);
    *a5 = 0LL;
    while ( v20 )
    {
      if ( *(_DWORD *)(v20 + 24) == *a4 )
      {
        v21 = *a2;
        v22 = *(HSTRING *)v20;
        LOBYTE(v25) = 0;
        result = XWinRT::StringEquals::operator()(v11, v22, v21, (bool *)&v25);
        if ( (int)result < 0 )
          return result;
        if ( (_BYTE)v25 )
        {
          v24 = a6;
          *v18 = v19;
          *v24 = v20;
          return 0LL;
        }
      }
      v19 = v20;
      v20 = *(_QWORD *)(v20 + 16);
    }
  }
  *a6 = 0LL;
  return 0LL;
}
