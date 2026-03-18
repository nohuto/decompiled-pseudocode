/*
 * XREFs of ??0SURFREF@@QEAA@$$QEAV0@@Z @ 0x1C0264E28
 * Callers:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0025B70 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C01349A0 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 * Callees:
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013D794 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 */

__int64 __fastcall SURFREF::SURFREF(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>((_OWORD *)a1);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  result = a1;
  *(_QWORD *)(a2 + 32) = 0LL;
  return result;
}
