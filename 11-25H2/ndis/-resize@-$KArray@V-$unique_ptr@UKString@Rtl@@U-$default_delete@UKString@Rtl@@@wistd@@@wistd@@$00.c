/*
 * XREFs of ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140002E20
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x14014DB90 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x14014DEAC (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     ?reserve@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140002D24 (-reserve@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$0.c)
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1400CD578 (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(
        __int64 a1,
        unsigned __int64 a2)
{
  char result; // al
  __int64 v5; // r8
  unsigned int *v6; // rdx
  unsigned __int64 v7; // rcx
  _DWORD *v8; // rbx
  unsigned __int64 v9; // rbp

  result = Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::reserve(
             (unsigned int *)a1,
             a2);
  if ( result )
  {
    v6 = (unsigned int *)(a1 + 4);
    v7 = *(unsigned int *)(a1 + 4);
    if ( v7 >= a2 )
    {
      v8 = (_DWORD *)(a1 + 4);
    }
    else
    {
      do
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v7++) = 0LL;
      while ( v7 < a2 );
      v8 = (_DWORD *)(a1 + 4);
    }
    v9 = a2;
    if ( a2 < *v6 )
    {
      do
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'(
          *(_QWORD *)(a1 + 8) + 8 * v9++,
          v6,
          v5);
      while ( v9 < (unsigned int)*v8 );
      v8 = (_DWORD *)(a1 + 4);
    }
    *v8 = a2;
    return 1;
  }
  return result;
}
