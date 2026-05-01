/*
 * XREFs of ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180067900
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003B994 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF00 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180067CCC (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x180067EAC (-HampSlsCreateGuid@@YAJPEAU_GUID@@@Z.c)
 *     ?HampSlsBlockerEntryInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180067F0C (-HampSlsBlockerEntryInitialize@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 *     ?HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x18006BD2C (-HampSlsBlockerEntryDestroy@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_E.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampSlsBlockerEntryCreate(
        struct _HAM_SLEEP_STUDY_CONTEXT *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2,
        struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY **a3)
{
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *Heap; // rax
  struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *v7; // rdi
  int v8; // ebx
  __int64 v9; // rcx
  struct _HAM_SLEEP_STUDY_CONTEXT *v10; // rcx
  struct _HAM_SLEEP_STUDY_CONTEXT *v12; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v14; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v15; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v16; // [rsp+70h] [rbp-90h] BYREF
  GUID v17; // [rsp+80h] [rbp-80h] BYREF
  wchar_t Source[256]; // [rsp+90h] [rbp-70h] BYREF
  int v19; // [rsp+290h] [rbp+190h]

  memset_0(Source, 0, 0x204uLL);
  v12 = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  Heap = (struct _HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY *)HampAllocateHeap(0x68uLL);
  v7 = Heap;
  if ( Heap )
  {
    HampSlsBlockerEntryInitialize(a2, Heap);
    RtlStringCchPrintfExW(Source, 0x100uLL, &v14, 0LL, 0, L"%s", (char *)a2 + 24);
    v19 = wcsnlen(Source, 0x100uLL) + 1;
    RtlInitUnicodeString(&DestinationString, Source);
    if ( (unsigned int)HampSlsCreateGuid(&v16) )
    {
      v8 = -1073741823;
    }
    else
    {
      v9 = *((_QWORD *)a1 + 1);
      v17 = GUID_SLEEPSTUDY_BLOCKER_PLM_PHASE;
      v15 = v16;
      v8 = SleepstudyHelperCreateBlockerFromGuid(v9, &v17, &v15, &DestinationString, 3, &v12);
      if ( v8 >= 0 )
      {
        v8 = SleepstudyHelperBuildBlocker(v12, (char *)v7 + 56);
        if ( v8 >= 0 )
        {
          *(struct _GUID *)((char *)v7 + 40) = v15;
          *a3 = v7;
          v7 = 0LL;
          v12 = 0LL;
          v8 = 0;
        }
      }
    }
  }
  else
  {
    v8 = -1073741801;
  }
  v10 = v12;
  if ( v12 )
    SleepstudyHelperDestroyBlockerBuilder();
  if ( v7 )
    HampSlsBlockerEntryDestroy(v10, v7);
  return (unsigned int)v8;
}
