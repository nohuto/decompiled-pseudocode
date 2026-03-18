/*
 * XREFs of ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x140259840
 * Callers:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1400148B8 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1401B8A30 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1402FA8F4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall SURFREF::SURFREF(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(a1);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  result = a1;
  *(_QWORD *)(a2 + 32) = 0LL;
  return result;
}
