/*
 * XREFs of ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x140146018
 * Callers:
 *     ?ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z @ 0x140146624 (-ndisReadLwfById@@YAJW4NetSetupStoreType@@AEBU_GUID@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_Z @ 0x1400511B0 (WPP_RECORDER_SF_Z.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140051410 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?GetAtom@?$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z @ 0x140145050 (-GetAtom@-$KStringAtomTableBase@$00@Rtl@@QEAAPEAU_KStringAtom@2@PEB_W@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x14015C650 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 */

__int64 __fastcall ndisGetFilterAltitude(struct NetSetupPropertyBag *a1, unsigned int *a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  char *Atom; // r10
  unsigned int v6; // ecx
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v10; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0LL;
  v4 = NetSetupPropertyBag::ReadString(a1, &NETSETUPPKEY_FilterDriver_Class, &v10);
  if ( v4 == -1073741772 )
  {
    *a2 = 0;
LABEL_12:
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v10, 0LL);
    return v3;
  }
  if ( v4 )
  {
    v3 = v4;
    goto LABEL_12;
  }
  Atom = Rtl::KStringAtomTableBase<1>::GetAtom((__int64)qword_14011D088, *(_WORD **)(v10 + 8));
  if ( !Atom )
  {
    v3 = -1073741670;
    goto LABEL_12;
  }
  v6 = 0;
  v7 = *((unsigned int *)qword_14011D088 + 19);
  while ( v6 < (unsigned int)v7 )
  {
    v8 = v6;
    if ( v6 >= v7 )
      __fastfail(5u);
    ++v6;
    if ( *(char **)(*((_QWORD *)qword_14011D088 + 10) + 8 * v8) == Atom )
    {
      *a2 = v6;
      goto LABEL_12;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xAu,
      0xAu,
      (struct _GUID *)&WPP_e951ce375e4a3458b598cd910eaaab3e_Traceguids,
      (unsigned __int16 *)v10);
  wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v10, 0LL);
  return 3221225659LL;
}
