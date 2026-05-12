/*
 * XREFs of StorBuildMFNDManagementCommand @ 0x1400C3744
 * Callers:
 *     StorSetMFNDChildPFQoS @ 0x1401918C0 (StorSetMFNDChildPFQoS.c)
 *     StorSetMFNDChildPFSettings @ 0x14019204C (StorSetMFNDChildPFSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorBuildMFNDManagementCommand(__int64 a1, int a2, int a3, char a4, unsigned int a5)
{
  int v5; // r8d
  __int64 result; // rax

  *(_BYTE *)a1 = -47;
  if ( a2 == 1 )
    *(_BYTE *)(a1 + 56) = a4;
  *(_BYTE *)(a1 + 60) = 3;
  if ( !a2 )
  {
    v5 = *(_DWORD *)(a1 + 60) ^ (*(_DWORD *)(a1 + 60) ^ (a3 << 8)) & 0xFFFF00;
    *(_DWORD *)(a1 + 40) = a5 >> 2;
    *(_DWORD *)(a1 + 60) = v5;
  }
  result = *(unsigned int *)(a1 + 60);
  *(_DWORD *)(a1 + 60) = result ^ (result ^ (a2 << 24)) & 0xF000000;
  return result;
}
