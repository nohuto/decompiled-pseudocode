/*
 * XREFs of ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0162394
 * Callers:
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0161F38 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0155C5C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 *     ?DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z @ 0x1C0160794 (-DevmodeAutoRotateCompatible@@YA_NPEBU_devicemodeW@@0@Z.c)
 *     ?DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0160D84 (-DrvCheckGraphicsDeviceForSmoothRotation@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInPdev(HDEV a1, struct D3DKMT_GETPATHSMODALITY *a2)
{
  HDEV v3; // rbx
  unsigned int updated; // esi
  _DWORD *v5; // rdx
  unsigned int v6; // r8d
  __int64 v7; // rcx
  struct _devicemodeW *v8; // rdi
  __int64 v9; // rcx
  struct _ERESOURCE *v10; // rcx
  __int64 v11; // rcx
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rcx
  HDEV v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = a1;
  v3 = a1;
  updated = 0;
  SGDGetSessionState(a1);
  EngAcquireSemaphore(*((HSEMAPHORE *)v3 + 7));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemPointer()", *((_QWORD *)v3 + 7), 4);
  EngAcquireSemaphore(*((HSEMAPHORE *)v3 + 6));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *((_QWORD *)v3 + 6), 11);
  if ( *((_QWORD *)v3 + 321) )
  {
    if ( !(unsigned int)DrvCheckGraphicsDeviceForSmoothRotation(*((struct tagGRAPHICS_DEVICE **)v3 + 319))
      || (v5 = (_DWORD *)*((_QWORD *)v3 + 319), (v5[40] & 0x6000008) != 0) )
    {
      WdLogSingleEntry1(4LL, 2LL);
    }
    else
    {
      v6 = 0;
      if ( !*((_WORD *)a2 + 10) )
        goto LABEL_11;
      while ( 1 )
      {
        v7 = 296LL * v6;
        if ( v5[62] == *(_DWORD *)((char *)a2 + v7 + 80)
          && v5[60] == *(_DWORD *)((char *)a2 + v7 + 72)
          && v5[61] == *(_DWORD *)((char *)a2 + v7 + 76)
          && !_bittest64((const signed __int64 *)((char *)a2 + v7 + 56), 0x24u) )
        {
          break;
        }
        if ( ++v6 >= *((unsigned __int16 *)a2 + 10) )
          goto LABEL_11;
      }
      v8 = *(struct _devicemodeW **)((char *)a2 + v7 + 304);
      if ( v8 )
      {
        if ( DevmodeAutoRotateCompatible(v8, *((const struct _devicemodeW **)v3 + 321)) )
        {
          updated = PDEVOBJ::UpdateDisplayMode((PDEVOBJ *)&v15, v8);
          if ( updated )
          {
            _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v9) + 24)
                                                                        + 1928LL)
                                                            + 1573008LL));
            DisplayScenarioJournalDisplayUniquenessIncremented();
            WdLogSingleEntry1(4LL, 4LL);
          }
          v3 = v15;
        }
        else
        {
          WdLogSingleEntry0(4LL);
        }
      }
      else
      {
LABEL_11:
        WdLogSingleEntry1(4LL, 27962LL);
      }
    }
  }
  else
  {
    WdLogSingleEntry1(4LL, 1LL);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *((_QWORD *)v3 + 6));
  v10 = (struct _ERESOURCE *)*((_QWORD *)v3 + 6);
  if ( v10 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v10);
    PsLeavePriorityRegion(v11);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemPointer()", *((_QWORD *)v3 + 7));
  v12 = (struct _ERESOURCE *)*((_QWORD *)v3 + 7);
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion(v13);
  }
  return updated;
}
