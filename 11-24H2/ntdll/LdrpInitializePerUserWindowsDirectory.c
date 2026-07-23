/*
 * XREFs of LdrpInitializePerUserWindowsDirectory @ 0x1800F5EA4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAppendUnicodeToString @ 0x18007F450 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180092390 (RtlAppendUnicodeStringToString.c)
 *     LdrAddDllDirectory @ 0x180107730 (LdrAddDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x18015C974 (RtlpSignalSystemDirsModification.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpInitializePerUserWindowsDirectory(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  unsigned __int16 v3; // bx
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Cookie; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v7[528]; // [rsp+60h] [rbp-A0h] BYREF

  Cookie = 0LL;
  *(_DWORD *)(&Source.MaximumLength + 1) = 0;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v1 = 2 * a1(v7, 260LL);
  if ( !v1 )
    return 0LL;
  Source.Buffer = (wchar_t *)v7;
  Source.MaximumLength = 520;
  Source.Length = v1;
  if ( !RtlpSystemDirs.Buffer )
  {
LABEL_7:
    LdrAddDllDirectory(&Source, &Cookie);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs.Length + 2;
  Destination.Buffer = (wchar_t *)RtlAllocateHeap(
                                    NtCurrentPeb()->ProcessHeap,
                                    0,
                                    v1 + (unsigned int)RtlpSystemDirs.Length + 2LL);
  if ( Destination.Buffer )
  {
    Destination.Length = 0;
    Destination.MaximumLength = v3;
    RtlAppendUnicodeStringToString(&Destination, &RtlpSystemDirs);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, L";");
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RtlpSystemDirs.Buffer);
    RtlpSystemDirs = Destination;
    *((_QWORD *)&RtlpSystem32Dirs + 1) = _mm_srli_si128((__m128i)Destination, 8).m128i_u64[0];
    RtlpSignalSystemDirsModification();
    goto LABEL_7;
  }
  LdrpLogInternal(
    "minkernel\\ldr\\ldrinit.c",
    4510,
    (__int64)"LdrpInitializePerUserWindowsDirectory",
    0,
    "Failed to reallocate the system dirs string !\n");
  return 3221225495LL;
}
