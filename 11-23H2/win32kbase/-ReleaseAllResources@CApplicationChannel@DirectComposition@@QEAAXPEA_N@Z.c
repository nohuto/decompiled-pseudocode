/*
 * XREFs of ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C002D474
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C00652C0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionReleaseAllResources @ 0x1C00B0890 (NtDCompositionReleaseAllResources.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x1C002EB40 (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C002FD60 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C003019C (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C009B1B0 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D6F00 (memmove.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseAllResources(size_t *this, bool *a2)
{
  _QWORD *i; // rdi
  size_t v5; // rdi
  size_t v6; // rdx
  size_t v7; // rcx
  _QWORD *v8; // rax
  struct DirectComposition::CResourceMarshaler *v9; // rax
  struct DirectComposition::CResourceMarshaler *v10; // r14
  __int64 v11; // rax
  size_t v12; // rdx
  size_t v13; // r8
  struct DirectComposition::CResourceMarshaler *v14; // rsi
  DirectComposition::CResourceMarshaler *v15; // rax
  struct DirectComposition::CResourceMarshaler *v16; // rdi
  unsigned __int64 Src; // [rsp+40h] [rbp+8h] BYREF

  for ( i = this + 31;
        (_QWORD *)*i != i;
        DirectComposition::CApplicationChannel::ReleaseResource(
          (DirectComposition::CApplicationChannel *)this,
          (struct DirectComposition::CResourceMarshaler *)(*i - 384LL)) )
  {
    ;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = this[10];
    v7 = v5;
    if ( v5 < v6 )
    {
      v8 = (_QWORD *)(this[7] + v5 * this[11]);
      do
      {
        if ( *v8 )
          break;
        ++v7;
        v8 = (_QWORD *)((char *)v8 + this[11]);
      }
      while ( v7 < v6 );
    }
    if ( v7 >= v6 )
      break;
    v5 = v7 + 1;
    if ( !*(_QWORD *)(this[11] * v7 + this[7]) )
      break;
    v9 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
           (DirectComposition::CApplicationChannel *)this,
           v5);
    v10 = v9;
    if ( v9 )
    {
      v11 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v9 + 168LL))(v9);
      if ( v11 )
      {
        v14 = *(struct DirectComposition::CResourceMarshaler **)(v11 + 192);
        if ( v14 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 104LL))(*(_QWORD *)(v11 + 192)) )
            DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v14);
        }
      }
      v12 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        if ( v12 < this[10] )
        {
          v13 = this[11];
          Src = 0LL;
          memmove((void *)(this[7] + v12 * v13), &Src, v13);
          --this[12];
        }
      }
      DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v10);
    }
  }
  Src = 0LL;
  while ( 1 )
  {
    v15 = (DirectComposition::CResourceMarshaler *)DirectComposition::CLinearObjectTableBase::EnumerateObjects(
                                                     (DirectComposition::CLinearObjectTableBase *)(this + 14),
                                                     &Src);
    v16 = v15;
    if ( !v15 )
      break;
    DirectComposition::CResourceMarshaler::AddRef(v15);
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, size_t *))(*(_QWORD *)v16 + 192LL))(
      v16,
      this);
    DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v16);
  }
  if ( a2 )
    *a2 = *((_DWORD *)this + 131) != 0;
}
