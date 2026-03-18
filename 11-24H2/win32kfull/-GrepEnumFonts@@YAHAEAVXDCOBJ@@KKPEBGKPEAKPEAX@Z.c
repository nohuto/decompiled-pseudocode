/*
 * XREFs of ?GrepEnumFonts@@YAHAEAVXDCOBJ@@KKPEBGKPEAKPEAX@Z @ 0x1400BAB48
 * Callers:
 *     NtGdiEnumFonts @ 0x140198BE0 (NtGdiEnumFonts.c)
 * Callees:
 *     ?bGotFonts@PDEVOBJ@@QEBAHXZ @ 0x14005EF9C (-bGotFonts@PDEVOBJ@@QEBAHXZ.c)
 *     ?pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z @ 0x1400BA59C (-pPFFGet@DEVICE_PFTOBJ@@QEAAPEAVPFF@@PEAUHDEV__@@PEAPEAPEAV2@@Z.c)
 *     ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400BA5EC (-EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVXDCOBJ@@PEAKPEAX@Z.c)
 *     ??0?$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x1400BB04C (--0-$SEMOBJ@$0BB@@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0BB@@@QEAAXXZ @ 0x1400BBE78 (-vUnlock@-$SEMOBJ@$0BB@@@QEAAXXZ.c)
 *     ?EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@@PEAVXDCOBJ@@PEAKPEAX@Z @ 0x1400F8978 (-EnumDeviceAndEngine@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2AEAVPFFOBJ@@AEAVPDEVOBJ@.c)
 *     ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x14020EEF8 (-bGetDeviceFonts@PDEVOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall GrepEnumFonts(
        struct XDCOBJ *a1,
        unsigned int a2,
        int a3,
        const unsigned __int16 *a4,
        unsigned int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  void *v7; // r15
  unsigned int *v8; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  int v16; // ecx
  __int64 v17; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // eax
  struct PFF *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int8 v30; // bl
  _QWORD v32[2]; // [rsp+60h] [rbp-51h] BYREF
  __int64 *v33[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 *v34[2]; // [rsp+80h] [rbp-31h] BYREF
  _DWORD v35[5]; // [rsp+90h] [rbp-21h] BYREF
  int v36; // [rsp+A4h] [rbp-Dh]
  int v37; // [rsp+A8h] [rbp-9h]
  int v38; // [rsp+ACh] [rbp-5h]
  int v39; // [rsp+B0h] [rbp-1h]
  unsigned int v40; // [rsp+B4h] [rbp+3h]
  char v41; // [rsp+100h] [rbp+4Fh] BYREF
  int v42; // [rsp+110h] [rbp+5Fh]

  v42 = a3;
  v7 = a7;
  v8 = a6;
  if ( !a7 )
    *a6 = 0;
  a7 = *(_DWORD **)(*(_QWORD *)a1 + 48LL);
  if ( !(unsigned int)PDEVOBJ::bGotFonts((PDEVOBJ *)&a7) )
    PDEVOBJ::bGetDeviceFonts((PDEVOBJ *)&a7);
  v15 = *(_QWORD *)(W32GetSessionState(v13, v12, v14) + 96);
  SEMOBJ<17>::SEMOBJ<17>(&v41, v15 + 4872);
  v40 = a5;
  v39 = 0;
  v35[3] = 0;
  v16 = a7[531];
  if ( !v16 )
  {
    v37 = 1;
LABEL_9:
    v36 = 0;
    goto LABEL_10;
  }
  v37 = 0;
  v36 = 1;
  if ( v16 != 4 )
    goto LABEL_9;
LABEL_10:
  v17 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 236LL);
  if ( (v17 & 1) != 0 || (v17 = (unsigned int)a7[10], v35[0] = 0, (v17 & 1) == 0) )
    v35[0] = 1;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v17);
  if ( (a7[10] & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
    v19 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
  else
    v19 = a7[540];
  v35[1] = v19;
  v20 = W32GetCurrentThreadDpiAwarenessContext(a7);
  v22 = (unsigned int)a7[10];
  if ( (v22 & 1) != 0 && (v22 = (v20 & 0xF) - 1, (unsigned int)v22 > 1) )
    v23 = (v20 >> 8) & 0x1FF;
  else
    v23 = a7[541];
  v35[2] = v23;
  v35[4] = *(_BYTE *)(v15 + 20372) & 1;
  v38 = v42 & 0x200;
  v32[0] = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a7, v22, v21) + 96) + 20424LL);
  v24 = DEVICE_PFTOBJ::pPFFGet((DEVICE_PFTOBJ *)v32, *(_QWORD *)(*(_QWORD *)a1 + 48LL), 0LL);
  if ( !v24
    || (v32[0] = v24,
        v34[0] = *(__int64 **)(v15 + 20416),
        v33[0] = *(__int64 **)(v15 + 20408),
        (v30 = EnumDeviceAndEngine(
                 a4,
                 v25,
                 a2,
                 (struct _EFFILTER_INFO *)v35,
                 (struct PUBLIC_PFTOBJ *)v34,
                 (struct PUBLIC_PFTOBJ *)v33,
                 (struct PFFOBJ *)v32,
                 (struct PDEVOBJ *)&a7,
                 a1,
                 v8,
                 v7)) == 0) )
  {
    v28 = *(_QWORD *)(W32GetSessionState(v26, v25, v27) + 96);
    v33[0] = *(__int64 **)(v28 + 20416);
    v34[0] = *(__int64 **)(v28 + 20408);
    v30 = EnumEngineOnly(a4, v29, a2, (struct _EFFILTER_INFO *)v35, v33, v34, a1, v8, v7);
  }
  SEMOBJ<17>::vUnlock(&v41);
  return v30;
}
