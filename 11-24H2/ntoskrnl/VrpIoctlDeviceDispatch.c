/*
 * XREFs of VrpIoctlDeviceDispatch @ 0x14092B3C0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     IofCompleteRequest @ 0x1403CCDA0 (IofCompleteRequest.c)
 *     EtwActivityIdControl @ 0x1404123E0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x140829C2C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140829F14 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlModifyFlags @ 0x14082A14C (VrpHandleIoctlModifyFlags.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14082A254 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VRegEnabledInJob @ 0x14092B820 (VRegEnabledInJob.c)
 *     VrpHandleIoctlCreateNamespaceNode @ 0x14092B88C (VrpHandleIoctlCreateNamespaceNode.c)
 *     VrpHandleIoctlGetVirtualRootKey @ 0x14092BAE4 (VrpHandleIoctlGetVirtualRootKey.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14092C3D8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1409F75EC (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlUnloadDynamicallyLoadedHives @ 0x140A5BD80 (VrpHandleIoctlUnloadDynamicallyLoadedHives.c)
 */

__int64 __fastcall VrpIoctlDeviceDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int DifferencingHive; // eax
  unsigned int v13; // esi
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  int v19; // ebx
  unsigned int v20; // eax
  void *v21; // [rsp+28h] [rbp-29h]
  void *v22; // [rsp+30h] [rbp-21h]
  unsigned int v23; // [rsp+38h] [rbp-19h] BYREF
  GUID v24; // [rsp+40h] [rbp-11h] BYREF
  GUID ActivityId; // [rsp+50h] [rbp-1h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26[2]; // [rsp+60h] [rbp+Fh] BYREF
  unsigned int *v27; // [rsp+80h] [rbp+2Fh]
  int v28; // [rsp+88h] [rbp+37h]
  int v29; // [rsp+8Ch] [rbp+3Bh]

  v2 = *(_QWORD *)(a2 + 184);
  v3 = a2 + 56;
  *(_QWORD *)(a2 + 56) = 0LL;
  v24 = 0LL;
  ActivityId = 0LL;
  v5 = *(_DWORD *)(v2 + 24);
  if ( (unsigned int)VRegEnabledInJob(&v23) && !VrpAllowContainerNesting )
  {
    v13 = -1073741808;
    if ( (unsigned int)dword_140E0A620 > 2 )
    {
      v29 = 0;
      v27 = &v23;
      v23 = v5;
      v28 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E0A620,
        (unsigned __int8 *)word_140059722,
        &v24,
        0LL,
        3u,
        v26);
    }
    goto LABEL_9;
  }
  EtwActivityIdControl(1u, &ActivityId);
  v8 = dword_140E0A620;
  if ( (unsigned int)dword_140E0A620 > 4 )
  {
    v29 = 0;
    v27 = &v23;
    v23 = v5;
    v28 = 4;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E0A620,
      (unsigned __int8 *)&word_1400596D6,
      &v24,
      &ActivityId,
      3u,
      v26);
    v8 = dword_140E0A620;
  }
  v9 = v5 - 2228228;
  if ( !v9 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlInitializeJobForVreg(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         v22);
    goto LABEL_8;
  }
  v10 = v9 - 4;
  if ( !v10 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlLoadDifferencingHive(*(_QWORD *)(a2 + 24), *(unsigned int *)(v2 + 16), v6);
    goto LABEL_8;
  }
  v11 = v10 - 4;
  if ( !v11 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateNamespaceNode(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         (__int64)v22);
LABEL_8:
    v13 = DifferencingHive;
    goto LABEL_9;
  }
  v15 = v11 - 4;
  if ( !v15 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlModifyFlags(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         (__int64)v22);
    goto LABEL_8;
  }
  v16 = v15 - 4;
  if ( !v16 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlCreateMultipleNamespaceNodes(
                         *(ULONG_PTR **)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         (__int64)v21,
                         v22);
    goto LABEL_8;
  }
  v17 = v16 - 4;
  if ( !v17 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlUnloadDynamicallyLoadedHives(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         v21,
                         (__int64)v22);
    goto LABEL_8;
  }
  v18 = v17 - 4;
  if ( !v18 )
  {
    LOBYTE(v6) = *(_BYTE *)(a2 + 64);
    DifferencingHive = VrpHandleIoctlGetVirtualRootKey(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         v6,
                         v7,
                         *(_QWORD *)(a2 + 24),
                         v3);
    goto LABEL_8;
  }
  v19 = v18 - 4;
  if ( !v19 )
  {
    DifferencingHive = VrpHandleIoctlLoadDifferencingHiveForHost(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         *(_BYTE *)(a2 + 64));
    goto LABEL_8;
  }
  if ( v19 == 4 )
  {
    DifferencingHive = VrpHandleIoctlUnloadDifferencingHiveForHost(
                         *(_QWORD *)(a2 + 24),
                         *(_DWORD *)(v2 + 16),
                         *(_BYTE *)(a2 + 64));
    goto LABEL_8;
  }
  if ( v8 > 2 )
  {
    v20 = *(_DWORD *)(v2 + 24);
    v29 = 0;
    v23 = v20;
    v28 = 4;
    v27 = &v23;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A620, (unsigned __int8 *)word_1400596AA, &v24, 0LL, 3u, v26);
  }
  v13 = -1073741808;
LABEL_9:
  *(_DWORD *)(a2 + 48) = v13;
  IofCompleteRequest((PIRP)a2, 0);
  if ( (unsigned int)dword_140E0A620 > 4 )
  {
    v29 = 0;
    v27 = &v23;
    v23 = v13;
    v28 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E0A620, (unsigned __int8 *)byte_1400596FB, &v24, 0LL, 3u, v26);
  }
  return v13;
}
