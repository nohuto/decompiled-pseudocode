/*
 * XREFs of ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x140081390
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x14006CA40 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     NtDCompositionReleaseAllResources @ 0x14006DDD0 (NtDCompositionReleaseAllResources.c)
 * Callees:
 *     ?LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z @ 0x14008039C (-LookupResourceMarshaler@CApplicationChannel@DirectComposition@@QEAAPEAVCResourceMarshaler@2@I@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400807E8 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

void __fastcall DirectComposition::CApplicationChannel::ReleaseAllResources(size_t *this, bool *a2)
{
  _QWORD *i; // rdi
  size_t v5; // rdi
  size_t v6; // rdx
  size_t v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rcx
  struct DirectComposition::CResourceMarshaler *v10; // rax
  struct DirectComposition::CResourceMarshaler *v11; // r15
  __int64 v12; // rax
  size_t v13; // rdx
  size_t v14; // r8
  struct DirectComposition::CResourceMarshaler *v15; // r14
  size_t v16; // rsi
  _QWORD *v17; // rdi
  size_t v18; // rdx
  size_t v19; // rcx
  _QWORD *v20; // rax
  size_t v21; // rax
  __int64 v22; // rcx
  struct DirectComposition::CResourceMarshaler *v23; // r14
  __int64 Src; // [rsp+40h] [rbp+8h] BYREF

  for ( i = this + 34;
        (_QWORD *)*i != i;
        DirectComposition::CApplicationChannel::ReleaseResource(
          (DirectComposition::CApplicationChannel *)this,
          (struct DirectComposition::CResourceMarshaler *)(*i - 376LL)) )
  {
    ;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = this[11];
    if ( v5 >= v6 )
      break;
    v7 = this[12];
    v8 = (_QWORD *)(this[8] + v5 * v7);
    while ( 1 )
    {
      v9 = v5++;
      if ( *v8 )
        break;
      v8 = (_QWORD *)((char *)v8 + v7);
      if ( v5 >= v6 )
        goto LABEL_17;
    }
    if ( !*(_QWORD *)(v7 * v9 + this[8]) )
      break;
    v10 = DirectComposition::CApplicationChannel::LookupResourceMarshaler(
            (DirectComposition::CApplicationChannel *)this,
            v5);
    v11 = v10;
    if ( v10 )
    {
      v12 = (*(__int64 (__fastcall **)(struct DirectComposition::CResourceMarshaler *))(*(_QWORD *)v10 + 192LL))(v10);
      if ( v12 )
      {
        v15 = *(struct DirectComposition::CResourceMarshaler **)(v12 + 192);
        if ( v15 )
        {
          if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 128LL))(*(_QWORD *)(v12 + 192)) )
            DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v15);
        }
      }
      v13 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 )
      {
        if ( v13 < this[11] )
        {
          v14 = this[12];
          Src = 0LL;
          memmove((void *)(this[8] + v13 * v14), &Src, v14);
          --this[13];
        }
      }
      DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v11);
    }
  }
LABEL_17:
  v16 = 0LL;
  v17 = this + 19;
  while ( 1 )
  {
    v18 = this[18];
    v19 = v16;
    if ( v16 < v18 )
    {
      v20 = (_QWORD *)(this[15] + v16 * this[19]);
      do
      {
        v17 = this + 19;
        if ( *v20 )
          break;
        ++v19;
        v20 = (_QWORD *)((char *)v20 + this[19]);
      }
      while ( v19 < v18 );
    }
    if ( v19 >= v18 )
      break;
    _mm_lfence();
    v21 = this[15];
    v16 = v19 + 1;
    v22 = *v17 * v19;
    v23 = *(struct DirectComposition::CResourceMarshaler **)(v22 + v21);
    if ( !v23 )
      break;
    DirectComposition::CResourceMarshaler::AddRef(*(DirectComposition::CResourceMarshaler **)(v22 + v21));
    (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, size_t *))(*(_QWORD *)v23 + 216LL))(
      v23,
      this);
    DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, v23);
  }
  if ( a2 )
    *a2 = *((_DWORD *)this + 143) != 0;
}
