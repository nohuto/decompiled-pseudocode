/*
 * XREFs of ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00E7FF8
 * Callers:
 *     ClientEventCallback @ 0x1C000F4A8 (ClientEventCallback.c)
 *     SfnGETDBCSTEXTLENGTHS @ 0x1C0011B10 (SfnGETDBCSTEXTLENGTHS.c)
 *     SfnPOWERBROADCAST @ 0x1C0081550 (SfnPOWERBROADCAST.c)
 *     SfnOUTSTRING @ 0x1C00925A0 (SfnOUTSTRING.c)
 *     xxxClientLoadImage @ 0x1C00DE800 (xxxClientLoadImage.c)
 *     xxxClientExpandStringW @ 0x1C00DFB30 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00DFF3C (xxxClientLoadStringW.c)
 *     xxxClientLoadMenu @ 0x1C00E0A48 (xxxClientLoadMenu.c)
 *     ClientLoadLibrary @ 0x1C00E6D58 (ClientLoadLibrary.c)
 *     xxxClientAddFontResourceW @ 0x1C00E80C8 (xxxClientAddFontResourceW.c)
 *     SfnCOPYDATA @ 0x1C00E86C0 (SfnCOPYDATA.c)
 *     ClientGetListboxString @ 0x1C0204EBC (ClientGetListboxString.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02056B0 (SfnCOPYGLOBALDATA.c)
 *     SfnIMECONTROL @ 0x1C0206190 (SfnIMECONTROL.c)
 *     SfnINCNTOUTSTRING @ 0x1C0206C10 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C0207190 (SfnINCNTOUTSTRINGNULL.c)
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
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

unsigned __int8 *__fastcall AllocCallbackMessage(
        int a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        int a5,
        size_t Size)
{
  unsigned __int8 *v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // rdi
  ULONG_PTR v9; // rdx
  bool v10; // zf
  int v11; // eax
  unsigned __int8 *result; // rax
  __int64 v13; // rax
  _QWORD *v14; // rsi
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF

  v6 = a4;
  if ( a2 )
  {
    v7 = (a1 + 7) & 0xFFFFFFF8;
    v8 = v7 + 8 * a2;
    v9 = (a3 + 7LL * a2) & 0xFFFFFFFFFFFFFFF8uLL;
    RegionSize = v9;
    if ( v9 > 0x800 )
    {
      v13 = Win32AllocPoolWithQuotaZInit((unsigned int)v8, 1667461973LL);
      v6 = (unsigned __int8 *)v13;
      if ( v13 )
      {
        v14 = (_QWORD *)(v13 + 32);
        *(_QWORD *)(v13 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v13 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
        {
          *((_QWORD *)v6 + 2) = *v14;
          goto LABEL_10;
        }
        Win32FreePool(v6);
      }
    }
    else
    {
      if ( v8 + v9 <= Size )
      {
        memset_0(a4, 0, Size);
        goto LABEL_5;
      }
      v6 = (unsigned __int8 *)Win32AllocPoolWithQuotaZInit((unsigned int)(v9 + v8), 1667461973LL);
      if ( v6 )
      {
LABEL_5:
        *((_QWORD *)v6 + 4) = 0LL;
        v10 = a5 == 0;
        *((_QWORD *)v6 + 2) = &v6[v8];
        if ( !v10 )
        {
          *(_DWORD *)v6 = v8 + RegionSize;
LABEL_7:
          v11 = RegionSize;
          *((_DWORD *)v6 + 2) = 0;
          *((_DWORD *)v6 + 1) = v11;
          result = v6;
          *((_DWORD *)v6 + 6) = v7;
          return result;
        }
LABEL_10:
        *(_DWORD *)v6 = v8;
        goto LABEL_7;
      }
    }
  }
  return 0LL;
}
