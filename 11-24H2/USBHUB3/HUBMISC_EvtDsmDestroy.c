/*
 * XREFs of HUBMISC_EvtDsmDestroy @ 0x14002FCF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBMISC_EvtDsmDestroy(__int64 a1)
{
  struct _UNICODE_STRING *v1; // rax
  struct _UNICODE_STRING *v2; // rbx
  PVOID *v3; // rax
  void *v4; // rcx
  void *v5; // rcx
  wchar_t *Buffer; // rcx
  void *v7; // rcx
  wchar_t *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  wchar_t *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  void *v14; // rcx
  wchar_t *v15; // rcx
  wchar_t *v16; // rcx
  wchar_t *v17; // rcx
  wchar_t *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax

  v1 = (struct _UNICODE_STRING *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                 + 1616))(
                                   WdfDriverGlobals,
                                   a1,
                                   off_14006C0D0);
  v2 = v1;
  if ( *(_QWORD *)&v1[94].Length )
  {
    (*(void (**)(void))(*(_QWORD *)&v1->Length + 528LL))();
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)&v2->Length + 512LL))(*(_QWORD *)&v2[94].Length);
    *(_QWORD *)&v2[94].Length = 0LL;
  }
  v3 = *(PVOID **)&v2[166].Length;
  if ( v3 && *v3 )
    ExFreePoolWithTag(*v3, 0x68334855u);
  v4 = *(void **)&v2[166].Length;
  if ( v4 )
    ExFreePoolWithTag(v4, 0x68334855u);
  v5 = *(void **)&v2[135].Length;
  if ( v5 )
    ExFreePoolWithTag(v5, 0x64334855u);
  RtlFreeUnicodeString(v2 + 133);
  Buffer = v2[153].Buffer;
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x64334855u);
  v7 = *(void **)&v2[136].Length;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  v8 = v2[126].Buffer;
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  v9 = *(void **)&v2[132].Length;
  if ( v9 )
    ExFreePoolWithTag(v9, 0x64334855u);
  v10 = *(void **)&v2[127].Length;
  if ( v10 )
    ExFreePoolWithTag(v10, 0x64334855u);
  v11 = v2[127].Buffer;
  if ( v11 )
    ExFreePoolWithTag(v11, 0x64334855u);
  v12 = *(void **)&v2[129].Length;
  if ( v12 )
    ExFreePoolWithTag(v12, 0x64334855u);
  v13 = *(void **)&v2[161].Length;
  if ( v13 )
    ExFreePoolWithTag(v13, 0x64334855u);
  v14 = *(void **)&v2[156].Length;
  if ( v14 )
    ExFreePoolWithTag(v14, 0x64334855u);
  *(_DWORD *)&v2[6].Length = 0;
  v15 = v2[6].Buffer;
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x64334855u);
    v2[6].Buffer = 0LL;
  }
  v16 = v2[8].Buffer;
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0x64334855u);
    v2[8].Buffer = 0LL;
  }
  v17 = v2[7].Buffer;
  if ( v17 )
  {
    ExFreePoolWithTag(v17, 0x64334855u);
    v2[7].Buffer = 0LL;
  }
  if ( *(_QWORD *)&v2[16].Length )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      *(_QWORD *)&v2[16].Length,
      "DSM Tag",
      7395LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    *(_QWORD *)&v2[16].Length = 0LL;
  }
  v18 = v2[26].Buffer;
  if ( v18 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, wchar_t *, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
      WdfDriverGlobals,
      v2[26].Buffer,
      "DSM Tag",
      7395LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[26].Buffer = 0LL;
  }
  v19 = *(_QWORD *)&v2[97].Length;
  if ( v19 )
  {
    LOBYTE(v18) = 1;
    ExDeleteTimer(v19, v18, 0LL, 0LL);
    *(_QWORD *)&v2[97].Length = 0LL;
  }
  if ( v2[151].Buffer )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, wchar_t *, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
      WdfDriverGlobals,
      v2[151].Buffer,
      "DSM Tag",
      7395LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[151].Buffer = 0LL;
  }
  if ( v2[27].Buffer )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, wchar_t *, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
      WdfDriverGlobals,
      v2[27].Buffer,
      "DSM Tag",
      7395LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
    v2[27].Buffer = 0LL;
  }
  v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, wchar_t *))(WdfFunctions_01015 + 1632))(
          WdfDriverGlobals,
          v2->Buffer);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
           WdfDriverGlobals,
           v20,
           "DSM Create Tag",
           7481LL,
           "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubmisc.c");
}
