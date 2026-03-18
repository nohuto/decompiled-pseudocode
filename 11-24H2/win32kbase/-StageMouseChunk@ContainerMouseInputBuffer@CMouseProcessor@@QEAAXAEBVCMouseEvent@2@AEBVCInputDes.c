/*
 * XREFs of ?StageMouseChunk@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@AEBVCInputDest@@@Z @ 0x14021EAFC
 * Callers:
 *     ?BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z @ 0x140050B98 (-BufferInputDestinedForContainer@CMouseProcessor@@AEAA_NAEBVCMouseEvent@1@AEBVCInputDest@@@Z.c)
 * Callees:
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?InverseTransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1401AA7B0 (-InverseTransformPoint@@YA-AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x1401F3550 (-GetContainerHwndDest@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ?GetContainerId@CInputDest@@QEBA?AUCONTAINER_ID@@XZ @ 0x1401F3574 (-GetContainerId@CInputDest@@QEBA-AUCONTAINER_ID@@XZ.c)
 *     ApiSetGetLatestInputTransform @ 0x140222358 (ApiSetGetLatestInputTransform.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

void __fastcall CMouseProcessor::ContainerMouseInputBuffer::StageMouseChunk(
        CMouseProcessor::ContainerMouseInputBuffer *this,
        const struct CMouseProcessor::CMouseEvent *a2,
        const struct CInputDest *a3)
{
  int (*v6)(void); // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void (*v9)(void); // rax
  HWND WindowHandle; // rbx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  float *v13; // rax
  int v14; // edx
  unsigned __int64 v15; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v16[8]; // [rsp+28h] [rbp-70h] BYREF
  float v17[16]; // [rsp+30h] [rbp-68h] BYREF

  v6 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(this, a2) + 48) + 7504LL);
  if ( v6 )
  {
    if ( v6() >= 0 )
    {
      v9 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8, v7) + 48) + 7512LL);
      if ( v9 )
        v9();
    }
  }
  (*(void (__fastcall **)(const struct CMouseProcessor::CMouseEvent *, _QWORD))(*(_QWORD *)a2 + 24LL))(
    a2,
    *((_QWORD *)this + 129));
  *(_QWORD *)(*((_QWORD *)this + 129) + 56LL) = CInputDest::GetContainerHwndDest(a3);
  WindowHandle = CInputDest::GetWindowHandle(a3);
  memset(v17, 0, sizeof(v17));
  if ( (unsigned int)ApiSetGetLatestInputTransform(WindowHandle, v17) )
  {
    *((_BYTE *)this + 1040) = 1;
    v11 = (unsigned int)*CInputDest::GetContainerId(a3);
    *((_DWORD *)this + 264) = v11;
    UserSessionState = W32GetUserSessionState(v11);
    v15 = _mm_unpacklo_ps(
            (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19240)),
            (__m128)COERCE_UNSIGNED_INT((float)*(int *)(UserSessionState + 19244))).m128_u64[0];
    v13 = (float *)InverseTransformPoint((__int64)v16, (float *)&v15, v17);
    v14 = (int)v13[1];
    *(_DWORD *)(*((_QWORD *)this + 129) + 12LL) = (int)*v13;
    *(_DWORD *)(*((_QWORD *)this + 129) + 16LL) = v14;
  }
}
