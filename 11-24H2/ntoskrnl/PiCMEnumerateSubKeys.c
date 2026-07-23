/*
 * XREFs of PiCMEnumerateSubKeys @ 0x14097D49C
 * Callers:
 *     PiCMHandleIoctl @ 0x1408C13C0 (PiCMHandleIoctl.c)
 * Callees:
 *     CmIsStateSeparationEnabled @ 0x1404941EC (CmIsStateSeparationEnabled.c)
 *     PiCMReturnBufferResultData @ 0x1408C3020 (PiCMReturnBufferResultData.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1408C5740 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C58AC (_PnpCtxGetCachedContextBaseKey.c)
 *     PiCMCaptureEnumerateInputData @ 0x14097D6D4 (PiCMCaptureEnumerateInputData.c)
 *     _PnpCtxRegEnumKey @ 0x14097D774 (_PnpCtxRegEnumKey.c)
 *     _RegRtlEnumKey @ 0x14097D9B4 (_RegRtlEnumKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x14097EF98 (_PnpCtxRegQueryInfoKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  int InfoKey; // ecx
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
    InfoKey = -1073741811;
    goto LABEL_16;
  }
  Pool2 = (void *)ExAllocatePool2(0x100uLL, a4 - 20, 0x34706E50u);
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
        InfoKey = CachedNodeBaseKey;
        if ( CachedNodeBaseKey < 0 )
          goto LABEL_16;
        v17 = HIDWORD(v22);
        InfoKey = RegRtlEnumKey(KeyHandle);
        if ( InfoKey != -2147483622 )
          goto LABEL_14;
        if ( v12 == 3 && CmIsStateSeparationEnabled() )
        {
          InfoKey = PnpCtxRegQueryInfoKey(InfoKey, (_DWORD)KeyHandle, (unsigned int)&a6, 0, 0LL, 0LL, 0LL);
          if ( InfoKey >= 0 )
          {
            if ( v17 >= (unsigned int)a6 )
            {
              CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 9, &KeyHandle);
              InfoKey = CachedContextBaseKey;
              if ( CachedContextBaseKey >= 0 )
              {
                InfoKey = PnpCtxRegEnumKey(
                            (unsigned int)CachedContextBaseKey,
                            KeyHandle,
                            v17 - (unsigned int)a6,
                            Pool2,
                            &a5);
LABEL_14:
                if ( InfoKey >= 0 )
                {
                  v11 = PiCMReturnBufferResultData(InfoKey, 2 * a5, 0, Pool2, 2 * a5, v23, a3, a4, v6);
                  goto LABEL_17;
                }
              }
            }
            else
            {
              InfoKey = -1073741595;
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
  InfoKey = -1073741670;
LABEL_16:
  v11 = PiCMReturnBufferResultData(InfoKey, 2 * v9, 0, 0LL, 0, v23, a3, a4, v6);
  if ( Pool2 )
LABEL_17:
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  return (unsigned int)v11;
}
