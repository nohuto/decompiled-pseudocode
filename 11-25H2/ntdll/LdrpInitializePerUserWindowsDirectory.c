/*
 * XREFs of LdrpInitializePerUserWindowsDirectory @ 0x1800FD1A4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeToString @ 0x18006C570 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800709D0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrAddDllDirectory @ 0x18010EA40 (LdrAddDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x18015FA74 (RtlpSignalSystemDirsModification.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpInitializePerUserWindowsDirectory(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  __int16 v3; // bx
  __int64 v4; // r9
  char v5; // [rsp+28h] [rbp-D8h]
  __m128i v6; // [rsp+30h] [rbp-D0h] BYREF
  const void *v7[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v9[528]; // [rsp+60h] [rbp-A0h] BYREF

  v8 = 0LL;
  HIDWORD(v7[0]) = 0;
  v6.m128i_i32[1] = 0;
  v1 = 2 * a1(v9, 260LL);
  if ( !v1 )
    return 0LL;
  v7[1] = v9;
  WORD1(v7[0]) = 520;
  LOWORD(v7[0]) = v1;
  if ( !*((_QWORD *)&RtlpSystemDirs + 1) )
  {
LABEL_7:
    LdrAddDllDirectory(v7, &v8);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs + 2;
  v6.m128i_i64[1] = RtlAllocateHeap(
                      (char *)NtCurrentPeb()->ProcessHeap,
                      0,
                      v1 + (unsigned int)(unsigned __int16)RtlpSystemDirs + 2LL);
  if ( v6.m128i_i64[1] )
  {
    v6.m128i_i16[0] = 0;
    v6.m128i_i16[1] = v3;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v6, (const void **)&RtlpSystemDirs);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v6, v7);
    RtlAppendUnicodeToString((unsigned __int16 *)&v6, L";");
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((__int64 *)&RtlpSystemDirs + 1), v4);
    RtlpSystemDirs = (__int128)v6;
    *((_QWORD *)&RtlpSystem32Dirs + 1) = _mm_srli_si128(v6, 8).m128i_u64[0];
    RtlpSignalSystemDirsModification();
    goto LABEL_7;
  }
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrinit.c",
    4512,
    (__int64)"LdrpInitializePerUserWindowsDirectory",
    0,
    "Failed to reallocate the system dirs string !\n",
    v5);
  return 3221225495LL;
}
