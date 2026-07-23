/*
 * XREFs of PiCMGetObjectPropertyKeys @ 0x140A5DA64
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140438B40 (PiControlFreeUserModeCallersBuffer.c)
 *     PiCMCaptureObjectInputData @ 0x1408BC4E0 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     _PnpGetObjectPropertyKeys @ 0x14097C800 (_PnpGetObjectPropertyKeys.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetObjectPropertyKeys(
        unsigned __int64 a1,
        unsigned int a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r13
  void *Pool2; // rdi
  int v10; // ebx
  int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  int ObjectPropertyKeys; // eax
  int v16; // r10d
  int v17; // eax
  int v19; // [rsp+20h] [rbp-60h]
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h]
  __int64 v22; // [rsp+70h] [rbp-10h]

  v6 = a6;
  LODWORD(a6) = 0;
  *v6 = 0;
  v20 = 0LL;
  v22 = 0LL;
  Pool2 = 0LL;
  v21 = 0LL;
  v10 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v20);
  if ( v10 < 0 )
    goto LABEL_22;
  if ( !(_QWORD)v21 || DWORD1(v20) || HIDWORD(v21) || !a3 || a4 < 0x14 )
    goto LABEL_18;
  v11 = 6;
  if ( SDWORD2(v20) > 6 )
  {
    switch ( DWORD2(v20) )
    {
      case 0x10001:
        v11 = 7;
        break;
      case 0x10002:
        v11 = 8;
        break;
      case 0x10003:
        v11 = 9;
        break;
      case 0x10004:
        v11 = 10;
        break;
      case 0x10005:
        v11 = 11;
        break;
      default:
        goto LABEL_18;
    }
    if ( PiDrvDbCtx )
      goto LABEL_11;
LABEL_18:
    v16 = -1073741811;
    goto LABEL_19;
  }
  if ( DWORD2(v20) != 6 )
  {
    switch ( DWORD2(v20) )
    {
      case 1:
        v11 = 1;
        goto LABEL_11;
      case 2:
        v11 = 2;
        goto LABEL_11;
      case 3:
        v11 = 4;
        goto LABEL_11;
      case 4:
        v11 = 3;
        goto LABEL_11;
      case 5:
        v11 = 5;
        goto LABEL_11;
    }
    goto LABEL_18;
  }
LABEL_11:
  v12 = 0;
  if ( a4 - 20 >= 0x14 )
    v12 = a4 - 20;
  if ( v12 )
  {
    v13 = v12;
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v12, 0x34706E50u);
    if ( !Pool2 )
    {
      v16 = -1073741670;
      goto LABEL_19;
    }
    v14 = v13 / 0x14;
  }
  else
  {
    LODWORD(v14) = 0;
  }
  LODWORD(a6) = v14;
  ObjectPropertyKeys = PnpGetObjectPropertyKeys(
                         *(__int64 *)&PiPnpRtlCtx,
                         v21,
                         v11,
                         0LL,
                         v19,
                         0,
                         (__int64)Pool2,
                         v14,
                         (__int64)&a6);
  v16 = ObjectPropertyKeys;
  if ( ObjectPropertyKeys >= 0 )
  {
    v17 = PiCMReturnBufferResultData(ObjectPropertyKeys, 20 * (int)a6, 0, Pool2, 20 * (int)a6, v22, a3, a4, v6);
    goto LABEL_20;
  }
LABEL_19:
  v17 = PiCMReturnBufferResultData(v16, 20 * (int)a6, 0, 0LL, 0, v22, a3, a4, v6);
LABEL_20:
  v10 = v17;
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
LABEL_22:
  if ( (_QWORD)v21 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v21);
  return (unsigned int)v10;
}
