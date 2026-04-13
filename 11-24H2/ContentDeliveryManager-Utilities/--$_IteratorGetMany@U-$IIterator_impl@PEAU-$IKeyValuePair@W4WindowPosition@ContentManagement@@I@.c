/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@234@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@$00@123@IPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@123@PEAI@Z @ 0x180097E40
 * Callers:
 *     ?GetMany@?$IIterator_impl@PEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAU?$IKeyValuePair@W4WindowPosition@ContentManagement@@I@234@PEAI@Z @ 0x1800997D0 (-GetMany@-$IIterator_impl@PEAU-$IKeyValuePair@W4WindowPosition@ContentManagement@@I@Collections@.c)
 * Callees:
 *     memset_0 @ 0x180022931 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *,1>,Windows::Foundation::Collections::IKeyValuePair<enum ContentManagement::WindowPosition,unsigned int> *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        _DWORD *a4)
{
  _QWORD *v4; // rsi
  __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rdi
  char v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = a3;
  v12 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v12);
  if ( v9 < 0 )
  {
LABEL_8:
    if ( *a4 )
    {
      v10 = (unsigned int)*a4;
      do
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 16LL))(*v4);
        *v4++ = 0LL;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    while ( v12 )
    {
      if ( (unsigned int)v8 < a2 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &v4[v8]);
        if ( v9 < 0 )
          goto LABEL_8;
        v8 = (unsigned int)(v8 + 1);
        v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v12);
        if ( v9 >= 0 )
          continue;
      }
      if ( v9 < 0 )
        goto LABEL_8;
      break;
    }
    *a4 = v8;
  }
  return (unsigned int)v9;
}
