/*
 * XREFs of AlpcpFormatConnectionRequest @ 0x14088B56C
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x14086392C (AlpcpProcessConnectionRequest.c)
 *     NtSecureConnectPort @ 0x14088AF50 (NtSecureConnectPort.c)
 * Callees:
 *     AlpcpValidateConnectionMessage @ 0x14088A814 (AlpcpValidateConnectionMessage.c)
 *     AlpcpSetupMessageDataForDeferredCopy @ 0x14088DB20 (AlpcpSetupMessageDataForDeferredCopy.c)
 *     AlpcpCaptureAttributes @ 0x14088F7F0 (AlpcpCaptureAttributes.c)
 *     AlpcpReferenceBlob @ 0x1408966C0 (AlpcpReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x140898D70 (AlpcpUnlockMessage.c)
 *     AlpcpMapLegacyPortView @ 0x14093C1C0 (AlpcpMapLegacyPortView.c)
 *     AlpcpAllocateMessage @ 0x14093F9C0 (AlpcpAllocateMessage.c)
 */

__int64 __fastcall AlpcpFormatConnectionRequest(
        ULONG_PTR *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        __int64 a6,
        __int64 a7,
        ULONG_PTR *a8,
        char a9,
        char a10)
{
  char v10; // si
  unsigned __int16 *v11; // r14
  int v12; // r12d
  __int64 result; // rax
  int v16; // ebx
  ULONG_PTR v17; // rdi
  _WORD *v18; // rcx
  unsigned __int16 v19; // ax
  __int16 v20; // dx
  int v21; // r9d
  __int64 v22; // rbp
  ULONG_PTR v23; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h] BYREF

  v10 = a9;
  v11 = a5;
  v12 = a4;
  BugCheckParameter2 = 0LL;
  if ( !a4 || (result = AlpcpValidateConnectionMessage(**(_QWORD **)(a3 + 16), a5, a9), (int)result >= 0) )
  {
    result = AlpcpAllocateMessage(&BugCheckParameter2, 0LL, 0LL);
    v16 = result;
    if ( (int)result >= 0 )
    {
      if ( v10 )
      {
        v22 = a7;
        if ( !a7 )
        {
          *(_QWORD *)(BugCheckParameter2 + 272) = 0LL;
LABEL_6:
          v18 = (_WORD *)BugCheckParameter2;
          *(_OWORD *)(BugCheckParameter2 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
          v19 = *v11;
          v18[120] = *v11;
          v18[121] = v19 + 40;
          v20 = v18[122] & 0xFF00 | 0xA;
          v18[122] = v20;
          if ( !KeGetCurrentThread()->PreviousMode )
            v18[122] = v20 | v11[2] & 0x8000;
          v21 = *v11;
          v17 = BugCheckParameter2;
          if ( !(_WORD)v21
            || (v16 = AlpcpSetupMessageDataForDeferredCopy(BugCheckParameter2, v12, a2, v21, v10, a10), v16 >= 0) )
          {
            if ( v10 )
            {
              v23 = *(_QWORD *)(v17 + 144);
              if ( v23 )
              {
                *a8 = v23;
                AlpcpReferenceBlob(v23);
              }
            }
            *a1 = v17;
            return (unsigned int)v16;
          }
LABEL_14:
          AlpcpUnlockMessage(v17);
          return (unsigned int)v16;
        }
        v17 = BugCheckParameter2;
        v16 = AlpcpMapLegacyPortView(a3, a7, BugCheckParameter2 + 104);
        *(_QWORD *)(v17 + 272) = *(_QWORD *)(v22 + 24);
      }
      else
      {
        v17 = BugCheckParameter2;
        v16 = AlpcpCaptureAttributes(a3, a2, a6, BugCheckParameter2, BugCheckParameter2 + 104);
      }
      if ( v16 < 0 )
        goto LABEL_14;
      goto LABEL_6;
    }
  }
  return result;
}
