/*
 * XREFs of ?FxDuplicateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@PEAU2@@Z @ 0x140019C10
 * Callers:
 *     imp_WdfStringCreate @ 0x140008400 (imp_WdfStringCreate.c)
 *     ?Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z @ 0x140019BF0 (-Assign@FxString@@QEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x140053AA0 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x140079B20 (imp_WdfDeviceAssignMofResourceName.c)
 *     ?Assign@FxString@@QEAAJPEBG@Z @ 0x140083A78 (-Assign@FxString@@QEAAJPEBG@Z.c)
 *     ?CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x140094CF8 (-CreateSymbolicLink@FxDevice@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall FxDuplicateUnicodeString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *Source,
        _UNICODE_STRING *Destination)
{
  size_t Length; // rbp
  unsigned __int16 v7; // si
  wchar_t *v8; // rcx
  unsigned int Tag; // ecx
  void *v10; // rax
  wchar_t *v11; // rax
  wchar_t *Buffer; // rax
  unsigned int _a1; // edi
  unsigned __int16 v15; // r9
  FxPoolTypeOrPoolFlags v16; // [rsp+30h] [rbp-28h] BYREF
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
    *(_QWORD *)&v16.UsePoolType = 0LL;
    v16.u.PoolFlags = 256LL;
    if ( !FxDriverGlobals->FxPoolTrackingOn )
      v10 = 0LL;
    v11 = (wchar_t *)FxPoolAllocator(
                       FxDriverGlobals,
                       &FxDriverGlobals->FxPoolFrameworks,
                       &v16,
                       (unsigned __int16)(Length + 2),
                       Tag,
                       v10);
    Destination->Buffer = v11;
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
