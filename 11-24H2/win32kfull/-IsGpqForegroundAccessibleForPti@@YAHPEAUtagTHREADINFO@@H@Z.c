/*
 * XREFs of ?IsGpqForegroundAccessibleForPti@@YAHPEAUtagTHREADINFO@@H@Z @ 0x14009425C
 * Callers:
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x1400928F0 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     CheckCursorClipAccess @ 0x1400932B0 (CheckCursorClipAccess.c)
 *     EditionIsGpqForegroundAccessibleCurrent @ 0x1400941F0 (EditionIsGpqForegroundAccessibleCurrent.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x140094230 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 * Callees:
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x140094E38 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

__int64 __fastcall IsGpqForegroundAccessibleForPti(struct tagTHREADINFO *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // xmm0_8
  __int64 v4; // r9
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]

  v2 = *((_QWORD *)a1 + 58);
  v3 = *(_QWORD *)(v2 + 872);
  v4 = *(_DWORD *)(v2 + 12) & 0x80000000;
  LODWORD(v2) = *(_DWORD *)(v2 + 880);
  v6 = v3;
  v7 = v2;
  return ((__int64 (__fastcall *)(_QWORD, struct tagTHREADINFO *, __int64 *, __int64))IsGpqForegroundAccessibleExplicit)(
           a2,
           a1,
           &v6,
           v4);
}
