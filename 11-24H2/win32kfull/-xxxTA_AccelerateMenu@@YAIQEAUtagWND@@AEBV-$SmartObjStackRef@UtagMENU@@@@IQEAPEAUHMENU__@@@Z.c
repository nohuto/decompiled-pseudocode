/*
 * XREFs of ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x14009D240
 * Callers:
 *     xxxTranslateAccelerator @ 0x14009CDF0 (xxxTranslateAccelerator.c)
 * Callees:
 *     xxxSendMessage @ 0x140042030 (xxxSendMessage.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x140070890 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MNLookUpItem @ 0x140070DE8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140073680 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?UT_FindTopLevelMenuIndex@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@I@Z @ 0x14009D3C0 (-UT_FindTopLevelMenuIndex@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@I@Z.c)
 */

__int64 __fastcall xxxTA_AccelerateMenu(struct tagWND *a1, __int64 **a2, unsigned int a3, _QWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned int TopLevelMenuIndex; // ebp
  _QWORD *v13; // rdi
  _QWORD *v14; // r8
  int v15; // edi
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // [rsp+20h] [rbp-38h] BYREF
  __int64 v21[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-20h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v21, (__int64)a2);
  v20 = 0LL;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)a2) )
    goto LABEL_2;
  TopLevelMenuIndex = UT_FindTopLevelMenuIndex(v9, a3);
  if ( TopLevelMenuIndex == -1 )
    goto LABEL_2;
  v10 = 2;
  xxxSendMessage(a1, 0x116u);
  v8 = **a2;
  if ( TopLevelMenuIndex >= *(_DWORD *)(*(_QWORD *)(v8 + 40) + 44LL) )
    goto LABEL_2;
  v13 = (_QWORD *)(*(_QWORD *)(**a2 + 88) + 96LL * (int)TopLevelMenuIndex);
  v14 = (_QWORD *)v13[2];
  if ( v14 )
  {
    *a4 = *v14;
    xxxSendMessage(a1, 0x117u);
    if ( TopLevelMenuIndex < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) )
    {
      v15 = *(_DWORD *)(*v13 + 4LL) & 3;
      goto LABEL_10;
    }
LABEL_2:
    *a4 = 0LL;
    v10 = 0;
    goto LABEL_3;
  }
  v15 = 0;
LABEL_10:
  v16 = v22;
  if ( !v22 )
    v16 = *(_QWORD *)v21[0];
  v17 = a2[2];
  v20 = v16;
  if ( !v17 )
    v17 = (__int64 *)**a2;
  v18 = MNLookUpItem(v17, a3, 0, &v20);
  v22 = 0LL;
  v19 = v18;
  SmartObjStackRefBase<tagMENU>::operator=((__int64)v21, v20);
  if ( !v19 )
    goto LABEL_2;
  if ( (*(_DWORD *)(*(_QWORD *)v19 + 4LL) & 3) != 0 || v15 )
    v10 = 3;
LABEL_3:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v21, v8);
  return v10;
}
