/*
 * XREFs of imp_WdfPdoRetrieveIdentificationDescription @ 0x14005B550
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_sq @ 0x1400373C0 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400ACC80 (memmove.c)
 */

__int64 __fastcall imp_WdfPdoRetrieveIdentificationDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Device,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  _FX_DRIVER_GLOBALS *v5; // r14
  __int64 v6; // rcx
  _FX_DRIVER_GLOBALS **flags; // rbx
  _FX_DRIVER_GLOBALS *v8; // rax
  _FX_DRIVER_GLOBALS *v9; // rdi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  void (__fastcall *v15)(unsigned __int64, const void *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  _FX_DRIVER_GLOBALS *v16; // rax
  unsigned __int8 v17; // dl
  unsigned int v18; // r8d
  unsigned __int16 v19; // r9
  __int16 v20; // r8
  unsigned __int64 v21; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  _FX_DRIVER_GLOBALS ***v23; // [rsp+50h] [rbp-28h] BYREF
  __int16 v24; // [rsp+58h] [rbp-20h]
  __int16 v25; // [rsp+5Ah] [rbp-1Eh]
  int v26; // [rsp+5Ch] [rbp-1Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]
  _FX_DRIVER_GLOBALS **v28; // [rsp+88h] [rbp+10h] BYREF

  v5 = 0LL;
  if ( !Device )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1002uLL);
  LOWORD(v6) = 0;
  flags = (_FX_DRIVER_GLOBALS **)(~Device & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Device & 1) != 0 )
  {
    v6 = *(unsigned __int16 *)flags;
    flags = (_FX_DRIVER_GLOBALS **)((char *)flags - v6);
  }
  if ( *((_WORD *)flags + 4) == 4098 )
  {
    v28 = flags;
  }
  else
  {
    v28 = 0LL;
    v23 = &v28;
    v25 = v6;
    v26 = 0;
    v16 = *flags;
    v24 = 4098;
    if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, _FX_DRIVER_GLOBALS ****))v16->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
           flags,
           &v23) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags[2],
        v17,
        v18,
        v19,
        traceGuid,
        (const void *)Device,
        0x1002u,
        flags,
        *((unsigned __int16 *)flags + 4));
      FxVerifierBugCheckWorker(flags[2], WDF_INVALID_HANDLE, Device, 0x1002uLL);
    }
    flags = v28;
  }
  v8 = flags[81];
  v9 = flags[2];
  if ( v8 && LOWORD(v8->Linkage.Blink) == 4354 )
  {
    v5 = flags[81];
    result = 0LL;
  }
  else
  {
    WPP_IFR_SF_sq(
      v9,
      2u,
      0x12u,
      0xAu,
      WPP_FxDevicePdoAPI_cpp_Traceguids,
      "imp_WdfPdoRetrieveIdentificationDescription",
      (const void *)Device);
    result = 3221225485LL;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(v9, retaddr);
  if ( (int)result >= 0 )
  {
    v11 = *(_QWORD *)&v5[3].FxPoolFrameworks.PagedLock.m_Lock.Event.Header.Lock;
    if ( v11
      && (v12 = *(_QWORD *)(v11 + 72), !*(_BYTE *)(v12 + 309))
      && (v13 = *(unsigned int *)(v12 + 176), (_DWORD)v13 == IdentificationDescription->IdentificationDescriptionSize) )
    {
      v14 = *(const void **)(v11 + 24);
      v15 = *(void (__fastcall **)(unsigned __int64, const void *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *))(v12 + 200);
      if ( v15 )
      {
        v20 = *(_WORD *)(v12 + 10);
        v21 = v12 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v20 )
          v21 = 0LL;
        v15(v21, v14, IdentificationDescription);
      }
      else
      {
        memmove(IdentificationDescription, v14, v13);
      }
      return 0LL;
    }
    else
    {
      return 3221225488LL;
    }
  }
  return result;
}
