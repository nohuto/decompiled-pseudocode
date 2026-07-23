/*
 * XREFs of MiHotPatchAllProcesses @ 0x1407F3224
 * Callers:
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9ADA4 (MiLoadHotPatch.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MiHotPatchProcess @ 0x1407F32D8 (MiHotPatchProcess.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _KPROCESS *v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 NextProcess; // rax
  _KPROCESS *v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-58h] BYREF
  __int128 v14; // [rsp+30h] [rbp-48h]
  __int128 v15; // [rsp+40h] [rbp-38h]

  v13 = 0LL;
  v14 = 0LL;
  v6 = 0LL;
  v15 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v6);
    v11 = (_KPROCESS *)NextProcess;
    if ( !NextProcess )
      break;
    v7 = *(_DWORD *)(NextProcess + 1532);
    if ( (v7 & 0x1000) == 0 && (v7 & 1) == 0 && !v11[3].Padding[5] )
    {
      KiStackAttachProcess(v11, 0, (__int64)&v13);
      MiHotPatchProcess(
        v11,
        a1,
        a2,
        a3,
        v13,
        *((_QWORD *)&v13 + 1),
        v14,
        *((_QWORD *)&v14 + 1),
        v15,
        *((_QWORD *)&v15 + 1));
      KiUnstackDetachProcess((__int64)&v13, 0, v8, v9);
    }
    v6 = v11;
  }
  return 0LL;
}
