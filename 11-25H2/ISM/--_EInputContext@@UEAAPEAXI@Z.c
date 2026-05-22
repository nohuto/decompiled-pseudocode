/*
 * XREFs of ??_EInputContext@@UEAAPEAXI@Z @ 0x18004B3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x18007AE50 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoMPCConstantManagerClientProxyImpl@BamoImpl@@UEAA.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
InputContext *__fastcall InputContext::`vector deleting destructor'(InputContext *this, char a2)
{
  _QWORD *v4; // r15
  __int64 v5; // rbx
  __int64 i; // rbp
  char *v7; // rdi
  char *j; // rsi
  char *v9; // rcx
  const struct std::nothrow_t *v10; // rdx
  char *v11; // rcx
  char *v12; // rcx
  _QWORD **v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rbx
  char *v16; // rcx
  _QWORD **v17; // rcx
  _QWORD *v18; // rbx
  __int64 v19; // rcx
  BamoImpl::BamoMPCConstantManagerClientProxyImpl *v20; // rcx
  __int64 v22; // rcx
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  char *v25; // r8
  char *v26; // rcx
  char *v27; // r8
  char *v28; // r8
  char *v29; // r8

  v4 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v4 )
  {
    v5 = v4[12];
    if ( v5 )
    {
      for ( i = v4[13]; v5 != i; v5 += 24LL )
      {
        v7 = *(char **)v5;
        if ( *(_QWORD *)v5 )
        {
          for ( j = *(char **)(v5 + 8); v7 != j; v7 += 8 )
          {
            v22 = *(_QWORD *)v7;
            if ( *(_QWORD *)v7 )
            {
              *(_QWORD *)v7 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
            }
          }
          v9 = *(char **)v5;
          v10 = (const struct std::nothrow_t *)(8 * ((__int64)(*(_QWORD *)(v5 + 16) - *(_QWORD *)v5) >> 3));
          if ( (unsigned __int64)v10 >= 0x1000 )
          {
            v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
            v25 = (char *)*((_QWORD *)v9 - 1);
            v26 = (char *)(v9 - v25);
            if ( (unsigned __int64)(v26 - 8) > 0x1F )
              goto LABEL_45;
            v9 = v25;
          }
          operator delete(v9, v10);
          *(_QWORD *)v5 = 0LL;
          *(_QWORD *)(v5 + 8) = 0LL;
          *(_QWORD *)(v5 + 16) = 0LL;
        }
      }
      v11 = (char *)v4[12];
      v10 = (const struct std::nothrow_t *)(8 * ((__int64)(v4[14] - (_QWORD)v11) >> 3));
      if ( (unsigned __int64)v10 >= 0x1000 )
      {
        v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
        v29 = (char *)*((_QWORD *)v11 - 1);
        v26 = (char *)(v11 - v29);
        if ( (unsigned __int64)(v26 - 8) > 0x1F )
          goto LABEL_45;
        v11 = v29;
      }
      operator delete(v11, v10);
      v4[12] = 0LL;
      v4[13] = 0LL;
      v4[14] = 0LL;
    }
    if ( (unsigned __int64)(v4[1] - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink();
    operator delete(v4, (const struct std::nothrow_t *)0x78);
  }
  v12 = (char *)*((_QWORD *)this + 17);
  if ( v12 )
  {
    v10 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 19) - (_QWORD)v12) >> 3));
    if ( (unsigned __int64)v10 >= 0x1000 )
    {
      v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
      v27 = (char *)*((_QWORD *)v12 - 1);
      v26 = (char *)(v12 - v27);
      if ( (unsigned __int64)(v26 - 8) > 0x1F )
        goto LABEL_45;
      v12 = v27;
    }
    operator delete(v12, v10);
    *((_QWORD *)this + 17) = 0LL;
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
  }
  v13 = (_QWORD **)*((_QWORD *)this + 15);
  *v13[1] = 0LL;
  v14 = *v13;
  if ( v14 )
  {
    do
    {
      v15 = (_QWORD *)*v14;
      operator delete(v14, (const struct std::nothrow_t *)0x18);
      v14 = v15;
    }
    while ( v15 );
  }
  operator delete(*((void **)this + 15), (const struct std::nothrow_t *)0x18);
  v16 = (char *)*((_QWORD *)this + 6);
  if ( v16 )
  {
    v10 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)this + 8) - (_QWORD)v16) >> 3));
    if ( (unsigned __int64)v10 < 0x1000 )
    {
LABEL_21:
      operator delete(v16, v10);
      *((_QWORD *)this + 6) = 0LL;
      *((_QWORD *)this + 7) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
      goto LABEL_22;
    }
    v10 = (const struct std::nothrow_t *)((char *)v10 + 39);
    v28 = (char *)*((_QWORD *)v16 - 1);
    v26 = (char *)(v16 - v28);
    if ( (unsigned __int64)(v26 - 8) <= 0x1F )
    {
      v16 = v28;
      goto LABEL_21;
    }
LABEL_45:
    _o__invalid_parameter_noinfo_noreturn(v26, v10);
    __debugbreak();
    goto LABEL_46;
  }
LABEL_22:
  v17 = (_QWORD **)*((_QWORD *)this + 4);
  *v17[1] = 0LL;
  v18 = *v17;
  if ( *v17 )
  {
    do
    {
      v23 = (_QWORD *)*v18;
      v24 = v18[3];
      if ( v24 )
      {
        v18[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      operator delete(v18, (const struct std::nothrow_t *)0x20);
      v18 = v23;
    }
    while ( v23 );
  }
  operator delete(*((void **)this + 4), (const struct std::nothrow_t *)0x20);
  v19 = *((_QWORD *)this + 2);
  if ( v19 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v20 = this;
    if ( (a2 & 4) == 0 )
    {
      free(this);
      return this;
    }
LABEL_46:
    BamoImpl::BamoMPCConstantManagerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
      v20,
      (struct Microsoft::BamoImpl::BamoProxyImpl *)0xC0);
  }
  return this;
}
