/*
 * XREFs of ?Release@KRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAXXZ @ 0x140162700
 * Callers:
 *     ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x140162580 (-ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x14006CDB0 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 */

void __fastcall KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::Release(char *P)
{
  char **v2; // rcx
  PVOID *v3; // rdx

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 && P )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset((void **)P + 3, 0LL);
    v2 = (char **)*((_QWORD *)P + 1);
    if ( v2[1] != P + 8 || (v3 = (PVOID *)*((_QWORD *)P + 2), *v3 != P + 8) )
      __fastfail(3u);
    *v3 = v2;
    v2[1] = (char *)v3;
    ExFreePoolWithTag(P, 0x44745042u);
  }
}
