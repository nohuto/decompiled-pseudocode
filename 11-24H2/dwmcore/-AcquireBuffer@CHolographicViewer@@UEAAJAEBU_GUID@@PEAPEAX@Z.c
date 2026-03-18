/*
 * XREFs of ?AcquireBuffer@CHolographicViewer@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802D37A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CHolographicViewer::AcquireBuffer(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  RTL_SRWLOCK *v3; // rbx
  PVOID Ptr; // rsi
  int v8; // eax
  unsigned int v9; // edi
  __int64 (__fastcall *v10)(PVOID, _QWORD, _QWORD); // rdi
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  __int64 (__fastcall ***v14)(_QWORD, const struct _GUID *, void **); // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  v3 = this + 14;
  AcquireSRWLockShared(this + 14);
  Ptr = this[10].Ptr;
  if ( Ptr )
  {
    v10 = *(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    v11 = v10(Ptr, 0LL, &v14);
    v9 = v11;
    if ( v11 < 0 )
    {
      v13 = 106;
    }
    else
    {
      v11 = (**v14)(v14, a2, a3);
      v9 = v11;
      if ( v11 >= 0 )
        goto LABEL_10;
      v13 = 107;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v13, 0LL);
    goto LABEL_10;
  }
  v8 = (int)this[13].Ptr;
  v9 = -2005270490;
  if ( v8 != 3 )
    v9 = -2005270527;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x67u, 0LL);
LABEL_10:
  ReleaseSRWLockShared(v3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
  return v9;
}
