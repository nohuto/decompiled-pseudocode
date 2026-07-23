/*
 * XREFs of MiApplyDebuggerPatches @ 0x1404F4300
 * Callers:
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 * Callees:
 *     MiReleaseSpinLockShared @ 0x14020CFC0 (MiReleaseSpinLockShared.c)
 *     MiGetPagePrivilege @ 0x140249B80 (MiGetPagePrivilege.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14024BEF0 (MiMapPageInHyperSpaceWorker.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402EEA94 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     MiCompactDebuggerPatchTable @ 0x14067F160 (MiCompactDebuggerPatchTable.c)
 *     MiDbgCopyPrivilegedData @ 0x14067FE28 (MiDbgCopyPrivilegedData.c)
 *     MiFindFirstDebuggerPatch @ 0x140680C30 (MiFindFirstDebuggerPatch.c)
 */

_UNKNOWN **__fastcall MiApplyDebuggerPatches(__int64 a1, unsigned __int64 a2, unsigned int a3, ULONG_PTR a4, int a5)
{
  _UNKNOWN **result; // rax
  int PagePrivilege; // r14d
  ULONG_PTR v11; // rdi
  int v12; // ebp
  KIRQL v13; // r13
  __int64 v14; // r8
  ULONG *v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  unsigned int v20; // [rsp+30h] [rbp-48h] BYREF
  int v21; // [rsp+34h] [rbp-44h] BYREF
  unsigned __int64 v22[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = &retaddr;
  PagePrivilege = 0;
  v21 = 0;
  v20 = 0;
  *(_OWORD *)v22 = 0LL;
  if ( dword_140E35C38 )
  {
    v11 = 48 * a4 - 0x220000000000LL;
    v12 = 1;
    v13 = ExAcquireSpinLockShared(&dword_140E35C30);
    MiCompactDebuggerPatchTable(1LL);
    if ( (unsigned int)MiFindFirstDebuggerPatch(a1, a3, 1LL, &v20) )
    {
      if ( a2 )
        v12 = 0;
      else
        a2 = MiMapPageInHyperSpaceWorker(a4, 0LL, 0x80000000);
      if ( (*(_DWORD *)(a1 + 92) & 0xC0000) != 0 )
        PagePrivilege = MiGetPagePrivilege(v11, 0, v22);
      LODWORD(v16) = v20;
      v15 = &MiState;
      v17 = *((_QWORD *)&MiState + v20 + 4118);
      do
      {
        v14 = (*(_DWORD *)(v17 + 8) >> 2) & 0x3FF;
        if ( a5 )
          v18 = *(_DWORD *)(v17 + 12);
        else
          v18 = *(_DWORD *)(v17 + 16);
        v21 = v18;
        if ( PagePrivilege )
        {
          v19 = MiDbgCopyPrivilegedData(a4, (unsigned int)v22, 4 * (int)v14, (unsigned int)&v21, 4);
          if ( v19 < 0 )
            KeBugCheckEx(0x1Au, 0x51513uLL, a4, v19, 0LL);
          v15 = &MiState;
        }
        else
        {
          *(_DWORD *)(a2 + 4 * v14) = v18;
        }
        v16 = (unsigned int)(v16 + 1);
        if ( (unsigned int)v16 >= dword_140E35C38 )
          break;
        v17 = *((_QWORD *)&MiState + v16 + 4118);
        if ( *(_QWORD *)v17 != a1 )
          break;
      }
      while ( *(_DWORD *)(v17 + 8) >> 12 == a3 );
      if ( v12 )
        MiUnmapPageInHyperSpaceWorker(a2, 0x11u, 0x80000000);
    }
    return (_UNKNOWN **)MiReleaseSpinLockShared(&dword_140E35C30, v13, v14, (__int64)v15);
  }
  return result;
}
