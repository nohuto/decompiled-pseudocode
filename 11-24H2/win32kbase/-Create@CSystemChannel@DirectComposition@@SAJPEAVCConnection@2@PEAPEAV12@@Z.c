/*
 * XREFs of ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1400CEC70
 * Callers:
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1400CEB80 (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x14006D1CC (--0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x14006D30C (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DirectComposition::CSystemChannel::Create(
        struct DirectComposition::CConnection *a1,
        struct DirectComposition::CSystemChannel **a2)
{
  DirectComposition::CApplicationChannel *v4; // rax
  DirectComposition::CApplicationChannel *v5; // rbx
  int v6; // edi

  v4 = (DirectComposition::CApplicationChannel *)Win32AllocPoolZInitImpl(256LL, 0xB20uLL, 0x63734344u);
  v5 = v4;
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::CApplicationChannel(v4, a1, 0LL, 0LL);
    *((_QWORD *)v5 + 2) = 0LL;
    *(_QWORD *)v5 = &DirectComposition::CSystemChannel::`vftable';
    v6 = DirectComposition::CApplicationChannel::Initialize(v5, 0LL, 0LL);
    if ( v6 < 0 )
      (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)v5 + 32LL))(v5, 1LL);
    else
      *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
