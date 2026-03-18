/*
 * XREFs of ?GrepSelectPalette@@YAPEAUHPALETTE__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1400D7CEC
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x140035220 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     GreSelectPalette @ 0x1400D7C80 (GreSelectPalette.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401211B0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14001F87C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x14001FCA8 (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     HmgShareLockCheck @ 0x14002F820 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D7F78 (-vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1400D8054 (-vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeNoXlate@XEPALOBJ@@QEAAXXZ @ 0x1400D81E0 (-vMakeNoXlate@XEPALOBJ@@QEAAXXZ.c)
 */

HPALETTE __fastcall GrepSelectPalette(struct XDCOBJ *a1, struct _ERESOURCE *a2, int a3)
{
  struct _ERESOURCE **v6; // r15
  struct _ERESOURCE *v7; // rdi
  struct _GRETHREAD *v8; // rax
  struct _GRETHREAD *v9; // rbx
  __int64 v10; // rcx
  char v11; // cl
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  bool v15; // zf
  __int64 v16; // rbx
  HPALETTE v17; // rbp
  int v18; // r8d
  struct _GRETHREAD *v19; // rax
  struct _GRETHREAD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // r8d
  int v26; // eax
  __int64 CurrentProcessWin32Process; // rax
  HSEMAPHORE v28[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v6 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  v7 = *v6 + 3;
  GreAcquireSemaphoreInternal(v7);
  v8 = GreGetCurrentThreadCrossSessionCheck();
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 0xFFFFFFFFFFFFE000uLL) != 0 && (v10 & 0x2000) == 0 )
    {
      v24 = 0LL;
      v25 = 37;
      do
      {
        v26 = v24;
        if ( !_bittest64(&v10, v24) )
          v26 = v25;
        ++v24;
        v25 = v26;
      }
      while ( v24 < 0x40 );
      if ( v26 > 13 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v11 = *((_BYTE *)v9 + 21);
    *((_BYTE *)v9 + 21) = v11 + 1;
    if ( !v11 )
      *(_QWORD *)v9 |= 0x2000uLL;
  }
  v12 = HmgShareLockCheck((__int64)a2, 8);
  v15 = *(_QWORD *)a1 == 0LL;
  v16 = v12;
  v29 = v12;
  if ( !v15 )
  {
    if ( !v12 )
      goto LABEL_18;
    if ( (*(_DWORD *)(v12 + 24) & 0x100) != 0 )
    {
      if ( !a3 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
        if ( CurrentProcessWin32Process )
        {
          v13 = -*(_QWORD *)CurrentProcessWin32Process;
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        }
        v6[458] = (struct _ERESOURCE *)CurrentProcessWin32Process;
        v6[457] = a2;
      }
      v17 = *(HPALETTE *)(*(_QWORD *)a1 + 80LL);
      if ( v17 == (HPALETTE)a2 )
        goto LABEL_10;
      v30 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
      if ( v16 == *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v13) + 88) + 3768LL)
        || (v22 = *(_QWORD *)(*(_QWORD *)a1 + 48LL), *(_QWORD *)(v16 + 48) == v22) )
      {
LABEL_26:
        SEMOBJ<20>::SEMOBJ<20>(v28);
        XEPALOBJ::vRemoveFromList((XEPALOBJ *)&v30, a1);
        *(_QWORD *)(*(_QWORD *)a1 + 80LL) = a2;
        *(_QWORD *)(*(_QWORD *)a1 + 88LL) = v16;
        v23 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
        *(_DWORD *)(v23 + 152) |= 0xFu;
        if ( *(_QWORD *)(*(_QWORD *)a1 + 496LL)
          && v16 != *(_QWORD *)(*(_QWORD *)(W32GetSessionState(v23) + 88) + 3768LL) )
        {
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 176LL) = a2;
        }
        XEPALOBJ::vAddToList((XEPALOBJ *)&v29, a1);
        SEMOBJ<20>::vUnlock(v28);
LABEL_10:
        HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v16, 0LL);
        if ( v7 )
        {
          EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v7, v18);
          v19 = GreGetCurrentThreadCrossSessionCheck();
          if ( v19 )
          {
            v15 = (*((_BYTE *)v19 + 21))-- == 1;
            if ( v15 )
              *(_QWORD *)v19 &= ~0x2000uLL;
          }
          GreReleaseSemaphoreSharedInternal(v7);
        }
        return v17;
      }
      if ( !*(_DWORD *)(v16 + 56) )
      {
        XEPALOBJ::vMakeNoXlate((XEPALOBJ *)&v29);
        *(_QWORD *)(v16 + 48) = v22;
        goto LABEL_26;
      }
      goto LABEL_17;
    }
  }
  if ( v12 )
LABEL_17:
    HmgDecrementShareReferenceCountEx((struct _BASEOBJECT *)v16, 0LL);
LABEL_18:
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"Palette", (int)v7, v14);
    v21 = GreGetCurrentThreadCrossSessionCheck();
    if ( v21 )
    {
      v15 = (*((_BYTE *)v21 + 21))-- == 1;
      if ( v15 )
        *(_QWORD *)v21 &= ~0x2000uLL;
    }
    GreReleaseSemaphoreSharedInternal(v7);
  }
  return 0LL;
}
