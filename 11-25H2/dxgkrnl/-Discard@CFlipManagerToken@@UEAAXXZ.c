/*
 * XREFs of ?Discard@CFlipManagerToken@@UEAAXXZ @ 0x14005E100
 * Callers:
 *     <none>
 * Callees:
 *     ??_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z @ 0x140050838 (--_GFlipManagerTokenIFlipInfo@@QEAAPEAXI@Z.c)
 *     Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline @ 0x140097BC0 (Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFlipManagerSignal@@@Z @ 0x14009C05C (-FlipManagerConsumerImmediateTokenCompleted@@YAJPEAVCFlipManagerToken@@PEAPEAVCToken@@PEAPEAVCFl.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

void __fastcall CFlipManagerToken::Discard(CFlipManagerToken *this)
{
  void *v2; // rcx
  FlipManagerTokenIFlipInfo *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  if ( !(unsigned int)Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline() )
  {
    v2 = (void *)*((_QWORD *)this + 10);
    if ( v2 )
    {
      ObfDereferenceObject(v2);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  v3 = (FlipManagerTokenIFlipInfo *)*((_QWORD *)this + 9);
  if ( v3 )
  {
    FlipManagerTokenIFlipInfo::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 9) = 0LL;
  }
  if ( (unsigned int)Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline()
    && !*((_DWORD *)this + 6)
    && *((_BYTE *)this + 115) )
  {
    (*(void (__fastcall **)(CFlipManagerToken *))(*(_QWORD *)this + 16LL))(this);
    (*(void (__fastcall **)(CFlipManagerToken *))(*(_QWORD *)this + 24LL))(this);
    FlipManagerConsumerImmediateTokenCompleted((CFlipManagerToken *)((char *)this - 8), 0LL, 0LL);
  }
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( (unsigned int)Feature_CompTexturesNoRedirectionFix__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = (void *)*((_QWORD *)this + 10);
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  *((_DWORD *)this + 6) = 6;
}
