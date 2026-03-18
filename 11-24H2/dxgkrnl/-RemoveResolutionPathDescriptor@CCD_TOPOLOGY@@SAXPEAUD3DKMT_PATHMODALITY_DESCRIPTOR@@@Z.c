/*
 * XREFs of ?RemoveResolutionPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402D9AC4
 * Callers:
 *     ?ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1402D9A7C (-ClearPathDescriptor@CCD_TOPOLOGY@@SAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CCD_TOPOLOGY::RemoveResolutionPathDescriptor(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  *((_DWORD *)a1 + 60) = 1;
  *((_OWORD *)a1 + 2) = 0LL;
  *(_QWORD *)a1 &= 0xA00uLL;
  *((_QWORD *)a1 + 1) &= 0xA00uLL;
  *((_OWORD *)a1 + 3) = 0LL;
  *((_OWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 10) = 0LL;
  *((_OWORD *)a1 + 16) = 0LL;
  *((_BYTE *)a1 + 128) = 0;
  *((_OWORD *)a1 + 17) = 0LL;
  *((_QWORD *)a1 + 17) = 0LL;
  *(_OWORD *)((char *)a1 + 168) = 0LL;
  *((_QWORD *)a1 + 19) = 0LL;
  *((_OWORD *)a1 + 6) = 0LL;
  *((_QWORD *)a1 + 28) = 0LL;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_OWORD *)a1 + 7) = 0LL;
  *((_DWORD *)a1 + 48) = 0;
}
