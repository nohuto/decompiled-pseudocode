/*
 * XREFs of ?GetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180019A50
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000D140 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::GetValue(
        CAudioSessionPropertyStore *this,
        const struct _tagpropertykey *a2,
        PROPVARIANT *a3)
{
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  HRESULT v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
    *(_OWORD *)a3 = 0LL;
    a3[2] = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
    v8 = *((_QWORD *)this + 4);
    v13 = v7;
    while ( v8 )
    {
      if ( *(_DWORD *)(v8 + 16) == a2->pid )
      {
        v9 = *(_QWORD *)v8 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)v8 == *(_QWORD *)&a2->fmtid.Data1 )
          v9 = *(_QWORD *)(v8 + 8) - *(_QWORD *)a2->fmtid.Data4;
        if ( !v9 )
        {
          v10 = PropVariantCopy(a3, (const PROPVARIANT *)(v8 + 24));
          v6 = v10;
          if ( v10 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1D8,
              (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
              (const char *)(unsigned int)v10);
            goto LABEL_13;
          }
          break;
        }
      }
      v8 = *(_QWORD *)(v8 + 48);
    }
    v6 = 0;
LABEL_13:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v13);
  }
  else
  {
    v6 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1CC,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x80004003LL);
  }
  return v6;
}
