/*
 * XREFs of GreEnumFonts @ 0x1C0003CEC
 * Callers:
 *     NtGdiEnumFonts @ 0x1C0003B20 (NtGdiEnumFonts.c)
 * Callees:
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1C0003F94 (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C0003FE8 (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z.c)
 *     ??0DEVICE_PFTOBJ@@QEAA@XZ @ 0x1C0086008 (--0DEVICE_PFTOBJ@@QEAA@XZ.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C009F7F8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FB6CC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0114ADC (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0114B20 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011C090 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C011C700 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C72C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013D7D0 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C02D2524 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 */

_BOOL8 __fastcall GreEnumFonts(
        HDC a1,
        unsigned int a2,
        __int16 a3,
        const unsigned __int16 *a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  void *v7; // r14
  Gre::Base *v11; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rsi
  int v14; // edx
  int v15; // eax
  int v16; // eax
  struct PFF *v17; // rax
  Gre::Base *v18; // rcx
  unsigned int v19; // edx
  bool v20; // al
  struct Gre::Base::SESSION_GLOBALS *v21; // rbx
  __int64 v22; // rcx
  BOOL v23; // ebx
  _DWORD v24[5]; // [rsp+68h] [rbp-A0h] BYREF
  int v25; // [rsp+7Ch] [rbp-8Ch]
  int v26; // [rsp+80h] [rbp-88h]
  int v27; // [rsp+84h] [rbp-84h]
  int v28; // [rsp+88h] [rbp-80h]
  int v29; // [rsp+8Ch] [rbp-7Ch]
  __int64 v30; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v31[2]; // [rsp+98h] [rbp-70h] BYREF
  char v32[32]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v33[16]; // [rsp+C8h] [rbp-40h] BYREF
  struct PFF *v34; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v37; // [rsp+108h] [rbp+0h] BYREF
  __int64 v38; // [rsp+118h] [rbp+10h] BYREF

  v7 = a7;
  if ( !a7 )
    *a6 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v31, a1);
  if ( !v31[0] )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v31);
    return 0LL;
  }
  a7 = *(_DWORD **)(v31[0] + 48LL);
  if ( (a7[10] & 0x40) == 0 )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
  v13 = Gre::Base::Globals(v11);
  v30 = *((_QWORD *)v13 + 6);
  GreAcquireSemaphore(v30);
  v29 = a5;
  v28 = 0;
  v24[3] = 0;
  v14 = a7[527];
  if ( v14 )
  {
    v26 = 0;
    v25 = 1;
    if ( v14 == 4 )
      goto LABEL_11;
  }
  else
  {
    v26 = 1;
  }
  v25 = 0;
LABEL_11:
  if ( (*(_DWORD *)(*(_QWORD *)(v31[0] + 976LL) + 236LL) & 1) != 0 || (v15 = a7[10], v24[0] = 0, (v15 & 1) == 0) )
    v24[0] = 1;
  v24[1] = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&a7);
  v24[2] = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&a7);
  v16 = *((_BYTE *)v13 + 164) & 1;
  v27 = a3 & 0x200;
  v24[4] = v16;
  DEVICE_PFTOBJ::DEVICE_PFTOBJ((DEVICE_PFTOBJ *)v33);
  v17 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v33, *(HDEV *)(v31[0] + 48LL), 0LL);
  if ( !v17
    || (v34 = v17,
        v36 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState() + 32) + 20272LL),
        v35 = *((_QWORD *)v13 + 796),
        !(v20 = EnumDeviceAndEngine(
                  a4,
                  v19,
                  a2,
                  (struct _EFFILTER_INFO *)v24,
                  (struct PUBLIC_PFTOBJ *)&v36,
                  (struct PUBLIC_PFTOBJ *)&v35,
                  (struct PFFOBJ *)&v34,
                  (struct PDEVOBJ *)&a7,
                  (struct DCOBJ *)v31,
                  a6,
                  v7))) )
  {
    v21 = Gre::Base::Globals(v18);
    v22 = *(_QWORD *)(SGDGetSessionState() + 32);
    v37 = *((_QWORD *)v21 + 796);
    v38 = *(_QWORD *)(v22 + 20272);
    v20 = EnumEngineOnly(
            a4,
            v38,
            a2,
            (struct _EFFILTER_INFO *)v24,
            (struct PUBLIC_PFTOBJ *)&v38,
            (struct PUBLIC_PFTOBJ *)&v37,
            (struct DCOBJ *)v31,
            a6,
            v7);
  }
  v23 = v20;
  SEMOBJ::vUnlock((SEMOBJ *)&v30);
  if ( v31[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v31);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v32);
  return v23;
}
