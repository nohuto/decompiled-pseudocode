/*
 * XREFs of ndisMiniportQueryInterfaceProperty @ 0x140170A40
 * Callers:
 *     ?ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z @ 0x1401706C0 (-ndisCreateAdapterInstanceName@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAPEAU_UNICODE_STRING@@1@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ?reset@?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollection@@@Z @ 0x140095ED0 (-reset@-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAAXPEAVKnobCollec.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1401692B0 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1401695A0 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?DuplicateUnicodeString@Rtl@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@AEBU_UNICODE_STRING@@K@Z @ 0x140170990 (-DuplicateUnicodeString@Rtl@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@.c)
 */

__int64 __fastcall ndisMiniportQueryInterfaceProperty(__int64 a1, __int64 a2, HANDLE **a3)
{
  char v4; // di
  int v5; // eax
  unsigned int v6; // ebx
  int String; // eax
  int v9; // edx
  HANDLE *v10; // rax
  const void **v11; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF
  HANDLE *p_Handle; // [rsp+78h] [rbp+20h] BYREF

  Handle = 0LL;
  v4 = a1;
  v5 = ndisIfOpenInterfaceRegistryKey(a1 + 4008, (KRegKey *)&Handle, 1u, 1);
  v6 = v5;
  if ( v5 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Bu,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        v4,
        v5);
LABEL_4:
    if ( Handle )
      ZwClose(Handle);
    return v6;
  }
  v11 = 0LL;
  p_Handle = &Handle;
  String = NetSetupPropertyBag::ReadString(
             (NetSetupPropertyBag *)&p_Handle,
             (const struct _NETSETUPPROPKEY *)&NETSETUPPKEY_Interface_IfDescr,
             (void **)&v11);
  v6 = String;
  if ( String )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x1Cu,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        v4,
        String);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v11, 0LL);
    goto LABEL_4;
  }
  Rtl::DuplicateUnicodeString(&p_Handle, v11, 0x6E61444Eu);
  v10 = p_Handle;
  if ( p_Handle )
  {
    p_Handle = 0LL;
    *a3 = v10;
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&p_Handle, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v11, 0LL);
    if ( Handle )
      ZwClose(Handle);
    return 0LL;
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        (_DWORD)p_Handle + 13,
        (_DWORD)p_Handle + 29,
        (struct _GUID *)&WPP_901e3e1acd0b36a9ab86c452924f7c21_Traceguids,
        v4);
    }
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::reset((void **)&p_Handle, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)&v11, 0LL);
    if ( Handle )
      ZwClose(Handle);
    return 3221225626LL;
  }
}
