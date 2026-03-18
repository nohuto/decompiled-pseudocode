/*
 * XREFs of ?GRIB_CopyHidData@@YAIQEAUtagHIDDATA@@PEAI1PEAPEAUtagRAWINPUT@@I@Z @ 0x14002C3BC
 * Callers:
 *     ?GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z @ 0x1401C5C24 (-GetRawInputBuffer_NoUserCrit@@YAIPEAUtagTHREADINFO@@PEAUtagRAWINPUT@@PEAII@Z.c)
 * Callees:
 *     ?CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z @ 0x14002C180 (-CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

__int64 __fastcall GRIB_CopyHidData(
        struct tagHIDDATA *const a1,
        unsigned int *a2,
        unsigned int *a3,
        struct tagRAWINPUT **a4,
        unsigned int a5)
{
  unsigned int v9; // eax
  SIZE_T v10; // rdx
  char *v12; // [rsp+50h] [rbp+8h]

  v9 = (*((_DWORD *)a1 + 15) + 7) & 0xFFFFFFF8;
  *a3 = v9;
  if ( *a2 + v9 <= *a2 )
    return 0xFFFFFFFFLL;
  v12 = (char *)*a4;
  if ( !*a4 )
    return 0LL;
  v10 = *a3;
  if ( (unsigned int)v10 + *a2 > a5 )
    return 0LL;
  ProbeForWrite(*a4, v10, 4u);
  memmove(v12, (char *)a1 + 56, *((unsigned int *)a1 + 15));
  *a4 = (struct tagRAWINPUT *)&v12[*a3];
  *a2 += *a3;
  InputTraceLogging::RawInput::CopyForGetRawInputBuffer(a1);
  return 1LL;
}
