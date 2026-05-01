/*
 * XREFs of ?Lookup@ChunkView@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU7@@Z @ 0x18056EFA0
 * Callers:
 *     ?Lookup@?$NaiveSplitView@PEAUHSTRING__@@PEAU1@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U73456@U?$HashMapOptions@PEAUHSTRING__@@PEAU1@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x18056EE70 (-Lookup@-$NaiveSplitView@PEAUHSTRING__@@PEAU1@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Intern.c)
 * Callees:
 *     ??RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z @ 0x18056C248 (--RStringEquals@XWinRT@@QEBAJPEAUHSTRING__@@0PEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::HashMapOptions<HSTRING__ *,HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,0,1,0>>::ChunkView::Lookup(
        __int64 a1,
        HSTRING a2,
        _QWORD *a3)
{
  int v6; // ebx
  unsigned int v7; // ebp
  bool v8; // di
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rcx
  bool v13; // [rsp+60h] [rbp+8h] BYREF
  HSTRING string; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  v8 = 0;
  v13 = 0;
  v9 = 0LL;
  while ( v6 >= 0 )
  {
    if ( (unsigned int)v9 >= v7 )
      goto LABEL_9;
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v9 + 16);
    string = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 48LL))(v10, &string);
    if ( v6 >= 0 )
    {
      v6 = XWinRT::StringEquals::operator()(v11, a2, string, &v13);
      v8 = v13;
      if ( v6 >= 0 && v13 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v10 + 56LL))(v10, a3);
        WindowsDeleteString(string);
        if ( v6 < 0 )
          break;
LABEL_9:
        if ( v8 )
          return (unsigned int)v6;
        v6 = -2147483637;
        break;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    v9 = (unsigned int)(v9 + 1);
  }
  *a3 = 0LL;
  return (unsigned int)v6;
}
