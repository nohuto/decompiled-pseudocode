/*
 * XREFs of NtWaitForSingleObject @ 0x14084EFB0
 * Callers:
 *     SepRmCallLsa @ 0x1403D8550 (SepRmCallLsa.c)
 *     PfSnPrefetchFileMetadata @ 0x1408C3008 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     ObWaitForSingleObject @ 0x14084F030 (ObWaitForSingleObject.c)
 */

__int64 __fastcall NtWaitForSingleObject(int a1, unsigned __int8 a2, LARGE_INTEGER *a3)
{
  int v3; // r9d
  int PreviousMode; // edx
  __int64 v5; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v7 = 0LL;
  PreviousMode = (unsigned __int8)KeGetCurrentThread()->PreviousMode;
  if ( a3 && (_BYTE)PreviousMode )
  {
    v5 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a3 < 0x7FFFFFFF0000LL )
      v5 = (__int64)a3;
    v7 = *(_QWORD *)v5;
    a3 = (LARGE_INTEGER *)&v7;
  }
  return ObWaitForSingleObject(a1, PreviousMode, (unsigned __int8)PreviousMode, v3, a3);
}
