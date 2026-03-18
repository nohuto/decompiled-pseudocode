/*
 * XREFs of DwmChildRectChange @ 0x1C00EB3C0
 * Callers:
 *     ?DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z @ 0x1C00211F4 (-DwmNotifyChildrenCreateDestroy@@YAXPEBUtagDESKTOP@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C0051ED0 (xxxCreateWindowEx.c)
 *     OffsetWindow @ 0x1C00B5B70 (OffsetWindow.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C01232A4 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BCF20 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C00B1710 (ScaleDPIRect.c)
 *     ?CalculateContentRect@@YA?AUtagRECT@@PEBUtagWND@@PEAH@Z @ 0x1C00EB6D0 (-CalculateContentRect@@YA-AUtagRECT@@PEBUtagWND@@PEAH@Z.c)
 *     ?CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z @ 0x1C00EBC94 (-CheckForChanges@WindowMargins@@YAXPEAUtagWND@@W4ChangeReason@1@@Z.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset_0 @ 0x1C0140D40 (memset_0.c)
 */

LONG_PTR __fastcall DwmChildRectChange(struct tagWND *a1)
{
  __int64 v1; // rax
  __m128i v3; // xmm1
  _QWORD *ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  PERESOURCE *v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PERESOURCE *v16; // rax
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int16 ScaledLogPixels; // ax
  INT v23; // edi
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  void *v27; // rbx
  __int64 v28; // rcx
  LONG_PTR result; // rax
  INT a[2]; // [rsp+38h] [rbp-89h] BYREF
  __int64 v31; // [rsp+40h] [rbp-81h]
  __m128i v32; // [rsp+48h] [rbp-79h] BYREF
  __m128i v33; // [rsp+58h] [rbp-69h] BYREF
  __m128i v34; // [rsp+68h] [rbp-59h] BYREF
  struct tagRECT v35; // [rsp+78h] [rbp-49h] BYREF
  int v36; // [rsp+88h] [rbp-39h] BYREF
  __int16 v37; // [rsp+8Ch] [rbp-35h]
  int v38; // [rsp+B0h] [rbp-11h]
  __int64 v39; // [rsp+B4h] [rbp-Dh]
  __m128i v40; // [rsp+BCh] [rbp-5h]
  __m128i v41; // [rsp+CCh] [rbp+Bh]
  __m128i v42; // [rsp+DCh] [rbp+1Bh]
  INT v43; // [rsp+ECh] [rbp+2Bh]

  v1 = *((_QWORD *)a1 + 5);
  a[0] = 0;
  v3 = *(__m128i *)(v1 + 104);
  v32 = *(__m128i *)(v1 + 88);
  v33 = v3;
  v34 = *(__m128i *)CalculateContentRect(&v35, a1, a);
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread && *ThreadWin32Thread )
  {
    v9 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v6, v5, v7, v8);
    if ( !ExIsResourceAcquiredSharedLite(*v9) )
    {
      LODWORD(v31) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
    }
    v10 = 0LL;
    v11 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v11 )
      v10 = *v11;
    if ( *(_QWORD *)(v10 + 456) )
    {
      v16 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v13, v12, v14, v15);
      if ( !ExIsResourceAcquiredSharedLite(*v16) )
      {
        LODWORD(v31) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
      }
      v17 = 0LL;
      v18 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v18 )
        v17 = *v18;
      if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v17 + 456) + 8LL) + 64LL) & 1) != 0 )
      {
        v19 = *((_QWORD *)a1 + 5);
        v20 = *(_DWORD *)(v19 + 288);
        if ( (v20 & 0xF) == 0 && (v20 & 0x40000000) != 0 )
        {
          v21 = *(unsigned __int16 *)(v19 + 284);
          if ( (_WORD)v21 != 96 )
          {
            v31 = 0LL;
            ScaledLogPixels = GreGetScaledLogPixels(v21);
            v23 = ScaledLogPixels;
            ScaleDPIRect(&v32, &v32, ScaledLogPixels, 0x60u, 0LL, 0LL);
            ScaleDPIRect(&v33, &v33, v23, 0x60u, 0LL, 0LL);
            ScaleDPIRect(&v34, &v34, v23, 0x60u, 0LL, 0LL);
            a[0] = EngMulDiv(a[0], v23, 96);
          }
        }
      }
    }
  }
  WindowMargins::CheckForChanges(a1, 5LL);
  v24 = *(_QWORD *)a1;
  v27 = (void *)ReferenceDwmApiPort(v26, v25);
  result = SGDGetSessionState(v28);
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(result + 32) + 13248LL));
  if ( v27 )
  {
    memset_0(&v36, 0, 0x68uLL);
    v37 = 0x8000;
    v40 = v32;
    v36 = 6815808;
    v38 = 1073741845;
    v39 = v24;
    v42 = v34;
    v43 = a[0];
    v41 = v33;
    EtwUpdateEvent(v24, 1073741845LL);
    LpcRequestPort(v27, &v36);
    return ObfDereferenceObject(v27);
  }
  return result;
}
