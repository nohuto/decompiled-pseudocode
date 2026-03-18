/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJ_NPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x140224048
 * Callers:
 *     NtDCompositionCreateConnection @ 0x140223030 (NtDCompositionCreateConnection.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x14006D6A0 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400755B0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x14015B224 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z @ 0x140223EAC (-Connect@CConnection@DirectComposition@@QEAAJ_NPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(__int64 a1, void *a2, struct HDCOMPOSITIONCONNECTION__ **a3)
{
  char v5; // r15
  struct DirectComposition::CProcessData *v6; // rax
  struct DirectComposition::CProcessData *v7; // rbx
  int v8; // eax
  unsigned int v9; // edx
  DirectComposition::CConnection *v10; // rsi
  int v11; // edi
  struct HDCOMPOSITIONCONNECTION__ *v12; // rax
  struct DirectComposition::CConnection *v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = 0LL;
  v5 = a1;
  v6 = DirectComposition::CProcessData::Current(a1);
  v7 = v6;
  if ( v6 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive(*((PERESOURCE *)v6 + 4));
    if ( *((_QWORD *)v7 + 3) || !UserIsCurrentProcessDwm() )
    {
      v11 = -1073741790;
    }
    else
    {
      v8 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v14);
      v10 = v14;
      v11 = v8;
      if ( v8 < 0 || (v11 = DirectComposition::CConnection::Connect(v14, v5, a2), v11 < 0) )
      {
        if ( v10 )
          DirectComposition::CConnection::Release(v10, v9);
      }
      else
      {
        *((_QWORD *)v7 + 2) += 4LL;
        v12 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v7 + 2);
        *((_QWORD *)v7 + 3) = v10;
        *a3 = v12;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v7 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v11;
}
