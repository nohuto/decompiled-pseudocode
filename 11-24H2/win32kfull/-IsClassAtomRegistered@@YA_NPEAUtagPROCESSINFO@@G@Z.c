/*
 * XREFs of ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1400B4AAC
 * Callers:
 *     DestroyClass @ 0x1400B4778 (DestroyClass.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1400B6B48 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1400B4D30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1400B5090 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

char __fastcall IsClassAtomRegistered(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int16 v3; // r14
  struct tagTHREADINFO *v5; // rax
  char v6; // di
  __int64 *v7; // rsi
  __int64 **v8; // rcx
  __int64 *v9; // rbx
  __int64 **v10; // rax
  __int64 *v11; // rsi
  __int64 **v12; // rcx
  void *CurrentWin32kStackRefLookAside; // rax
  __int64 **v15; // rbx
  void *v16; // rax
  __int64 **v17; // [rsp+20h] [rbp-10h] BYREF
  __int64 v18; // [rsp+28h] [rbp-8h] BYREF

  v2 = *((_QWORD *)a1 + 44);
  v3 = a2;
  v5 = PtiCurrent((__int64)a1, a2);
  v17 = (__int64 **)gSmartObjNullRef;
  v6 = 1;
  if ( v2 )
  {
    v17 = *(__int64 ***)(v2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(v2 + 128) + 8LL);
  }
  v18 = *((_QWORD *)v5 + 209);
  *((_QWORD *)v5 + 209) = &v18;
  while ( *v17 )
  {
    if ( *(_WORD *)(*v17)[1] == v3 || *(_WORD *)((*v17)[1] + 2) == v3 )
      goto LABEL_32;
    v7 = (__int64 *)**v17;
    if ( v7 != *v17 )
    {
      v8 = (__int64 **)gSmartObjNullRef;
      if ( v17 != (__int64 **)gSmartObjNullRef )
      {
        if ( !--*((_DWORD *)v17 + 2) && *((_BYTE *)v17 + 12) )
        {
          CurrentWin32kStackRefLookAside = GetCurrentWin32kStackRefLookAside();
          Win32FreeToPagedLookasideList(CurrentWin32kStackRefLookAside, v17);
        }
        v8 = (__int64 **)gSmartObjNullRef;
      }
      if ( v7 )
      {
        v17 = (__int64 **)v7[16];
        ++*((_DWORD *)v17 + 2);
      }
      else
      {
        v17 = v8;
      }
    }
  }
  v9 = (__int64 *)*((_QWORD *)a1 + 45);
  if ( v9 == *v17 )
    goto LABEL_19;
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v17);
  if ( !v9 )
  {
    v17 = (__int64 **)gSmartObjNullRef;
    goto LABEL_19;
  }
  v10 = (__int64 **)v9[16];
LABEL_30:
  v17 = v10;
  ++*((_DWORD *)v10 + 2);
LABEL_19:
  while ( *v17 )
  {
    if ( *(_WORD *)(*v17)[1] == v3 || *(_WORD *)((*v17)[1] + 2) == v3 )
      goto LABEL_32;
    v11 = (__int64 *)**v17;
    if ( v11 != *v17 )
    {
      v12 = (__int64 **)gSmartObjNullRef;
      if ( v17 != (__int64 **)gSmartObjNullRef )
      {
        if ( !--*((_DWORD *)v17 + 2) && *((_BYTE *)v17 + 12) )
        {
          v15 = v17;
          v16 = GetCurrentWin32kStackRefLookAside();
          Win32FreeToPagedLookasideList(v16, v15);
        }
        v12 = (__int64 **)gSmartObjNullRef;
      }
      if ( v11 )
      {
        v10 = (__int64 **)v11[16];
        goto LABEL_30;
      }
      v17 = v12;
    }
  }
  v6 = 0;
LABEL_32:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v17);
  return v6;
}
