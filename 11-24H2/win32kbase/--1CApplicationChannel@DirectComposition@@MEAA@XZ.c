/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1400700E8
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1400700B0 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x14006E4EC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1400705B0 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ??1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ @ 0x1400705F0 (--1CBatchSharedMemoryPool@DirectComposition@@QEAA@XZ.c)
 *     ??1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ @ 0x140070708 (--1CBatchSharedMemoryPoolSet@DirectComposition@@QEAA@XZ.c)
 *     ??1CChannel@DirectComposition@@MEAA@XZ @ 0x140070730 (--1CChannel@DirectComposition@@MEAA@XZ.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140070780 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1400709C0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x14007F850 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this)
{
  bool v1; // zf
  DirectComposition::CEvent *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  DirectComposition::CBatchSharedMemoryPool **v6; // rsi
  DirectComposition::CBatchSharedMemoryPool *v7; // rbx
  char *v8; // rcx
  struct _ERESOURCE *v9; // rcx
  DirectComposition::CEvent *v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  DirectComposition::CEvent *v14; // rcx
  char *v15; // rbx

  v1 = *((_QWORD *)this + 30) == 0LL;
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( !v1 )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    v14 = (DirectComposition::CEvent *)*((_QWORD *)this + 30);
    if ( v14 )
      DirectComposition::CEvent::`scalar deleting destructor'(v14);
  }
  v3 = (DirectComposition::CEvent *)*((_QWORD *)this + 29);
  if ( v3 )
    DirectComposition::CEvent::`scalar deleting destructor'(v3);
  v4 = (char *)*((_QWORD *)this + 24);
  if ( v4 )
  {
    do
    {
      v15 = *(char **)v4;
      GreDeleteFastMutex(v4);
      *((_QWORD *)this + 24) = v15;
      v4 = v15;
    }
    while ( v15 );
  }
  v5 = (char *)*((_QWORD *)this + 23);
  if ( v5 )
  {
    GreDeleteFastMutex(v5);
    *((_QWORD *)this + 23) = 0LL;
  }
  v6 = (DirectComposition::CBatchSharedMemoryPool **)((char *)this + 2632);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (DirectComposition::CBatchSharedMemoryPool *)v6 )
      break;
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(*v6);
    if ( v7 )
    {
      DirectComposition::CBatchSharedMemoryPool::~CBatchSharedMemoryPool(v7);
      GreDeleteFastMutex((char *)v7);
    }
  }
  v8 = (char *)*((_QWORD *)this + 340);
  if ( v8 )
    GreDeleteFastMutex(v8);
  v9 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
  if ( v9 )
  {
    ExDeleteResourceLite(v9);
    GreDeleteFastMutex(*((char **)this + 49));
  }
  v10 = (DirectComposition::CEvent *)*((_QWORD *)this + 48);
  if ( v10 )
    DirectComposition::CEvent::`scalar deleting destructor'(v10);
  if ( *((_QWORD *)this + 346) )
  {
    MmUnmapViewOfSection(*((_QWORD *)this + 339));
    *((_QWORD *)this + 346) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 345);
  if ( v11 )
  {
    MmUnmapViewInSessionSpace(v11);
    *((_QWORD *)this + 345) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 343);
  if ( v12 )
  {
    ObfDereferenceObject(v12);
    *((_QWORD *)this + 343) = 0LL;
  }
  v13 = (void *)*((_QWORD *)this + 339);
  if ( v13 )
  {
    ObfDereferenceObject(v13);
    *((_QWORD *)this + 339) = 0LL;
  }
  if ( (*((_BYTE *)this + 265) & 8) != 0 )
    DirectComposition::CConnection::ReleaseShellResourceAccess(*((DirectComposition::CConnection **)this + 5), 1u);
  DirectComposition::CBatchSharedMemoryPoolSet::~CBatchSharedMemoryPoolSet((DirectComposition::CApplicationChannel *)((char *)this + 2632));
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 528));
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 120));
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 64));
  DirectComposition::CChannel::~CChannel(this);
}
