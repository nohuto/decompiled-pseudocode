/*
 * XREFs of MiUpdateSharedUserDataNumberOfPages @ 0x1407EA7A0
 * Callers:
 *     MiPerformMemoryChange @ 0x14066F268 (MiPerformMemoryChange.c)
 *     MiInitSystem @ 0x140C4FDD0 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 MiUpdateSharedUserDataNumberOfPages()
{
  int v0; // ecx
  __int64 result; // rax

  *(_QWORD *)(MmWriteableSharedUserData + 784) = qword_140E3D590;
  v0 = -1;
  if ( qword_140E3D590 <= 0xFFFFFFFF )
    v0 = qword_140E3D590;
  result = MmWriteableSharedUserData;
  *(_DWORD *)(MmWriteableSharedUserData + 744) = v0;
  return result;
}
