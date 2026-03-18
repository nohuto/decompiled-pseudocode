/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140031530
 * Callers:
 *     imp_WdfStringCreate @ 0x140020B30 (imp_WdfStringCreate.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140031510 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x140046D00 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x140079640 (imp_WdfDeviceAssignMofResourceName.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x140083A68 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140094D58 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     memmove @ 0x1400ACD40 (memmove.c)
 */

__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  size_t Length; // rbp
  unsigned __int16 v7; // si
  wchar_t *v8; // rcx
  ULONG Tag; // ecx
  void *v10; // rax
  FX_POOL **v11; // rax
  wchar_t *Buffer; // rax
  unsigned int _a1; // edi
  unsigned __int16 v15; // r9
  __m128i v16; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  Length = Source->Length;
  v7 = Length + 2;
  if ( (unsigned __int16)(Length + 2) < (unsigned __int16)Length )
  {
    _a1 = -1073741675;
    v15 = 10;
  }
  else
  {
    if ( Destination->MaximumLength >= v7 )
    {
LABEL_9:
      memmove(Destination->Buffer, Source->Buffer, Length);
      Buffer = Destination->Buffer;
      Destination->Length = Length;
      Buffer[Length >> 1] = 0;
      return 0LL;
    }
    v8 = Destination->Buffer;
    if ( v8 )
    {
      FxPoolFree(v8);
      *Destination = 0LL;
    }
    Tag = FxDriverGlobals->Tag;
    v10 = retaddr;
    v16.m128i_i64[0] = 0LL;
    v16.m128i_i64[1] = 256LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v10 = 0LL;
    v11 = FxPoolAllocator(
            FxDriverGlobals,
            &FxDriverGlobals->FxPoolFrameworks,
            &v16,
            (unsigned __int16)(Length + 2),
            Tag,
            v10);
    Destination->Buffer = (wchar_t *)v11;
    if ( v11 )
    {
      Destination->MaximumLength = v7;
      goto LABEL_9;
    }
    _a1 = -1073741670;
    v15 = 11;
  }
  WPP_IFR_SF_D(FxDriverGlobals, 2u, 2u, v15, WPP_stringutil_cpp_Traceguids, _a1);
  return _a1;
}
