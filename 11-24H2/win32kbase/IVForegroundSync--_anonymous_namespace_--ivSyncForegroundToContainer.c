/*
 * XREFs of IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer @ 0x140218714
 * Callers:
 *     ?ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@Z @ 0x1402182E0 (-ivSendForegroundUpdate@IVForegroundSync@@YAXPEAUHWND__@@W4ACTIVATIONOBJECTSTATECHANGE_REASON@@@.c)
 * Callees:
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x140199058 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x140199A64 (--1CIVSerializer@@UEAA@XZ.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AA7B0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z @ 0x14020FC40 (-GetTransform@CDesktopInputSink@@SA_NPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x140217880 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer(struct CONTAINER_ID *a1, int a2)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  float *v8; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-29h] BYREF
  _QWORD *v10; // [rsp+30h] [rbp-19h]
  float v11[16]; // [rsp+50h] [rbp+7h] BYREF
  unsigned __int64 v12; // [rsp+C0h] [rbp+77h] BYREF
  char v13; // [rsp+C8h] [rbp+7Fh] BYREF

  CIVSerializer::CIVSerializer((__int64)v9, 10);
  v4 = v10;
  v9[0] = &CIVGenericSerializer::`vftable';
  if ( v10 )
  {
    *v10 = *((_QWORD *)a1 + 1);
    *((_DWORD *)v4 + 2) = a2;
    memset(v11, 0, sizeof(v11));
    v5 = 0xFFFF8300FFFF8300uLL;
    if ( CDesktopInputSink::GetTransform((struct tagINPUT_TRANSFORM *)v11) )
    {
      UserSessionState = W32GetUserSessionState(v6);
      v12 = _mm_unpacklo_ps(
              (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19240)),
              (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19244))).m128_u64[0];
      v8 = (float *)InverseTransformPoint((__int64)&v13, (float *)&v12, v11);
      v12 = __PAIR64__((int)v8[1], (int)*v8);
      v5 = v12;
    }
    *(_QWORD *)((char *)v4 + 12) = v5;
    ivrIVSend((const struct CIVSerializer *)v9, 3u, a1);
  }
  v9[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v9);
}
