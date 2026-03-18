/*
 * XREFs of ?MarkAllDevicesAsError@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@W4_VIDSCH_ERROR_CODE@@@Z @ 0x140099578
 * Callers:
 *     ?ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z @ 0x14009B780 (-ResetAddressSpaceForFailure@CVirtualAddressAllocator@@QEAAXI@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x14001F860 (VidSchMarkDeviceAsError.c)
 */

__int64 __fastcall VIDMM_PROCESS::MarkAllDevicesAsError(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r14
  unsigned __int16 i; // bx
  unsigned __int16 v6; // bp
  __int64 v7; // r12
  _QWORD *v8; // r15
  _QWORD *j; // rdi
  __int64 v10; // rcx

  result = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(result + 8LL * *(unsigned int *)(*(_QWORD *)(a2 + 24) + 240LL));
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 16) )
    {
      for ( i = 0; (unsigned int)i < *(_DWORD *)(a2 + 6944); result = i )
      {
        v6 = 0;
        v7 = *(_QWORD *)(*(_QWORD *)(a2 + 40232) + 8LL * i);
        if ( *(_DWORD *)(v7 + 64) )
        {
          do
          {
            v8 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 304LL * i) + 184LL * v6 + 40);
            for ( j = (_QWORD *)*v8; j != v8; j = (_QWORD *)*j )
            {
              v10 = *(_QWORD *)(j[4] + 32LL);
              if ( v10 )
                VidSchMarkDeviceAsError(v10, 27LL);
            }
            ++v6;
          }
          while ( (unsigned int)v6 < *(_DWORD *)(v7 + 64) );
        }
        ++i;
      }
    }
  }
  return result;
}
