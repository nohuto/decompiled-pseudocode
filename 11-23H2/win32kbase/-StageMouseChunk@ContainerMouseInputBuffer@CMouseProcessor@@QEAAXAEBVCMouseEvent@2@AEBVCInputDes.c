/*
 * XREFs of ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x1C01FB300
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x1C0057574 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C00563C4 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C01308E0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1C01B552C (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1C01B5550 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ApiSetGetLatestInputTransform @ 0x1C0207C28 (ApiSetGetLatestInputTransform.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  HWND WindowHandle; // rbx
  float *v7; // rax
  int v8; // edx
  unsigned __int64 v9; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v10[8]; // [rsp+28h] [rbp-70h] BYREF
  float v11[16]; // [rsp+30h] [rbp-68h] BYREF

  if ( qword_1C0296E58 && (int)qword_1C0296E58() >= 0 && qword_1C0296E60 )
    qword_1C0296E60();
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD))(*(_QWORD *)a2 + 24LL))(
    a2,
    *((_QWORD *)this + 129));
  *(_QWORD *)(*((_QWORD *)this + 129) + 56LL) = CInputDest::GetContainerHwndDest(a3);
  WindowHandle = CInputDest::GetWindowHandle(a3);
  memset(v11, 0, sizeof(v11));
  if ( (unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v11) )
  {
    *((_BYTE *)this + 1040) = 1;
    *((_DWORD *)this + 264) = *CInputDest::GetContainerId(a3);
    v9 = _mm_unpacklo_ps(
           (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.x),
           (__m128)COERCE_UNSIGNED_INT((float)gptCursorAsync.y)).m128_u64[0];
    v7 = (float *)InverseTransformPoint((__int64)v10, (float *)&v9, v11);
    v8 = (int)v7[1];
    *(_DWORD *)(*((_QWORD *)this + 129) + 12LL) = (int)*v7;
    *(_DWORD *)(*((_QWORD *)this + 129) + 16LL) = v8;
  }
}
