/*
 * XREFs of ACPIBuildMissingEjectionRelations @ 0x14003D6B8
 * Callers:
 *     ACPIDetectEjectDevices @ 0x14003CD1C (ACPIDetectEjectDevices.c)
 * Callees:
 *     FreeDataBuffs @ 0x14000E530 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x140010850 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x140014164 (AMLIEvalNameSpaceObject.c)
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1400174E8 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 *     AMLIGetNamedChild @ 0x14001D630 (AMLIGetNamedChild.c)
 *     AMLIGetNameSpaceObject @ 0x140028510 (AMLIGetNameSpaceObject.c)
 *     ACPIInternalMoveList @ 0x14003DA40 (ACPIInternalMoveList.c)
 */

__int64 ACPIBuildMissingEjectionRelations()
{
  KIRQL v0; // si
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  _QWORD *v3; // rcx
  __int64 *v4; // r14
  int v5; // ebx
  KIRQL v6; // al
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rdx
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v16[2]; // [rsp+40h] [rbp-30h] BYREF
  void *Src; // [rsp+60h] [rbp-10h]
  __int64 v18; // [rsp+A0h] [rbp+30h] BYREF

  Src = 0LL;
  v15[1] = v15;
  v15[0] = v15;
  memset(v16, 0, sizeof(v16));
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (__int64 *)AcpiUnresolvedEjectList != &AcpiUnresolvedEjectList )
  {
    ACPIInternalMoveList(&AcpiUnresolvedEjectList, v15);
    while ( 1 )
    {
      do
      {
        if ( (_QWORD *)v15[0] == v15 )
          goto LABEL_25;
        v1 = *(_QWORD *)v15[0];
        v2 = v15[0] - 848LL;
        v18 = 0LL;
        if ( *(_QWORD *)(v1 + 8) != v15[0] || (v3 = *(_QWORD **)(v15[0] + 8LL), *v3 != v15[0]) )
LABEL_24:
          __fastfail(3u);
        *v3 = v1;
        *(_QWORD *)(v1 + 8) = v3;
        v4 = AMLIGetNamedChild(*(__int64 **)(v2 + 760), 1145718111);
      }
      while ( !v4 );
      _InterlockedIncrement((volatile signed __int32 *)(v2 + 732));
      KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
      v5 = AMLIEvalNameSpaceObject(v4, (__int64)v16, 0, 0LL);
      if ( ACPIInitDereferenceDeviceExtensionUnlocked(v2) )
      {
        v6 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        v7 = v18;
        v0 = v6;
      }
      else
      {
        v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        if ( v5 < 0 )
        {
          v8 = (_QWORD *)qword_14008B2A8;
          v9 = (_QWORD *)(v2 + 848);
          if ( *(__int64 **)qword_14008B2A8 != &AcpiUnresolvedEjectList )
            goto LABEL_24;
          v7 = v18;
LABEL_20:
          *v9 = &AcpiUnresolvedEjectList;
          v9[1] = v8;
          *v8 = v9;
          qword_14008B2A8 = (__int64)v9;
          goto LABEL_21;
        }
        if ( WORD1(v16[0]) != 2 )
          KeBugCheckEx(0xA5u, 0xAuLL, v2, (ULONG_PTR)v4, WORD1(v16[0]));
        v10 = AMLIGetNameSpaceObject(Src, 0LL, &v18, 0);
        v7 = v18;
        if ( v10 < 0
          || (dword_1400890B8 = 0, pszDest = 0, FreeDataBuffs((__int64)v16, 1u), !v7)
          || (v11 = *(_QWORD *)(*(_QWORD *)v7 + 104LL)) == 0 )
        {
          v8 = (_QWORD *)qword_14008B2A8;
          v9 = (_QWORD *)(v2 + 848);
          if ( *(__int64 **)qword_14008B2A8 != &AcpiUnresolvedEjectList )
            goto LABEL_24;
          goto LABEL_20;
        }
        v12 = (_QWORD *)(v2 + 848);
        v13 = *(_QWORD **)(v11 + 840);
        if ( *v13 != v11 + 832 )
          goto LABEL_24;
        *v12 = v11 + 832;
        v12[1] = v13;
        *v13 = v12;
        *(_QWORD *)(v11 + 840) = v12;
        if ( (*(_DWORD *)(v11 + 8) & 0x208) == 0x200LL )
          IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(v11 + 784), EjectionRelations);
      }
LABEL_21:
      AMLIDereferenceHandleEx((__int64)v4);
      if ( v7 )
        AMLIDereferenceHandleEx(v7);
    }
  }
LABEL_25:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
  return 0LL;
}
