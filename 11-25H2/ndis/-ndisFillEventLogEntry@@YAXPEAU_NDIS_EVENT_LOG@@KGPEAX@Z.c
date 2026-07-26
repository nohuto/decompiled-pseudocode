/*
 * XREFs of ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x140071C60
 * Callers:
 *     ?ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z @ 0x140025A10 (-ndisRecordEvent@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@GPEAX@Z.c)
 * Callees:
 *     ?ndisCaptureStackTrace@@YAKK@Z @ 0x140071D40 (-ndisCaptureStackTrace@@YAKK@Z.c)
 *     ?ndisReleaseStackTrace@@YAXK@Z @ 0x14007CF60 (-ndisReleaseStackTrace@@YAXK@Z.c)
 */

void __fastcall ndisFillEventLogEntry(struct _NDIS_EVENT_LOG *a1, int a2, __int16 a3, void *a4)
{
  char *v5; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r8
  __int16 v8; // r8
  ULONG_PTR v9; // rcx

  v5 = (char *)a1 + a2 * (unsigned int)a1->EntrySize;
  if ( (a1->Flags & 1) != 0 )
  {
    v6 = MEMORY[0xFFFFF78000000014];
    v7 = (MEMORY[0xFFFFF78000000014] - a1->LastEventTime) / 0x2710;
    if ( v7 >= 0x7FFF )
    {
      if ( v7 >= 0x1F3FC18 )
        v8 = *((_WORD *)v5 + 17) | 0x8000;
      else
        v8 = (v7 / 0x3E8) | 0x8000;
    }
    else
    {
      v8 = v7 & 0x7FFF;
    }
    *((_WORD *)v5 + 17) = v8;
    a1->LastEventTime = v6;
  }
  if ( (a1->Flags & 4) != 0 )
    *((_QWORD *)v5 + 5) = a4;
  if ( (a1->Flags & 2) != 0 )
  {
    v9 = *((unsigned int *)v5 + 9);
    if ( (_DWORD)v9 )
      ndisReleaseStackTrace(v9);
    *((_DWORD *)v5 + 9) = ndisCaptureStackTrace(v9);
  }
  *((_WORD *)v5 + 16) = a3;
}
