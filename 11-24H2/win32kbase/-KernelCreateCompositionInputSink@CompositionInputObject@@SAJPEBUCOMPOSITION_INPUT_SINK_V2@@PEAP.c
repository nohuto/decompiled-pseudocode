/*
 * XREFs of ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@PEAPEAX@Z @ 0x14006B490
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x1400FFF64 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x14011481C (-_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140017AD4 (W32GetCurrentWin32kSessionId.c)
 *     UserAllocDefaultCompositionSecurityDescriptor @ 0x140017D80 (UserAllocDefaultCompositionSecurityDescriptor.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x14006B784 (-ValidateInputSink@CompositionInputObject@@SAJAEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     ?Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z @ 0x14006B850 (-Create@InputSink@InputTraceLogging@@SAXPEAXPEBUCOMPOSITION_INPUT_SINK_V2@@@Z.c)
 *     ?ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z @ 0x14006BC88 (-ObjectInit@CompositionInputObject@@KAJPEAUCompositionObject@@PEAXPEAPEAVICompositionObject@@@Z.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall CompositionInputObject::KernelCreateCompositionInputSink(
        const struct COMPOSITION_INPUT_SINK_V2 *a1,
        void **a2)
{
  _OWORD *v2; // r8
  __int64 v3; // rsi
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int128 v15; // xmm1
  NTSTATUS inserted; // ebx
  BOOL IsCurrentProcessDwm; // eax
  ACCESS_MASK v18; // r14d
  int v19; // eax
  char *v20; // rdi
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int64 v32; // rax
  NTSTATUS LocallyUniqueId; // eax
  PVOID v34; // rcx
  int v35; // eax
  HANDLE v36; // rcx
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v40[6]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v41[304]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v42[304]; // [rsp+1C0h] [rbp+C0h] BYREF

  Handle = (HANDLE)-1LL;
  v2 = v42;
  v3 = 2LL;
  v5 = 2LL;
  do
  {
    v6 = *((_OWORD *)a1 + 1);
    *v2 = *(_OWORD *)a1;
    v7 = *((_OWORD *)a1 + 2);
    v2[1] = v6;
    v8 = *((_OWORD *)a1 + 3);
    v2[2] = v7;
    v9 = *((_OWORD *)a1 + 4);
    v2[3] = v8;
    v10 = *((_OWORD *)a1 + 5);
    v2[4] = v9;
    v11 = *((_OWORD *)a1 + 6);
    v2[5] = v10;
    v12 = *((_OWORD *)a1 + 7);
    a1 = (const struct COMPOSITION_INPUT_SINK_V2 *)((char *)a1 + 128);
    v2[6] = v11;
    v2 += 8;
    *(v2 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = *(_OWORD *)a1;
  v14 = *((_QWORD *)a1 + 4);
  v15 = *((_OWORD *)a1 + 1);
  Object = 0LL;
  *v2 = v13;
  v2[1] = v15;
  *((_QWORD *)v2 + 4) = v14;
  inserted = CompositionInputObject::ValidateInputSink((const struct COMPOSITION_INPUT_SINK_V2 *)v42);
  IsCurrentProcessDwm = UserIsCurrentProcessDwm();
  v18 = IsCurrentProcessDwm ? 3 : -1073741824;
  if ( inserted < 0 )
    goto LABEL_18;
  v19 = UserAllocDefaultCompositionSecurityDescriptor(!IsCurrentProcessDwm ? 0xC0000000 : 0, (struct _ACL **)&Object);
  v20 = (char *)Object;
  inserted = v19;
  if ( v19 >= 0 )
  {
    v40[0] = 48LL;
    memset(&v40[1], 0, 24);
    v40[4] = Object;
    v40[5] = 0LL;
    KeEnterCriticalRegion();
    v21 = v41;
    v22 = v42;
    do
    {
      v23 = v22[1];
      *v21 = *v22;
      v24 = v22[2];
      v21[1] = v23;
      v25 = v22[3];
      v21[2] = v24;
      v26 = v22[4];
      v21[3] = v25;
      v27 = v22[5];
      v21[4] = v26;
      v28 = v22[6];
      v21[5] = v27;
      v29 = v22[7];
      v22 += 8;
      v21[6] = v28;
      v21 += 8;
      *(v21 - 1) = v29;
      --v3;
    }
    while ( v3 );
    v30 = *v22;
    v31 = v22[1];
    v32 = *((_QWORD *)v22 + 4);
    *v21 = v30;
    Object = 0LL;
    v21[1] = v31;
    *((_QWORD *)v21 + 4) = v32;
    inserted = ObCreateObject(0LL, ExCompositionObjectType, v40);
    if ( inserted >= 0 )
    {
      *(_DWORD *)Object = W32GetCurrentWin32kSessionId();
      LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)Object + 2);
      v34 = Object;
      inserted = LocallyUniqueId;
      if ( LocallyUniqueId < 0
        || (v35 = CompositionInputObject::ObjectInit(
                    (struct CompositionObject *)Object,
                    v41,
                    (struct ICompositionObject **)Object + 1),
            v34 = Object,
            inserted = v35,
            v35 < 0) )
      {
        ObfDereferenceObject(v34);
      }
      else
      {
        inserted = ObInsertObject(Object, 0LL, v18, 0, 0LL, &Handle);
      }
    }
    KeLeaveCriticalRegion();
    if ( inserted >= 0 )
    {
      v36 = Handle;
      *a2 = Handle;
      InputTraceLogging::InputSink::Create(v36, (const struct COMPOSITION_INPUT_SINK_V2 *)v42);
    }
  }
  if ( v20 )
    GreDeleteFastMutex(v20);
  if ( inserted < 0 )
  {
LABEL_18:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
  }
  return (unsigned int)inserted;
}
