/*
 * XREFs of NtDCompositionBoostCompositorClock @ 0x14006CE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x14006D6A0 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z @ 0x140073D14 (-BoostCompositorClock@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400748D4 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall NtDCompositionBoostCompositorClock(int a1)
{
  int v2; // ebx
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v4; // rdi
  int v5; // eax
  bool v6; // cl
  int v7; // eax

  v2 = 0;
  KeEnterCriticalRegion();
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( !DefaultConnection )
  {
    v2 = -1073741790;
    goto LABEL_8;
  }
  v4 = DirectComposition::CProcessData::Current();
  ExAcquirePushLockExclusiveEx((char *)v4 + 40, 0LL);
  *((_BYTE *)v4 + 48) = 1;
  v5 = *((_DWORD *)v4 + 17);
  if ( a1 )
  {
    if ( v5 != -1 )
    {
      v6 = v5 == 0;
      v7 = v5 + 1;
LABEL_5:
      *((_DWORD *)v4 + 17) = v7;
      if ( v6 )
      {
        v2 = DirectComposition::CConnection::BoostCompositorClock(DefaultConnection, a1);
        if ( v2 < 0 )
        {
          if ( a1 )
            --*((_DWORD *)v4 + 17);
        }
      }
      goto LABEL_7;
    }
  }
  else if ( v5 )
  {
    v7 = v5 - 1;
    v6 = v7 == 0;
    goto LABEL_5;
  }
  v2 = -1073741823;
LABEL_7:
  DirectComposition::CPushLockCriticalSection::Release((struct DirectComposition::CProcessData *)((char *)v4 + 40));
  DirectComposition::CConnection::Release(DefaultConnection);
LABEL_8:
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
