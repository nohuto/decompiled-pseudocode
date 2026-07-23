/*
 * XREFs of PiCMOpenObjectKey @ 0x14094B5B8
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     _PnpCreateObject @ 0x14081B09C (_PnpCreateObject.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1408511D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x1408B9FF8 (PiAuDoesClientHaveAccess.c)
 *     _PnpOpenObjectRegKey @ 0x1408CAE28 (_PnpOpenObjectRegKey.c)
 *     PiCMCaptureRegistryInputData @ 0x14094B8B8 (PiCMCaptureRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x14094BBB4 (PiCMReturnHandleResultData.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMOpenObjectKey(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  KPROCESSOR_MODE PreviousMode; // r13
  int v9; // ebx
  int v10; // ebx
  int v11; // edi
  NTSTATUS v12; // eax
  PVOID v13; // rbx
  __int64 v15; // rcx
  PVOID Object; // [rsp+48h] [rbp-19h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-11h] BYREF
  HANDLE v18; // [rsp+58h] [rbp-9h] BYREF
  __int128 v19; // [rsp+60h] [rbp-1h] BYREF
  ACCESS_MASK DesiredAccess[4]; // [rsp+70h] [rbp+Fh]
  __int128 v21; // [rsp+80h] [rbp+1Fh]

  Handle = 0LL;
  v18 = 0LL;
  *a6 = 0;
  v19 = 0LL;
  *(_OWORD *)DesiredAccess = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v21 = 0LL;
  v9 = PiCMCaptureRegistryInputData(a1, a2, a5, &v19);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( !*(_QWORD *)DesiredAccess || DWORD1(v19) || DWORD1(v21) || !a3 || a4 < 0x10 )
    goto LABEL_29;
  v10 = 6;
  if ( SDWORD2(v19) > 6 )
  {
    switch ( DWORD2(v19) )
    {
      case 0x10001:
        v10 = 7;
        break;
      case 0x10002:
        v10 = 8;
        break;
      case 0x10003:
        v10 = 9;
        break;
      case 0x10004:
        v10 = 10;
        break;
      case 0x10005:
        v10 = 11;
        break;
      default:
        goto LABEL_29;
    }
    if ( PiDrvDbCtx )
    {
      if ( (unsigned int)(v10 - 5) > 1 )
        goto LABEL_12;
      goto LABEL_31;
    }
LABEL_29:
    v11 = -1073741811;
    goto LABEL_18;
  }
  if ( DWORD2(v19) == 6 )
    goto LABEL_31;
  if ( DWORD2(v19) != 1 )
  {
    switch ( DWORD2(v19) )
    {
      case 2:
        v10 = 2;
        goto LABEL_12;
      case 3:
        v10 = 4;
        goto LABEL_12;
      case 4:
        v10 = 3;
        goto LABEL_31;
      case 5:
        v10 = 5;
LABEL_31:
        if ( (_DWORD)v21 == 1 )
          goto LABEL_10;
LABEL_12:
        v11 = PnpOpenObjectRegKey(
                *(_QWORD **)&PiPnpRtlCtx,
                *(WCHAR **)DesiredAccess,
                v10,
                DesiredAccess[3],
                0,
                (__int64)&Handle);
        if ( v11 == -1073741772 )
        {
          if ( (_DWORD)v21 != 1 )
            goto LABEL_18;
          if ( !PiAuDoesClientHaveAccess(2u) )
          {
            v11 = -1073741790;
            goto LABEL_18;
          }
          v11 = PnpCreateObject(v15, *(__int64 *)DesiredAccess, v10, DesiredAccess[3], &Handle);
        }
        if ( v11 >= 0 )
        {
          Object = 0LL;
          v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
          v13 = Object;
          v11 = v12;
          if ( v12 >= 0 )
            v11 = ObOpenObjectByPointer(
                    Object,
                    0x440u,
                    0LL,
                    DesiredAccess[3],
                    (POBJECT_TYPE)CmKeyObjectType,
                    PreviousMode,
                    &v18);
          if ( v13 )
            ObfDereferenceObject(v13);
        }
        goto LABEL_18;
    }
    goto LABEL_29;
  }
LABEL_10:
  v11 = -1073741637;
LABEL_18:
  v9 = PiCMReturnHandleResultData(v11, (_DWORD)v18, DWORD2(v21), a3, a4, (__int64)a6);
  if ( Handle )
    ZwClose(Handle);
  if ( v9 < 0 && v18 )
    ObCloseHandle(v18, PreviousMode);
LABEL_21:
  if ( *(_QWORD *)DesiredAccess && KeGetCurrentThread()->PreviousMode )
    ExFreePoolWithTag(*(PVOID *)DesiredAccess, 0);
  return (unsigned int)v9;
}
