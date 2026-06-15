/*
 * XREFs of ?IsFixedFormatApo@@YA_NPEAUIAudioProcessingObject@@@Z @ 0x14006C1D4
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140010750 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400116C8 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??0?$CComQIPtr@UIApoAcousticEchoCancellation@@$1?_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003E884 (--0-$CComQIPtr@UIApoAcousticEchoCancellation@@$1-_GUID_25385759_3236_4101_a943_25693dfb5d2d@@3U_.c)
 *     ??0?$CComQIPtr@UIAudioProcessingObjectInternal@@$1?_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x14003F2D4 (--0-$CComQIPtr@UIAudioProcessingObjectInternal@@$1-_GUID_69e1f79f_6eae_4517_be9f_13aa90e30014@@3.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall IsFixedFormatApo(struct IAudioProcessingObject *a1)
{
  char v2; // bl
  int v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  ATL::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>::CComQIPtr<IAudioProcessingObjectInternal,&__s_GUID const _GUID_69e1f79f_6eae_4517_be9f_13aa90e30014>(
    &v6,
    a1);
  ATL::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>::CComQIPtr<IApoAcousticEchoCancellation,&__s_GUID const _GUID_25385759_3236_4101_a943_25693dfb5d2d>(
    &v5,
    a1);
  v2 = 0;
  v4 = 0;
  if ( v5 || v6 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v6 + 24LL))(v6, &v4) >= 0 && (v4 & 1) != 0 )
    v2 = 1;
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v5);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v6);
  return v2;
}
