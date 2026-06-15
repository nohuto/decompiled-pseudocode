/*
 * XREFs of ??$MakeAndInitialize@VCVADServer@@V1@PEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVCVADServer@@$$QEAPEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Z @ 0x18000CC84
 * Callers:
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18006449C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 * Callees:
 *     ??0CVADServer@@QEAA@XZ @ 0x18000CDD8 (--0CVADServer@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18000CF44 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D460 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18000D600 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVADServer,CVADServer,IAudioProcess *,unsigned short const * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,tWAVEFORMATEX const * &,_GUID const * &,VadServerSettings * &,unsigned short * * &,IProcessSubmixProxy * &>(
        volatile signed __int64 **a1,
        struct IAudioProcess **a2,
        const unsigned __int16 **a3,
        enum _AUDCLNT_SHAREMODE *a4,
        unsigned int *a5,
        const struct tWAVEFORMATEX **a6,
        const struct _GUID **a7,
        struct VadServerSettings **a8,
        unsigned __int16 ***a9,
        struct IProcessSubmixProxy **a10)
{
  CVADServer *v14; // rax
  volatile signed __int64 *v15; // rbx
  volatile int *v16; // rdx
  int v17; // edi
  signed __int64 v18; // rax
  signed __int64 v20; // rtt

  *a1 = 0LL;
  v14 = (CVADServer *)operator new(0x238uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v14 )
    return 2147942414LL;
  v15 = (volatile signed __int64 *)CVADServer::CVADServer(v14);
  v17 = CVADServer::RuntimeClassInitialize((CVADServer *)v15, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10);
  if ( v17 < 0 )
  {
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(v15);
  }
  else
  {
    if ( v15 )
    {
      v18 = *((_QWORD *)v15 + 4);
      while ( v18 >= 0 )
      {
        if ( (_DWORD)v18 != 0x7FFFFFFF )
        {
          v20 = v18;
          v18 = _InterlockedCompareExchange64(v15 + 4, v18 + 1, v18);
          if ( v20 != v18 )
            continue;
        }
        goto LABEL_7;
      }
      Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v18 + 16), v16);
    }
LABEL_7:
    *a1 = v15;
    if ( v15 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(v15);
    return 0;
  }
  return (unsigned int)v17;
}
