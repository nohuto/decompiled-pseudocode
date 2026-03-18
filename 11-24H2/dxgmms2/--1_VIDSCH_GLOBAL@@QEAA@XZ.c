/*
 * XREFs of ??1_VIDSCH_GLOBAL@@QEAA@XZ @ 0x1400499FC
 * Callers:
 *     VidSchTerminateAdapter @ 0x1400FAED0 (VidSchTerminateAdapter.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1400122B0 (--1HwQueueStagingList@@QEAA@XZ.c)
 */

void __fastcall _VIDSCH_GLOBAL::~_VIDSCH_GLOBAL(_VIDSCH_GLOBAL *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx
  char *v5; // rcx
  char *v6; // rcx
  char *v7; // rcx
  char *v8; // rcx

  v2 = (char *)*((_QWORD *)this + 445);
  if ( v2 != (char *)this + 3568 && v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 445) = 0LL;
  *((_DWORD *)this + 932) = 0;
  v3 = (char *)*((_QWORD *)this + 352);
  if ( v3 != (char *)this + 2824 && v3 )
    ExFreePoolWithTag(v3, 0);
  *((_QWORD *)this + 352) = 0LL;
  *((_DWORD *)this + 714) = 0;
  v4 = (char *)*((_QWORD *)this + 86);
  if ( v4 != (char *)this + 696 && v4 )
    ExFreePoolWithTag(v4, 0);
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 190) = 0;
  v5 = (char *)*((_QWORD *)this + 82);
  if ( v5 != (char *)this + 664 && v5 )
    ExFreePoolWithTag(v5, 0);
  *((_QWORD *)this + 82) = 0LL;
  *((_DWORD *)this + 170) = 0;
  v6 = (char *)*((_QWORD *)this + 76);
  if ( v6 != (char *)this + 616 && v6 )
    ExFreePoolWithTag(v6, 0);
  *((_QWORD *)this + 76) = 0LL;
  *((_DWORD *)this + 158) = 0;
  v7 = (char *)*((_QWORD *)this + 70);
  if ( v7 != (char *)this + 568 && v7 )
    ExFreePoolWithTag(v7, 0);
  *((_QWORD *)this + 70) = 0LL;
  *((_DWORD *)this + 146) = 0;
  v8 = (char *)*((_QWORD *)this + 64);
  if ( v8 != (char *)this + 520 && v8 )
    ExFreePoolWithTag(v8, 0);
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 134) = 0;
  HwQueueStagingList::~HwQueueStagingList((_VIDSCH_GLOBAL *)((char *)this + 272));
}
