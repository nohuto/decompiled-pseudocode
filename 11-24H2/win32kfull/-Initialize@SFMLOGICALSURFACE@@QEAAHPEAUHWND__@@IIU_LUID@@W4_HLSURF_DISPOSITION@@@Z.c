/*
 * XREFs of ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1400C767C
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1400C916C (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x14016B0D4 (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SFMLOGICALSURFACE::Initialize(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax

  SfmTokenArray::Initialize((SfmTokenArray *)(a1 + 216));
  *(_QWORD *)(a1 + 176) = a2;
  *(_DWORD *)(a1 + 244) &= ~2u;
  GreInitializePushLock((struct W32_PUSH_LOCK *)(a1 + 256));
  *(_QWORD *)(a1 + 280) = -1LL;
  *(_DWORD *)(a1 + 244) &= 0xFFFFFFA2;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 200) = a5;
  *(_DWORD *)(a1 + 288) = a6;
  *(_QWORD *)(a1 + 264) = a2;
  *(_DWORD *)(a1 + 276) = a4;
  *(_DWORD *)(a1 + 272) = a3;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *(_QWORD *)(a1 + 32) = a1 + 32;
  *(_QWORD *)(a1 + 56) = a1 + 48;
  *(_QWORD *)(a1 + 48) = a1 + 48;
  result = 1LL;
  *(_DWORD *)(a1 + 248) = 0;
  return result;
}
