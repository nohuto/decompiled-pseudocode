/*
 * XREFs of PopAndFreeAlwaysW32ThreadLock @ 0x14011349C
 * Callers:
 *     xxxClientExtTextOutW @ 0x14003C3AC (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x14007C3CC (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x14007CAC8 (xxxClientGetTextExtentPointW.c)
 *     ClientLoadLibrary @ 0x1400833CC (ClientLoadLibrary.c)
 *     ClientGetListboxString @ 0x140089900 (ClientGetListboxString.c)
 *     SfnINSTRING @ 0x14008A860 (SfnINSTRING.c)
 *     xxxInitWindowStation @ 0x140112ADC (xxxInitWindowStation.c)
 *     ??1?$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1?Win32FreePool@@YAXPEAX@Z@@QEAA@XZ @ 0x140113474 (--1-$Win32RawOptionalLockedItemAlways@UtagPROFILEUSERNAME@@$1-Win32FreePool@@YAXPEAX@Z@@QEAA@XZ.c)
 *     xxxClientLoadStringW @ 0x140114990 (xxxClientLoadStringW.c)
 *     ?xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z @ 0x140114C7C (-xxxbEnumerateRegistryFonts@@YAHKIPEBG0@Z.c)
 *     xxxClientAddFontResourceW @ 0x14011672C (xxxClientAddFontResourceW.c)
 *     SfnCOPYDATA @ 0x14012BE50 (SfnCOPYDATA.c)
 *     xxxClientLoadImage @ 0x1401338E8 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x140133BCC (xxxClientExpandStringW.c)
 *     UserOnGreTextReady @ 0x140151528 (UserOnGreTextReady.c)
 *     SfnINSTRINGNULL @ 0x14016FBA0 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x140174A40 (SfnINDEVICECHANGE.c)
 *     SfnOUTSTRING @ 0x140176180 (SfnOUTSTRING.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x140184A70 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnPOWERBROADCAST @ 0x140198190 (SfnPOWERBROADCAST.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401A0964 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x1401A9338 (xxxClientLoadMenu.c)
 *     NtUserfnDDEINIT @ 0x1401D9EC0 (NtUserfnDDEINIT.c)
 *     SfnIMECONTROL @ 0x1401E57B0 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1401F4340 (SfnINCNTOUTSTRING.c)
 *     xxxWaitForInputIdle @ 0x1401F488C (xxxWaitForInputIdle.c)
 *     xxxSetProcessWindowStation @ 0x1402011B0 (xxxSetProcessWindowStation.c)
 *     SfnCOPYGLOBALDATA @ 0x140203210 (SfnCOPYGLOBALDATA.c)
 *     SfnTOUCHHITTESTING @ 0x1402041C0 (SfnTOUCHHITTESTING.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x140209F80 (SfnINLPHELPINFOSTRUCT.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14020C860 (xxxUpdatePerUserSystemParameters.c)
 *     PrepareForLogoff @ 0x14020FBCC (PrepareForLogoff.c)
 *     ?xxxSetIMEShowStatus@@YAHHHPEAH@Z @ 0x140212F50 (-xxxSetIMEShowStatus@@YAHHHPEAH@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x14023BD28 (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     SfnINLPCREATESTRUCT @ 0x1402510A0 (SfnINLPCREATESTRUCT.c)
 *     xxxGetDeviceChangeInfo @ 0x140279D9C (xxxGetDeviceChangeInfo.c)
 *     ClientEventCallback @ 0x1402B85B8 (ClientEventCallback.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1402B8A10 (SfnINCNTOUTSTRINGNULL.c)
 *     SfnINLPHLPSTRUCT @ 0x1402B8E90 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402B91E0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402BA2C0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1402BAB30 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402BAED0 (SfnPOUTLPINT.c)
 *     xxxClientFindMnemChar @ 0x1402BBFBC (xxxClientFindMnemChar.c)
 *     xxxClientPSMTextOut @ 0x1402BC690 (xxxClientPSMTextOut.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PopAndFreeAlwaysW32ThreadLock(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rdx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  v4 = 0LL;
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  *(_QWORD *)(v4 + 384) = *(_QWORD *)a1;
  return (*(__int64 (__fastcall **)(_QWORD))(a1 + 16))(*(_QWORD *)(a1 + 8));
}
