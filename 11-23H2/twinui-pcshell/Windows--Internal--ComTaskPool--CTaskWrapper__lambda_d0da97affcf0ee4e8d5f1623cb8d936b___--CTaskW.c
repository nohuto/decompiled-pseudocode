/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b_____lambda_d0da97affcf0ee4e8d5f1623cb8d936b___ @ 0x18001FF2C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___ @ 0x18001FBD0 (Windows--Internal--ComTaskPool--QueueTask__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___.c)
 * Callees:
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800205E4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@w.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C7AD8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b___::CTaskWrapper__lambda_d0da97affcf0ee4e8d5f1623cb8d936b_____lambda_d0da97affcf0ee4e8d5f1623cb8d936b___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  a1[3] = a2[1];
  v4 = a2 + 2;
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v4;
    *v4 = 0LL;
  }
  a1[5] = a2[3];
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 6,
    a2 + 4);
  a1[6] = &CFramePresentationTelemetry::PresentWindow::`vftable';
  *a1 = off_1807A4B78;
  return a1;
}
