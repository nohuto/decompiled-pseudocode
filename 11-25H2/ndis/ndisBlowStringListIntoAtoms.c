/*
 * XREFs of ndisBlowStringListIntoAtoms @ 0x1401507C8
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1401512E4 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x140151474 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x1401515E4 (-ndisReadProtocolById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ?reserve@?$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z @ 0x1400030B0 (-reserve@-$KArray@PEAU_KStringAtom@Rtl@@$00@Rtl@@QEAA_N_K@Z.c)
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1400CD578 (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 *     memset @ 0x1400EE380 (memset.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x14014DEAC (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x14014FD10 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 */

__int64 __fastcall ndisBlowStringListIntoAtoms(NetSetupPropertyBag *a1, const struct _NETSETUPPROPKEY *a2, __int64 a3)
{
  unsigned int StringArray; // edi
  void **v5; // rcx
  unsigned int v6; // ebx
  unsigned __int64 v8; // rbx
  void **v9; // rcx
  unsigned int v10; // ebx
  unsigned __int64 v11; // rcx
  unsigned __int64 i; // rbx
  unsigned int v13; // edi
  char *Atom; // rax
  unsigned int v15; // ebx
  void **v16; // rcx
  int v17; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-Ch]
  PVOID P; // [rsp+28h] [rbp-8h]

  v17 = 0;
  v18 = 0;
  P = 0LL;
  StringArray = NetSetupPropertyBag::ReadStringArray(a1, a2, (__int64)&v17);
  if ( !StringArray )
  {
    v8 = v18;
    if ( Rtl::KArray<Rtl::_KStringAtom *,1>::reserve((unsigned int *)a3, v18) )
    {
      v11 = *(unsigned int *)(a3 + 4);
      if ( v8 > v11 )
        memset((void *)(*(_QWORD *)(a3 + 8) + 8 * v11), 0, 8 * (v8 - v11));
      *(_DWORD *)(a3 + 4) = v8;
      for ( i = 0LL; ; ++i )
      {
        v13 = v18;
        if ( i >= v18 )
        {
          v16 = (void **)P;
          if ( P )
          {
            while ( v13 )
            {
              wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(&v16[--v13]);
              v16 = (void **)P;
            }
            ExFreePoolWithTag(v16, 0x7272414Bu);
          }
          return 0LL;
        }
        Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_140127138, *(_WORD **)(*((_QWORD *)P + i) + 8LL));
        if ( i >= *(unsigned int *)(a3 + 4)
          || (*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * i) = Atom, i >= *(unsigned int *)(a3 + 4)) )
        {
          __fastfail(5u);
        }
        if ( !*(_QWORD *)(*(_QWORD *)(a3 + 8) + 8 * i) )
          break;
      }
      v9 = (void **)P;
      if ( !P )
        return 3221225626LL;
      v15 = v18;
      while ( v15 )
      {
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(&v9[--v15]);
        v9 = (void **)P;
      }
    }
    else
    {
      v9 = (void **)P;
      if ( !P )
        return 3221225626LL;
      v10 = v18;
      while ( v10 )
      {
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(&v9[--v10]);
        v9 = (void **)P;
      }
    }
    ExFreePoolWithTag(v9, 0x7272414Bu);
    return 3221225626LL;
  }
  v5 = (void **)P;
  if ( P )
  {
    v6 = v18;
    while ( v6 )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(&v5[--v6]);
      v5 = (void **)P;
    }
    ExFreePoolWithTag(v5, 0x7272414Bu);
  }
  return StringArray;
}
