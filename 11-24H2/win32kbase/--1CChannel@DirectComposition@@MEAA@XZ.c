/*
 * XREFs of ??1CChannel@DirectComposition@@MEAA@XZ @ 0x140070730
 * Callers:
 *     ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1400700E8 (--1CApplicationChannel@DirectComposition@@MEAA@XZ.c)
 *     ??_GCChannel@DirectComposition@@MEAAPEAXI@Z @ 0x140224A80 (--_GCChannel@DirectComposition@@MEAAPEAXI@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CChannel::~CChannel(DirectComposition::CChannel *this)
{
  bool v1; // zf
  struct _ERESOURCE *v3; // rcx

  v1 = (*((_BYTE *)this + 48) & 1) == 0;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  if ( !v1 )
    DirectComposition::CConnection::Release(*((DirectComposition::CConnection **)this + 5));
  v3 = (struct _ERESOURCE *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    ExDeleteResourceLite(v3);
    GreDeleteFastMutex(*((char **)this + 4));
  }
}
