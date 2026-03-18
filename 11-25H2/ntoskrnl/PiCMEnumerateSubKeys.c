/*
 * XREFs of PiCMEnumerateSubKeys @ 0x1409520BC
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C5B30 (PiCMHandleIoctl.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404996EC (CmIsStateSeparationEnabled.c)
 *     PiCMReturnBufferResultData @ 0x1408C7B70 (PiCMReturnBufferResultData.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C9DA0 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C9F0C (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1409519EC (_PnpCtxRegQueryInfoKey.c)
 *     PiCMCaptureEnumerateInputData @ 0x1409522F4 (PiCMCaptureEnumerateInputData.c)
 *     _PnpCtxRegEnumKey @ 0x140952394 (_PnpCtxRegEnumKey.c)
 *     _RegRtlEnumKey @ 0x1409525D4 (_RegRtlEnumKey.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMEnumerateSubKeys(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r12
  unsigned int v9; // ebx
  void *Pool2; // rdi
  int v11; // esi
  int v12; // esi
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  int CachedNodeBaseKey; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int v19; // edx
  int CachedContextBaseKey; // eax
  HANDLE KeyHandle; // [rsp+50h] [rbp-20h] BYREF
  __int128 v22; // [rsp+58h] [rbp-18h] BYREF
  int v23; // [rsp+68h] [rbp-8h]

  v6 = a6;
  KeyHandle = 0LL;
  LODWORD(a6) = 0;
  v23 = 0;
  *v6 = 0;
  v22 = 0LL;
  v9 = 0;
  Pool2 = 0LL;
  v11 = PiCMCaptureEnumerateInputData(a1, a2, a3, &v22);
  if ( v11 < 0 )
    return (unsigned int)v11;
  if ( DWORD1(v22) || !a3 || a4 < 0x14 || a4 - 20 < 2 )
  {
LABEL_20:
    LODWORD(v16) = -1073741811;
    goto LABEL_16;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( Pool2 )
  {
    v12 = DWORD2(v22);
    v9 = (a4 - 20) >> 1;
    a5 = v9;
    switch ( DWORD2(v22) )
    {
      case 1:
        v19 = 5;
        break;
      case 2:
        v13 = *(_QWORD *)&PiPnpRtlCtx;
        v14 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 152LL);
        if ( !v14 )
        {
          v14 = *(_QWORD **)(*(_QWORD *)&PiPnpRtlCtx + 88LL);
          *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 152LL) = v14;
        }
        CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey(v13, v14, 7, &KeyHandle);
LABEL_12:
        LODWORD(v16) = CachedNodeBaseKey;
        if ( CachedNodeBaseKey < 0 )
          goto LABEL_16;
        v17 = HIDWORD(v22);
        LODWORD(v16) = RegRtlEnumKey(KeyHandle);
        if ( (_DWORD)v16 != -2147483622 )
          goto LABEL_14;
        if ( v12 == 3 && CmIsStateSeparationEnabled() )
        {
          LODWORD(v16) = PnpCtxRegQueryInfoKey(v16, (int)KeyHandle, (int)&a6, 0, 0LL, 0LL, 0LL);
          if ( (int)v16 >= 0 )
          {
            if ( v17 >= (unsigned int)a6 )
            {
              CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 9, &KeyHandle);
              LODWORD(v16) = CachedContextBaseKey;
              if ( CachedContextBaseKey >= 0 )
              {
                LODWORD(v16) = PnpCtxRegEnumKey(
                                 (unsigned int)CachedContextBaseKey,
                                 KeyHandle,
                                 v17 - (unsigned int)a6,
                                 Pool2,
                                 &a5);
LABEL_14:
                if ( (int)v16 >= 0 )
                {
                  v11 = PiCMReturnBufferResultData(v16, 2 * a5, 0, Pool2, 2 * a5, v23, a3, a4, v6);
                  goto LABEL_17;
                }
              }
            }
            else
            {
              LODWORD(v16) = -1073741595;
            }
          }
        }
        v9 = a5;
        goto LABEL_16;
      case 3:
        v19 = 8;
        break;
      default:
        goto LABEL_20;
    }
    CachedNodeBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, v19, &KeyHandle);
    goto LABEL_12;
  }
  LODWORD(v16) = -1073741670;
LABEL_16:
  v11 = PiCMReturnBufferResultData(v16, 2 * v9, 0, 0LL, 0, v23, a3, a4, v6);
  if ( Pool2 )
LABEL_17:
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  return (unsigned int)v11;
}
