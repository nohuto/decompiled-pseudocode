/*
 * XREFs of ??1CChannelGroup@DirectComposition@@QEAA@XZ @ 0x14019DF20
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1400E1B98 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ @ 0x140070780 (--1CDCompDynamicArrayBase@DirectComposition@@IEAA@XZ.c)
 */

void __fastcall DirectComposition::CChannelGroup::~CChannelGroup(DirectComposition::CChannelGroup *this)
{
  struct _ERESOURCE *v2; // rcx

  v2 = (struct _ERESOURCE *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    ExDeleteResourceLite(v2);
    GreDeleteFastMutex(*((char **)this + 7));
  }
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((char **)this);
}
