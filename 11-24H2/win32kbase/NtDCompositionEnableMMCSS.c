/*
 * XREFs of NtDCompositionEnableMMCSS @ 0x14006FEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x14006D6A0 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x14006FC08 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400748D4 (-Release@CPushLockCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x14007493C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x14007496C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall NtDCompositionEnableMMCSS(int a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  DirectComposition::CConnection *DefaultConnection; // rsi
  struct DirectComposition::CProcessData *v5; // rdi
  int v6; // eax
  bool v7; // cl
  int v8; // eax

  v2 = 0;
  KeEnterCriticalRegion();
  DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
  if ( !DefaultConnection )
  {
    v2 = -1073741790;
    goto LABEL_8;
  }
  v5 = DirectComposition::CProcessData::Current(v3);
  ExAcquirePushLockExclusiveEx((char *)v5 + 40, 0LL);
  *((_BYTE *)v5 + 48) = 1;
  v6 = *((_DWORD *)v5 + 16);
  if ( a1 )
  {
    if ( v6 != -1 )
    {
      v7 = v6 == 0;
      v8 = v6 + 1;
LABEL_5:
      *((_DWORD *)v5 + 16) = v8;
      if ( v7 )
      {
        v2 = DirectComposition::CConnection::EnableMMCSS(DefaultConnection, a1);
        if ( v2 < 0 )
        {
          if ( a1 )
            --*((_DWORD *)v5 + 16);
        }
      }
      goto LABEL_7;
    }
  }
  else if ( v6 )
  {
    v8 = v6 - 1;
    v7 = v8 == 0;
    goto LABEL_5;
  }
  v2 = -1073741823;
LABEL_7:
  DirectComposition::CPushLockCriticalSection::Release((struct DirectComposition::CProcessData *)((char *)v5 + 40));
  DirectComposition::CConnection::Release(DefaultConnection);
LABEL_8:
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
