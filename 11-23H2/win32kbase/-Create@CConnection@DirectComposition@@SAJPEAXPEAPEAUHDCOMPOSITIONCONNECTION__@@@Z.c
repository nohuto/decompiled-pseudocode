/*
 * XREFs of ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C00864C8
 * Callers:
 *     NtDCompositionCreateConnection @ 0x1C0086440 (NtDCompositionCreateConnection.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C001B580 (UserIsCurrentProcessDwm.c)
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C0023138 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C002602C (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C00865A8 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0086654 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::Create(void *a1, struct HDCOMPOSITIONCONNECTION__ **a2)
{
  struct DirectComposition::CProcessData *v4; // rax
  struct DirectComposition::CProcessData *v5; // rdi
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  unsigned int v11; // edx
  DirectComposition::CConnection *v12; // rsi
  int v13; // ebx
  struct HDCOMPOSITIONCONNECTION__ *v14; // rax
  struct DirectComposition::CConnection *v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = 0LL;
  v4 = DirectComposition::CProcessData::Current((__int64)a1);
  v5 = v4;
  if ( v4 )
  {
    v6 = (struct _ERESOURCE *)*((_QWORD *)v4 + 4);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v6, 1u);
    if ( *((_QWORD *)v5 + 3) || !UserIsCurrentProcessDwm(v8, v7, v9) )
    {
      v13 = -1073741790;
    }
    else
    {
      v10 = DirectComposition::CConnection::ReclaimSessionGlobalConnection(&v16);
      v12 = v16;
      v13 = v10;
      if ( v10 < 0 || (v13 = DirectComposition::CConnection::Connect(v16, a1), v13 < 0) )
      {
        if ( v12 )
          DirectComposition::CConnection::Release(v12, v11);
      }
      else
      {
        *((_QWORD *)v5 + 2) += 4LL;
        v14 = (struct HDCOMPOSITIONCONNECTION__ *)*((_QWORD *)v5 + 2);
        *((_QWORD *)v5 + 3) = v12;
        *a2 = v14;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)v5 + 4));
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v13;
}
