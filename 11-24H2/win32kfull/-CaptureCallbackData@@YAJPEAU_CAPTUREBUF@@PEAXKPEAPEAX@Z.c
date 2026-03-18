/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x140250FE8
 * Callers:
 *     xxxClientExtTextOutW @ 0x14003C3AC (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x14007C3CC (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x14007CAC8 (xxxClientGetTextExtentPointW.c)
 *     ClientLoadLibrary @ 0x1400833CC (ClientLoadLibrary.c)
 *     SfnINSTRING @ 0x14008A860 (SfnINSTRING.c)
 *     xxxClientAddFontResourceW @ 0x14011672C (xxxClientAddFontResourceW.c)
 *     SfnCOPYDATA @ 0x14012BE50 (SfnCOPYDATA.c)
 *     xxxClientLoadImage @ 0x1401338E8 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x140133BCC (xxxClientExpandStringW.c)
 *     SfnINSTRINGNULL @ 0x14016FBA0 (SfnINSTRINGNULL.c)
 *     SfnINDEVICECHANGE @ 0x140174A40 (SfnINDEVICECHANGE.c)
 *     SfnPOWERBROADCAST @ 0x140198190 (SfnPOWERBROADCAST.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1401A0964 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientLoadMenu @ 0x1401A9338 (xxxClientLoadMenu.c)
 *     SfnIMECONTROL @ 0x1401E57B0 (SfnIMECONTROL.c)
 *     SfnCOPYGLOBALDATA @ 0x140203210 (SfnCOPYGLOBALDATA.c)
 *     SfnTOUCHHITTESTING @ 0x1402041C0 (SfnTOUCHHITTESTING.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x140209F80 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPCREATESTRUCT @ 0x1402510A0 (SfnINLPCREATESTRUCT.c)
 *     ClientEventCallback @ 0x1402B85B8 (ClientEventCallback.c)
 *     SfnINLPHLPSTRUCT @ 0x1402B8E90 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1402B91E0 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1402BA2C0 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnPOPTINLPUINT @ 0x1402BAB30 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1402BAED0 (SfnPOUTLPINT.c)
 *     xxxClientFindMnemChar @ 0x1402BBFBC (xxxClientFindMnemChar.c)
 *     xxxClientPSMTextOut @ 0x1402BC690 (xxxClientPSMTextOut.c)
 * Callees:
 *     ?FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z @ 0x140186CCC (-FixupCaptureDataOffsets@@YAXPEAU_CAPTUREBUF@@PEAPEAXPEAE@Z.c)
 *     RtlCopyVolatileMemory @ 0x140340280 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, char *Src, size_t Size, void **a4)
{
  char *v8; // rdi
  char *v9; // rdx
  char *v10; // rcx

  if ( !Src )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( (unsigned int)Size > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v8 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_13;
  v9 = (char *)*((_QWORD *)a1 + 2);
  if ( Src > v8 )
    v9 = Src;
  v10 = &v8[(unsigned int)Size];
  if ( &Src[(unsigned int)Size] < v10 )
    v10 = &Src[(unsigned int)Size];
  if ( v9 >= v10 )
  {
LABEL_13:
    *((_QWORD *)a1 + 2) = &v8[((unsigned int)Size + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    RtlCopyVolatileMemory(v8, Src, (unsigned int)Size);
    FixupCaptureDataOffsets(a1, a4, (unsigned __int8 *)v8);
    return 0LL;
  }
  return 3221225496LL;
}
