/*
 * XREFs of ObpCaptureHandleInformation @ 0x14099AFB0
 * Callers:
 *     <none>
 * Callees:
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 */

__int64 __fastcall ObpCaptureHandleInformation(
        int a1,
        __int64 a2,
        __int16 a3,
        __int64 *a4,
        __int16 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v11; // r10d
  unsigned __int64 HandlePointer; // rax
  unsigned __int64 v13; // r10
  char v14; // r8
  __int64 result; // rax
  unsigned __int64 v16; // rdx

  v11 = *a7 + 24;
  *a7 = v11;
  if ( v11 < 0x18 )
    return 3221225621LL;
  if ( a6 < v11 )
    return 3221225476LL;
  HandlePointer = ExGetHandlePointer(a4);
  v13 = HandlePointer;
  **(_WORD **)a2 = a3;
  v14 = ((__int64)*(unsigned int *)a4 >> 17) & 7 | 8;
  if ( (a4[1] & 0x2000000) == 0 )
    v14 = ((__int64)*(unsigned int *)a4 >> 17) & 7;
  *(_BYTE *)(*(_QWORD *)a2 + 5LL) = v14 & 7;
  *(_BYTE *)(*(_QWORD *)a2 + 4LL) = *(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                                             + 40);
  *(_WORD *)(*(_QWORD *)a2 + 6LL) = a5;
  result = 0LL;
  v16 = 0LL;
  if ( !a1 )
    v16 = v13 + 48;
  *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v16;
  *(_WORD *)(*(_QWORD *)a2 + 2LL) = 0;
  *(_DWORD *)(*(_QWORD *)a2 + 16LL) = a4[1] & 0x1FFFFFF;
  *(_QWORD *)a2 += 24LL;
  return result;
}
