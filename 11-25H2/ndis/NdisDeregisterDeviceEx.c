/*
 * XREFs of NdisDeregisterDeviceEx @ 0x14008DEC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

void __stdcall NdisDeregisterDeviceEx(NDIS_HANDLE NdisDeviceHandle)
{
  char *v2; // rcx
  char v3; // al
  KSPIN_LOCK *v4; // rdi
  KIRQL v5; // al
  _QWORD *v6; // r9
  NDIS_HANDLE *v7; // rdx
  __int64 v8; // rdi
  NDIS_HANDLE *v9; // r9
  NDIS_HANDLE *v10; // rdx
  KSPIN_LOCK *v11; // rcx
  NDIS_HANDLE *v12; // r9
  NDIS_HANDLE *v13; // r8

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      113,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)NdisDeviceHandle);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  v2 = (char *)*((_QWORD *)NdisDeviceHandle + 3);
  v3 = *v2;
  if ( *v2 == 2 )
  {
    v4 = (KSPIN_LOCK *)(v2 + 392);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 49);
    v12 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
    if ( v12[1] != (char *)NdisDeviceHandle + 8 )
      goto LABEL_15;
    v13 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
    if ( *v13 != (char *)NdisDeviceHandle + 8 )
      goto LABEL_15;
LABEL_18:
    *v13 = v12;
    v12[1] = v13;
    goto LABEL_19;
  }
  if ( v3 == 4 )
  {
    v4 = (KSPIN_LOCK *)(v2 + 40);
    v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 5);
    v12 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
    if ( v12[1] != (char *)NdisDeviceHandle + 8 )
      goto LABEL_15;
    v13 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
    if ( *v13 != (char *)NdisDeviceHandle + 8 )
      goto LABEL_15;
    goto LABEL_18;
  }
  if ( v3 != 17 )
  {
    if ( v3 != -86 )
      goto LABEL_21;
    v4 = (KSPIN_LOCK *)((char *)IoGetDriverObjectExtension(**((PDRIVER_OBJECT **)v2 + 1), (PVOID)0x4E4D4944) + 392);
    v5 = KeAcquireSpinLockRaiseToDpc(v4);
    v6 = (_QWORD *)*((_QWORD *)NdisDeviceHandle + 1);
    if ( (NDIS_HANDLE)v6[1] == (char *)NdisDeviceHandle + 8 )
    {
      v7 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
      if ( *v7 == (char *)NdisDeviceHandle + 8 )
      {
        *v7 = v6;
        v6[1] = v7;
LABEL_19:
        v11 = v4;
        goto LABEL_20;
      }
    }
LABEL_15:
    __fastfail(3u);
  }
  v8 = *((_QWORD *)v2 + 470);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 392));
  v9 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 1);
  if ( v9[1] != (char *)NdisDeviceHandle + 8 )
    goto LABEL_15;
  v10 = (NDIS_HANDLE *)*((_QWORD *)NdisDeviceHandle + 2);
  if ( *v10 != (char *)NdisDeviceHandle + 8 )
    goto LABEL_15;
  *v10 = v9;
  v11 = (KSPIN_LOCK *)(v8 + 392);
  v9[1] = v10;
LABEL_20:
  KeReleaseSpinLock(v11, v5);
LABEL_21:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  IoDeleteSymbolicLink((PUNICODE_STRING)NdisDeviceHandle + 18);
  IoDeleteDevice(*((PDEVICE_OBJECT *)NdisDeviceHandle + 4));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      114,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)NdisDeviceHandle);
}
