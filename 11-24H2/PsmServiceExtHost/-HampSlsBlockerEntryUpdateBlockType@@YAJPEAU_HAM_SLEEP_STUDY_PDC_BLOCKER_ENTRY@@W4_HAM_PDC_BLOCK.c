/*
 * XREFs of ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180067AC8
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003B994 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180067CCC (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x180067EAC (-HampSlsCreateGuid@@YAJPEAU_GUID@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HampSlsBlockerEntryUpdateBlockType(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v16; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v17; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v18; // [rsp+80h] [rbp-80h] BYREF
  wchar_t Source[256]; // [rsp+90h] [rbp-70h] BYREF
  int v20; // [rsp+290h] [rbp+190h]

  v5 = a2;
  v18 = 0LL;
  memset_0(Source, 0, 0x204uLL);
  v8 = *(unsigned __int8 *)(a1 + 32);
  v13 = 0LL;
  v14 = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  if ( (_BYTE)v8 != 5 )
  {
    v13 = *(_QWORD *)(a1 + 8 * v8 + 64);
    if ( (_BYTE)v8 )
      SleepstudyHelperBlockerActiveDereference();
  }
  if ( !(_BYTE)v5 )
    goto LABEL_13;
  v9 = *(_QWORD *)(a1 + 8 * v5 + 64);
  v13 = v9;
  if ( v9 )
  {
LABEL_12:
    SleepstudyHelperBlockerActiveReference(v9);
LABEL_13:
    v10 = 0;
    *(_BYTE *)(a1 + 32) = v5;
    goto LABEL_14;
  }
  RtlStringCchPrintfExW(Source, 0x100uLL, &v16, 0LL, 0, L"%s (%u)", a4 + 24, v5);
  v20 = wcsnlen(Source, 0x100uLL) + 1;
  RtlInitUnicodeString(&DestinationString, Source);
  if ( (unsigned int)HampSlsCreateGuid(&v17) )
  {
    v10 = -1073741823;
    goto LABEL_14;
  }
  v11 = *(_QWORD *)(a3 + 8);
  v18 = v17;
  v10 = SleepstudyHelperCreateBlockerFromGuid(v11, a1 + 40, &v18, &DestinationString, 3, &v14);
  if ( v10 >= 0 )
  {
    v10 = SleepstudyHelperSetBlockerParentHandle(v14, *(_QWORD *)(a1 + 56));
    if ( v10 >= 0 )
    {
      v10 = SleepstudyHelperBuildBlocker(v14, &v13);
      if ( v10 >= 0 )
      {
        v14 = 0LL;
        *(_QWORD *)(a1 + 8 * v5 + 64) = v13;
        v9 = v13;
        goto LABEL_12;
      }
    }
  }
LABEL_14:
  if ( v14 )
    SleepstudyHelperDestroyBlockerBuilder();
  return (unsigned int)v10;
}
