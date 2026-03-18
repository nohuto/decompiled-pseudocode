/*
 * XREFs of ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00E7F58
 * Callers:
 *     ClientEventCallback @ 0x1C000F4A8 (ClientEventCallback.c)
 *     SfnPOWERBROADCAST @ 0x1C0081550 (SfnPOWERBROADCAST.c)
 *     xxxClientLoadImage @ 0x1C00DE800 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1C00DFB30 (xxxClientExpandStringW.c)
 *     xxxClientLoadMenu @ 0x1C00E0A48 (xxxClientLoadMenu.c)
 *     ClientLoadLibrary @ 0x1C00E6D58 (ClientLoadLibrary.c)
 *     SfnINSTRINGNULL @ 0x1C00E6F70 (SfnINSTRINGNULL.c)
 *     SfnINLPCREATESTRUCT @ 0x1C00E75C0 (SfnINLPCREATESTRUCT.c)
 *     xxxClientAddFontResourceW @ 0x1C00E80C8 (xxxClientAddFontResourceW.c)
 *     SfnCOPYDATA @ 0x1C00E86C0 (SfnCOPYDATA.c)
 *     SfnINDEVICECHANGE @ 0x1C011AC10 (SfnINDEVICECHANGE.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02056B0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0206190 (SfnIMECONTROL.c)
 *     SfnINLPHELPINFOSTRUCT @ 0x1C02082E0 (SfnINLPHELPINFOSTRUCT.c)
 *     SfnINLPHLPSTRUCT @ 0x1C02086B0 (SfnINLPHLPSTRUCT.c)
 *     SfnINLPKDRAWSWITCHWND @ 0x1C0208A80 (SfnINLPKDRAWSWITCHWND.c)
 *     SfnINLPMDICREATESTRUCT @ 0x1C0208F30 (SfnINLPMDICREATESTRUCT.c)
 *     SfnINPGESTURENOTIFYSTRUCT @ 0x1C020C080 (SfnINPGESTURENOTIFYSTRUCT.c)
 *     SfnINSTRING @ 0x1C020C780 (SfnINSTRING.c)
 *     SfnPOPTINLPUINT @ 0x1C020DDD0 (SfnPOPTINLPUINT.c)
 *     SfnPOUTLPINT @ 0x1C020E200 (SfnPOUTLPINT.c)
 *     SfnTOUCHHITTESTING @ 0x1C020F660 (SfnTOUCHHITTESTING.c)
 *     fnHkINLPCBTCREATESTRUCT @ 0x1C020FB38 (fnHkINLPCBTCREATESTRUCT.c)
 *     xxxClientExtTextOutW @ 0x1C021187C (xxxClientExtTextOutW.c)
 *     xxxClientFindMnemChar @ 0x1C0211C54 (xxxClientFindMnemChar.c)
 *     xxxClientGetTextExtentPointW @ 0x1C02121FC (xxxClientGetTextExtentPointW.c)
 *     xxxClientLpkDrawTextEx @ 0x1C0212608 (xxxClientLpkDrawTextEx.c)
 *     xxxClientPSMTextOut @ 0x1C0212A10 (xxxClientPSMTextOut.c)
 * Callees:
 *     memmove @ 0x1C0140A40 (memmove.c)
 */

__int64 __fastcall CaptureCallbackData(struct _CAPTUREBUF *a1, char *a2, unsigned int a3, void **a4)
{
  char *v7; // rdi
  char *v9; // rdx
  char *v10; // rcx

  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( a3 > *((_DWORD *)a1 + 1) )
    return 2147483653LL;
  v7 = (char *)*((_QWORD *)a1 + 2);
  if ( !*((_QWORD *)a1 + 4) )
    goto LABEL_4;
  v9 = (char *)*((_QWORD *)a1 + 2);
  if ( a2 > v7 )
    v9 = a2;
  v10 = &v7[a3];
  if ( &a2[a3] < v10 )
    v10 = &a2[a3];
  if ( v9 >= v10 )
  {
LABEL_4:
    *((_QWORD *)a1 + 2) = &v7[(a3 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL];
    memmove(v7, a2, a3);
    if ( *((_QWORD *)a1 + 4) )
    {
      *a4 = v7;
    }
    else
    {
      *a4 = (void *)(v7 - (char *)a1);
      *(_DWORD *)((char *)a1 + 4 * (*((_DWORD *)a1 + 2))++ + *((unsigned int *)a1 + 6)) = (_DWORD)a4 - (_DWORD)a1;
    }
    return 0LL;
  }
  return 3221225496LL;
}
