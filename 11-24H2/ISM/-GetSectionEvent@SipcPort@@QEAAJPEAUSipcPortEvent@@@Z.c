/*
 * XREFs of ?GetSectionEvent@SipcPort@@QEAAJPEAUSipcPortEvent@@@Z @ 0x18010F000
 * Callers:
 *     ?DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z @ 0x1800629A0 (-DispatchNextCallback@SipcEndpoint@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?DecreaseSectionEventCount@SipcPort@@AEAAXI@Z @ 0x18010EA94 (-DecreaseSectionEventCount@SipcPort@@AEAAXI@Z.c)
 */

__int64 __fastcall SipcPort::GetSectionEvent(SipcPort *this, struct SipcPortEvent *a2)
{
  SipcPort *i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  if ( *((_DWORD *)this + 10) )
  {
    for ( i = (SipcPort *)*((_QWORD *)this + 1); i != (SipcPort *)((char *)this + 8); i = *(SipcPort **)i )
    {
      v4 = (__int64)i + 80;
      if ( !i )
        v4 = 88LL;
      if ( *(_DWORD *)v4 == 2 )
      {
        *(_DWORD *)v4 = 3;
        SipcPort::DecreaseSectionEventCount(this);
        *((_DWORD *)a2 + 2) = 0;
        v5 = (__int64)i + 24;
        *(_DWORD *)a2 = 5;
        if ( !i )
          v5 = 32LL;
        *((_QWORD *)a2 + 2) = *(_QWORD *)v5;
        v6 = (__int64)i + 40;
        if ( !i )
          v6 = 48LL;
        v7 = *(_QWORD *)v6;
        *((_QWORD *)a2 + 4) = 0LL;
        *((_QWORD *)a2 + 5) = 0LL;
        *((_QWORD *)a2 + 3) = v7;
        return 0LL;
      }
    }
  }
  *(_DWORD *)a2 = 0;
  return 1LL;
}
