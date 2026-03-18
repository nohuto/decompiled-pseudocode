/*
 * XREFs of ?GetThreadCurrentUMPDObj@UMPDOBJ@@SAPEAV1@PEAU_GRETHREAD@@@Z @ 0x1400D90D0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x14005DC90 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     UMPDThreadCleanup @ 0x1400D8A90 (UMPDThreadCleanup.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D8F54 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     NtGdiSetPUMPDOBJ @ 0x140262E70 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     <none>
 */

struct UMPDOBJ *__fastcall UMPDOBJ::GetThreadCurrentUMPDObj(struct _GRETHREAD *a1)
{
  char *v1; // rax
  char *v2; // rcx

  if ( !a1 )
    return 0LL;
  v1 = (char *)a1 + 72;
  v2 = (char *)*((_QWORD *)a1 + 9);
  if ( v2 == v1 )
    return 0LL;
  else
    return (struct UMPDOBJ *)(v2 - 56);
}
