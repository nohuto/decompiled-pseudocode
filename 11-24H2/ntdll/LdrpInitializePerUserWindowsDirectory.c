/*
 * XREFs of LdrpInitializePerUserWindowsDirectory @ 0x1800FAF6C
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x180075AB0 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1800B2BB0 (RtlAppendUnicodeToString.c)
 *     LdrAddDllDirectory @ 0x18010C9F0 (LdrAddDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x18015E5B4 (RtlpSignalSystemDirsModification.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall LdrpInitializePerUserWindowsDirectory(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  __int16 v3; // bx
  char v4; // [rsp+28h] [rbp-D8h]
  __m128i v5; // [rsp+30h] [rbp-D0h] BYREF
  const void *v6[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v8[528]; // [rsp+60h] [rbp-A0h] BYREF

  v7 = 0LL;
  HIDWORD(v6[0]) = 0;
  v5.m128i_i32[1] = 0;
  v1 = 2 * a1(v8, 260LL);
  if ( !v1 )
    return 0LL;
  v6[1] = v8;
  WORD1(v6[0]) = 520;
  LOWORD(v6[0]) = v1;
  if ( !*((_QWORD *)&RtlpSystemDirs + 1) )
  {
LABEL_7:
    LdrAddDllDirectory(v6, &v7);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs + 2;
  v5.m128i_i64[1] = RtlAllocateHeap(
                      (__int64)NtCurrentPeb()->ProcessHeap,
                      0,
                      v1 + (unsigned int)(unsigned __int16)RtlpSystemDirs + 2LL);
  if ( v5.m128i_i64[1] )
  {
    v5.m128i_i16[0] = 0;
    v5.m128i_i16[1] = v3;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, (const void **)&RtlpSystemDirs);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, v6);
    RtlAppendUnicodeToString((unsigned __int16 *)&v5, L";");
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&RtlpSystemDirs + 1));
    RtlpSystemDirs = (__int128)v5;
    *((_QWORD *)&RtlpSystem32Dirs + 1) = _mm_srli_si128(v5, 8).m128i_u64[0];
    RtlpSignalSystemDirsModification();
    goto LABEL_7;
  }
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrinit.c",
    4510,
    (__int64)"LdrpInitializePerUserWindowsDirectory",
    0,
    "Failed to reallocate the system dirs string !\n",
    v4);
  return 3221225495LL;
}
