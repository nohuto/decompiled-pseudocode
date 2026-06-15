/*
 * XREFs of ??1?$ComPtr@VCSharedStreamGroupProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A1D54
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupProxy_EndpointCharacteristicsDescriptor___&_StreamGroupParams___&_ATL::CComHeapPtr_STREAM_GROUP_DESCRIPTOR__&_unsigned_long_&_IAudioModeEffectsWatcher____::_1_::dtor$1 @ 0x18016B164 (_Microsoft--WRL--Details--MakeAndInitialize_CSharedStreamGroupProxy_IStreamGroupProxy_EndpointCh.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004B330 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupP.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CSharedStreamGroupProxy>::~ComPtr<CSharedStreamGroupProxy>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::Release(result);
  }
  return result;
}
