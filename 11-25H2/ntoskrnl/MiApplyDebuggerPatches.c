/*
 * XREFs of MiApplyDebuggerPatches @ 0x1404F41FC
 * Callers:
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1403F3C40 (MiValidateInPage.c)
 * Callees:
 *     MiGetPagePrivilege @ 0x140230BA0 (MiGetPagePrivilege.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024DAC0 (MiMapPageInHyperSpaceWorker.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     MiReleaseSpinLockShared @ 0x140323610 (MiReleaseSpinLockShared.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14040FDB8 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     MiCompactDebuggerPatchTable @ 0x140672748 (MiCompactDebuggerPatchTable.c)
 *     MiDbgCopyPrivilegedData @ 0x140673408 (MiDbgCopyPrivilegedData.c)
 *     MiFindFirstDebuggerPatch @ 0x140674210 (MiFindFirstDebuggerPatch.c)
 */

_UNKNOWN **__fastcall MiApplyDebuggerPatches(__int64 a1, unsigned __int64 a2, unsigned int a3, ULONG_PTR a4, int a5)
{
  _UNKNOWN **result; // rax
  int PagePrivilege; // r14d
  ULONG_PTR v11; // rdi
  int v12; // ebp
  KIRQL v13; // r13
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  unsigned int v19; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v21[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  PagePrivilege = 0;
  v20 = 0;
  v19 = 0;
  *(_OWORD *)v21 = 0LL;
  if ( dword_140E358B0 )
  {
    v11 = 48 * a4 - 0x220000000000LL;
    v12 = 1;
    v13 = ExAcquireSpinLockShared(&dword_140E358A8);
    MiCompactDebuggerPatchTable(1LL);
    if ( (unsigned int)MiFindFirstDebuggerPatch(a1, a3, 1LL, &v19) )
    {
      if ( a2 )
        v12 = 0;
      else
        a2 = MiMapPageInHyperSpaceWorker(a4, 0LL, 0x80000000);
      if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
        PagePrivilege = MiGetPagePrivilege(v11, 0, v21);
      LODWORD(v14) = v19;
      v15 = *((_QWORD *)&MiState + v19 + 4117);
      do
      {
        v16 = (*(_DWORD *)(v15 + 8) >> 2) & 0x3FF;
        if ( a5 )
          v17 = *(_DWORD *)(v15 + 12);
        else
          v17 = *(_DWORD *)(v15 + 16);
        v20 = v17;
        if ( PagePrivilege )
        {
          v18 = MiDbgCopyPrivilegedData(a4, (unsigned int)v21, 4 * (int)v16, (unsigned int)&v20, 4);
          if ( v18 < 0 )
            KeBugCheckEx(0x1Au, 0x51513uLL, a4, v18, 0LL);
        }
        else
        {
          *(_DWORD *)(a2 + 4 * v16) = v17;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= dword_140E358B0 )
          break;
        v15 = *((_QWORD *)&MiState + v14 + 4117);
        if ( *(_QWORD *)v15 != a1 )
          break;
      }
      while ( *(_DWORD *)(v15 + 8) >> 12 == a3 );
      if ( v12 )
        MiUnmapPageInHyperSpaceWorker(a2, 0x11u, 0x80000000);
    }
    return (_UNKNOWN **)MiReleaseSpinLockShared(&dword_140E358A8, v13);
  }
  return result;
}
