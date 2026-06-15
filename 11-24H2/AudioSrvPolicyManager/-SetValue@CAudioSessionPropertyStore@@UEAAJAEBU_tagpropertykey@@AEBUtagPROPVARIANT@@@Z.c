/*
 * XREFs of ?SetValue@CAudioSessionPropertyStore@@UEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800182B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180003470 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@Upropstoreinfo_tag@@U?$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ @ 0x18001F0F4 (--1-$unique_ptr@Upropstoreinfo_tag@@U-$default_delete@Upropstoreinfo_tag@@@std@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206BC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CAudioSessionPropertyStore::SetValue(
        CAudioSessionPropertyStore *this,
        const struct _tagpropertykey *a2,
        const PROPVARIANT *a3)
{
  unsigned int v3; // r9d
  bool v7; // zf
  unsigned int v8; // r9d
  unsigned int v9; // r9d
  unsigned int v10; // r9d
  bool v11; // zf
  unsigned int v12; // r9d
  bool v13; // zf
  unsigned int v14; // r9d
  unsigned int v15; // r9d
  unsigned int v16; // r9d
  unsigned int v17; // r9d
  unsigned int v18; // r9d
  unsigned int v19; // r9d
  unsigned int v20; // ebx
  struct _RTL_CRITICAL_SECTION *v21; // rsi
  _QWORD *v22; // rdi
  char *i; // r14
  __int64 v24; // rcx
  __int64 v25; // rax
  HRESULT v26; // eax
  __int64 v27; // rax
  char *v28; // rax
  char *v29; // rbx
  HRESULT v30; // eax
  HRESULT v31; // r14d
  DWORD pid; // eax
  PROPVARIANT pvarDest[2]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v35; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  char *v37; // [rsp+80h] [rbp+40h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+90h] [rbp+50h] BYREF

  v3 = *(unsigned __int16 *)a3;
  if ( v3 > 0x46 )
  {
    v13 = v3 == 8196;
LABEL_30:
    if ( !v13 )
    {
LABEL_31:
      v20 = -2147023266;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1EC,
        (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
        (const char *)0x8007065ELL);
      return v20;
    }
    goto LABEL_32;
  }
  if ( v3 == 70 )
    goto LABEL_32;
  if ( v3 <= 0x12 )
  {
    if ( v3 == 18 )
      goto LABEL_32;
    if ( v3 > 7 )
    {
      v14 = v3 - 8;
      if ( !v14 )
        goto LABEL_32;
      v15 = v14 - 2;
      if ( !v15 )
        goto LABEL_32;
      v16 = v15 - 1;
      if ( !v16 )
        goto LABEL_32;
      v17 = v16 - 3;
      if ( !v17 )
        goto LABEL_31;
      v12 = v17 - 2;
      v11 = v12 == 0;
      goto LABEL_13;
    }
    if ( v3 == 7 || !*(_WORD *)a3 )
      goto LABEL_32;
    v8 = v3 - 2;
    v7 = v8 == 0;
LABEL_9:
    if ( v7 )
      goto LABEL_32;
    v9 = v8 - 1;
    if ( !v9 )
      goto LABEL_32;
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_32;
    v12 = v10 - 1;
    v11 = v12 == 0;
LABEL_13:
    if ( v11 )
      goto LABEL_32;
    v13 = v12 == 1;
    goto LABEL_30;
  }
  if ( v3 > 0x40 )
  {
    v13 = v3 == 65;
    goto LABEL_30;
  }
  if ( v3 == 64 )
    goto LABEL_32;
  if ( v3 <= 0x18 )
  {
    if ( v3 == 24 )
      goto LABEL_31;
    v8 = v3 - 19;
    v7 = v8 == 0;
    goto LABEL_9;
  }
  v18 = v3 - 25;
  if ( !v18 )
    goto LABEL_31;
  v19 = v18 - 5;
  if ( v19 )
  {
    v13 = v19 == 1;
    goto LABEL_30;
  }
LABEL_32:
  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v22 = (_QWORD *)((char *)this + 32);
  v38 = v21;
  for ( i = (char *)this + 32; ; i = (char *)(v24 + 48) )
  {
    v24 = *(_QWORD *)i;
    if ( !*(_QWORD *)i )
      break;
    if ( *(_DWORD *)(v24 + 16) == a2->pid )
    {
      v25 = *(_QWORD *)v24 - *(_QWORD *)&a2->fmtid.Data1;
      if ( *(_QWORD *)v24 == *(_QWORD *)&a2->fmtid.Data1 )
        v25 = *(_QWORD *)(v24 + 8) - *(_QWORD *)a2->fmtid.Data4;
      if ( !v25 )
      {
        *(_OWORD *)pvarDest = 0LL;
        v35 = 0LL;
        v26 = PropVariantCopy(pvarDest, a3);
        v20 = v26;
        if ( v26 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FA,
            (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
            (const char *)(unsigned int)v26);
LABEL_52:
          wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
          return v20;
        }
        PropVariantClear((PROPVARIANT *)(*(_QWORD *)i + 24LL));
        v27 = *(_QWORD *)i;
        *(_OWORD *)(v27 + 24) = *(_OWORD *)pvarDest;
        *(_QWORD *)(v27 + 40) = v35;
        goto LABEL_48;
      }
    }
  }
  v28 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v37 = v28;
  v29 = v28;
  if ( !v28 )
  {
    v20 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20B,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v37);
    goto LABEL_52;
  }
  *(_OWORD *)(v28 + 24) = 0LL;
  *((_QWORD *)v28 + 5) = 0LL;
  v30 = PropVariantCopy((PROPVARIANT *)v28 + 3, a3);
  v31 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20F,
      (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\audiosessionstore.cpp",
      (const char *)(unsigned int)v30);
    std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v37);
    v20 = v31;
    goto LABEL_52;
  }
  while ( *v22 )
    v22 = (_QWORD *)(*v22 + 48LL);
  *((_QWORD *)v29 + 6) = 0LL;
  pid = a2->pid;
  v37 = 0LL;
  *((_DWORD *)v29 + 4) = pid;
  *(GUID *)v29 = a2->fmtid;
  *v22 = v29;
  std::unique_ptr<propstoreinfo_tag>::~unique_ptr<propstoreinfo_tag>(&v37);
LABEL_48:
  *((_BYTE *)this + 88) = 1;
  if ( v21 )
    LeaveCriticalSection(v21);
  return 0LL;
}
