/*
 * XREFs of ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAPEAU2@@Z @ 0x1403B83D0
 * Callers:
 *     ?AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z @ 0x14031A62C (-AddActiveNonDesktopPathsToTopology@CCD_TOPOLOGY@@AEAAJPEAV1@_N@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x140379754 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 * Callees:
 *     ?AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D3DKMT_DISPLAY_TARGET_USAGE@@PEAPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1403B8584 (-AddPathDescriptor@CCD_TOPOLOGY@@QEAAJAEBU_LUID@@II_N11W4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2W4_D.c)
 */

__int64 __fastcall CCD_TOPOLOGY::AddPathDescriptor(
        CCD_TOPOLOGY *this,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR **a3)
{
  __int64 result; // rax

  if ( _bittest64((const signed __int64 *)a2, 0x24u) && (*((_DWORD *)this + 21) & 1) == 0 )
    return 0LL;
  result = CCD_TOPOLOGY::AddPathDescriptor(this, (char *)a2 + 16, *((unsigned int *)a2 + 6));
  if ( (int)result >= 0 )
  {
    MEMORY[0] = *(_QWORD *)a2;
    MEMORY[0x20] = *((_OWORD *)a2 + 2);
    MEMORY[0x30] = *((_OWORD *)a2 + 3);
    MEMORY[0x40] = *((_OWORD *)a2 + 4);
    MEMORY[0x50] = *((_QWORD *)a2 + 10);
    MEMORY[0x58] = *((_DWORD *)a2 + 22);
    MEMORY[0x5C] = *((_DWORD *)a2 + 23);
    MEMORY[0x60] = *((_OWORD *)a2 + 6);
    MEMORY[0x70] = *((_OWORD *)a2 + 7);
    MEMORY[0x84] = *((_DWORD *)a2 + 33);
    MEMORY[0x88] = *((_DWORD *)a2 + 34);
    MEMORY[0x8C] = *((_DWORD *)a2 + 35);
    MEMORY[0x90] = *((_QWORD *)a2 + 18);
    MEMORY[0x98] = *((_QWORD *)a2 + 19);
    MEMORY[0xA8] = *(_OWORD *)((char *)a2 + 168);
    MEMORY[0xB8] = *((_DWORD *)a2 + 46);
    MEMORY[0xBC] = *((_DWORD *)a2 + 47);
    MEMORY[0xC0] = *((_DWORD *)a2 + 48);
    MEMORY[0xCC] = *((_DWORD *)a2 + 51);
    MEMORY[0xD0] = *((_DWORD *)a2 + 52);
    MEMORY[0xE0] = *((_QWORD *)a2 + 28);
    MEMORY[0xF0] = *((_DWORD *)a2 + 60);
    return (unsigned int)result;
  }
  return result;
}
