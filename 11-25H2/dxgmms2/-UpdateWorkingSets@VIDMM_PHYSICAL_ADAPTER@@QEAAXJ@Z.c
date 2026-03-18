/*
 * XREFs of ?UpdateWorkingSets@VIDMM_PHYSICAL_ADAPTER@@QEAAXJ@Z @ 0x1400B284C
 * Callers:
 *     ?OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z @ 0x1400B1DBC (-OpenAdapter@VIDMM_PROCESS@@QEAAJPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1400B348C (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER::UpdateWorkingSets(VIDMM_PHYSICAL_ADAPTER *this, unsigned int a2)
{
  unsigned __int16 i; // r10
  _QWORD *v3; // rdi
  __int64 v4; // r8

  for ( i = 0; (unsigned int)i < *((_DWORD *)this + 16); ++i )
  {
    v3 = *(_QWORD **)(*((_QWORD *)this + 206) + 8LL * i);
    if ( a2 )
    {
      v4 = v3[9] - v3[12];
      v3[20] = v4 * (unsigned __int64)(unsigned int)dword_140081400 / 0x64 / a2;
      v3[21] = v4 * (unsigned __int64)(unsigned int)dword_140081404 / 0x64 / a2;
    }
  }
}
