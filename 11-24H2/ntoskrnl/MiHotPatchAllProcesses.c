/*
 * XREFs of MiHotPatchAllProcesses @ 0x1407F2C54
 * Callers:
 *     MiLoadHotPatchForUserSid @ 0x140A9F6C0 (MiLoadHotPatchForUserSid.c)
 *     MiLoadHotPatch @ 0x140A9F9D4 (MiLoadHotPatch.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MiHotPatchProcess @ 0x1407F2D08 (MiHotPatchProcess.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 */

__int64 __fastcall MiHotPatchAllProcesses(unsigned int a1, unsigned int a2, unsigned int a3)
{
  _KPROCESS *v6; // rcx
  int v7; // eax
  __int64 NextProcess; // rax
  _KPROCESS *v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-58h] BYREF
  __int128 v12; // [rsp+30h] [rbp-48h]
  __int128 v13; // [rsp+40h] [rbp-38h]

  v11 = 0LL;
  v12 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v6);
    v9 = (_KPROCESS *)NextProcess;
    if ( !NextProcess )
      break;
    v7 = *(_DWORD *)(NextProcess + 1532);
    if ( (v7 & 0x1000) == 0 && (v7 & 1) == 0 && !v9[3].Padding[5] )
    {
      KiStackAttachProcess(v9, 0, (__int64)&v11);
      MiHotPatchProcess(
        v9,
        a1,
        a2,
        a3,
        v11,
        *((_QWORD *)&v11 + 1),
        v12,
        *((_QWORD *)&v12 + 1),
        v13,
        *((_QWORD *)&v13 + 1));
      KiUnstackDetachProcess((__int64)&v11, 0);
    }
    v6 = v9;
  }
  return 0LL;
}
