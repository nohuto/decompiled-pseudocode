/*
 * XREFs of _SetMenuDefaultItem @ 0x14006FBFC
 * Callers:
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14006EF88 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     xxxSetSysMenu @ 0x14006F958 (xxxSetSysMenu.c)
 *     NtUserSetMenuDefaultItem @ 0x1401F55F0 (NtUserSetMenuDefaultItem.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140070D94 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     MNLookUpItem @ 0x140070DE8 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14007261C (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ @ 0x1400736D4 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagMENU@@@@IEAAXXZ.c)
 */

__int64 __fastcall SetMenuDefaultItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  unsigned int v13; // edx
  __int64 v14; // r8
  int v15; // eax
  int v17; // eax
  _QWORD v18[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  __int64 v20; // [rsp+78h] [rbp+38h] BYREF

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v18);
  v6 = 0;
  v20 = 0LL;
  if ( a2 == -1 )
  {
    v10 = 0LL;
LABEL_12:
    v12 = *(_QWORD *)(a1 + 88);
    v13 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL);
    if ( v13 )
    {
      v14 = v13;
      do
      {
        v15 = *(_DWORD *)(*(_QWORD *)v12 + 4LL);
        if ( (v15 & 0x1000) != 0 && v12 != v10 )
        {
          *(_DWORD *)(*(_QWORD *)v12 + 4LL) = v15 & 0xFFFFEFFF;
          *(_DWORD *)(*(_QWORD *)v12 + 84LL) = 0x7FFFFFFF;
          *(_DWORD *)(*(_QWORD *)v12 + 88LL) = 0;
        }
        v12 += 96LL;
        --v14;
      }
      while ( v14 );
    }
    if ( a2 != -1 )
    {
      v17 = *(_DWORD *)(*(_QWORD *)v10 + 4LL);
      if ( (v17 & 0x1000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)v10 + 4LL) = v17 | 0x1000;
        *(_DWORD *)(*(_QWORD *)v10 + 84LL) = 0x7FFFFFFF;
        *(_DWORD *)(*(_QWORD *)v10 + 88LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 40) + 40LL) |= 0x400u;
      }
    }
    v6 = 1;
    goto LABEL_18;
  }
  v7 = v19;
  if ( !v19 )
    v7 = *(_QWORD *)v18[0];
  v20 = v7;
  v8 = MNLookUpItem(a1, a2, a3, &v20);
  v9 = v20;
  v10 = v8;
  v19 = 0LL;
  if ( v20 != *(_QWORD *)v18[0] )
  {
    SmartObjStackRefBase<tagMENU>::DecrementCountAndTryFree(v18);
    if ( v9 )
    {
      v18[0] = *(_QWORD *)(v9 + 152);
      ++*(_DWORD *)(v18[0] + 8LL);
    }
    else
    {
      v18[0] = gSmartObjNullRef;
    }
  }
  if ( v10 )
  {
    v11 = v19 ? v19 == a1 : *(_QWORD *)v18[0] == a1;
    if ( v11 && (**(_DWORD **)v10 & 0x800) == 0 )
      goto LABEL_12;
  }
LABEL_18:
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v18);
  return v6;
}
