/*
 * XREFs of ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x14009E8F8
 * Callers:
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x14009FCF0 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 */

__int64 __fastcall FxUsbDeviceStringContext::AllocateDescriptor(
        FxUsbDeviceStringContext *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 BufferSize)
{
  bool v5; // zf
  unsigned __int64 v6; // rdi
  ULONG Tag; // ecx
  void *v8; // rax
  FX_POOL **v9; // rsi
  _USB_STRING_DESCRIPTOR *m_StringDescriptor; // rcx
  unsigned int v11; // ecx
  __m128i v12; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( BufferSize <= this->m_StringDescriptorLength )
    return 0LL;
  v5 = FxDriverGlobals->FxPoolTrackingOn == 0;
  v6 = BufferSize + 2;
  Tag = FxDriverGlobals->Tag;
  v12.m128i_i64[0] = 0LL;
  v12.m128i_i64[1] = 64LL;
  if ( v5 )
    v8 = 0LL;
  else
    v8 = retaddr;
  v9 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v12, v6, Tag, v8);
  if ( !v9 )
    return 3221225626LL;
  m_StringDescriptor = this->m_StringDescriptor;
  if ( m_StringDescriptor )
    FxPoolFree(m_StringDescriptor);
  this->m_StringDescriptor = (_USB_STRING_DESCRIPTOR *)v9;
  v11 = -1;
  if ( v6 <= 0xFFFFFFFF )
    v11 = v6;
  this->m_StringDescriptorLength = v11;
  return v6 > 0xFFFFFFFF ? 0xC0000095 : 0;
}
