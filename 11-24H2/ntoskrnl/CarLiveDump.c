/*
 * XREFs of CarLiveDump @ 0x1406180E0
 * Callers:
 *     CarWriteLivedump @ 0x1406182D4 (CarWriteLivedump.c)
 * Callees:
 *     CarEtwWriteLiveDumpEvent @ 0x140614288 (CarEtwWriteLiveDumpEvent.c)
 *     DifiDbgPrint @ 0x140617D64 (DifiDbgPrint.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140AA4BD0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CarLiveDump(_QWORD *P)
{
  unsigned int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // eax
  int v8; // edx
  int v9; // r8d

  if ( P )
  {
    v3 = P[168];
    v4 = P[167];
    v5 = P[166];
    v6 = P[165];
    if ( *((_BYTE *)P + 1352) )
      v7 = DbgkWerCaptureLiveKernelDump(
             (unsigned int)L"VerifierExt",
             452,
             v6,
             v5,
             v4,
             v3,
             (__int64)P,
             (__int64)CarLiveDumpCallBack,
             2);
    else
      v7 = DbgkWerCaptureLiveKernelDump((unsigned int)L"VerifierExt", 452, v6, v5, v4, v3, 0LL, 0LL, 2);
    v2 = v7;
    if ( v7 >= 0 )
    {
      CarEtwWriteLiveDumpEvent((int *)P, v8, v9);
      CarPreviousDumpTime = MEMORY[0xFFFFF78000000014];
    }
    else
    {
      DifiDbgPrint("Livedump failed with Status code: 0x%X \n", v7);
    }
    ExFreePoolWithTag(P, 0x4E726143u);
  }
  else
  {
    v2 = -1073741811;
  }
  _InterlockedExchange(&CarLkdInProgress, 0);
  return v2;
}
