/*
 * XREFs of ?VidSchiReleasePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x140025090
 * Callers:
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1400252EC (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiReleasePrivateDataReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rdi
  __int64 v6; // rcx

  for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
  {
    v5 = i * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8);
    v6 = *(_QWORD *)((char *)a2 + v5 + 200);
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
      {
        if ( *(_QWORD *)v6 )
          ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v6, (PVOID)v6);
        else
          ExFreePoolWithTag((PVOID)v6, 0);
      }
      *(_QWORD *)((char *)a2 + v5 + 200) = 0LL;
    }
  }
}
