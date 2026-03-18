/*
 * XREFs of ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x14009E59C
 * Callers:
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1400701D4 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     xxxSendMenuSelect @ 0x14009E36C (xxxSendMenuSelect.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(_QWORD *a1, __int64 **a2)
{
  __int64 v4; // rdi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx

  v4 = **a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  if ( CurrentThreadNonPaged )
    v6 = *CurrentThreadNonPaged;
  else
    v6 = 0LL;
  v7 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( v4 )
  {
    *a1 = *(_QWORD *)(v4 + 152);
    ++*(_DWORD *)(*(_QWORD *)(v4 + 152) + 8LL);
  }
  *v7 = *(_QWORD *)(v6 + 1672);
  *(_QWORD *)(v6 + 1672) = v7;
  a1[2] = a2[2];
  return a1;
}
