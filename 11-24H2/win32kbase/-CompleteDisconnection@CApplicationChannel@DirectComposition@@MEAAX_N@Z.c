/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x140070320
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x14006E4EC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1400705B0 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshaler@2@@Z @ 0x14007064C (-ReleaseShellResourceReference@CApplicationChannel@DirectComposition@@IEAAXPEAVCResourceMarshale.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x140070688 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x14007F850 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400803E0 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B9284 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        struct DirectComposition::CResourceMarshaler **this,
        char a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rcx
  _QWORD *v5; // r14
  unsigned __int64 v6; // rbx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  struct DirectComposition::CResourceMarshaler *v12; // rcx
  struct DirectComposition::CResourceMarshaler *v13; // rcx
  struct DirectComposition::CResourceMarshaler *v14; // rsi
  struct DirectComposition::CResourceMarshaler *v15; // rbx
  unsigned __int64 v16; // rcx
  struct DirectComposition::CResourceMarshaler *v17; // r8
  _QWORD *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // r8
  DirectComposition::CEvent *v24; // rcx
  struct DirectComposition::CResourceMarshaler *v25; // rbx

  if ( this[30] )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
  v4 = this[348];
  if ( v4 )
  {
    KeSetEvent(*((PRKEVENT *)v4 + 1), 1, 0);
    v24 = this[348];
    if ( v24 )
      DirectComposition::CEvent::`scalar deleting destructor'(v24);
    this[348] = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, this[349]);
  this[349] = 0LL;
  v5 = this + 19;
  v6 = 0LL;
  while ( 1 )
  {
    v7 = this[18];
    v8 = v6;
    if ( v6 < (unsigned __int64)v7 )
    {
      v9 = (_QWORD *)((char *)this[15] + v6 * (_QWORD)this[19]);
      do
      {
        v5 = this + 19;
        if ( *v9 )
          break;
        ++v8;
        v9 = (_QWORD *)((char *)v9 + (_QWORD)this[19]);
      }
      while ( v8 < (unsigned __int64)v7 );
    }
    if ( v8 >= (unsigned __int64)v7 )
      break;
    _mm_lfence();
    v6 = v8 + 1;
    v10 = *(_QWORD *)((char *)this[15] + *v5 * v8);
    if ( !v10 )
      break;
    (*(void (__fastcall **)(__int64, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)v10 + 88LL))(
      v10,
      this);
  }
  if ( !a2 )
  {
    for ( i = this[329];
          i != (DirectComposition::CBatchSharedMemoryPool *)(this + 329);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    v12 = this[331];
    if ( v12 )
      ObfDereferenceObject(v12);
    this[331] = 0LL;
  }
  v13 = this[63];
  *((_DWORD *)this + 672) = 0;
  if ( v13 )
  {
    do
    {
      v25 = *(struct DirectComposition::CResourceMarshaler **)v13;
      *(_QWORD *)v13 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v13, (struct DirectComposition::CApplicationChannel *)this);
      v13 = v25;
    }
    while ( v25 );
  }
  v14 = this[60];
  if ( v14 )
  {
    do
    {
      v15 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v14 + 1);
      DirectComposition::CApplicationChannel::ReleaseShellResourceReference(
        (DirectComposition::CApplicationChannel *)this,
        v14);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64))(*(_QWORD *)v14 + 96LL))(
        v14,
        1LL);
      v14 = v15;
    }
    while ( v15 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList((DirectComposition::CApplicationChannel *)this);
  v16 = 0LL;
  this[63] = 0LL;
  this[60] = 0LL;
  this[54] = 0LL;
  this[56] = 0LL;
  this[58] = 0LL;
  this[62] = 0LL;
  this[55] = 0LL;
  this[57] = 0LL;
  this[59] = 0LL;
  while ( 1 )
  {
    v17 = this[18];
    if ( v16 >= (unsigned __int64)v17 )
      break;
    v18 = (_QWORD *)((char *)this[15] + v16 * *v5);
    while ( 1 )
    {
      v19 = v16++;
      if ( *v18 )
        break;
      v18 = (_QWORD *)((char *)v18 + *v5);
      if ( v16 >= (unsigned __int64)v17 )
        goto LABEL_34;
    }
    _mm_lfence();
    v20 = *(_QWORD *)((char *)this[15] + *v5 * v19);
    if ( !v20 )
      break;
    *(_DWORD *)(v20 + 16) &= 0xFFFFFFEE;
    *(_QWORD *)(v20 + 8) = 0LL;
    v21 = *(_QWORD *)(v20 + 40);
    if ( v21 )
    {
      do
      {
        v22 = *(_DWORD *)(v21 + 8);
        v23 = *(_QWORD *)(v21 + 32);
        if ( (v22 & 1) != 0 )
          *(_DWORD *)(v21 + 8) = v22 & 0xFFFFFFFC | 2;
        *(_QWORD *)v21 = 0LL;
        v21 = v23;
      }
      while ( v23 );
    }
  }
LABEL_34:
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
