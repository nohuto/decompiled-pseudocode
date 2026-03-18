/*
 * XREFs of ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x140070F20
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x14006D880 (-OpenChannel@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?IsConnected@CConnection@DirectComposition@@QEAA_NXZ @ 0x14006FD88 (-IsConnected@CConnection@DirectComposition@@QEAA_NXZ.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x140072D60 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x140074908 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x140074BF0 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteReconnection(
        DirectComposition::CApplicationChannel *this)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  unsigned int v7; // r8d
  __int64 v8; // rcx
  _QWORD *i; // rcx
  char v10; // di
  __int64 v11; // rax

  v2 = 0LL;
  if ( *((_BYTE *)this + 60) )
    *((_DWORD *)this + 14) |= 1u;
  if ( *((_BYTE *)this + 61) )
    *((_DWORD *)this + 14) |= 2u;
  if ( *((_BYTE *)this + 62) )
    *((_DWORD *)this + 14) |= 4u;
  while ( 1 )
  {
    v3 = *((_QWORD *)this + 18);
    if ( v2 >= v3 )
      break;
    v4 = (_QWORD *)(*((_QWORD *)this + 15) + v2 * *((_QWORD *)this + 19));
    while ( 1 )
    {
      v5 = v2++;
      if ( *v4 )
        break;
      v4 = (_QWORD *)((char *)v4 + *((_QWORD *)this + 19));
      if ( v2 >= v3 )
        goto LABEL_19;
    }
    _mm_lfence();
    v6 = *(_QWORD *)(*((_QWORD *)this + 19) * v5 + *((_QWORD *)this + 15));
    if ( !v6 )
      break;
    if ( (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                            *(unsigned int *)(v6 + 36),
                            158LL) )
      v8 = 448LL;
    else
      v8 = (unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(v7, 28LL) != 0 ? 464LL : 432LL;
    *(_QWORD *)(v6 + 8) = *(_QWORD *)((char *)this + v8);
    *(_QWORD *)((char *)this + v8) = v6;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 80LL))(v6) )
      *(_DWORD *)(v6 + 16) |= 2u;
    for ( i = *(_QWORD **)(v6 + 40); i; i = (_QWORD *)i[4] )
    {
      *i = *((_QWORD *)this + 62);
      *((_QWORD *)this + 62) = i;
    }
  }
LABEL_19:
  if ( *((_QWORD *)this + 337) )
    *((_BYTE *)this + 265) |= 1u;
  if ( *((_QWORD *)this + 338) )
    *((_BYTE *)this + 265) |= 2u;
  if ( *((_QWORD *)this + 340) )
    *((_BYTE *)this + 264) |= 0x80u;
  DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  if ( DirectComposition::CConnection::IsConnected(*((DirectComposition::CConnection **)this + 5)) )
  {
    DirectComposition::CApplicationChannel::OpenChannel((struct _EPROCESS ***)this);
    v10 = 1;
  }
  else
  {
    *((_DWORD *)this + 6) = 3;
    v10 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 16LL));
  KeLeaveCriticalRegion();
  if ( v10 )
  {
    if ( (*((_BYTE *)this + 264) & 1) == 0 )
    {
      v11 = *((_QWORD *)this + 22);
      if ( !v11 || !*(_QWORD *)(v11 + 40) )
        DirectComposition::CApplicationChannel::Commit(this, 0LL, 0, 0, 0LL, 0LL, 0LL, 0);
    }
  }
}
