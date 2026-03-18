/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1400701D4
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x14006FD90 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x140070AC0 (NtUserRemoveMenu.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14006DDEC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x14006F050 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14006F280 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ @ 0x14006F2D0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAXXZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MNLookUpItem @ 0x140070DE8 (MNLookUpItem.c)
 *     MNFreeItem @ 0x140071110 (MNFreeItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x140073BE8 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x14009E59C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ?DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z @ 0x14018A854 (-DwmUpdateCloseButton@@YAXPEAUtagWND@@H@Z.c)
 *     MNGetpItemIndex @ 0x14019FB5C (MNGetpItemIndex.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1402E07F4 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1402E0898 (xxxMNUpdateShownMenu.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 a1, unsigned int a2, __int16 a3, unsigned int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rsi
  int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // r15d
  unsigned __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v34; // [rsp+28h] [rbp-58h] BYREF
  __int64 v35; // [rsp+30h] [rbp-50h] BYREF
  __int64 v36; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v39; // [rsp+60h] [rbp-20h]
  _QWORD v40[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v41; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v38, a1);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v40);
  v7 = 0;
  v34 = 0LL;
  v10 = PtiCurrent(v9, v8);
  v11 = 0;
  v35 = gSmartObjNullRef;
  v36 = *((_QWORD *)v10 + 209);
  *((_QWORD *)v10 + 209) = &v36;
  v41 = v39;
  v12 = *(_QWORD *)v38[0];
  if ( *(_QWORD *)v38[0] != *(_QWORD *)v40[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v40);
    if ( v12 )
    {
      v40[0] = *(_QWORD *)(v12 + 152);
      ++*(_DWORD *)(v40[0] + 8LL);
    }
    else
    {
      v40[0] = gSmartObjNullRef;
    }
  }
  v13 = v39;
  if ( v39 )
  {
    v14 = v39;
  }
  else
  {
    v13 = 0LL;
    v14 = *(_QWORD *)v38[0];
  }
  v33 = v14;
  if ( !v13 )
    v13 = *(_QWORD *)v38[0];
  v15 = a3 & 0x400;
  v16 = MNLookUpItem(v13, a2, v15, &v33);
  v18 = v33;
  v19 = v16;
  v39 = 0LL;
  if ( v33 != *(_QWORD *)v38[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v38);
    if ( v18 )
    {
      v38[0] = *(_QWORD *)(v18 + 152);
      ++*(_DWORD *)(v38[0] + 8LL);
    }
    else
    {
      v38[0] = gSmartObjNullRef;
    }
  }
  if ( v19 )
    goto LABEL_59;
  if ( a2 >= 0xFFFFF000 && !v15 )
  {
    v39 = v41;
    SmartObjStackRefBase<tagMENU>::operator=(v38);
    v29 = v39;
    if ( v39 )
    {
      v30 = v39;
    }
    else
    {
      v29 = 0LL;
      v30 = *(_QWORD *)v38[0];
    }
    v33 = v30;
    if ( !v29 )
      v29 = *(_QWORD *)v38[0];
    v19 = MNLookUpItem(v29, (unsigned __int16)a2, 0LL, &v33);
    v39 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v38);
    if ( v19 )
    {
LABEL_59:
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 40LL) & 0x100) == 0
        || (v20 = 1, *(_DWORD *)(*(_QWORD *)v19 + 8LL) != 61536) )
      {
        v20 = 0;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v19 + 4LL) & 0x1000) != 0 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 40LL) &= ~0x400u;
      v21 = v39;
      if ( !v39 )
        v21 = *(_QWORD *)v38[0];
      v22 = MNGetPopupFromMenu(v21, &v34);
      if ( v22 != *(_QWORD *)v35 )
      {
        SmartObjStackRefBase<tagPOPUPMENU>::DecrementCountAndTryFree(&v35);
        if ( v22 )
        {
          v35 = *(_QWORD *)(v22 + 88);
          ++*(_DWORD *)(v35 + 8);
        }
        else
        {
          v35 = gSmartObjNullRef;
        }
      }
      if ( *(_QWORD *)v35 )
      {
        v32 = v39;
        if ( !v39 )
          v32 = *(_QWORD *)v38[0];
        v11 = MNGetpItemIndex(v32, v19);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v37, *(_QWORD *)v35);
        MNDeleteAdjustIndexes(v34, v37, v11);
      }
      v23 = v39;
      if ( !v39 )
        v23 = *(_QWORD *)v38[0];
      MNFreeItem(v23, v19, a4);
      *(_DWORD *)(*(_QWORD *)v38[0] + 64LL) = 0;
      *(_DWORD *)(*(_QWORD *)v38[0] + 68LL) = 0;
      v24 = *(_QWORD *)v38[0];
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v38[0] + 24LL) + 136LL), 0, *(PVOID *)(v24 + 96));
        Win32FreePool(*(void **)(*(_QWORD *)v38[0] + 88LL));
        *(_DWORD *)(*(_QWORD *)v38[0] + 60LL) = 0;
        v31 = *(_QWORD *)v38[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 32LL) = 0LL;
        *(_QWORD *)(v31 + 88) = 0LL;
      }
      else
      {
        v25 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL) - v19 + *(_QWORD *)(v24 + 88) - 96;
        if ( v25 )
        {
          memmove(
            *(void **)v19,
            *(const void **)(v19 + 96),
            (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL)
                         + **(_DWORD **)(*(_QWORD *)v38[0] + 88LL)
                         - *(_DWORD *)(v19 + 96)));
          memmove((void *)v19, (const void *)(v19 + 96), v25);
          v26 = 0xAAAAAAAAAAAAAAABuLL * ((v19 - *(_QWORD *)(*(_QWORD *)v38[0] + 88LL)) >> 5);
          while ( (unsigned int)v26 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL) - 1 )
          {
            v27 = 96LL * (int)v26;
            *(_QWORD *)(v27 + *(_QWORD *)(*(_QWORD *)v38[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v38[0] + 96LL)
                                                                     + 112LL * (unsigned int)v26;
            LODWORD(v26) = v26 + 1;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 88LL) + v27 + 8) = *(_QWORD *)(v27
                                                                                     + *(_QWORD *)(*(_QWORD *)v38[0]
                                                                                                 + 88LL))
                                                                         - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0]
                                                                                                 + 24LL)
                                                                                     + 16LL);
          }
        }
        v17 = *(_QWORD *)v38[0];
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v38[0] + 60LL)
                          - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL)) >= 9 )
        {
          LOBYTE(v17) = 1;
          MNAllocMenuItems(v38, v17);
        }
      }
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL);
      if ( v20 && *(_QWORD *)(*(_QWORD *)v38[0] + 80LL) )
        DwmUpdateCloseButton(*(struct tagWND **)(*(_QWORD *)v38[0] + 80LL), 1);
      if ( *(_QWORD *)v35 )
        xxxMNUpdateShownMenu(&v35, *(_QWORD *)(*(_QWORD *)v38[0] + 88LL) + 96LL * v11, 2LL);
      v7 = 1;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)&v35, v17);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v40);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v38);
  return v7;
}
