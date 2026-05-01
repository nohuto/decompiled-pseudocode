/*
 * XREFs of ?HampAppAllocateState@@YAJPEAU_HAM_APPLICATION@@@Z @ 0x180040FA4
 * Callers:
 *     ?RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012F30 (-RmHamFindOrCreateHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@KW4_HOST_GROUP@@PE.c)
 * Callees:
 *     ?HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z @ 0x1800587F0 (-HampAppQueryTerminateReason@@YAJPEAU_HAM_APPLICATION@@PEAW4_HAM_TERMINATE_REASON@@@Z.c)
 */

__int64 __fastcall HampAppAllocateState(struct _HAM_APPLICATION *a1)
{
  __int64 v1; // rax
  int TerminateReason; // ecx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 11);
  v5 = 0;
  TerminateReason = TpAllocWork(
                      (char *)a1 + 560,
                      HampAppInterruptiveUIChangeWorker,
                      a1,
                      (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v1 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                    + 584);
  if ( TerminateReason >= 0 )
  {
    TerminateReason = HampAppQueryTerminateReason(a1, (enum _HAM_TERMINATE_REASON *)&v5);
    if ( (int)(TerminateReason + 0x80000000) < 0 || TerminateReason == -1073283070 )
    {
      TerminateReason = 0;
      *((_WORD *)a1 + 308) = v5;
    }
  }
  return (unsigned int)TerminateReason;
}
